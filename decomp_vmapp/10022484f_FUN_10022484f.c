
void FUN_10022484f(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a8);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x50) != 0)) {
    (**(code **)(lVar1 + 0x50))(param_1,param_2,param_3,param_4);
  }
  return;
}

