
int _xmlXPathCastStringToBoolean(xmlChar *val)

{
  int iVar1;
  
  if ((val != (xmlChar *)0x0) && (iVar1 = _xmlStrlen(val), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

