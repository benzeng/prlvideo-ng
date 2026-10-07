
void FUN_10022a7d1(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x148) == 0) {
    FUN_10022b75c(param_1,param_2);
  }
  else {
    (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 200),param_2);
  }
  return;
}

