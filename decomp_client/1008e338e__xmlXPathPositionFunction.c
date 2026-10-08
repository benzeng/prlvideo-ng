
void _xmlXPathPositionFunction(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      if (*(int *)(*(long *)(param_1 + 0x18) + 0x6c) < 0) {
        _xmlXPathErr(param_1,0xe);
      }
      else {
        uVar1 = _xmlXPathNewFloat((double)*(int *)(*(long *)(param_1 + 0x18) + 0x6c));
        _valuePush(param_1,uVar1);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

