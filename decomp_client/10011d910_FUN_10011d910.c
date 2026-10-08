
void FUN_10011d910(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  undefined1 local_32;
  
  uVar2 = FUN_100152280();
  FUN_100188480(&local_40,param_1);
  uVar2 = FUN_1001547d0(uVar2,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_10011d97f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10011d97f:
  uVar1 = FUN_10018f890(param_1);
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = FUN_100df1800(uVar1);
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    FUN_10015a340(uVar2);
    CHostHardwareInfoBase::getMemorySettings();
    uVar1 = CHwMemorySettings::getRecommendedMaxVmMemory();
    *param_3 = uVar1;
  }
  return;
}

