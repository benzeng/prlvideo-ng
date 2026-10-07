
void _xmlXPathStringLengthFunction(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  xmlChar *utf;
  xmlXPathObjectPtr obj;
  
  if (param_2 == 0) {
    if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      if (*(long *)(*(long *)(param_1 + 0x18) + 8) == 0) {
        uVar2 = _xmlXPathNewFloat(0);
        _valuePush(param_1,uVar2);
      }
      else {
        utf = _xmlXPathCastNodeToString(*(xmlNodePtr *)(*(long *)(param_1 + 0x18) + 8));
        iVar1 = _xmlUTF8Strlen(utf);
        uVar2 = _xmlXPathNewFloat((double)iVar1);
        _valuePush(param_1,uVar2);
        (*(code *)_xmlFree)(utf);
      }
    }
  }
  else if (param_1 != 0) {
    if (param_2 == 1) {
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathStringFunction(param_1,1);
      }
      if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        obj = (xmlXPathObjectPtr)_valuePop(param_1);
        iVar1 = _xmlUTF8Strlen(obj->stringval);
        uVar2 = _xmlXPathNewFloat((double)iVar1);
        _valuePush(param_1,uVar2);
        _xmlXPathFreeObject(obj);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

