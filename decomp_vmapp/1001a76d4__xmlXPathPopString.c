
xmlChar * _xmlXPathPopString(long param_1)

{
  xmlXPathObjectPtr val;
  xmlChar *local_28;
  
  val = (xmlXPathObjectPtr)_valuePop(param_1);
  if (val == (xmlXPathObjectPtr)0x0) {
    _xmlXPatherror(param_1,"xpath.c",0x4dd,10);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 10;
    }
    local_28 = (xmlChar *)0x0;
  }
  else {
    local_28 = _xmlXPathCastToString(val);
    if (val->stringval == local_28) {
      val->stringval = (xmlChar *)0x0;
    }
    _xmlXPathFreeObject(val);
  }
  return local_28;
}

