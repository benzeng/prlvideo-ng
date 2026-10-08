
undefined8 FUN_100229ad0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar1 = FUN_10015cb20(uVar2,param_1 + 0x60);
  if (lVar1 != 0) {
    uVar2 = FUN_10018c280(lVar1);
    FUN_10031a440(uVar2,*(undefined4 *)(param_1 + 0x54));
  }
  return 0;
}

