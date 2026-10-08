
undefined8 FUN_10024e040(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_100199830(uVar1);
  uVar1 = 0x80000009;
  if (lVar2 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}

