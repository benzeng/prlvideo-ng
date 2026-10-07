
long FUN_100685be0(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  
  *param_3 = 0;
  lVar1 = (**(code **)(*(long *)param_1[1] + 0x60))((long *)param_1[1],param_2,0);
  if (lVar1 == -1) {
    *param_3 = 0x80000016;
    (**(code **)(*param_1 + 0x170))(param_1);
    lVar1 = 0;
  }
  else {
    lVar1 = param_1[1];
  }
  return lVar1;
}

