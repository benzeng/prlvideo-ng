
undefined8 * FUN_1007eb990(undefined8 *param_1)

{
  int iVar1;
  
  if (DAT_1011c0500 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011c0500);
    if (iVar1 != 0) {
      DAT_1011c04f8 = 0xffffc77cedd32800;
      ___cxa_guard_release(&DAT_1011c0500);
    }
  }
  *param_1 = DAT_1011c04f8;
  return param_1;
}

