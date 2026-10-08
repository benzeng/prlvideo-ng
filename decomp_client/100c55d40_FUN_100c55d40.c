
bool FUN_100c55d40(undefined8 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_100c55920(param_1,0x12,(long)param_2,0,0);
  if (-1 < (int)uVar1) {
    return (uVar1 & 7) != 0;
  }
  FUN_100c62ee0(0x26,0xaa,0x8a,"eng_ctrl.c",0xed);
  return false;
}

