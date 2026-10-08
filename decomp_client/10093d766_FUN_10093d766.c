
undefined4 FUN_10093d766(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 10;
    uVar2 = (*(code *)_xmlMalloc)(0x50);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_10091bc84(0,"allocating an array of IDC node-table items",0);
      return 0xffffffff;
    }
  }
  else if (*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) * 2;
    uVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x10),(long)*(int *)(param_1 + 0x1c) * 8);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_10091bc84(0,"re-allocating an array of IDC node-table items",0);
      return 0xffffffff;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  return 0;
}

