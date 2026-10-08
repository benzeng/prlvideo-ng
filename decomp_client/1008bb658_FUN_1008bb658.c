
undefined8 * FUN_1008bb658(long *param_1)

{
  xmlChar *pxVar1;
  undefined8 *local_28;
  
  local_28 = (undefined8 *)(*(code *)_xmlMalloc)(0x18);
  if (local_28 == (undefined8 *)0x0) {
    FUN_1008b7324(0,"malloc failed");
    local_28 = (undefined8 *)0x0;
  }
  else {
    if (*param_1 == 0) {
      *local_28 = 0;
    }
    else {
      pxVar1 = _xmlStrdup((xmlChar *)*param_1);
      *local_28 = pxVar1;
    }
    if (param_1[1] == 0) {
      local_28[1] = 0;
    }
    else {
      pxVar1 = _xmlStrdup((xmlChar *)param_1[1]);
      local_28[1] = pxVar1;
    }
    if (param_1[2] == 0) {
      local_28[2] = 0;
    }
    else {
      pxVar1 = _xmlStrdup((xmlChar *)param_1[2]);
      local_28[2] = pxVar1;
    }
  }
  return local_28;
}

