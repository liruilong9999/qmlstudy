import QtQuick 2.4
import QtQuick.Controls 2.4
import QmlCppModel 1.0

ApplicationWindow {
    visible: true
    width: 400
    height: 300
    title: "测试窗口"

    property QString lineStr: "默认参数"

    Rectangle{
        width: 30
        height: 20
        x:10
        y:12

        Text {
            id: test1
            text: lineStr
        }
    }
}
