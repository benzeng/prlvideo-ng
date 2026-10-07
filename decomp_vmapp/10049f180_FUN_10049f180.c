
void FUN_10049f180(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  QVariant *pQVar1;
  byte *pbVar2;
  byte *pbVar3;
  QVariant local_100 [16];
  QArrayData *local_f0;
  QVariant local_e8 [16];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QVariant local_c0 [16];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QVariant local_98 [16];
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QVariant local_70 [16];
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48 [16];
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("fullPath",8);
  pQVar1 = (QVariant *)FUN_1004a0bc0(param_3);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
LAB_10049f1d8:
    _strlen((char *)pbVar2);
    pbVar3 = pbVar2;
  }
  else {
    pbVar2 = *(byte **)(param_2 + 0x10);
    pbVar3 = (byte *)0x0;
    if (pbVar2 != (byte *)0x0) goto LAB_10049f1d8;
  }
  QString::fromUtf8_helper((char *)&local_58,(int)pbVar3);
  QString::normalized(&local_50,&local_58,1,0);
  QVariant::QVariant(local_48,&local_50);
  QVariant::operator=(pQVar1,local_48);
  QVariant::~QVariant(local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f255;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10049f255:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f285;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10049f285:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f2b5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10049f2b5:
  local_60 = (QArrayData *)QString::fromAscii_helper("exec",4);
  pQVar1 = (QVariant *)FUN_1004a0bc0(param_3);
  if ((param_2[0x18] & 1) == 0) {
    pbVar2 = param_2 + 0x19;
LAB_10049f2f9:
    _strlen((char *)pbVar2);
    pbVar3 = pbVar2;
  }
  else {
    pbVar2 = *(byte **)(param_2 + 0x28);
    pbVar3 = (byte *)0x0;
    if (pbVar2 != (byte *)0x0) goto LAB_10049f2f9;
  }
  QString::fromUtf8_helper((char *)&local_80,(int)pbVar3);
  QString::normalized(&local_78,&local_80,1,0);
  QVariant::QVariant(local_70,&local_78);
  QVariant::operator=(pQVar1,local_70);
  QVariant::~QVariant(local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f376;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10049f376:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f3a6;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10049f3a6:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f3d6;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10049f3d6:
  local_88 = (QArrayData *)QString::fromAscii_helper("name",4);
  pQVar1 = (QVariant *)FUN_1004a0bc0(param_3);
  if ((param_2[0x30] & 1) == 0) {
    pbVar2 = param_2 + 0x31;
LAB_10049f41a:
    _strlen((char *)pbVar2);
    pbVar3 = pbVar2;
  }
  else {
    pbVar2 = *(byte **)(param_2 + 0x40);
    pbVar3 = (byte *)0x0;
    if (pbVar2 != (byte *)0x0) goto LAB_10049f41a;
  }
  QString::fromUtf8_helper((char *)&local_a8,(int)pbVar3);
  QString::normalized(&local_a0,&local_a8,1,0);
  QVariant::QVariant(local_98,&local_a0);
  QVariant::operator=(pQVar1,local_98);
  QVariant::~QVariant(local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_29 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f4b2;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_10049f4b2:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f4e8;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10049f4e8:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f518;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10049f518:
  local_b0 = (QArrayData *)QString::fromAscii_helper("bundleId",8);
  pQVar1 = (QVariant *)FUN_1004a0bc0(param_3);
  if ((param_2[0x48] & 1) == 0) {
    pbVar2 = param_2 + 0x49;
LAB_10049f562:
    _strlen((char *)pbVar2);
    pbVar3 = pbVar2;
  }
  else {
    pbVar2 = *(byte **)(param_2 + 0x58);
    pbVar3 = (byte *)0x0;
    if (pbVar2 != (byte *)0x0) goto LAB_10049f562;
  }
  QString::fromUtf8_helper((char *)&local_d0,(int)pbVar3);
  QString::normalized(&local_c8,&local_d0,1,0);
  QVariant::QVariant(local_c0,&local_c8);
  QVariant::operator=(pQVar1,local_c0);
  QVariant::~QVariant(local_c0);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_29 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f5fa;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_10049f5fa:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f630;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10049f630:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_29 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f666;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10049f666:
  local_d8 = (QArrayData *)QString::fromAscii_helper("kind",4);
  pQVar1 = (QVariant *)FUN_1004a0bc0(param_3,&local_d8);
  QVariant::QVariant(local_e8,*(uint *)(param_2 + 0x60));
  QVariant::operator=(pQVar1,local_e8);
  QVariant::~QVariant(local_e8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049f6f1;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10049f6f1:
  local_f0 = (QArrayData *)QString::fromAscii_helper("modifyTime",10);
  pQVar1 = (QVariant *)FUN_1004a0bc0(param_3,&local_f0);
  QVariant::QVariant(local_100,*(ulonglong *)(param_2 + 0x68));
  QVariant::operator=(pQVar1,local_100);
  QVariant::~QVariant(local_100);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      UNLOCK();
      if (*(int *)local_f0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
  return;
}

