
void FUN_10072a5a0(long *param_1)

{
  QString *pQVar1;
  char *pcVar2;
  QPixmap *pQVar3;
  QArrayData *pQVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  QLayoutItem *pQVar10;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QPixmap local_b0 [32];
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10072ae90(param_1[0xc],param_1);
  puVar5 = PTR_s_QWidget___color__rgba__255__255__102271080;
  FUN_10019bb00(&local_48);
  if (puVar5 != (undefined *)0x0) {
    _strlen(puVar5);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)puVar5);
  QString::append(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072a633;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10072a633:
  QString::fromUtf8_helper((char *)&local_38,0x1e13c9c);
  QString::append(&local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072a685;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10072a685:
  QWidget::setStyleSheet(*(QString **)(param_1[0xc] + 8));
  QWidget::setWindowFlags(param_1,0x2000803);
  QWidget::setAttribute(param_1,0x78,1);
  QWidget::setAttribute(param_1,0x37,1);
  QDialog::setModal(SUB81(param_1,0));
  QVariant::QVariant(&local_58,true);
  QObject::setProperty((char *)param_1,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_58);
  QWidget::setWindowOpacity(DAT_100e27640);
  CProgressIndicator::setType(*(undefined8 *)(param_1[0xc] + 0x18),0);
  CProgressIndicator::setIndicatorSize((int)*(undefined8 *)(param_1[0xc] + 0x18));
  CProgressIndicator::setAnimationCentered(SUB81(*(undefined8 *)(param_1[0xc] + 0x18),0));
  CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(param_1[0xc] + 0x18),0));
  pQVar1 = *(QString **)(param_1[0xc] + 0x38);
  local_60 = (QArrayData *)
             QString::fromAscii_helper
                       ("QWidget { color: rgba( 255, 255, 255, 80% ); font-family: \"Helvetica Neue\";\tfont-size: 21pt;}"
                        ,0x5d);
  QWidget::setStyleSheet(pQVar1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072a7af;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10072a7af:
  pcVar2 = *(char **)(param_1[0xc] + 0x38);
  QVariant::QVariant(&local_70,true);
  QObject::setProperty(pcVar2,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_70);
  pQVar1 = *(QString **)(param_1[0xc] + 0x48);
  local_78 = (QArrayData *)
             QString::fromAscii_helper
                       ("QWidget { color: rgba( 255, 255, 255, 80% ); font-family: \"Helvetica Neue\";\tfont-size: 14pt;}"
                        ,0x5d);
  QWidget::setStyleSheet(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072a83c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10072a83c:
  pcVar2 = *(char **)(param_1[0xc] + 0x48);
  QVariant::QVariant(&local_88,true);
  QObject::setProperty(pcVar2,(QVariant *)"macNoSubpixelAA");
  QVariant::~QVariant(&local_88);
  uVar8 = FUN_100152280();
  (**(code **)(*param_1 + 0x1c8))(&local_90,param_1);
  lVar9 = FUN_1001548f0(uVar8,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072a8d6;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10072a8d6:
  pQVar3 = *(QPixmap **)(param_1[0xc] + 0x30);
  if (lVar9 == 0) {
    (**(code **)(*(long *)pQVar3 + 0x68))(pQVar3,0);
    pQVar1 = *(QString **)(param_1[0xc] + 0x38);
    pQVar4 = *(QArrayData **)(param_1[0xe] + 0x38);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    CElidedLabel::setText(pQVar1);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10072aa5b;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_10072aa5b:
    (**(code **)(**(long **)(param_1[0xc] + 0x58) + 0x68))(*(long **)(param_1[0xc] + 0x58),0);
    pQVar10 = (QLayoutItem *)QWidget::layout();
    QLayout::removeItem(pQVar10);
    (**(code **)(*param_1 + 0x70))(param_1);
    QWidget::setFixedHeight((int)param_1);
    goto LAB_10072aab7;
  }
  uVar6 = FUN_10018f860(lVar9);
  uVar7 = FUN_10018f890(lVar9);
  ResourceUtils::getOsIconPath(&local_b8,uVar6,uVar7,2);
  QPixmap::QPixmap(local_b0,&local_b8,0,0);
  QLabel::setPixmap(pQVar3);
  QPixmap::~QPixmap(local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072a977;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10072a977:
  pQVar1 = *(QString **)(param_1[0xc] + 0x38);
  FUN_10018d830(&local_c0,lVar9);
  CElidedLabel::setText(pQVar1);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072aab7;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10072aab7:
  FUN_1000286c0(param_1);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

