
xmlEntityPtr _xmlGetDocEntity(xmlDocPtr doc,xmlChar *name)

{
  xmlEntityPtr local_30;
  
  if ((doc == (xmlDocPtr)0x0) ||
     ((((doc->intSubset == (_xmlDtd *)0x0 || (doc->intSubset->entities == (void *)0x0)) ||
       (local_30 = (xmlEntityPtr)FUN_100137144(doc->intSubset->entities,name),
       local_30 == (xmlEntityPtr)0x0)) &&
      (((doc->standalone == 1 || (doc->extSubset == (_xmlDtd *)0x0)) ||
       ((doc->extSubset->entities == (void *)0x0 ||
        (local_30 = (xmlEntityPtr)FUN_100137144(doc->extSubset->entities,name),
        local_30 == (xmlEntityPtr)0x0)))))))) {
    local_30 = _xmlGetPredefinedEntity(name);
  }
  return local_30;
}

