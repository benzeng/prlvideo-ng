
void _xmlXPathConcatFunction(long param_1,int param_2)

{
  xmlXPathObjectPtr obj;
  xmlXPathObjectPtr obj_00;
  xmlChar *pxVar1;
  int local_34;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 < 2) {
    if (param_1 == 0) {
      return;
    }
    if (param_2 != 2) {
      _xmlXPathErr(param_1,0xc);
      return;
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
    _xmlXPathStringFunction(param_1,1);
  }
  obj = (xmlXPathObjectPtr)_valuePop(param_1);
  if ((obj == (xmlXPathObjectPtr)0x0) || (local_34 = param_2, obj->type != XPATH_STRING)) {
    _xmlXPathFreeObject(obj);
  }
  else {
    while (local_34 = local_34 + -1, 0 < local_34) {
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathStringFunction(param_1,1);
      }
      obj_00 = (xmlXPathObjectPtr)_valuePop(param_1);
      if ((obj_00 == (xmlXPathObjectPtr)0x0) || (obj_00->type != XPATH_STRING)) {
        _xmlXPathFreeObject(obj_00);
        _xmlXPathFreeObject(obj);
        _xmlXPathErr(param_1,0xb);
        return;
      }
      pxVar1 = _xmlStrcat(obj_00->stringval,obj->stringval);
      obj_00->stringval = obj->stringval;
      obj->stringval = pxVar1;
      _xmlXPathFreeObject(obj_00);
    }
    _valuePush(param_1,obj);
  }
  return;
}

