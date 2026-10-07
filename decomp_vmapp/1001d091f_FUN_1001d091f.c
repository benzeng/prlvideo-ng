
undefined8
FUN_1001d091f(xmlNodePtr param_1,undefined4 param_2,undefined8 param_3,xmlChar *param_4,
             xmlChar *param_5,undefined4 param_6,undefined8 param_7)

{
  xmlGenericErrorFunc pxVar1;
  bool bVar2;
  xmlChar *pxVar3;
  xmlChar *pxVar4;
  long lVar5;
  xmlGenericErrorFunc *ppxVar6;
  void **ppvVar7;
  undefined8 local_80;
  xmlChar *local_38;
  undefined8 local_20;
  
  bVar2 = true;
  local_38 = (xmlChar *)0x0;
  local_20 = 0;
  if (param_4 != (xmlChar *)0x0) {
    local_38 = _xmlGetProp(param_1,param_4);
    if (local_38 == (xmlChar *)0x0) {
      FUN_1001ceeac(0,param_1,0x672,"%s entry lacks \'%s\'\n",param_3,param_4,0);
      bVar2 = false;
    }
  }
  pxVar3 = _xmlGetProp(param_1,param_5);
  if (pxVar3 == (xmlChar *)0x0) {
    FUN_1001ceeac(0,param_1,0x672,"%s entry lacks \'%s\'\n",param_3,param_5,0);
    bVar2 = false;
  }
  if (bVar2) {
    pxVar4 = _xmlNodeGetBase(param_1->doc,param_1);
    lVar5 = _xmlBuildURI(pxVar3,pxVar4);
    if (lVar5 == 0) {
      FUN_1001ceeac(0,param_1,0x673,"%s entry \'%s\' broken ?: %s\n",param_3,param_5,pxVar3);
    }
    else {
      if (1 < DAT_1011b7f00) {
        if (local_38 == (xmlChar *)0x0) {
          ppxVar6 = ___xmlGenericError();
          pxVar1 = *ppxVar6;
          ppvVar7 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar7,"Found %s: \'%s\'\n",param_3,lVar5);
        }
        else {
          ppxVar6 = ___xmlGenericError();
          pxVar1 = *ppxVar6;
          ppvVar7 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar7,"Found %s: \'%s\' \'%s\'\n",param_3,local_38,lVar5);
        }
      }
      local_20 = FUN_1001cef6b(param_2,local_38,pxVar3,lVar5,param_6,param_7);
    }
    if (local_38 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_38);
    }
    if (pxVar3 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(pxVar3);
    }
    if (pxVar4 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(pxVar4);
    }
    if (lVar5 != 0) {
      (*(code *)_xmlFree)(lVar5);
    }
    local_80 = local_20;
  }
  else {
    if (local_38 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_38);
    }
    if (pxVar3 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(pxVar3);
    }
    local_80 = 0;
  }
  return local_80;
}

