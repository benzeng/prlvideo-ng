
undefined8 * FUN_10090c1c9(xmlChar *param_1)

{
  xmlChar *pxVar1;
  undefined8 *local_28;
  
  local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x70);
  if (local_28 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    _memset(local_28,0,0x70);
    if (param_1 != (xmlChar *)0x0) {
      pxVar1 = _xmlStrdup(param_1);
      *local_28 = pxVar1;
    }
    local_28[1] = *local_28;
    *(undefined4 *)((long)local_28 + 0x14) = 0;
    *(undefined4 *)((long)local_28 + 0x6c) = 0;
    *(undefined4 *)(local_28 + 2) = 0;
    *(undefined4 *)(local_28 + 0xd) = 0xffffffff;
  }
  return local_28;
}

