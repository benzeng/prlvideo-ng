
undefined8 FUN_1009073a7(xmlHashTablePtr param_1,xmlChar *param_2)

{
  xmlChar *pxVar1;
  void *pvVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (param_1 == (xmlHashTablePtr)0x0) {
    local_38 = 0;
  }
  else {
    pxVar1 = (xmlChar *)FUN_100903f86(param_2);
    local_28 = param_2;
    if (pxVar1 != (xmlChar *)0x0) {
      local_30 = pxVar1;
      if (*pxVar1 == '\0') {
        local_30 = (xmlChar *)0x0;
      }
      local_28 = local_30;
    }
    pvVar2 = _xmlHashLookup(param_1,local_28);
    if (pvVar2 == (void *)0x0) {
      if (pxVar1 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(pxVar1);
      }
      local_38 = 0;
    }
    else if (*(int *)((long)pvVar2 + 0x18) == 0xe) {
      if (pxVar1 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(pxVar1);
      }
      local_38 = *(undefined8 *)((long)pvVar2 + 0x30);
    }
    else {
      if (pxVar1 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(pxVar1);
      }
      local_38 = 0;
    }
  }
  return local_38;
}

