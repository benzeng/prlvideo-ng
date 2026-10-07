
undefined4 FUN_100209cde(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar2 = (*(code *)_xmlMalloc)(0x140);
    *(undefined8 *)(param_1 + 0xe8) = uVar2;
    if (*(long *)(param_1 + 0xe8) == 0) {
      FUN_1001e835c(param_1,"allocating the IDC key storage list",0);
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0xf4) = 0x28;
  }
  else if (*(int *)(param_1 + 0xf4) <= *(int *)(param_1 + 0xf0)) {
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) * 2;
    uVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0xe8),(long)*(int *)(param_1 + 0xf4) * 8);
    *(undefined8 *)(param_1 + 0xe8) = uVar2;
    if (*(long *)(param_1 + 0xe8) == 0) {
      FUN_1001e835c(param_1,"re-allocating the IDC key storage list",0);
      return 0xffffffff;
    }
  }
  iVar1 = *(int *)(param_1 + 0xf0);
  *(undefined8 *)(*(long *)(param_1 + 0xe8) + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0xf0) = iVar1 + 1;
  return 0;
}

