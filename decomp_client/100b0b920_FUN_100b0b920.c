
void FUN_100b0b920(undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_100b0b040(param_1,param_4);
  if (lVar1 + 1U < 2) {
    FUN_100df99c0("","ioctl",0,"Failed to find \'%s\' kernel symbol!",param_4);
    return;
  }
  *(long *)(param_2 + (long)param_3 * 8) = lVar1;
  return;
}

