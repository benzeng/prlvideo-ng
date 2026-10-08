
void FUN_10034c8b0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_14 [4];
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319390(uVar2);
  iVar1 = FUN_10018a9d0(uVar2);
  if (iVar1 != 0x30000004) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar2 = FUN_100319390(uVar2);
    FUN_100192d10(uVar2,0,0,0);
  }
  FUN_10034c310(param_1);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319c60(uVar2);
  FUN_10033c620(uVar2,0x20,local_14,4);
  if (*(char *)(param_1 + 0x31) != '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 1;
    FUN_100830bb0(param_1,1);
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319c60(uVar2);
  FUN_10033c620(uVar2,0x21,0,0);
  return;
}

