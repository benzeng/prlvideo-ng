
void _xmlXPathSumFunction(long param_1,int param_2)

{
  xmlXPathObjectPtr obj;
  undefined8 uVar1;
  double dVar2;
  int local_14;
  double local_10;
  
  local_10 = 0.0;
  if (param_1 != 0) {
    if (param_2 == 1) {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         ((**(int **)(param_1 + 0x20) != 1 && (**(int **)(param_1 + 0x20) != 9)))) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        obj = (xmlXPathObjectPtr)_valuePop(param_1);
        if ((obj->nodesetval != (xmlNodeSetPtr)0x0) && (obj->nodesetval->nodeNr != 0)) {
          for (local_14 = 0; local_14 < obj->nodesetval->nodeNr; local_14 = local_14 + 1) {
            dVar2 = _xmlXPathCastNodeToNumber(obj->nodesetval->nodeTab[local_14]);
            local_10 = local_10 + dVar2;
          }
        }
        uVar1 = _xmlXPathNewFloat(local_10);
        _valuePush(param_1,uVar1);
        _xmlXPathFreeObject(obj);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

