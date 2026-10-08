
void FUN_1006ee960(long param_1)

{
  QSize *pQVar1;
  QString *pQVar2;
  QLabel *pQVar3;
  CProgressIndicator *pCVar4;
  CImageButtonComplex *pCVar5;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  undefined8 local_58;
  QArrayData *local_50;
  QPixmap local_48 [39];
  undefined1 local_21;
  
  FUN_100381350(*(undefined8 *)(param_1 + 0x10),6,0xffffffff);
  pQVar3 = operator_new(0x30);
  QLabel::QLabel(pQVar3,*(undefined8 *)(param_1 + 0x10),0);
  *(QLabel **)(param_1 + 0x68) = pQVar3;
  local_50 = (QArrayData *)QString::fromAscii_helper(":/pixmaps/Lock_lion.png",0x17);
  QPixmap::QPixmap(local_48,&local_50,0,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006ee9f8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006ee9f8:
  pQVar1 = *(QSize **)(param_1 + 0x68);
  local_58 = QPixmap::size();
  QWidget::setFixedSize(pQVar1);
  QLabel::setPixmap(*(QPixmap **)(param_1 + 0x68));
  pQVar2 = *(QString **)(param_1 + 0x68);
  QMetaObject::tr((char *)&local_60,"",0x1e12bec);
  QWidget::setToolTip(pQVar2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006eea81;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006eea81:
  FUN_100381310(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x68),0xffffffff);
  pCVar4 = operator_new(0x68);
  CProgressIndicator::CProgressIndicator(pCVar4,*(undefined8 *)(param_1 + 0x10),1);
  *(CProgressIndicator **)(param_1 + 0x50) = pCVar4;
  QWidget::setFixedHeight((int)pCVar4);
  CProgressIndicator::setTimeInterval((int)*(undefined8 *)(param_1 + 0x50));
  FUN_100381310(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x50),0xffffffff);
  FUN_100381330(*(undefined8 *)(param_1 + 0x10),1,0xffffffff);
  pCVar5 = operator_new(0x78);
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Upgrade_Later_102270990);
  CImageButtonComplex::CImageButtonComplex(pCVar5,&local_68,*(QWidget **)(param_1 + 0x10));
  *(CImageButtonComplex **)(param_1 + 0x58) = pCVar5;
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006eeb68;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1006eeb68:
  FUN_100381310(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x58),0xffffffff);
  pCVar5 = operator_new(0x78);
  FUN_1001c7700(&local_78,PTR_s_Upgrade_to___PRODUCT_NAME__1_102270998);
  CProductUpdateInfo::getMajorVersion();
  QString::arg(&local_70,&local_78,&local_80,0,0x20);
  CImageButtonComplex::CImageButtonComplex(pCVar5,&local_70,*(QWidget **)(param_1 + 0x10));
  *(CImageButtonComplex **)(param_1 + 0x60) = pCVar5;
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006eec0d;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1006eec0d:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006eec3f;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006eec3f:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006eec6f;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006eec6f:
  FUN_100381310(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x60),0xffffffff);
  QPixmap::~QPixmap(local_48);
  return;
}

