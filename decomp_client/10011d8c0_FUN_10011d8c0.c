
int FUN_10011d8c0(int param_1,char param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if ((param_2 != '\0') && (iVar1 = 0x20, param_1 < 0x21)) {
    iVar1 = param_1;
  }
  if (iVar1 <= param_3) {
    param_3 = iVar1;
  }
  return param_3;
}

