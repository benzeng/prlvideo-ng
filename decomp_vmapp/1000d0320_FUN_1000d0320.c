
bool FUN_1000d0320(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  QArrayData *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  undefined4 *local_38;
  undefined4 *puStack_30;
  undefined4 *local_28;
  undefined1 local_11;
  
  local_38 = (undefined4 *)0x0;
  puStack_30 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_58 = 0;
  puStack_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  local_5c = 0x3e9b;
  FUN_10002de70(&local_38,&local_5c);
  local_60 = 0x3e9a;
  if (puStack_30 == local_28) {
    FUN_10002de70(&local_38,&local_60);
  }
  else {
    *puStack_30 = 0x3e9a;
    puStack_30 = puStack_30 + 1;
  }
  FUN_1000a4ca0(&local_68,*(undefined8 *)(param_1 + 0x2b0));
  if (puStack_50 == local_48) {
    FUN_1000b5140(&local_58,&local_68);
  }
  else {
    *puStack_50 = local_68;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_11 = *(int *)local_68 != 0;
      UNLOCK();
    }
    puStack_50 = puStack_50 + 1;
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_11 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000d03ff;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000d03ff:
  uVar1 = DAT_1011c3650;
  FUN_10002ddb0(local_98,&local_58);
  FUN_10006a5d0(local_80,local_98);
  iVar2 = FUN_1000648b0(uVar1,0x80020012,&local_38,local_80);
  FUN_10006a680(local_80);
  FUN_10002d9d0(local_98);
  if (iVar2 != 0x3e9b) {
    FUN_1008e3970("","vm",0,"User has chosen not to revert to running state");
  }
  else {
    FUN_1008e3970("","vm",0,"User has chosen to try to revert to running state");
  }
  FUN_10002d9d0(&local_58);
  if (local_38 != (undefined4 *)0x0) {
    if (puStack_30 != local_38) {
      puStack_30 = (undefined4 *)
                   ((~((long)puStack_30 + (-4 - (long)local_38)) & 0xfffffffffffffffcU) +
                   (long)puStack_30);
    }
    operator_delete(local_38);
  }
  return iVar2 == 0x3e9b;
}

