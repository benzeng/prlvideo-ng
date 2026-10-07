
double _xmlXPathPopNumber(long param_1)

{
  xmlXPathObjectPtr val;
  double local_28;
  double local_10;
  
  val = (xmlXPathObjectPtr)_valuePop(param_1);
  if (val == (xmlXPathObjectPtr)0x0) {
    _xmlXPatherror(param_1,"xpath.c",0x4c2,10);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 10;
    }
    local_28 = 0.0;
  }
  else {
    if (val->type == XPATH_NUMBER) {
      local_10 = val->floatval;
    }
    else {
      local_10 = _xmlXPathCastToNumber(val);
    }
    _xmlXPathFreeObject(val);
    local_28 = local_10;
  }
  return local_28;
}

