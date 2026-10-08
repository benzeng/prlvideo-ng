
/* WARNING: Enum "enum_2029": Some values do not have unique names */

undefined8 _xmlTextReaderGetRemainder(undefined4 *param_1)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  undefined8 local_38;
  
  if (param_1 == (undefined4 *)0x0) {
    local_38 = 0;
  }
  else if (*(long *)(param_1 + 0x1c) == 0) {
    local_38 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *param_1 = 3;
    if (*(long *)(param_1 + 8) != 0) {
      _xmlStopParser(*(xmlParserCtxtPtr *)(param_1 + 8));
      if (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) {
        if (param_1[0x24] == 0) {
          FUN_100957aaf(param_1,*(undefined8 *)(*(long *)(param_1 + 8) + 0x10));
        }
        *(undefined8 *)(*(long *)(param_1 + 8) + 0x10) = 0;
      }
    }
    if ((param_1[5] & 1) == 0) {
      ppxVar2 = ___xmlGenericError();
      pxVar1 = *ppxVar2;
      ppvVar3 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar3,"Unimplemented block at %s:%d\n","xmlreader.c",0x990);
      local_38 = 0;
    }
    else {
      local_38 = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 0xc) = 0;
      param_1[5] = param_1[5] + -1;
    }
  }
  return local_38;
}

