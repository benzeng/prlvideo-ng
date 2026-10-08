
xmlChar * FUN_10091a69e(long *param_1,xmlChar *param_2,xmlChar *param_3)

{
  xmlChar *pxVar1;
  xmlChar *local_28;
  
  if (*param_1 != 0) {
    (*(code *)_xmlFree)(*param_1);
    *param_1 = 0;
  }
  local_28 = param_3;
  if (param_2 != (xmlChar *)0x0) {
    pxVar1 = _xmlStrdup((xmlChar *)"{");
    *param_1 = (long)pxVar1;
    pxVar1 = _xmlStrcat((xmlChar *)*param_1,param_2);
    *param_1 = (long)pxVar1;
    pxVar1 = _xmlStrcat((xmlChar *)*param_1,(xmlChar *)"}");
    *param_1 = (long)pxVar1;
    pxVar1 = _xmlStrcat((xmlChar *)*param_1,param_3);
    *param_1 = (long)pxVar1;
    local_28 = (xmlChar *)*param_1;
  }
  return local_28;
}

