
undefined8 FUN_100795c70(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),*(long *)(lVar1 + 0x10) != 0);
  }
  return uVar2;
}

