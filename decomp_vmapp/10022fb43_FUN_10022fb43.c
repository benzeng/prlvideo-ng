
int FUN_10022fb43(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xc0) == 0) {
    *(undefined4 *)(param_1 + 0xbc) = 4;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0xbc) * 8);
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    if (*(long *)(param_1 + 0xc0) == 0) {
      FUN_10022d294(param_1,"adding document\n");
      return 0;
    }
  }
  if (*(int *)(param_1 + 0xbc) <= *(int *)(param_1 + 0xb8)) {
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) * 2;
    uVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0xc0),(long)*(int *)(param_1 + 0xbc) * 8);
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    if (*(long *)(param_1 + 0xc0) == 0) {
      FUN_10022d294(param_1,"adding document\n");
      return 0;
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0xc0) + (long)*(int *)(param_1 + 0xb8) * 8) = param_2;
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  iVar1 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar1 + 1;
  return iVar1;
}

