
undefined8 FUN_100797840(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (1 < *(uint *)(lVar1 + 8))) {
    return 0;
  }
  return CONCAT71((int7)((ulong)lVar1 >> 8),(char)param_2[0xe] == '\0');
}

