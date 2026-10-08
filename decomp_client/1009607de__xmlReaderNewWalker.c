
/* WARNING: Enum "enum_2029": Some values do not have unique names */

undefined4 _xmlReaderNewWalker(undefined4 *param_1,long param_2)

{
  xmlDictPtr pxVar1;
  undefined4 local_1c;
  
  if (param_2 == 0) {
    local_1c = 0xffffffff;
  }
  else if (param_1 == (undefined4 *)0x0) {
    local_1c = 0xffffffff;
  }
  else {
    if (*(long *)(param_1 + 0xc) != 0) {
      _xmlFreeParserInputBuffer(*(xmlParserInputBufferPtr *)(param_1 + 0xc));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _xmlCtxtReset(*(xmlParserCtxtPtr *)(param_1 + 8));
    }
    param_1[0x2c] = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[5] = 2;
    *(long *)(param_1 + 2) = param_2;
    param_1[6] = 0;
    if (*(long *)(param_1 + 0x28) == 0) {
      if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x1c8) == 0)) {
        pxVar1 = _xmlDictCreate();
        *(xmlDictPtr *)(param_1 + 0x28) = pxVar1;
      }
      else {
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x1c8);
      }
    }
    local_1c = 0;
  }
  return local_1c;
}

