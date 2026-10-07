
void FUN_10022b75c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a8);
  if ((param_2 != 0) && (*(long *)(lVar1 + 0x148) != 0)) {
    (**(code **)(lVar1 + 0x148))(*(undefined8 *)(lVar1 + 200),param_2);
  }
  return;
}

