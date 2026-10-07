
undefined8
_catch_exception_raise
          (undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined8 param_5,
          undefined4 param_6)

{
  undefined8 uVar1;
  
  if (*(int *)PTR__mach_task_self__100ba25d0 == param_3) {
    uVar1 = FUN_100426890(param_3,param_2,param_4,param_5,param_6);
    return uVar1;
  }
  return 5;
}

