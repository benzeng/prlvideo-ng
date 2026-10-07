
xmlChar * FUN_1001f8576(xmlDictPtr param_1,xmlChar *param_2,xmlNodePtr param_3)

{
  xmlChar *pxVar1;
  xmlChar *local_18;
  
  if (param_2 != (xmlChar *)0x0) {
    if (param_3 == (xmlNodePtr)0x0) {
      return param_2;
    }
    pxVar1 = _xmlNodeGetBase(param_3->doc,param_3);
    if (pxVar1 == (xmlChar *)0x0) {
      local_18 = (xmlChar *)_xmlBuildURI(param_2,param_3->doc->URL);
    }
    else {
      local_18 = (xmlChar *)_xmlBuildURI(param_2,pxVar1);
      (*(code *)_xmlFree)(pxVar1);
    }
    if (local_18 != (xmlChar *)0x0) {
      pxVar1 = _xmlDictLookup(param_1,local_18,-1);
      (*(code *)_xmlFree)(local_18);
      return pxVar1;
    }
  }
  return (xmlChar *)0x0;
}

