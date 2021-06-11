#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let area = 4;
    let length = 0;
    while (notQuit) {
        //正方形の面積を変更する
        if (isTrigger(KEY_D)) {
            ++area;
        }
        if (isTrigger(KEY_A) && area > 0) {
            --area;
        }
        //正方形の面積から一辺の長さを求める
        length = sqrt(area);

        clear(160);
        //XY軸。引数はｘの表示最大値
        mathAxis(4.1);
        //正方形
        stroke(160, 200, 255);
        strokeWeight(4);
        fill(255, 200, 200);
        mathRect(0, 0, length, -length);
        //文字
        fill(255, 255, 200);
        textSize(50);
        text("面積 = " + area, 0, 60);
        text("√" + area + " = " + length, 0, 120);
    }
}