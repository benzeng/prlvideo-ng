
void FUN_100212c8b(long param_1)

{
  if ((*(int *)(param_1 + 0xa0) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    _xmlSchemaFree(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_100211f4c(param_1);
  return;
}

