
void FUN_1004a0450(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  QVariant *pQVar1;
  byte *pbVar2;
  byte *pbVar3;
  QVariant local_88 [16];
  QArrayData *local_78;
  QVariant local_70 [16];
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QVariant local_48 [16];
  QArrayData *local_38;
  undefined1 local_29;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("path",4);
  pQVar1 = (QVariant *)FUN_1004a0bc0(param_3);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
LAB_1004a04a5:
    _strlen((char *)pbVar2);
    pbVar3 = pbVar2;
  }
  else {
    pbVar2 = *(byte **)(param_2 + 0x10);
    pbVar3 = (byte *)0x0;
    if (pbVar2 != (byte *)0x0) goto LAB_1004a04a5;
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
      if ((bool)local_29) goto LAB_1004a0522;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1004a0522:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004a0552;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004a0552:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004a0582;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004a0582:
  local_60 = (QArrayData *)QString::fromAscii_helper("kind",4);
  pQVar1 = (QVariant *)FUN_1004a0bc0(param_3,&local_60);
  QVariant::QVariant(local_70,*(uint *)(param_2 + 0x18));
  QVariant::operator=(pQVar1,local_70);
  QVariant::~QVariant(local_70);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004a05f8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004a05f8:
  local_78 = (QArrayData *)QString::fromAscii_helper("level",5);
  pQVar1 = (QVariant *)FUN_1004a0bc0(param_3,&local_78);
  QVariant::QVariant(local_88,*(uint *)(param_2 + 0x1c));
  QVariant::operator=(pQVar1,local_88);
  QVariant::~QVariant(local_88);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

