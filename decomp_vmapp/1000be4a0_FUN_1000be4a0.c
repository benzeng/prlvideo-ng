
bool FUN_1000be4a0(undefined8 param_1)

{
  int iVar1;
  QArrayData *local_60;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *puStack_30;
  undefined4 *local_28;
  undefined1 local_11;
  
  local_38 = (undefined4 *)0x0;
  puStack_30 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_3c = 0x3ea5;
  FUN_10002de70(&local_38,&local_3c);
  local_40 = 0x3e81;
  if (puStack_30 == local_28) {
    FUN_10002de70(&local_38,&local_40);
  }
  else {
    *puStack_30 = 0x3e81;
    puStack_30 = puStack_30 + 1;
  }
  FUN_10006a060(local_58);
  FUN_1000a4ca0(&local_60,param_1);
  FUN_10006a120(local_58,&local_60,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000be54e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000be54e:
  iVar1 = FUN_1000648b0(DAT_1011c3650,0x32d6,&local_38,local_58);
  if (iVar1 != 0x3ea5) {
    FUN_1008e3970("","vm",0,"User has selected not to work in overcommit state");
  }
  FUN_10006a680(local_58);
  if (local_38 != (undefined4 *)0x0) {
    if (puStack_30 != local_38) {
      puStack_30 = (undefined4 *)
                   ((~((long)puStack_30 + (-4 - (long)local_38)) & 0xfffffffffffffffcU) +
                   (long)puStack_30);
    }
    operator_delete(local_38);
  }
  return iVar1 == 0x3ea5;
}

