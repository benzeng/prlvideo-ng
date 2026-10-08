
void FUN_10095800f(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a8);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x40) != 0)) {
    (**(code **)(lVar1 + 0x40))(param_1,param_2);
  }
  return;
}

