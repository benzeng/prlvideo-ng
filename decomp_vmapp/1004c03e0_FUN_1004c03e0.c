
void FUN_1004c03e0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 local_30;
  
  lVar2 = 0x1f;
  do {
    LOCK();
    plVar1 = (long *)param_1[lVar2 + 1];
    param_1[lVar2 + 1] = 0;
    UNLOCK();
    if (plVar1 != (long *)0x0) {
      FUN_1004c0960(&local_58,plVar1 + 2);
      local_40 = local_58;
      local_38 = local_50;
      if (local_58 != local_50) {
        do {
          local_30 = 1;
          FUN_1002a53f0(*param_1,*local_40,local_40[1]);
          local_40 = local_40 + 2;
        } while (local_40 != local_38);
      }
      local_30 = 1;
      if (local_58 != (undefined4 *)0x0) {
        if (local_50 != local_58) {
          local_50 = (undefined4 *)
                     ((~((long)local_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U) +
                     (long)local_50);
        }
        operator_delete(local_58);
      }
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    bVar3 = lVar2 != 0;
    lVar2 = lVar2 + -1;
  } while (bVar3);
  return;
}

