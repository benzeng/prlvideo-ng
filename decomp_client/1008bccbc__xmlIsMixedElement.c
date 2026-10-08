
int _xmlIsMixedElement(xmlDocPtr doc,xmlChar *name)

{
  xmlElementTypeVal xVar1;
  int local_30;
  xmlElementPtr local_10;
  
  if ((doc == (xmlDocPtr)0x0) || (doc->intSubset == (_xmlDtd *)0x0)) {
    local_30 = -1;
  }
  else {
    local_10 = _xmlGetDtdElementDesc(doc->intSubset,name);
    if ((local_10 == (xmlElementPtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
      local_10 = _xmlGetDtdElementDesc(doc->extSubset,name);
    }
    if (local_10 == (xmlElementPtr)0x0) {
      local_30 = -1;
    }
    else {
      xVar1 = local_10->etype;
      if (xVar1 < XML_ELEMENT_TYPE_ELEMENT) {
        if (xVar1 == XML_ELEMENT_TYPE_UNDEFINED) {
          local_30 = -1;
        }
        else {
          local_30 = 1;
        }
      }
      else if (xVar1 == XML_ELEMENT_TYPE_ELEMENT) {
        local_30 = 0;
      }
      else {
        local_30 = 1;
      }
    }
  }
  return local_30;
}

