
undefined4 FUN_100209b7e(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar2 = (*(code *)_xmlMalloc)(0xa0);
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    if (*(long *)(param_1 + 0xd8) == 0) {
      FUN_1001e835c(param_1,"allocating the IDC node table item list",0);
      return 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0xe4) = 0x14;
  }
  else if (*(int *)(param_1 + 0xe4) <= *(int *)(param_1 + 0xe0)) {
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) * 2;
    uVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0xd8),(long)*(int *)(param_1 + 0xe4) * 8);
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    if (*(long *)(param_1 + 0xd8) == 0) {
      FUN_1001e835c(param_1,"re-allocating the IDC node table item list",0);
      return 0xffffffff;
    }
  }
  iVar1 = *(int *)(param_1 + 0xe0);
  *(undefined8 *)(*(long *)(param_1 + 0xd8) + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0xe0) = iVar1 + 1;
  return 0;
}

