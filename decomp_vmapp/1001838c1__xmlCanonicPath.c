
xmlChar * _xmlCanonicPath(xmlChar *param_1)

{
  byte bVar1;
  long lVar2;
  xmlChar *pxVar3;
  int iVar4;
  xmlChar *local_48;
  int local_18;
  
  if (param_1 == (xmlChar *)0x0) {
    local_48 = (xmlChar *)0x0;
  }
  else {
    lVar2 = _xmlParseURI(param_1);
    if (lVar2 == 0) {
      pxVar3 = _xmlStrstr(param_1,(xmlChar *)"://");
      if (((pxVar3 != (xmlChar *)0x0) && (iVar4 = (int)pxVar3 - (int)param_1, 0 < iVar4)) &&
         (iVar4 < 0x15)) {
        for (local_18 = 0; local_18 < iVar4; local_18 = local_18 + 1) {
          bVar1 = param_1[local_18];
          if (((bVar1 < 0x61) || (0x7a < bVar1)) && ((bVar1 < 0x41 || (0x5a < bVar1))))
          goto LAB_1001839df;
        }
        pxVar3 = (xmlChar *)_xmlURIEscapeStr(param_1,":/?_.#&;=");
        if (pxVar3 != (xmlChar *)0x0) {
          lVar2 = _xmlParseURI(pxVar3);
          if (lVar2 != 0) {
            _xmlFreeURI(lVar2);
            return pxVar3;
          }
          _xmlFreeURI(0);
        }
      }
LAB_1001839df:
      local_48 = _xmlStrdup(param_1);
    }
    else {
      _xmlFreeURI(lVar2);
      local_48 = _xmlStrdup(param_1);
    }
  }
  return local_48;
}

