
xmlDtdPtr _xmlNewDtd(xmlDocPtr doc,xmlChar *name,xmlChar *ExternalID,xmlChar *SystemID)

{
  xmlChar *pxVar1;
  xmlRegisterNodeFunc *ppxVar2;
  xmlDtdPtr local_40;
  
  if ((doc == (xmlDocPtr)0x0) || (doc->extSubset == (_xmlDtd *)0x0)) {
    local_40 = (xmlDtdPtr)(*(code *)_xmlMalloc)(0x80);
    if (local_40 == (xmlDtdPtr)0x0) {
      FUN_1008991e0("building DTD");
      local_40 = (xmlDtdPtr)0x0;
    }
    else {
      _memset(local_40,0,0x80);
      local_40->type = XML_DTD_NODE;
      if (name != (xmlChar *)0x0) {
        pxVar1 = _xmlStrdup(name);
        local_40->name = pxVar1;
      }
      if (ExternalID != (xmlChar *)0x0) {
        pxVar1 = _xmlStrdup(ExternalID);
        local_40->ExternalID = pxVar1;
      }
      if (SystemID != (xmlChar *)0x0) {
        pxVar1 = _xmlStrdup(SystemID);
        local_40->SystemID = pxVar1;
      }
      if (doc != (xmlDocPtr)0x0) {
        doc->extSubset = local_40;
      }
      local_40->doc = doc;
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar2 = ___xmlRegisterNodeDefaultValue(), *ppxVar2 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar2 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar2)((xmlNodePtr)local_40);
      }
    }
  }
  else {
    local_40 = (xmlDtdPtr)0x0;
  }
  return local_40;
}

