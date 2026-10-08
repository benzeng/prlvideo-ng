
void FUN_10095822b(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a8);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x60) != 0)) {
    (**(code **)(lVar1 + 0x60))(param_1,param_2,param_3);
  }
  return;
}

