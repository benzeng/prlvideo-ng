
void FUN_10093d9ba(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    _xmlSchemaFreeValue(*(undefined8 *)(param_1 + 8));
  }
  (*(code *)_xmlFree)(param_1);
  return;
}

