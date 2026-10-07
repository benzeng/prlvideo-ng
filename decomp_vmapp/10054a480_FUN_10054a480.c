
void FUN_10054a480(long param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_100544d60(*(undefined4 *)(param_1 + 0x68),0,0);
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  _free(*(void **)(param_1 + 200));
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_100549720(param_1);
  FUN_10054a510(param_1,param_2);
  return;
}

