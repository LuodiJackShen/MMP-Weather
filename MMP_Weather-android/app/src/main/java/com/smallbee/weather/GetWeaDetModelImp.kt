package com.smallbee.weather

import com.google.gson.Gson
import com.mmp.AbsGetWeaDetModel
import com.mmp.Results
import org.jetbrains.anko.doAsync
import org.jetbrains.anko.uiThread
import java.net.URL

/**
 * by shenmingliang1
 * 2018.08.10 14:31.
 */
class GetWeaDetModelImp(private val key: String, location: String) : AbsGetWeaDetModel(location) {
    override fun getWeaDet(listener: (String, Any?) -> Unit) {
        doAsync {
            val result = URL("https://api.seniverse.com/v3/weather/now.json?" +
                    "key=$key&location=$location&language=zh-Hans&unit=c")
                    .readText(charset = Charsets.UTF_8)
            val entity = Gson().fromJson(result, Results::class.java)
            uiThread { listener(result, entity) }
        }
    }
}