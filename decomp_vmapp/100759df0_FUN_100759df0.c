
undefined1
FUN_100759df0(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined1 uVar1;
  char *pcVar2;
  
  if (param_3 == 0) {
    pcVar2 = "Invalid vcpu contexts";
  }
  else {
    if (param_5 == 3) {
      FUN_100759b60(param_1,param_2,param_3,param_4);
      return 1;
    }
    if (param_5 == 1) {
      FUN_100759400(param_1,param_3);
      uVar1 = FUN_100758590(param_1,param_2,param_3,param_4);
      return uVar1;
    }
    pcVar2 = "Unsupported dumpType";
  }
  FUN_1008e3970("","dbgdump",0,pcVar2);
  return 0;
}

