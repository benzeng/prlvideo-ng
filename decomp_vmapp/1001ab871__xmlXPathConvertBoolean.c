
xmlXPathObjectPtr _xmlXPathConvertBoolean(xmlXPathObjectPtr val)

{
  int iVar1;
  xmlXPathObjectPtr local_28;
  
  if (val == (xmlXPathObjectPtr)0x0) {
    local_28 = (xmlXPathObjectPtr)_xmlXPathNewBoolean(0);
  }
  else {
    local_28 = val;
    if (val->type != XPATH_BOOLEAN) {
      iVar1 = _xmlXPathCastToBoolean(val);
      local_28 = (xmlXPathObjectPtr)_xmlXPathNewBoolean(iVar1);
      _xmlXPathFreeObject(val);
    }
  }
  return local_28;
}

