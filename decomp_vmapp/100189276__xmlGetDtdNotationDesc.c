
xmlNotationPtr _xmlGetDtdNotationDesc(xmlDtdPtr dtd,xmlChar *name)

{
  xmlNotationPtr local_30;
  
  if (dtd == (xmlDtdPtr)0x0) {
    local_30 = (xmlNotationPtr)0x0;
  }
  else if (dtd->notations == (void *)0x0) {
    local_30 = (xmlNotationPtr)0x0;
  }
  else {
    local_30 = _xmlHashLookup(dtd->notations,name);
  }
  return local_30;
}

