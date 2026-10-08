
void _xmlXPathMultValues(long param_1)

{
  xmlXPathObjectPtr val;
  double dVar1;
  
  val = (xmlXPathObjectPtr)_valuePop(param_1);
  if (val == (xmlXPathObjectPtr)0x0) {
    _xmlXPathErr(param_1,10);
  }
  else {
    dVar1 = _xmlXPathCastToNumber(val);
    _xmlXPathFreeObject(val);
    if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 3)) {
      _xmlXPathNumberFunction(param_1,1);
    }
    if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 3)) {
      _xmlXPathErr(param_1,0xb);
    }
    else {
      *(double *)(*(long *)(param_1 + 0x20) + 0x18) =
           *(double *)(*(long *)(param_1 + 0x20) + 0x18) * dVar1;
    }
  }
  return;
}

