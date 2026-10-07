
void _xmlXPathModValues(long param_1)

{
  long lVar1;
  xmlXPathObjectPtr val;
  double dVar2;
  undefined8 uVar3;
  
  val = (xmlXPathObjectPtr)_valuePop(param_1);
  if (val == (xmlXPathObjectPtr)0x0) {
    _xmlXPathErr(param_1,10);
  }
  else {
    dVar2 = _xmlXPathCastToNumber(val);
    _xmlXPathFreeObject(val);
    if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 3)) {
      _xmlXPathNumberFunction(param_1,1);
    }
    if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 3)) {
      _xmlXPathErr(param_1,0xb);
    }
    else if (dVar2 == 0.0) {
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = _xmlXPathNAN;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x20);
      uVar3 = _fmod(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),dVar2);
      *(undefined8 *)(lVar1 + 0x18) = uVar3;
    }
  }
  return;
}

