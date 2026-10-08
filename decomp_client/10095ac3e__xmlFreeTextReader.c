
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void _xmlFreeTextReader(long param_1)

{
  undefined4 local_c;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0xd0) != 0) {
      _xmlRelaxNGFree(*(xmlRelaxNGPtr *)(param_1 + 0xd0));
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      _xmlRelaxNGFreeValidCtxt(*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0xd8));
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    if (*(long *)(param_1 + 0x108) != 0) {
      _xmlSchemaSAXUnplug(*(undefined8 *)(param_1 + 0x108));
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    if (*(long *)(param_1 + 0xf8) != 0) {
      _xmlSchemaFreeValidCtxt(*(undefined8 *)(param_1 + 0xf8));
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    if (*(long *)(param_1 + 0xf0) != 0) {
      _xmlSchemaFree(*(undefined8 *)(param_1 + 0xf0));
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    if (*(long *)(param_1 + 0x120) != 0) {
      _xmlXIncludeFreeContext(*(undefined8 *)(param_1 + 0x120));
    }
    if (*(long *)(param_1 + 0x138) != 0) {
      for (local_c = 0; local_c < *(int *)(param_1 + 300); local_c = local_c + 1) {
        if (*(long *)(*(long *)(param_1 + 0x138) + (long)local_c * 8) != 0) {
          _xmlFreePattern(*(undefined8 *)(*(long *)(param_1 + 0x138) + (long)local_c * 8));
        }
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x138));
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(long *)(param_1 + 0xa0) == *(long *)(*(long *)(param_1 + 0x20) + 0x1c8)) {
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      if (*(long *)(*(long *)(param_1 + 0x20) + 0x10) != 0) {
        if (*(int *)(param_1 + 0x90) == 0) {
          FUN_100957aaf(param_1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
        }
        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
      }
      if ((*(long *)(*(long *)(param_1 + 0x20) + 0xf8) != 0) &&
         (0 < *(int *)(*(long *)(param_1 + 0x20) + 0xf4))) {
        (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8));
        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0xf4) = 0;
      }
      if ((*(uint *)(param_1 + 0x14) >> 1 & 1) != 0) {
        _xmlFreeParserCtxt(*(xmlParserCtxtPtr *)(param_1 + 0x20));
      }
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x28));
    }
    if ((*(long *)(param_1 + 0x30) != 0) && ((*(uint *)(param_1 + 0x14) & 1) != 0)) {
      _xmlFreeParserInputBuffer(*(xmlParserInputBufferPtr *)(param_1 + 0x30));
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      _xmlFreeNode(*(xmlNodePtr *)(param_1 + 0x88));
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      _xmlBufferFree(*(xmlBufferPtr *)(param_1 + 0x98));
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0xb8));
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
      _xmlDictFree(*(xmlDictPtr *)(param_1 + 0xa0));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

