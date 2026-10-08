
void _xmlXPathIdFunction(long param_1,int param_2)

{
  xmlXPathObjectPtr pxVar1;
  xmlChar *pxVar2;
  xmlNodeSetPtr obj;
  undefined8 uVar3;
  xmlNodeSetPtr local_28;
  int local_c;
  
  if (param_1 != 0) {
    if (param_2 == 1) {
      pxVar1 = (xmlXPathObjectPtr)_valuePop(param_1);
      if (pxVar1 == (xmlXPathObjectPtr)0x0) {
        _xmlXPathErr(param_1,10);
      }
      else if ((pxVar1->type == XPATH_NODESET) || (pxVar1->type == XPATH_XSLT_TREE)) {
        local_28 = _xmlXPathNodeSetCreate((xmlNodePtr)0x0);
        if (pxVar1->nodesetval != (xmlNodeSetPtr)0x0) {
          for (local_c = 0; local_c < pxVar1->nodesetval->nodeNr; local_c = local_c + 1) {
            pxVar2 = _xmlXPathCastNodeToString(pxVar1->nodesetval->nodeTab[local_c]);
            obj = (xmlNodeSetPtr)FUN_1008e3581(**(undefined8 **)(param_1 + 0x18),pxVar2);
            local_28 = (xmlNodeSetPtr)_xmlXPathNodeSetMerge(local_28,obj);
            _xmlXPathFreeNodeSet(obj);
            if (pxVar2 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(pxVar2);
            }
          }
        }
        _xmlXPathFreeObject(pxVar1);
        uVar3 = _xmlXPathWrapNodeSet(local_28);
        _valuePush(param_1,uVar3);
      }
      else {
        pxVar1 = _xmlXPathConvertString(pxVar1);
        uVar3 = FUN_1008e3581(**(undefined8 **)(param_1 + 0x18),pxVar1->stringval);
        uVar3 = _xmlXPathWrapNodeSet(uVar3);
        _valuePush(param_1,uVar3);
        _xmlXPathFreeObject(pxVar1);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

