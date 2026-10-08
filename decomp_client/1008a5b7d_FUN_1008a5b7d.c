
undefined8 * FUN_1008a5b7d(long param_1)

{
  xmlChar *pxVar1;
  undefined8 *local_28;
  
  if (param_1 == 0) {
    local_28 = (undefined8 *)0x0;
  }
  else if (*(long *)(param_1 + 0x60) == 0) {
    local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
    if (local_28 == (undefined8 *)0x0) {
      FUN_1008991e0("allocating the XML namespace");
      local_28 = (undefined8 *)0x0;
    }
    else {
      *local_28 = 0;
      local_28[1] = 0;
      local_28[2] = 0;
      local_28[3] = 0;
      local_28[4] = 0;
      *(undefined4 *)(local_28 + 1) = 0x12;
      pxVar1 = _xmlStrdup((xmlChar *)"http://www.w3.org/XML/1998/namespace");
      local_28[2] = pxVar1;
      pxVar1 = _xmlStrdup((xmlChar *)"xml");
      local_28[3] = pxVar1;
      *(undefined8 **)(param_1 + 0x60) = local_28;
    }
  }
  else {
    local_28 = *(undefined8 **)(param_1 + 0x60);
  }
  return local_28;
}

