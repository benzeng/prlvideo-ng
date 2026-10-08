
byte FUN_1003b1f00(int param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_1003b1e20();
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
    if (param_1 - 0xbU < 8) {
      bVar2 = 0x3eU >> ((byte)(param_1 - 0xbU) & 0x1f) & 1;
    }
  }
  return bVar2;
}

