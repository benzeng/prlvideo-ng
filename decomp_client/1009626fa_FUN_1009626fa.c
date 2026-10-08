
int FUN_1009626fa(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    *(undefined4 *)(param_1 + 0xd4) = 4;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0xd4) * 8);
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    if (*(long *)(param_1 + 0xd8) == 0) {
      FUN_100960bbc(param_1,"allocating include\n");
      return 0;
    }
  }
  if (*(int *)(param_1 + 0xd4) <= *(int *)(param_1 + 0xd0)) {
    *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) * 2;
    uVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0xd8),(long)*(int *)(param_1 + 0xd4) * 8);
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    if (*(long *)(param_1 + 0xd8) == 0) {
      FUN_100960bbc(param_1,"allocating include\n");
      return 0;
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0xd8) + (long)*(int *)(param_1 + 0xd0) * 8) = param_2;
  *(undefined8 *)(param_1 + 200) = param_2;
  iVar1 = *(int *)(param_1 + 0xd0);
  *(int *)(param_1 + 0xd0) = iVar1 + 1;
  return iVar1;
}

