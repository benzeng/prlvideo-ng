
xmlChar * _xmlXPathCastNumberToString(double val)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlChar local_78 [104];
  xmlChar *local_10;
  
  iVar1 = _xmlXPathIsInf(val);
  if (iVar1 == -1) {
    local_10 = _xmlStrdup((xmlChar *)"-Infinity");
  }
  else if (iVar1 == 1) {
    local_10 = _xmlStrdup((xmlChar *)"Infinity");
  }
  else {
    iVar1 = _xmlXPathIsNaN(val);
    if (iVar1 == 0) {
      if (((val == 0.0) && (!NAN(val))) && (iVar1 = FUN_1008d87aa(val), iVar1 != 0)) {
        pxVar2 = _xmlStrdup((xmlChar *)"0");
        return pxVar2;
      }
      FUN_1008db252(val,local_78,100);
      local_10 = _xmlStrdup(local_78);
    }
    else {
      local_10 = _xmlStrdup((xmlChar *)"NaN");
    }
  }
  return local_10;
}

