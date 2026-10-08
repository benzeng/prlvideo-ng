
void FUN_1009b9900(long param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  QString *pQVar2;
  QArrayData *pQVar3;
  
  iVar1 = *(int *)(*param_2 + 4);
  pQVar2 = (QString *)
           QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x4000);
  if (iVar1 == 0) {
    QWidget::hide();
  }
  else {
    QAbstractButton::setText(pQVar2);
    pQVar2 = (QString *)
             QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x4000);
    pQVar3 = (QArrayData *)
             QString::fromAscii_helper
                       ("QPushButton { border-image: url(none); }QPushButton:pressed { border-image: url(none); }QPushButton:!enabled { border-image: url(none); }"
                        ,0x89);
    QWidget::setStyleSheet(pQVar2);
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        if (*(int *)pQVar3 != 0) goto LAB_1009b99b3;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1009b99b3:
    QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x4000);
    QWidget::show();
  }
  iVar1 = *(int *)(*param_3 + 4);
  pQVar2 = (QString *)
           QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x10000);
  if (iVar1 == 0) {
    QWidget::hide();
  }
  else {
    QAbstractButton::setText(pQVar2);
    pQVar2 = (QString *)
             QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x10000);
    pQVar3 = (QArrayData *)
             QString::fromAscii_helper
                       ("QPushButton { border-image: url(none); }QPushButton:pressed { border-image: url(none); }QPushButton:!enabled { border-image: url(none); }"
                        ,0x89);
    QWidget::setStyleSheet(pQVar2);
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        UNLOCK();
        if (*(int *)pQVar3 != 0) goto LAB_1009b9a69;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1009b9a69:
    QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x10000);
    QWidget::show();
  }
  iVar1 = *(int *)(*param_4 + 4);
  pQVar2 = (QString *)
           QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x400000);
  if (iVar1 == 0) {
    QWidget::hide();
    return;
  }
  QAbstractButton::setText(pQVar2);
  pQVar2 = (QString *)
           QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x400000);
  pQVar3 = (QArrayData *)
           QString::fromAscii_helper
                     ("QPushButton { border-image: url(none); }QPushButton:pressed { border-image: url(none); }QPushButton:!enabled { border-image: url(none); }"
                      ,0x89);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1009b9b1f;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1009b9b1f:
  QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40),0x400000);
  QWidget::show();
  return;
}

