
undefined4 * _xmlXPathNewCString(xmlChar *param_1)

{
  xmlChar *pxVar1;
  undefined4 *local_28;
  
  local_28 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
  if (local_28 == (undefined4 *)0x0) {
    FUN_1008d87c3(0,"creating string object\n");
    local_28 = (undefined4 *)0x0;
  }
  else {
    _memset(local_28,0,0x48);
    *local_28 = 4;
    pxVar1 = _xmlStrdup(param_1);
    *(xmlChar **)(local_28 + 8) = pxVar1;
  }
  return local_28;
}

