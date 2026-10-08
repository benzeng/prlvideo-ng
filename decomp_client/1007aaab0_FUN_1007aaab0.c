
void FUN_1007aaab0(QString *param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  char cVar2;
  int iVar3;
  QPoint *pQVar4;
  undefined8 uVar5;
  
  lVar1 = DAT_1023109f8;
  if ((((DAT_1023109f8 == 0) || (*(int *)&param_1[5].field0_0x0 != *(int *)(DAT_1023109f8 + 0x70)))
      || (cVar2 = operator==(param_1 + 2,(QString *)(DAT_1023109f8 + 0x58)), cVar2 == '\0')) ||
     (((cVar2 = operator==(param_1 + 1,(QString *)(lVar1 + 0x50)), cVar2 == '\0' ||
       (cVar2 = operator==(param_1,(QString *)(lVar1 + 0x48)), cVar2 == '\0')) ||
      (cVar2 = operator==(param_1 + 4,(QString *)(lVar1 + 0x68)), cVar2 == '\0')))) {
    QApplication::desktop();
    cVar2 = QDesktopWidget::isVirtualDesktop();
    pQVar4 = (QPoint *)QApplication::desktop();
    if (cVar2 == '\0') {
      QDesktopWidget::screenNumber((QWidget *)pQVar4);
    }
    else {
      QDesktopWidget::screenNumber(pQVar4);
    }
    iVar3 = QApplication::desktop();
    QDesktopWidget::availableGeometry(iVar3);
    pQVar4 = operator_new(0x98);
    iVar3 = QApplication::desktop();
    uVar5 = QDesktopWidget::screen(iVar3);
    FUN_1007a9800(pQVar4,param_1,uVar5,param_4,param_6);
    QWidget::setFixedSize((int)pQVar4,*param_3);
    QWidget::move(pQVar4);
    QWidget::show();
  }
  return;
}

