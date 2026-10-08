
undefined8 FUN_100c637f0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100c63000();
  uVar2 = 0;
  if (*(int *)(lVar1 + 0x254) != *(int *)(lVar1 + 0x250)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x50 + (long)*(int *)(lVar1 + 0x250) * 8);
  }
  return uVar2;
}

