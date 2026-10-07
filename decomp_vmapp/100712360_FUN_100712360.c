
undefined8 FUN_100712360(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1007127b0(&DAT_1011ccb30);
  if (*(long *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_1007127b0(&DAT_1011ccb30);
    uVar2 = CONCAT71((int7)((ulong)*(long *)(lVar1 + 0x30) >> 8),
                     *(char *)(*(long *)(lVar1 + 0x30) + 0x1a) != '\0');
  }
  return uVar2;
}

