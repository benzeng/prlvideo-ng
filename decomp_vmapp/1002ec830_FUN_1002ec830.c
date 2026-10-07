
undefined8 FUN_1002ec830(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  while( true ) {
    lVar1 = *(long *)(param_1 + 0x68 + lVar2 * 8);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x18) != '\0')) {
      return 1;
    }
    lVar1 = *(long *)(param_1 + 0x70 + lVar2 * 8);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x18) != '\0')) break;
    lVar2 = lVar2 + 2;
    if (0x1f < lVar2) {
      return 0;
    }
  }
  return 1;
}

