
undefined8 FUN_1008209e0(long *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != (long *)0x0) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
    iVar1 = _closedir(*(undefined8 *)*param_1);
    _free((void *)*param_1);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 == -1) {
      return 0;
    }
  }
  piVar2 = ___error();
  *piVar2 = 0x16;
  return 0;
}

