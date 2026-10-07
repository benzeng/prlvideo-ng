
bool FUN_1000ae810(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10008cba0(DAT_1011c3688,param_1,param_3,param_2);
  if (iVar1 != param_2) {
    FUN_1008e3970("","vm",0,"------ Reading at off=0x%llx 0x%x bytes FAILED",param_3,param_2);
  }
  return iVar1 == param_2;
}

