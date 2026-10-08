
void FUN_1009465b3(long param_1)

{
  if ((*(int *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    _xmlSchemaFree(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_100945874(param_1);
  return;
}

