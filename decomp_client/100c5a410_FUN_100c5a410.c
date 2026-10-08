
undefined8 FUN_100c5a410(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 1, *(int *)(param_1 + 0x1c) != 0)) {
    if ((*(int *)(param_1 + 0x18) != 0) && (*(FILE **)(param_1 + 0x30) != (FILE *)0x0)) {
      _fclose(*(FILE **)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return uVar1;
}

