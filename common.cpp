#include "common.h"

// 构造函数
Common::Common()
{

}

// 加密函数
QString Common::encrypt(QString plainText, int key)
{
    return QString::number(plainText.toInt() ^ key);
}

// 解密函数
QString Common::decrypt(QString cipherText, int key)
{
    return QString::number(cipherText.toInt() ^ key);
}
