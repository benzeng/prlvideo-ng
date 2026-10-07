
undefined8 * FUN_10047e980(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  if (*(int *)(*(long *)(param_2 + 0x30) + 0xc) == *(int *)(*(long *)(param_2 + 0x30) + 8)) {
    *(undefined1 *)(param_2 + 0x22) = 0;
    *param_1 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    FUN_100495b40(param_1,param_2 + 0x30);
  }
  return param_1;
}

