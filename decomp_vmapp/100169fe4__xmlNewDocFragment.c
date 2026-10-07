
xmlNodePtr _xmlNewDocFragment(xmlDocPtr doc)

{
  xmlRegisterNodeFunc *ppxVar1;
  xmlNodePtr local_28;
  
  local_28 = (xmlNodePtr)(*(code *)_xmlMalloc)(0x78);
  if (local_28 == (xmlNodePtr)0x0) {
    FUN_1001658b8("building fragment");
    local_28 = (xmlNodePtr)0x0;
  }
  else {
    _memset(local_28,0,0x78);
    local_28->type = XML_DOCUMENT_FRAG_NODE;
    local_28->doc = doc;
    if ((___xmlRegisterCallbacks != 0) &&
       (ppxVar1 = ___xmlRegisterNodeDefaultValue(), *ppxVar1 != (xmlRegisterNodeFunc)0x0)) {
      ppxVar1 = ___xmlRegisterNodeDefaultValue();
      (**ppxVar1)(local_28);
    }
  }
  return local_28;
}

