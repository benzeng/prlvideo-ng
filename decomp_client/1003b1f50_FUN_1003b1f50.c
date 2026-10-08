
bool FUN_1003b1f50(undefined8 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  QString local_68;
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar4 = FUN_1003b0a30();
  if (lVar4 == 0) {
    return false;
  }
  lVar4 = FUN_1003b0a60(param_1);
  if (lVar4 == 0) {
    return false;
  }
  uVar5 = FUN_1003b0a30(param_1);
  uVar2 = FUN_10018a9d0(uVar5);
  if ((uVar2 & 0xfffffffe) != 0x30000004) {
    uVar5 = FUN_1003b0a30(param_1);
    iVar3 = FUN_10018a9d0(uVar5);
    if (iVar3 == 0x30000001) {
      uVar1 = FUN_1003b1e20(param_2);
      return (bool)uVar1;
    }
    return false;
  }
  if (param_2 != 0xf) {
    return false;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("Hardware.%1[%2]",0xf);
  FUN_1003b0eb0(&local_50,0xb);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  QString::arg(&local_38,&local_40,(long)param_3,0,10,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003b2035;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003b2035:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003b2065;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003b2065:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003b2095;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003b2095:
  uVar5 = FUN_1003b0af0(param_1);
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1df1af1);
  QString::append(&local_68);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003b210b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003b210b:
  FUN_1003e1800(&local_60,uVar5,&local_68,0);
  iVar3 = QVariant::toLongLong((bool *)&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003b2164;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003b2164:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return iVar3 == 1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return iVar3 == 1;
}

