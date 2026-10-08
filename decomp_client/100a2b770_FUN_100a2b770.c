
long FUN_100a2b770(long param_1,long param_2)

{
  if (param_2 == 0) {
    *(long *)param_1 = param_1;
    *(long *)(param_1 + 8) = param_1;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    FUN_100a2ac20(param_1);
  }
  return param_1;
}

