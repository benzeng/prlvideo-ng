
undefined8 FUN_10091aa12(undefined8 *param_1,undefined4 *param_2)

{
  xmlChar *pxVar1;
  long local_10;
  
  local_10 = 0;
  pxVar1 = (xmlChar *)FUN_10091a33c(*param_2);
  pxVar1 = _xmlStrcat((xmlChar *)*param_1,pxVar1);
  *param_1 = pxVar1;
  pxVar1 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)" \'");
  *param_1 = pxVar1;
  pxVar1 = (xmlChar *)FUN_10091a9d6(&local_10,param_2);
  pxVar1 = _xmlStrcat((xmlChar *)*param_1,pxVar1);
  *param_1 = pxVar1;
  pxVar1 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"\'");
  *param_1 = pxVar1;
  if (local_10 != 0) {
    (*(code *)_xmlFree)(local_10);
  }
  return *param_1;
}

