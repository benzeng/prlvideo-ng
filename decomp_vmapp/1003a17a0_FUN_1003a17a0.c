
void FUN_1003a17a0(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  uint uVar1;
  
  if ((param_3 & 0x2000) != 0) {
    FUN_10038e8e0(param_2,"[");
    if (param_4 == 0) {
      FUN_10038e8e0(param_2,"a0.x");
    }
    else {
      FUN_1003a0fb0(param_1,param_2,param_4,0);
    }
    if ((param_3 & 0x7ff) != 0) {
      FUN_10038e8e0(param_2,"+%d",(uint)param_3 & 0x7ff);
    }
    FUN_10038e8e0(param_2,"]");
    return;
  }
  uVar1 = (uint)(param_3 >> 8) & 0x18 | (uint)(param_3 >> 0x1c) & 7;
  if ((uVar1 < 0x12) && ((0x28210U >> uVar1 & 1) != 0)) {
    return;
  }
  FUN_10038e8e0(param_2,"%d",(uint)param_3 & 0x7ff);
  return;
}

