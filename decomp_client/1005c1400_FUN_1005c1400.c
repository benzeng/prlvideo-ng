
undefined8 * FUN_1005c1400(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  Data *local_28;
  undefined1 local_1a;
  
  uVar1 = FUN_1005b86c0(*(undefined8 *)(param_2 + 0x20));
  FUN_10015a340(uVar1);
  FUN_10011e480(&local_28);
  if ((param_3 < 0) || (*(int *)(local_28 + 0xc) - *(int *)(local_28 + 8) <= param_3)) {
    uVar1 = QString::fromAscii_helper("",0);
    *param_1 = uVar1;
  }
  else {
    CHwHddPartition::getSystemName();
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_1a = 0;
    }
    QListData::dispose(local_28);
  }
  return param_1;
}

