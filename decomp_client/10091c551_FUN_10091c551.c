
void FUN_10091c551(int *param_1,xmlChar *param_2,xmlChar *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  xmlChar *pxVar1;
  
  pxVar1 = _xmlStrdup((xmlChar *)"Internal error: ");
  pxVar1 = _xmlStrcat(pxVar1,param_2);
  pxVar1 = _xmlStrcat(pxVar1,(xmlChar *)", ");
  pxVar1 = _xmlStrcat(pxVar1,param_3);
  pxVar1 = _xmlStrcat(pxVar1,(xmlChar *)".\n");
  if (*param_1 == 2) {
    FUN_10091c105(param_1,0x71a,0,pxVar1,param_4,param_5);
  }
  else if (*param_1 == 1) {
    FUN_10091c105(param_1,0xbfd,0,pxVar1,param_4,param_5);
  }
  if (pxVar1 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(pxVar1);
  }
  return;
}

