
void FUN_100207bab(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x58) >> 0x12 & 1) == 0)) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x40000;
    iVar1 = FUN_100207434(param_2,param_1);
    if (iVar1 == 0) {
      FUN_10020792c(param_2,param_1);
    }
  }
  return;
}

