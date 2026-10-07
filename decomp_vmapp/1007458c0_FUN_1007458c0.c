
int FUN_1007458c0(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 0x7e000001) {
    iVar1 = param_1 + 0x10 + (int)param_1 / 0xff;
  }
  return iVar1;
}

