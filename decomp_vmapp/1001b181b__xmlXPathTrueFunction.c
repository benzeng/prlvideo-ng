
void _xmlXPathTrueFunction(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = _xmlXPathNewBoolean(1);
      _valuePush(param_1,uVar1);
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

