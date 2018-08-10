package com.smallbee.weather.mmp

/**
 * by shenmingliang1
 * 2018.08.10 14:18.
 */
class GetWeaDetPresenterImp(override val view: IGetWeaDetContract.IGetWeaDetView,
                            private val model: AbsGetWeaDetModel)
    : IGetWeaDetContract.IGetWeaDetPresenter {
    override fun getWeatherDetail() {
        view.onGetStart()
        model.getWeaDet { json, entity -> view.onGetComplete(json, entity) }
    }
}
