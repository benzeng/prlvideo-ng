
long FUN_10092b7e0(xmlChar *param_1,xmlDictPtr param_2)

{
  xmlChar *pxVar1;
  undefined8 local_30;
  
  local_30 = FUN_10092b76e();
  if (local_30 == 0) {
    local_30 = 0;
  }
  else {
    *(xmlDictPtr *)(local_30 + 0x98) = param_2;
    _xmlDictReference(param_2);
    if (param_1 != (xmlChar *)0x0) {
      pxVar1 = _xmlDictLookup(param_2,param_1,-1);
      *(xmlChar **)(local_30 + 0x50) = pxVar1;
    }
  }
  return local_30;
}

