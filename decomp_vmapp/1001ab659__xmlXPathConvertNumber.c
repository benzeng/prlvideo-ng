
xmlXPathObjectPtr _xmlXPathConvertNumber(xmlXPathObjectPtr val)

{
  xmlXPathObjectPtr local_28;
  
  if (val == (xmlXPathObjectPtr)0x0) {
    local_28 = (xmlXPathObjectPtr)_xmlXPathNewFloat(0);
  }
  else {
    local_28 = val;
    if (val->type != XPATH_NUMBER) {
      _xmlXPathCastToNumber(val);
      local_28 = (xmlXPathObjectPtr)_xmlXPathNewFloat();
      _xmlXPathFreeObject(val);
    }
  }
  return local_28;
}

