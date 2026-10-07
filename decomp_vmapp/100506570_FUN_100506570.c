
undefined1 FUN_100506570(long param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    uVar1 = FUN_100504ec0(param_1);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  return *(undefined1 *)(param_1 + 0x30);
}

