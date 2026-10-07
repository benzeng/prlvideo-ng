
int _xmlIsRef(xmlDocPtr doc,xmlNodePtr elem,xmlAttrPtr attr)

{
  int local_34;
  _xmlDoc *local_20;
  xmlAttributePtr local_10;
  
  if (attr == (xmlAttrPtr)0x0) {
    local_34 = 0;
  }
  else {
    local_20 = doc;
    if ((doc == (xmlDocPtr)0x0) && (local_20 = attr->doc, local_20 == (_xmlDoc *)0x0)) {
      local_34 = 0;
    }
    else if ((local_20->intSubset == (_xmlDtd *)0x0) && (local_20->extSubset == (_xmlDtd *)0x0)) {
      local_34 = 0;
    }
    else if (local_20->type == XML_HTML_DOCUMENT_NODE) {
      local_34 = 0;
    }
    else if (elem == (xmlNodePtr)0x0) {
      local_34 = 0;
    }
    else {
      local_10 = _xmlGetDtdAttrDesc(local_20->intSubset,elem->name,attr->name);
      if ((local_10 == (xmlAttributePtr)0x0) && (local_20->extSubset != (_xmlDtd *)0x0)) {
        local_10 = _xmlGetDtdAttrDesc(local_20->extSubset,elem->name,attr->name);
      }
      if ((local_10 == (xmlAttributePtr)0x0) ||
         ((local_10->atype != XML_ATTRIBUTE_IDREF && (local_10->atype != XML_ATTRIBUTE_IDREFS)))) {
        local_34 = 0;
      }
      else {
        local_34 = 1;
      }
    }
  }
  return local_34;
}

