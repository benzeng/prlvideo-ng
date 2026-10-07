
void _xmlSchemaFreeWildcard(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1001eb5fe(*(undefined8 *)(param_1 + 0x10));
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1001eb6df(*(undefined8 *)(param_1 + 0x30));
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x38));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

