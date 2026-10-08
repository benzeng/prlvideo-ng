
void FUN_100999e10(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    return;
  }
  local_28 = (QArrayData *)QString::fromAscii_helper("btnWithinNet",0xc);
  uVar2 = FUN_1009983c0(param_1);
  uVar1 = FUN_100991a90(uVar2);
  FUN_100999d20(param_1,param_2,&local_28,"1onButtonWithinNetToggled( bool )",uVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100999e99;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100999e99:
  local_30 = (QArrayData *)QString::fromAscii_helper("btnWithinExtStor",0x10);
  uVar2 = FUN_1009983c0(param_1);
  uVar1 = FUN_100991af0(uVar2);
  FUN_100999d20(param_1,param_2,&local_30,"1onButtonWithinExtStorToggled( bool )",uVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

