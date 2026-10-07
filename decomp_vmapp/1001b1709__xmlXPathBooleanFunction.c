
void _xmlXPathBooleanFunction(long param_1,int param_2)

{
  xmlXPathObjectPtr pxVar1;
  
  if (param_1 != 0) {
    if (param_2 == 1) {
      pxVar1 = (xmlXPathObjectPtr)_valuePop(param_1);
      if (pxVar1 == (xmlXPathObjectPtr)0x0) {
        _xmlXPathErr(param_1,10);
      }
      else {
        pxVar1 = _xmlXPathConvertBoolean(pxVar1);
        _valuePush(param_1,pxVar1);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

