
undefined8 FUN_1002987c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10018c280(uVar2);
  iVar1 = FUN_100319ae0(uVar2);
  uVar2 = 0x3bfa;
  if ((iVar1 != 1) && (iVar1 != 2 || *(char *)(param_1 + 0x28) == '\0')) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_10018c280(uVar2);
    local_28 = 3;
    local_20 = 0;
    local_24 = 0;
    local_1c = 0xffff;
    local_18 = 0;
    local_14 = 0;
    uVar2 = FUN_10031bef0(uVar2,1,&local_28);
    uVar2 = FUN_100298870(param_1,uVar2);
  }
  return uVar2;
}

