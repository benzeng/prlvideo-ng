
void _xmlSchemaFreeParserCtxt(long param_1)

{
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x58) != 0) && (*(int *)(param_1 + 0x60) == 0)) {
      _xmlFreeDoc(*(xmlDocPtr *)(param_1 + 0x58));
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      _xmlSchemaFreeValidCtxt(*(undefined8 *)(param_1 + 0xb8));
    }
    if ((*(int *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
      FUN_10092b5c6(*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    _xmlDictFree(*(xmlDictPtr *)(param_1 + 0x98));
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

