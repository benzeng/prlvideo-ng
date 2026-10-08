
void FUN_1009581d6(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a8);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x58) != 0)) {
    (**(code **)(lVar1 + 0x58))(param_1,param_2,param_3);
  }
  return;
}

