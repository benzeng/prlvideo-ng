
undefined4 * _xmlXPathNewValueTree(xmlNodePtr param_1)

{
  xmlNodeSetPtr pxVar1;
  undefined4 *local_28;
  
  local_28 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
  if (local_28 == (undefined4 *)0x0) {
    FUN_1008d87c3(0,"creating result value tree\n");
    local_28 = (undefined4 *)0x0;
  }
  else {
    _memset(local_28,0,0x48);
    *local_28 = 9;
    local_28[4] = 1;
    *(xmlNodePtr *)(local_28 + 10) = param_1;
    pxVar1 = _xmlXPathNodeSetCreate(param_1);
    *(xmlNodeSetPtr *)(local_28 + 2) = pxVar1;
  }
  return local_28;
}

