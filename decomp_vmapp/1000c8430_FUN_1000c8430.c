
undefined4 FUN_1000c8430(long param_1,char param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_d8 [24];
  undefined1 local_c0 [28];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [24];
  undefined1 local_80 [28];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 *local_38;
  undefined4 *puStack_30;
  undefined4 *local_28;
  
  local_38 = (undefined4 *)0x0;
  puStack_30 = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if ((*(byte *)(param_1 + 499) & 2) != 0) {
    if (param_2 == '\0') {
LAB_1000c8551:
      local_60 = 0x3e9e;
      FUN_10002de70(&local_38,&local_60);
    }
    else {
      local_5c = 0x3e9f;
      FUN_10002de70(&local_38,&local_5c);
      local_60 = 0x3e9e;
      if (puStack_30 == local_28) goto LAB_1000c8551;
      *puStack_30 = 0x3e9e;
      puStack_30 = puStack_30 + 1;
    }
    local_64 = 0x3e81;
    if (puStack_30 == local_28) {
      FUN_10002de70(&local_38,&local_64);
    }
    else {
      *puStack_30 = 0x3e81;
      puStack_30 = puStack_30 + 1;
    }
    uVar1 = DAT_1011c3650;
    FUN_10002ddb0(local_98,&local_58);
    FUN_10006a5d0(local_80,local_98);
    uVar2 = FUN_1000648b0(uVar1,(ulong)(param_2 == '\0') * 3 + 0x32fa,&local_38,local_80);
    FUN_10006a680(local_80);
    puVar3 = local_98;
    goto LAB_1000c865f;
  }
  if (param_2 == '\0') {
LAB_1000c8513:
    local_a0 = 0x3e9a;
    FUN_10002de70(&local_38,&local_a0);
  }
  else {
    local_9c = 0x3e91;
    FUN_10002de70(&local_38,&local_9c);
    local_a0 = 0x3e9a;
    if (puStack_30 == local_28) goto LAB_1000c8513;
    *puStack_30 = 0x3e9a;
    puStack_30 = puStack_30 + 1;
  }
  local_a4 = 0x3e81;
  if (puStack_30 == local_28) {
    FUN_10002de70(&local_38,&local_a4);
  }
  else {
    *puStack_30 = 0x3e81;
    puStack_30 = puStack_30 + 1;
  }
  uVar1 = DAT_1011c3650;
  FUN_10002ddb0(local_d8,&local_58);
  FUN_10006a5d0(local_c0,local_d8);
  uVar2 = FUN_1000648b0(uVar1,(ulong)(param_2 == '\0') * 3 + 0x32fb,&local_38,local_c0);
  FUN_10006a680(local_c0);
  puVar3 = local_d8;
LAB_1000c865f:
  FUN_10002d9d0(puVar3);
  FUN_10002d9d0(&local_58);
  if (local_38 != (undefined4 *)0x0) {
    if (puStack_30 != local_38) {
      puStack_30 = (undefined4 *)
                   ((~((long)puStack_30 + (-4 - (long)local_38)) & 0xfffffffffffffffcU) +
                   (long)puStack_30);
    }
    operator_delete(local_38);
  }
  return uVar2;
}

