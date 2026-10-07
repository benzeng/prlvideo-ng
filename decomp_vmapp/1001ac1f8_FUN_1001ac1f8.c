
int FUN_1001ac1f8(undefined8 param_1,undefined4 param_2,undefined4 param_3,xmlXPathObjectPtr param_4
                 ,xmlXPathObjectPtr param_5)

{
  xmlNodeSetPtr pxVar1;
  xmlChar *pxVar2;
  undefined8 uVar3;
  xmlXPathObjectPtr pxVar4;
  int local_4c;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  if (((param_5 == (xmlXPathObjectPtr)0x0) || (param_4 == (xmlXPathObjectPtr)0x0)) ||
     ((param_4->type != XPATH_NODESET && (param_4->type != XPATH_XSLT_TREE)))) {
    _xmlXPathFreeObject(param_4);
    _xmlXPathFreeObject(param_5);
    local_4c = 0;
  }
  else {
    pxVar1 = param_4->nodesetval;
    if (pxVar1 != (xmlNodeSetPtr)0x0) {
      for (local_20 = 0; local_20 < pxVar1->nodeNr; local_20 = local_20 + 1) {
        pxVar2 = _xmlXPathCastNodeToString(pxVar1->nodeTab[local_20]);
        if (pxVar2 != (xmlChar *)0x0) {
          uVar3 = _xmlXPathNewString(pxVar2);
          _valuePush(param_1,uVar3);
          (*(code *)_xmlFree)(pxVar2);
          pxVar4 = _xmlXPathObjectCopy(param_5);
          _valuePush(param_1,pxVar4);
          local_1c = _xmlXPathCompareValues(param_1,param_2,param_3);
          if (local_1c != 0) break;
        }
      }
    }
    _xmlXPathFreeObject(param_4);
    _xmlXPathFreeObject(param_5);
    local_4c = local_1c;
  }
  return local_4c;
}

