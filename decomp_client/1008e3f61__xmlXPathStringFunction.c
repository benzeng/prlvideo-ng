
void _xmlXPathStringFunction(long param_1,int param_2)

{
  xmlChar *pxVar1;
  undefined8 uVar2;
  xmlXPathObjectPtr pxVar3;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      pxVar1 = _xmlXPathCastNodeToString(*(xmlNodePtr *)(*(long *)(param_1 + 0x18) + 8));
      uVar2 = _xmlXPathWrapString(pxVar1);
      _valuePush(param_1,uVar2);
    }
    else if (param_1 != 0) {
      if (param_2 == 1) {
        pxVar3 = (xmlXPathObjectPtr)_valuePop(param_1);
        if (pxVar3 == (xmlXPathObjectPtr)0x0) {
          _xmlXPathErr(param_1,10);
        }
        else {
          pxVar3 = _xmlXPathConvertString(pxVar3);
          _valuePush(param_1,pxVar3);
        }
      }
      else {
        _xmlXPathErr(param_1,0xc);
      }
    }
  }
  return;
}

