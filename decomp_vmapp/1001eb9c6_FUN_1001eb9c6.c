
void FUN_1001eb9c6(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1001eb5fe(*(undefined8 *)(param_1 + 0x30));
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
      _xmlRegFreeRegexp(*(xmlRegexpPtr *)(param_1 + 0xa0));
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      _xmlSchemaFreeValue(*(undefined8 *)(param_1 + 0xb8));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

