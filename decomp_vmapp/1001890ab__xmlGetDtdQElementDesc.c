
xmlElementPtr _xmlGetDtdQElementDesc(xmlDtdPtr dtd,xmlChar *name,xmlChar *prefix)

{
  xmlElementPtr local_38;
  
  if (dtd == (xmlDtdPtr)0x0) {
    local_38 = (xmlElementPtr)0x0;
  }
  else if (dtd->elements == (void *)0x0) {
    local_38 = (xmlElementPtr)0x0;
  }
  else {
    local_38 = _xmlHashLookup2(dtd->elements,name,prefix);
  }
  return local_38;
}

