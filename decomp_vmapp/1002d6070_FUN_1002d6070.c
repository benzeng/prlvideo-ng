
undefined8
FUN_1002d6070(long *param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4,
             undefined2 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined4 local_c;
  
  local_c = param_7;
  param_1 = (long *)*param_1;
  uVar1 = 0xffffffff;
  if (param_1 != (long *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x58))
                      (param_1,param_2,param_3,param_4,param_5,param_6,&local_c,0);
  }
  return uVar1;
}

