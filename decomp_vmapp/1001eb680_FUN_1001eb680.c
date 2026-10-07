
void FUN_1001eb680(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_1001eb5fe(*(undefined8 *)(param_1 + 0x40));
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      _xmlSchemaFreeValue(*(undefined8 *)(param_1 + 0x88));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

