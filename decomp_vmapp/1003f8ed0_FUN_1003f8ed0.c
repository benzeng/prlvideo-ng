
bool FUN_1003f8ed0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *puStack_40;
  undefined4 *local_38;
  undefined1 local_28 [24];
  
  FUN_10006a060(local_28);
  local_48 = (undefined4 *)0x0;
  puStack_40 = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_4c = 0x3e81;
  FUN_10002de70(&local_48,&local_4c);
  local_50 = 0x3e92;
  if (puStack_40 == local_38) {
    FUN_10002de70(&local_48,&local_50);
  }
  else {
    *puStack_40 = 0x3e92;
    puStack_40 = puStack_40 + 1;
  }
  FUN_10006a860(local_28,5,0);
  FUN_10006a860(local_28,param_1,1);
  iVar1 = FUN_1000648b0(DAT_1011c3650,0x80000433,&local_48,local_28);
  if (local_48 != (undefined4 *)0x0) {
    if (puStack_40 != local_48) {
      puStack_40 = (undefined4 *)
                   ((~((long)puStack_40 + (-4 - (long)local_48)) & 0xfffffffffffffffcU) +
                   (long)puStack_40);
    }
    operator_delete(local_48);
  }
  FUN_10006a680(local_28);
  return iVar1 != 0x3e81;
}

