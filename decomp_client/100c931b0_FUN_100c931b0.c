
undefined8 FUN_100c931b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_10230aaa0;
  piVar1 = (int *)PTR_DAT_10230aaa0;
  if (iVar2 == 0) {
    return 0;
  }
  do {
    if (iVar2 == param_1) {
      return 1;
    }
    iVar2 = piVar1[1];
    piVar1 = piVar1 + 1;
  } while (iVar2 != 0);
  return 0;
}

