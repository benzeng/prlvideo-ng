
byte FUN_1003b4ec0(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  if ((*(byte *)(param_2 + 0x39) & 1) == 0) {
    bVar1 = 1;
    if ((1 < (byte)(*(char *)(param_2 + 0x38) - 1U)) &&
       ((*(byte *)(param_2 + 0x30) & *(byte *)(param_2 + 0x30) - 1) != 0)) {
      bVar1 = (*(byte *)(param_2 + 0x35) & 0x10) >> 4;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

