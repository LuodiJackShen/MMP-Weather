package com.mmp
/**
 * by shenmingliang1
 * 2018.08.10 14:55.
 */
data class Results(val results: ArrayList<Result>)

data class Result(val now: Now, val location: Location, val last_update: String)

data class Now(val text: String, val code: String, val temperature: String)

data class Location(val id: String,
                    val name: String,
                    val country: String,
                    val path: String,
                    val timezone: String,
                    val timezone_offset: String)