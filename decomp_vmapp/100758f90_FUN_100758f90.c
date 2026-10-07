
bool FUN_100758f90(undefined8 param_1,undefined4 param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = param_3 - 0x50000000;
  if (param_3 >> 0x1c < 0xb) {
    uVar2 = param_3;
  }
  cVar1 = FUN_100756dc0(*DAT_1011ccb80,param_1,param_2,DAT_1011ccb80[1] + uVar2);
  if (cVar1 == '\0') {
    FUN_1008e3970("","dbgdump",0,"------ Reading at off=0x%llx 0x%x bytes FAILED",uVar2,param_2);
  }
  return cVar1 != '\0';
}

