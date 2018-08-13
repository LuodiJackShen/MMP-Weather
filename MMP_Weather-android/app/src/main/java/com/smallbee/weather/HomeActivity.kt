package com.smallbee.weather

import android.os.Bundle
import android.support.v7.app.AppCompatActivity
import android.view.View
import com.mmp.GetWeaDetPresenterImp
import com.mmp.IGetWeaDetContract
import com.mmp.Results
import kotlinx.android.synthetic.main.activity_home.*

class HomeActivity : AppCompatActivity(), IGetWeaDetContract.IGetWeaDetView {
    private val key = "utbnjklehq95z5b6"
    private val location = "ip"
    private val mDetMode by lazy { GetWeaDetModelImp(key, location) }
    private val mDetPresenter by lazy { GetWeaDetPresenterImp(this, mDetMode) }

    override fun onCreate(savedInstanceState: Bundle?) {
        screenFit()
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_home)
        supportActionBar?.hide()
        mDetPresenter.getWeatherDetail()
    }

    override fun onGetStart() {
        //nothing here.
    }

    override fun onGetComplete(json: String, entity: Any?) {
        mAhWaitBar.visibility = View.GONE
        when (entity) {
            is Results -> {
                with(entity.results[0]) {
                    mAhCityTv.text = location.name
                    mAhWeatherDes.text = getString(R.string.des_temp, now.text, now.temperature)
                    getRightIco(now.code)?.let {
                        mAhWeatherIco.background = getRightIco(now.code)
                    }
                }
            }
            else -> throw KotlinNullPointerException("you need handle json")
        }
    }
}
