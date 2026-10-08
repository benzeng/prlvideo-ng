
void FUN_10041fee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1c8) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  FUN_10013a450(*(undefined8 *)(*(long *)(param_1 + 0x60) + 8),param_2,param_3,0);
  return;
}

