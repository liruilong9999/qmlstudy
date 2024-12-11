import QtQuick 2.4
import QtQuick.Controls 2.4

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Main Window"

    // 一个按钮，当被点击时会触发 C++ 函数
    Button {
        text: "打开新窗口";
        anchors.centerIn: parent
        onClicked: {
            // 调用 C++ 中的函数
            windowController.openNewWindow()
        }
    }
}
