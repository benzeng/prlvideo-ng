
undefined8
FUN_0040dd40(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            long param_6,int param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((param_1 == 0) || (param_2 == 0)) || ((param_6 == 0 && (param_7 != 0)))) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = FUN_0040de30(param_5);
    uVar2 = FUN_0040e0c0(param_1,param_2,param_3,param_4,param_5,uVar1,param_6,param_7);
  }
  return uVar2;
}

