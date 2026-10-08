
undefined8 FUN_100a77ab0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  QArrayData *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  *param_2 = *(undefined8 *)(param_1 + 0x398);
  param_2[1] = *(undefined8 *)(param_1 + 0x3a0);
  param_2[2] = *(undefined8 *)(param_1 + 0x3a8);
  param_2[3] = *(undefined8 *)(param_1 + 0x3b0);
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  if (param_3 != (undefined8 *)0x0) {
    FUN_100ab5ed0(&local_40);
    FUN_100ab6000(&local_38,(short)uVar1,&local_40);
    *(undefined4 *)(param_3 + 2) = local_28;
    param_3[1] = local_30;
    *param_3 = local_38;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return 1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  return 1;
}

