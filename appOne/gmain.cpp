#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let area = 4;
    let length = 0;
    while (notQuit) {
        //�����`�̖ʐς�ύX����
        if (isTrigger(KEY_D)) {
            ++area;
        }
        if (isTrigger(KEY_A) && area > 0) {
            --area;
        }
        //�����`�̖ʐς����ӂ̒��������߂�
        length = sqrt(area);

        clear(160);
        //XY���B�����͂��̕\���ő�l
        mathAxis(4.1);
        //�����`
        stroke(160, 200, 255);
        strokeWeight(4);
        fill(255, 200, 200);
        mathRect(0, 0, length, -length);
        //����
        fill(255, 255, 200);
        textSize(50);
        text("�ʐ� = " + area, 0, 60);
        text("��" + area + " = " + length, 0, 120);
    }
}