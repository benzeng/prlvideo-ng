
undefined8 FUN_1002251d0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_100319390(uVar3);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = FUN_100319390(uVar3);
    iVar1 = FUN_10018f860(uVar3);
    if (iVar1 == 8) {
      if (*(int *)(param_1 + 0x28) == 3) {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar3 = FUN_100319390(uVar3);
        iVar1 = FUN_10018a9d0(uVar3);
        if (iVar1 == 0x30000004) {
          bVar4 = false;
        }
        else {
          uVar3 = 0;
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
            uVar3 = *(undefined8 *)(param_1 + 0x20);
          }
          uVar3 = FUN_100319390(uVar3);
          iVar1 = FUN_10018a9d0(uVar3);
          bVar4 = iVar1 != 0x30000005;
        }
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) || (*(int *)(param_1 + 0x2c) == 2)) {
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar3 = FUN_10031a7f0(uVar3);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

