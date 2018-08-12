package com.mmp

/**
 * by shenmingliang1
 * 2018.08.10 14:12.
 */
interface IGetWeaDetContract {
    interface IGetWeaDetView : IBaseView {
        fun onGetStart()
        fun onGetComplete(json: String, entity: Any?)
    }

    interface IGetWeaDetPresenter : IBasePresenter {
        fun getWeatherDetail()
    }
}