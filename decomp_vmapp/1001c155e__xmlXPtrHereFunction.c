
void _xmlXPtrHereFunction(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      if (*(long *)(*(long *)(param_1 + 0x18) + 0x78) == 0) {
        _xmlXPathErr(param_1,0x10);
      }
      else {
        uVar1 = _xmlXPtrNewLocationSetNodes(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),0);
        _valuePush(param_1,uVar1);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

