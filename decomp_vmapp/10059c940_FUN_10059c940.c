
undefined4 FUN_10059c940(QString *param_1)

{
  char cVar1;
  undefined4 uVar2;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Plain",5);
  cVar1 = operator==(param_1,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059c9a1;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_10059c9a1:
  if (cVar1 != '\0') {
    return 1;
  }
  local_30.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Compressed",10);
  cVar1 = operator==(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059ca01;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10059ca01:
  if (cVar1 != '\0') {
    return 2;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Bootcamp",8);
  cVar1 = operator==(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059ca61;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10059ca61:
  if (cVar1 != '\0') {
    return 6;
  }
  local_40.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Bootcamp_UID",0xc);
  cVar1 = operator==(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059cac1;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10059cac1:
  if (cVar1 != '\0') {
    return 7;
  }
  local_48.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Bootcamp_FAKE",0xd);
  cVar1 = operator==(param_1,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059cb21;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10059cb21:
  if (cVar1 != '\0') {
    return 8;
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Physical",8);
  cVar1 = operator==(param_1,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_19 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059cb81;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10059cb81:
  if (cVar1 != '\0') {
    return 4;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Partition",9);
  cVar1 = operator==(param_1,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_19 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059cbe1;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10059cbe1:
  if (cVar1 != '\0') {
    return 5;
  }
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("VHD_Fixed",9);
  cVar1 = operator==(param_1,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_19 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059cc41;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10059cc41:
  if (cVar1 != '\0') {
    return 0x50;
  }
  local_68.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("VHD_Dynamic",0xb);
  cVar1 = operator==(param_1,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_19 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059cca1;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10059cca1:
  if (cVar1 != '\0') {
    return 0x51;
  }
  local_70.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("VMDK_MonolithicFlat",0x13);
  cVar1 = operator==(param_1,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_19 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059cd01;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10059cd01:
  if (cVar1 != '\0') {
    return 0x5a;
  }
  local_78.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("VMDK_MonolithicSparse",0x15);
  cVar1 = operator==(param_1,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_19 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059cd61;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10059cd61:
  if (cVar1 != '\0') {
    return 0x5b;
  }
  local_80.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("VMDK_Extent2GBFlat",0x12);
  cVar1 = operator==(param_1,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_19 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10059cdc1;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10059cdc1:
  if (cVar1 != '\0') {
    return 0x5c;
  }
  local_88.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("VMDK_Extent2GBSparse",0x14);
  cVar1 = operator==(param_1,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_88.field0_0x0 != 0) goto LAB_10059ce1d;
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10059ce1d:
  uVar2 = 0x5d;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

