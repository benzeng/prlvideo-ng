
void FUN_100945874(long param_1)

{
  long *plVar1;
  long lVar2;
  xmlDictPtr pxVar3;
  undefined8 local_38;
  undefined4 local_24;
  undefined4 local_14;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    if (*(long *)(param_1 + 0x80) != 0) {
      _xmlSchemaFreeValue(*(undefined8 *)(param_1 + 0x80));
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    if (*(long *)(param_1 + 0xc0) != 0) {
      local_38 = *(long **)(param_1 + 0xc0);
      do {
        plVar1 = (long *)*local_38;
        (*(code *)_xmlFree)(local_38);
        local_38 = plVar1;
      } while (plVar1 != (long *)0x0);
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      for (local_24 = 0; local_24 < *(int *)(param_1 + 0xe0); local_24 = local_24 + 1) {
        lVar2 = *(long *)(*(long *)(param_1 + 0xd8) + (long)local_24 * 8);
        (*(code *)_xmlFree)(*(undefined8 *)(lVar2 + 8));
        (*(code *)_xmlFree)(lVar2);
      }
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0xd8));
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    if (*(long *)(param_1 + 200) != 0) {
      FUN_10091f18c(*(undefined8 *)(param_1 + 200));
      *(undefined8 *)(param_1 + 200) = 0;
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      FUN_1009421ee(param_1);
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      for (local_14 = 0; local_14 < *(int *)(param_1 + 0xb0); local_14 = local_14 + 1) {
        lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + (long)local_14 * 8);
        if (lVar2 == 0) break;
        FUN_10094007f(lVar2);
      }
    }
    FUN_10091e892(*(undefined8 *)(param_1 + 0x128));
    _xmlDictFree(*(xmlDictPtr *)(param_1 + 0x100));
    pxVar3 = _xmlDictCreate();
    *(xmlDictPtr *)(param_1 + 0x100) = pxVar3;
  }
  return;
}

