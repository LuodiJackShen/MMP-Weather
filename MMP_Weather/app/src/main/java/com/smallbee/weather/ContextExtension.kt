package com.smallbee.weather

import android.content.ComponentCallbacks
import android.content.Context
import android.content.res.Configuration
import android.graphics.drawable.Drawable
import java.util.*


/**
 * by shenmingliang1
 * 2018.08.10 15:46.
 */
val Context.weatherIcoMap: HashMap<String, Int>
    get() {
        return hashMapOf(
                "0" to R.drawable.w_0,
                "1" to R.drawable.w_1,
                "2" to R.drawable.w_2,
                "3" to R.drawable.w_3,
                "4" to R.drawable.w_4,
                "5" to R.drawable.w_5,
                "6" to R.drawable.w_6,
                "7" to R.drawable.w_7,
                "8" to R.drawable.w_8,
                "9" to R.drawable.w_9,
                "10" to R.drawable.w_10,
                "11" to R.drawable.w_11,
                "12" to R.drawable.w_12,
                "13" to R.drawable.w_13,
                "14" to R.drawable.w_14,
                "15" to R.drawable.w_15,
                "16" to R.drawable.w_16,
                "17" to R.drawable.w_17,
                "18" to R.drawable.w_18,
                "19" to R.drawable.w_19,
                "20" to R.drawable.w_20,
                "21" to R.drawable.w_21,
                "22" to R.drawable.w_22,
                "23" to R.drawable.w_23,
                "24" to R.drawable.w_24,
                "25" to R.drawable.w_25,
                "26" to R.drawable.w_26,
                "27" to R.drawable.w_27,
                "28" to R.drawable.w_28,
                "29" to R.drawable.w_29,
                "30" to R.drawable.w_30,
                "31" to R.drawable.w_31,
                "32" to R.drawable.w_32,
                "33" to R.drawable.w_33,
                "34" to R.drawable.w_34,
                "35" to R.drawable.w_35,
                "36" to R.drawable.w_36,
                "37" to R.drawable.w_37,
                "38" to R.drawable.w_38,
                "99" to R.drawable.w_99
        )
    }


fun Context.getRightIco(code: String): Drawable? {
    return weatherIcoMap[code]?.let { resources.getDrawable(it) }
}

private var sNonCompatDensity = 0f
private var sNonCompatScaledDensity = 0f

fun Context.screenFit() {
    val appDisplayMetrics = applicationContext.resources.displayMetrics
    val activityDisplayMetrics = resources.displayMetrics

    if (sNonCompatDensity == 0f) {
        sNonCompatDensity = appDisplayMetrics.density
        sNonCompatScaledDensity = appDisplayMetrics.scaledDensity
        applicationContext.registerComponentCallbacks(object : ComponentCallbacks {
            override fun onConfigurationChanged(newConfig: Configuration?) {
                if (newConfig != null && newConfig.fontScale > 0) {
                    sNonCompatScaledDensity = applicationContext.resources
                            .displayMetrics.scaledDensity
                }
            }

            override fun onLowMemory() {
                //nothing here.
            }
        })
    }

    val targetDensity = (appDisplayMetrics.widthPixels / 360).toFloat()//960为设计图的宽度
    val targetDensityDpi = (targetDensity * 160).toInt()
    val targetScaledDensity = targetDensity * (sNonCompatScaledDensity / sNonCompatDensity)

    appDisplayMetrics.density = targetDensity
    appDisplayMetrics.densityDpi = targetDensityDpi
    appDisplayMetrics.scaledDensity = targetScaledDensity

    activityDisplayMetrics.density = targetDensity
    activityDisplayMetrics.densityDpi = targetDensityDpi
    activityDisplayMetrics.scaledDensity = targetScaledDensity
}
