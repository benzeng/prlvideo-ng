
void _xmlSchemaFreeValidCtxt(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 local_4c;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_24;
  undefined4 local_14;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x80) != 0) {
      _xmlSchemaFreeValue(*(undefined8 *)(param_1 + 0x80));
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      _xmlSchemaFreeParserCtxt(*(undefined8 *)(param_1 + 0x98));
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      for (local_4c = 0; local_4c < *(int *)(param_1 + 0xe0); local_4c = local_4c + 1) {
        lVar2 = *(long *)(*(long *)(param_1 + 0xd8) + (long)local_4c * 8);
        (*(code *)_xmlFree)(*(undefined8 *)(lVar2 + 8));
        (*(code *)_xmlFree)(lVar2);
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0xd8));
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      for (local_3c = 0; local_3c < *(int *)(param_1 + 0xf0); local_3c = local_3c + 1) {
        FUN_10093d9ba(*(undefined8 *)(*(long *)(param_1 + 0xe8) + (long)local_3c * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0xe8));
    }
    if (*(long *)(param_1 + 200) != 0) {
      FUN_10091f18c(*(undefined8 *)(param_1 + 200));
    }
    if (*(long *)(param_1 + 0xd0) != 0) {
      FUN_10091f18c(*(undefined8 *)(param_1 + 0xd0));
    }
    if (*(long *)(param_1 + 0xc0) != 0) {
      local_38 = *(long **)(param_1 + 0xc0);
      do {
        plVar1 = (long *)*local_38;
        (*(code *)_xmlFree)(local_38);
        local_38 = plVar1;
      } while (plVar1 != (long *)0x0);
    }
    if (*(long *)(param_1 + 0x110) != 0) {
      if (*(int *)(param_1 + 0x118) != 0) {
        FUN_1009421ee(param_1);
      }
      for (local_24 = 0; local_24 < *(int *)(param_1 + 0x11c); local_24 = local_24 + 1) {
        (*(code *)_xmlFree)(*(undefined8 *)(*(long *)(param_1 + 0x110) + (long)local_24 * 8));
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x110));
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      for (local_14 = 0; local_14 < *(int *)(param_1 + 0xb0); local_14 = local_14 + 1) {
        lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + (long)local_14 * 8);
        if (lVar2 == 0) break;
        FUN_10094007f(lVar2);
        (*(code *)_xmlFree)(lVar2);
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0xa8));
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      FUN_10091ea19(*(undefined8 *)(param_1 + 0x128));
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      _xmlDictFree(*(xmlDictPtr *)(param_1 + 0x100));
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

