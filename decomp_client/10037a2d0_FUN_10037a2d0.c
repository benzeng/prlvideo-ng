
QPixmap * FUN_10037a2d0(QPixmap *param_1,QWidget *param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  long lVar3;
  QPoint *pQVar4;
  undefined8 uVar5;
  QWidget *pQVar6;
  QRect local_a8 [32];
  undefined1 local_88 [16];
  CGImage local_78 [32];
  undefined8 local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  QPixmap local_40 [32];
  
  QPixmap::QPixmap(local_40);
  if ((*(long *)(*(long *)(param_2 + 0x38) + 0x38) != 0) &&
     ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x38) + 0x38) + 0x28) + 9) & 0x80) != 0)) {
    cVar2 = FUN_10037da90();
    if (cVar2 == '\0') {
      QPixmap::QPixmap(param_1);
      goto LAB_10037a464;
    }
  }
  lVar3 = QWidget::window();
  if (lVar3 != 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 0x18);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) &&
       (*(long *)(*(long *)(param_2 + 0x38) + 0x20) != 0)) {
      pQVar4 = (QPoint *)QWidget::window();
      local_58 = 0;
      uVar5 = QWidget::mapTo(param_2,pQVar4);
      lVar3 = *(long *)(param_2 + 0x28);
      local_50 = (int)uVar5;
      local_48 = (*(int *)(lVar3 + 0x1c) + local_50) - *(int *)(lVar3 + 0x14);
      local_4c = (int)((ulong)uVar5 >> 0x20);
      local_44 = (*(int *)(lVar3 + 0x20) + local_4c) - *(int *)(lVar3 + 0x18);
      pQVar6 = (QWidget *)QWidget::window();
      lVar3 = MacUtils::grabWindow(pQVar6,(QRect *)&local_50,8,1);
      if (lVar3 != 0) {
        QtMac::fromCGImageRef(local_78);
        QPixmap::operator=(local_40,(QPixmap *)local_78);
        QPixmap::~QPixmap((QPixmap *)local_78);
        _CGImageRelease(lVar3);
      }
    }
  }
  cVar2 = QPixmap::isNull();
  auVar1._8_8_ = local_88._8_8_;
  auVar1._0_8_ = local_88._0_8_;
  if ((cVar2 == '\0') && (local_88 = auVar1, *(long *)(*(long *)(param_2 + 0x38) + 0x38) != 0)) {
    cVar2 = FUN_10037da90();
    if (cVar2 != '\0') {
      local_88 = FUN_10037daa0(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x38));
      if ((local_88._0_4_ <= local_88._8_4_) && (local_88._4_4_ <= local_88._12_4_)) {
        QPixmap::copy(local_a8);
        QPixmap::operator=(local_40,(QPixmap *)local_a8);
        QPixmap::~QPixmap((QPixmap *)local_a8);
      }
    }
  }
  QPixmap::QPixmap(param_1,local_40);
LAB_10037a464:
  QPixmap::~QPixmap(local_40);
  return param_1;
}

