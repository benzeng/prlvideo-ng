
undefined8 FUN_1000a1980(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(*(long *)(param_1 + 0x1120) + 0xf0) = *param_2;
  *(undefined8 *)(*(long *)(param_1 + 0x1128) + 0xf0) = param_2[1];
  *(undefined8 *)(*(long *)(param_1 + 0x1130) + 0xf0) = param_2[2];
  *(undefined8 *)(*(long *)(param_1 + 0x1138) + 0xf0) = param_2[3];
  return 0;
}

