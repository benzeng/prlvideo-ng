
byte FUN_1002efa80(long *param_1)

{
  byte bVar1;
  
  if ((int)param_1[1] == 4) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
    if ((int)param_1[1] == 1) {
      bVar1 = (*(byte *)(*param_1 + 0xc) & 8) >> 3;
    }
  }
  return bVar1;
}

