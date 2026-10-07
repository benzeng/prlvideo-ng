
void _xmlSchemaFreeFacet(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      _xmlSchemaFreeValue(*(undefined8 *)(param_1 + 0x38));
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      _xmlRegFreeRegexp(*(xmlRegexpPtr *)(param_1 + 0x40));
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_1001eb5fe(*(undefined8 *)(param_1 + 0x20));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

