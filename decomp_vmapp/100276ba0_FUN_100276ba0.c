
byte FUN_100276ba0(long param_1,byte param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x168) == '\0') {
    param_2 = 0;
  }
  bVar1 = 1;
  if ((DAT_101115c70 != 0) && (param_2 != 0)) {
    bVar1 = FUN_1002f0cd0(param_1);
    param_2 = bVar1;
  }
  *(uint *)(*(long *)(param_1 + 0x160) + 8) = (byte)~param_2 & 1;
  FUN_1002effe0(*(undefined8 *)(param_1 + 0x178));
  return bVar1;
}

