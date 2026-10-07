
void _xmlXPathNumberFunction(long param_1,int param_2)

{
  undefined8 uVar1;
  xmlChar *pxVar2;
  xmlXPathObjectPtr pxVar3;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      if (*(long *)(*(long *)(param_1 + 0x18) + 8) == 0) {
        uVar1 = _xmlXPathNewFloat(0);
        _valuePush(param_1,uVar1);
      }
      else {
        pxVar2 = _xmlNodeGetContent(*(xmlNodePtr *)(*(long *)(param_1 + 0x18) + 8));
        uVar1 = _xmlXPathStringEvalNumber(pxVar2);
        uVar1 = _xmlXPathNewFloat(uVar1);
        _valuePush(param_1,uVar1);
        (*(code *)_xmlFree)(pxVar2);
      }
    }
    else if (param_1 != 0) {
      if (param_2 == 1) {
        pxVar3 = (xmlXPathObjectPtr)_valuePop(param_1);
        pxVar3 = _xmlXPathConvertNumber(pxVar3);
        _valuePush(param_1,pxVar3);
      }
      else {
        _xmlXPathErr(param_1,0xc);
      }
    }
  }
  return;
}

