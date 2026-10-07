
undefined4 _xmlSchemaValidateDoc(long param_1,xmlDocPtr param_2)

{
  xmlNodePtr pxVar1;
  undefined4 local_1c;
  
  if ((param_1 == 0) || (param_2 == (xmlDocPtr)0x0)) {
    local_1c = 0xffffffff;
  }
  else {
    *(xmlDocPtr *)(param_1 + 0x30) = param_2;
    pxVar1 = _xmlDocGetRootElement(param_2);
    *(xmlNodePtr *)(param_1 + 0x68) = pxVar1;
    if (*(long *)(param_1 + 0x68) == 0) {
      FUN_1001e8d5c(param_1,0x750,param_2,0,"The document has no document element",0,0);
      local_1c = *(undefined4 *)(param_1 + 0x60);
    }
    else {
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x68);
      local_1c = FUN_100212cd6(param_1);
    }
  }
  return local_1c;
}

