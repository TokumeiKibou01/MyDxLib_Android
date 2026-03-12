//
// Created by user on 2026/03/12.
//

#ifndef MYDXLIB_ANDROID_LOCATION2D_H
#define MYDXLIB_ANDROID_LOCATION2D_H

class Location2D {
private:
public:
    float x_;
    float y_;

    Location2D();
    Location2D(float x, float y);

    /// <summary>
    /// 座標同士の距離を測る関数。
    /// </summary>
    /// <param name="otherLoc">測りたいLocation2Dを入れる。</param>
    /// <returns></returns>
    float Distance(const Location2D& otherLoc) const;

    /// <summary>
    /// 座標同士を加算する関数。
    /// </summary>
    /// <param name="otherLoc">加算したいLocation2Dを入れる。</param>
    /// <returns></returns>
    Location2D operator+(const Location2D& otherLoc) const;

    /// <summary>
    /// 座標同士を減算する関数。
    /// </summary>
    /// <param name="otherLoc">減算したいLocation2Dを入れる。</param>
    /// <returns></returns>
    Location2D operator-(const Location2D& otherLoc) const;

    /// <summary>
    /// 座標同士をスカラー倍する関数。
    /// </summary>
    /// <param name="scalar">スカラー倍したいLocation2Dを入れる。</param>
    /// <returns></returns>
    Location2D operator*(const float& scalar) const;

};


#endif //MYDXLIB_ANDROID_LOCATION2D_H
