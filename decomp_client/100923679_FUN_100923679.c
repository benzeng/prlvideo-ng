
undefined4
FUN_100923679(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 *param_6)

{
  undefined8 uVar1;
  undefined4 local_4c;
  
  if (((param_1 == 0) || (param_5 == 0)) || (param_4 == 0)) {
    local_4c = 0xffffffff;
  }
  else {
    uVar1 = FUN_10092084c(param_1,param_4);
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = uVar1;
    }
    local_4c = FUN_1009234f4(param_1,param_2,param_3,param_4,uVar1,param_5);
  }
  return local_4c;
}

