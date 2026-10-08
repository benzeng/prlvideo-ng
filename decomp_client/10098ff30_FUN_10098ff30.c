
void FUN_10098ff30(undefined8 param_1,undefined8 param_2)

{
  if ((int)param_2 == 0x8b17058) {
    FUN_1009bdfb0(param_1,0x8000000,0x100000001);
    return;
  }
  if ((int)param_2 == 0x8000000) {
    FUN_1009bdfb0(param_1,0x8000000,1);
    return;
  }
  FUN_1009bdfb0(param_1,param_2,0xffffffff00000000);
  return;
}

