
int _xmlXPathPopBoolean(long param_1)

{
  xmlXPathObjectPtr val;
  int local_24;
  int local_c;
  
  val = (xmlXPathObjectPtr)_valuePop(param_1);
  if (val == (xmlXPathObjectPtr)0x0) {
    _xmlXPatherror(param_1,"xpath.c",0x4a7,10);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 10;
    }
    local_24 = 0;
  }
  else {
    if (val->type == XPATH_BOOLEAN) {
      local_c = val->boolval;
    }
    else {
      local_c = _xmlXPathCastToBoolean(val);
    }
    _xmlXPathFreeObject(val);
    local_24 = local_c;
  }
  return local_24;
}

