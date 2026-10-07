
undefined8 FUN_1008b7c30(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_1011b0cd0;
  piVar1 = (int *)PTR_DAT_1011b0cd0;
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

