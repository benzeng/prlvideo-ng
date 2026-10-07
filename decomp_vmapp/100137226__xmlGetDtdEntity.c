
xmlEntityPtr _xmlGetDtdEntity(xmlDocPtr doc,xmlChar *name)

{
  xmlEntityPtr local_30;
  
  if (doc == (xmlDocPtr)0x0) {
    local_30 = (xmlEntityPtr)0x0;
  }
  else if ((doc->extSubset == (_xmlDtd *)0x0) || (doc->extSubset->entities == (void *)0x0)) {
    local_30 = (xmlEntityPtr)0x0;
  }
  else {
    local_30 = (xmlEntityPtr)FUN_100137144(doc->extSubset->entities,name);
  }
  return local_30;
}

