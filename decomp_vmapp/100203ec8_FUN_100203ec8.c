
void FUN_100203ec8(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                  int param_5,int param_6)

{
  xmlChar *pxVar1;
  xmlChar *pxVar2;
  xmlChar *local_10;
  
  pxVar1 = _xmlStrdup((xmlChar *)"\'");
  pxVar2 = (xmlChar *)FUN_100208cf9(*param_2);
  pxVar1 = _xmlStrcat(pxVar1,pxVar2);
  local_10 = _xmlStrcat(pxVar1,(xmlChar *)"\' has to be");
  if (param_4 == 0) {
    local_10 = _xmlStrcat(local_10,(xmlChar *)" equal to");
  }
  if (param_4 == 1) {
    local_10 = _xmlStrcat(local_10,(xmlChar *)" greater than");
  }
  else {
    local_10 = _xmlStrcat(local_10,(xmlChar *)" less than");
  }
  if (param_5 != 0) {
    local_10 = _xmlStrcat(local_10,(xmlChar *)" or equal to");
  }
  pxVar1 = _xmlStrcat(local_10,(xmlChar *)" \'");
  pxVar2 = (xmlChar *)FUN_100208cf9(*param_3);
  pxVar1 = _xmlStrcat(pxVar1,pxVar2);
  if (param_6 == 0) {
    local_10 = _xmlStrcat(pxVar1,(xmlChar *)"\'");
  }
  else {
    local_10 = _xmlStrcat(pxVar1,(xmlChar *)"\' of the base type");
  }
  FUN_1001ea46a(param_1,0x6b5,0,param_2,*(undefined8 *)(param_2 + 10),local_10,0);
  if (local_10 != (xmlChar *)0x0) {
    (*(code *)_xmlFree)(local_10);
  }
  return;
}

