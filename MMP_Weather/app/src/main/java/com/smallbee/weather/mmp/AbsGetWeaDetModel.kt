package com.smallbee.weather.mmp

/**
 * by shenmingliang1
 * 2018.08.10 14:21.
 */
abstract class AbsGetWeaDetModel(val location: String) {
    abstract fun getWeaDet(listener: (String, Any?) -> Unit)
}