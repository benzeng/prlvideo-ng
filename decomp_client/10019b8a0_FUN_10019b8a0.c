
undefined8 FUN_10019b8a0(long param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  Data_conflict local_58;
  undefined4 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  QString::toUtf8();
  pQVar2 = local_40;
  lVar1 = *(long *)(local_40 + 0x10);
  QString::toUtf8();
  uVar3 = _PrlVmGuest_SetUserPasswd(uVar3,pQVar2 + lVar1,local_48 + *(long *)(local_48 + 0x10),0);
  local_50 = 0x80000000;
  local_58.field7 = 0;
  uVar3 = FUN_10019afb0(param_1,uVar3,0x416,&local_58);
  QVariant::~QVariant((QVariant *)&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10019b94f;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10019b94f:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar3;
}

