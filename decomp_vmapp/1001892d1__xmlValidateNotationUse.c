
int _xmlValidateNotationUse(xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlChar *notationName)

{
  int local_34;
  xmlNotationPtr local_10;
  
  if ((doc == (xmlDocPtr)0x0) || (doc->intSubset == (_xmlDtd *)0x0)) {
    local_34 = -1;
  }
  else {
    local_10 = _xmlGetDtdNotationDesc(doc->intSubset,notationName);
    if ((local_10 == (xmlNotationPtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
      local_10 = _xmlGetDtdNotationDesc(doc->extSubset,notationName);
    }
    if ((local_10 == (xmlNotationPtr)0x0) && (ctxt != (xmlValidCtxtPtr)0x0)) {
      FUN_100183d12(ctxt,doc,0x219,"NOTATION %s is not declared\n",notationName,0,0);
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
  }
  return local_34;
}

