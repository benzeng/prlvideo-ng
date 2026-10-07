
int FUN_10041f8d0(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (char)param_1;
  if ((byte)(cVar2 - 0x30U) < 10) {
    param_1 = param_1 + -0x30;
  }
  else {
    if (5 < (byte)(cVar2 + 0x9fU)) {
      iVar1 = -1;
      if ((byte)(cVar2 + 0xbfU) < 6) {
        iVar1 = param_1 + -0x37;
      }
      return iVar1;
    }
    param_1 = param_1 + -0x57;
  }
  return param_1;
}

