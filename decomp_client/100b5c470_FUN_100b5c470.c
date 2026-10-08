
undefined8 FUN_100b5c470(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100b5b710(&DAT_1023118b0);
  if (*(long *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_100b5b710(&DAT_1023118b0);
    uVar2 = CONCAT71((int7)((ulong)*(long *)(lVar1 + 0x30) >> 8),
                     *(char *)(*(long *)(lVar1 + 0x30) + 0x19) != '\0');
  }
  return uVar2;
}

