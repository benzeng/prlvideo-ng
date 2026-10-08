
undefined8 FUN_100298d70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_10018c280(uVar1);
  uVar1 = FUN_100319c10(uVar1);
  FUN_10032f480(uVar1,*(undefined1 *)(param_1 + 0x28));
  return 0;
}

