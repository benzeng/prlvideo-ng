
long _xmlSchemaNewParserCtxt(xmlChar *param_1)

{
  xmlDictPtr pxVar1;
  xmlChar *pxVar2;
  undefined8 local_28;
  
  if (param_1 == (xmlChar *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_10092b76e();
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      pxVar1 = _xmlDictCreate();
      *(xmlDictPtr *)(local_28 + 0x98) = pxVar1;
      pxVar2 = _xmlDictLookup(*(xmlDictPtr *)(local_28 + 0x98),param_1,-1);
      *(xmlChar **)(local_28 + 0x50) = pxVar2;
    }
  }
  return local_28;
}

