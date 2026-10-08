
xmlAttributePtr _xmlGetDtdQAttrDesc(xmlDtdPtr dtd,xmlChar *elem,xmlChar *name,xmlChar *prefix)

{
  xmlAttributePtr local_40;
  
  if (dtd == (xmlDtdPtr)0x0) {
    local_40 = (xmlAttributePtr)0x0;
  }
  else if (dtd->attributes == (void *)0x0) {
    local_40 = (xmlAttributePtr)0x0;
  }
  else {
    local_40 = _xmlHashLookup3(dtd->attributes,name,prefix,elem);
  }
  return local_40;
}

