
void FUN_1002a35c0(long param_1)

{
  *(long *)(param_1 + 0xe0) = param_1 + 0xf0;
  FUN_1007d7110(param_1 + 0xf0,0,*(undefined4 *)(param_1 + 0x38));
  _free(*(void **)(param_1 + 0xe8));
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}

