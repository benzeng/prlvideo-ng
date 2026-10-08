
undefined8 FUN_100d2f900(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_100d2f630();
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)FUN_100d2fb50(param_1);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return 1;
}

