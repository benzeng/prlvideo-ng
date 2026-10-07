
xmlChar * FUN_1002325d8(undefined8 param_1,xmlNodePtr param_2)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlChar *pxVar3;
  xmlChar *local_30;
  xmlNodePtr local_28;
  
  if ((((((param_2 == (xmlNodePtr)0x0) || (param_2->ns == (xmlNs *)0x0)) ||
        (iVar1 = _xmlStrEqual(param_2->name,(xmlChar *)"data"), iVar1 == 0)) ||
       (iVar1 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
       iVar1 == 0)) &&
      (((param_2 == (xmlNodePtr)0x0 || (param_2->ns == (xmlNs *)0x0)) ||
       ((iVar1 = _xmlStrEqual(param_2->name,(xmlChar *)"value"), iVar1 == 0 ||
        (iVar1 = _xmlStrEqual(param_2->ns->href,PTR_s_http___relaxng_org_ns_structure__1011151b0),
        iVar1 == 0)))))) ||
     (local_30 = _xmlGetProp(param_2,(xmlChar *)"datatypeLibrary"), local_30 == (xmlChar *)0x0)) {
    for (local_28 = param_2->parent;
        (local_28 != (xmlNodePtr)0x0 && (local_28->type == XML_ELEMENT_NODE));
        local_28 = local_28->parent) {
      pxVar2 = _xmlGetProp(local_28,(xmlChar *)"datatypeLibrary");
      if (pxVar2 != (xmlChar *)0x0) {
        if (*pxVar2 == '\0') {
          (*(code *)_xmlFree)(pxVar2);
          return (xmlChar *)0x0;
        }
        pxVar3 = (xmlChar *)_xmlURIEscapeStr(pxVar2,":/#?");
        if (pxVar3 == (xmlChar *)0x0) {
          return pxVar2;
        }
        (*(code *)_xmlFree)(pxVar2);
        return pxVar3;
      }
    }
    local_30 = (xmlChar *)0x0;
  }
  else if (*local_30 == '\0') {
    (*(code *)_xmlFree)(local_30);
    local_30 = (xmlChar *)0x0;
  }
  else {
    pxVar2 = (xmlChar *)_xmlURIEscapeStr(local_30,":/#?");
    if (pxVar2 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_30);
      local_30 = pxVar2;
    }
  }
  return local_30;
}

