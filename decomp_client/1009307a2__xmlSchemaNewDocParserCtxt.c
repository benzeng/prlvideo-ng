
long _xmlSchemaNewDocParserCtxt(long param_1)

{
  xmlDictPtr pxVar1;
  undefined8 local_28;
  
  if (param_1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_10092b76e();
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      *(long *)(local_28 + 0x58) = param_1;
      pxVar1 = _xmlDictCreate();
      *(xmlDictPtr *)(local_28 + 0x98) = pxVar1;
      *(undefined4 *)(local_28 + 0x60) = 1;
    }
  }
  return local_28;
}

