
/* WARNING: Enum "enum_2029": Some values do not have unique names */

undefined4 _xmlTextReaderClose(undefined4 *param_1)

{
  undefined4 local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    local_14 = 0xffffffff;
  }
  else {
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *param_1 = 4;
    if (*(long *)(param_1 + 8) != 0) {
      _xmlStopParser(*(xmlParserCtxtPtr *)(param_1 + 8));
      if (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) {
        if (param_1[0x24] == 0) {
          FUN_100957aaf(param_1,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
        }
        *(undefined8 *)(*(long *)(param_1 + 8) + 0x10) = 0;
      }
    }
    if ((*(long *)(param_1 + 0xc) != 0) && ((param_1[5] & 1) != 0)) {
      _xmlFreeParserInputBuffer(*(xmlParserInputBufferPtr *)(param_1 + 0xc));
      param_1[5] = param_1[5] + -1;
    }
    local_14 = 0;
  }
  return local_14;
}

