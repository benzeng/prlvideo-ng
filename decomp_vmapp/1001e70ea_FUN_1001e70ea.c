
undefined8 FUN_1001e70ea(undefined8 *param_1,undefined4 *param_2)

{
  xmlChar *pxVar1;
  long local_10;
  
  local_10 = 0;
  pxVar1 = (xmlChar *)FUN_1001e6a14(*param_2);
  pxVar1 = _xmlStrcat((xmlChar *)*param_1,pxVar1);
  *param_1 = pxVar1;
  pxVar1 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)" \'");
  *param_1 = pxVar1;
  pxVar1 = (xmlChar *)FUN_1001e70ae(&local_10,param_2);
  pxVar1 = _xmlStrcat((xmlChar *)*param_1,pxVar1);
  *param_1 = pxVar1;
  pxVar1 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
  *param_1 = pxVar1;
  if (local_10 != 0) {
    (*(code *)_xmlFree)(local_10);
  }
  return *param_1;
}

