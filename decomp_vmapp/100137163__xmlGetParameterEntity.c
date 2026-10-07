
xmlEntityPtr _xmlGetParameterEntity(xmlDocPtr doc,xmlChar *name)

{
  xmlEntityPtr local_30;
  
  if (doc == (xmlDocPtr)0x0) {
    local_30 = (xmlEntityPtr)0x0;
  }
  else if (((doc->intSubset == (_xmlDtd *)0x0) || (doc->intSubset->pentities == (void *)0x0)) ||
          (local_30 = (xmlEntityPtr)FUN_100137144(doc->intSubset->pentities,name),
          local_30 == (xmlEntityPtr)0x0)) {
    if ((doc->extSubset == (_xmlDtd *)0x0) || (doc->extSubset->pentities == (void *)0x0)) {
      local_30 = (xmlEntityPtr)0x0;
    }
    else {
      local_30 = (xmlEntityPtr)FUN_100137144(doc->extSubset->pentities,name);
    }
  }
  return local_30;
}

