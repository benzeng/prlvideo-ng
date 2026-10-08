
undefined8 FUN_100991080(void)

{
  undefined8 uVar1;
  
  if (DAT_102310a20 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(DAT_102310a20 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulong)DAT_102310a20 >> 8),DAT_102310a28 != 0);
  }
  return uVar1;
}

