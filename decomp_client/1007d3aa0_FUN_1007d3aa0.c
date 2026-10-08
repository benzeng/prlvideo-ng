
void FUN_1007d3aa0(void)

{
  int iVar1;
  QArrayData *pQVar2;
  int in_ECX;
  int iVar3;
  QVariant local_c0;
  QVariant local_b0;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  Data_conflict local_60;
  QString local_58;
  QString local_50;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_100a04400(&local_50);
  FUN_1007caa20(&local_58);
  QSettings::QSettings((QSettings *)&local_48,&local_50,&local_58,(QObject *)0x0);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3b10;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007d3b10:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3b40;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007d3b40:
  local_60.field15 = (QObject *)PTR_shared_null_1021e1288;
  FUN_1007d2760(&local_68);
  QString::append((QString *)&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3b91;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007d3b91:
  pQVar2 = (QArrayData *)QString::fromAscii_helper("/",1);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar2;
  QString::fromUtf8_helper((char *)&local_38,0x1e18ce2);
  QString::append(&local_70);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3c0c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007d3c0c:
  QString::append((QString *)&local_60);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3c49;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1007d3c49:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3c74;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1007d3c74:
  QString::fromUtf8_helper((char *)&local_78,0x1e2468c);
  QString::append(&local_78);
  QString::append((QString *)&local_60);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3cd2;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1007d3cd2:
  QString::fromUtf8_helper((char *)&local_80,0x1eeaa60);
  QString::append(&local_80);
  QString::append((QString *)&local_60);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3d30;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1007d3d30:
  local_90 = (QArrayData *)QString::fromAscii_helper(" with result %1",0xf);
  QString::arg(&local_88,&local_90,(long)in_ECX,0,10,0x20);
  QString::append((QString *)&local_60);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3da6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007d3da6:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3ddc;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1007d3ddc:
  QVariant::QVariant(&local_b0,-1);
  QSettings::value((QString *)&local_a0,&local_48);
  iVar1 = QVariant::toInt((bool *)&local_a0);
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant(&local_b0);
  iVar3 = 1;
  if (iVar1 != -1) {
    iVar3 = iVar1 + 1;
  }
  QVariant::QVariant(&local_c0,iVar3);
  QSettings::setValue((QString *)&local_48,(QVariant *)&local_60);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_60.field15 != -1) {
    if (*(int *)local_60.field15 != 0) {
      LOCK();
      *(int *)local_60.field15 = *(int *)local_60.field15 + -1;
      local_29 = *(int *)local_60.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d3e9a;
    }
    QArrayData::deallocate((QArrayData *)local_60.field15,2,8);
  }
LAB_1007d3e9a:
  QSettings::~QSettings((QSettings *)&local_48);
  return;
}

