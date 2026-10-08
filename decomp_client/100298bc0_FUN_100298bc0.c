
undefined8 FUN_100298bc0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = FUN_10018c280(uVar3);
  iVar2 = FUN_100319ae0(uVar3);
  if (iVar2 == 2) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar1 = FUN_100356c70(uVar3,0);
    if (cVar1 != '\0') {
      return 0x3bfa;
    }
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = FUN_10018c280(uVar3);
  local_28 = 3;
  local_20 = 0;
  local_24 = 0;
  local_1c = 0xffff;
  local_18 = 0;
  local_14 = 0;
  uVar3 = FUN_10031bef0(uVar3,2,&local_28);
  uVar3 = FUN_100298870(param_1,uVar3);
  return uVar3;
}

