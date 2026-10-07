
int FUN_1007dabd0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  do {
    iVar1 = iVar1 + 1;
  } while (1 << ((byte)iVar1 & 0x1f) < (param_1 + -1 + param_2) / param_2);
  return (param_1 / param_2) * 0x11 + 0x40 + iVar1 * 0x10;
}

