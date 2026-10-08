
undefined4 FUN_10096fcd5(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    *(undefined4 *)(param_1 + 0x94) = 10;
    uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x94) * 8);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    if (*(long *)(param_1 + 0x98) == 0) {
      FUN_100960d45(param_1,"validating\n");
      return 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x94) <= *(int *)(param_1 + 0x90)) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) * 2;
    uVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x98),(long)*(int *)(param_1 + 0x94) * 8);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    if (*(long *)(param_1 + 0x98) == 0) {
      FUN_100960d45(param_1,"validating\n");
      return 0xffffffff;
    }
  }
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined8 *)(*(long *)(param_1 + 0x98) + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0x90) = iVar1 + 1;
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return 0;
}

