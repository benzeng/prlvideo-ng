
int _xmlIsID(xmlDocPtr doc,xmlNodePtr elem,xmlAttrPtr attr)

{
  int iVar1;
  xmlChar *local_c0;
  xmlChar *local_b8;
  xmlChar local_98 [64];
  xmlChar local_58 [56];
  xmlAttributePtr local_20;
  xmlChar *local_18;
  xmlChar *local_10;
  
  if ((attr == (xmlAttrPtr)0x0) || (attr->name == (xmlChar *)0x0)) {
    return 0;
  }
  if ((((attr->ns != (xmlNs *)0x0) && (attr->ns->prefix != (xmlChar *)0x0)) &&
      (iVar1 = _strcmp((char *)attr->name,"id"), iVar1 == 0)) &&
     (iVar1 = _strcmp((char *)attr->ns->prefix,"xml"), iVar1 == 0)) {
    return 1;
  }
  if (doc == (xmlDocPtr)0x0) {
    return 0;
  }
  if ((doc->intSubset == (_xmlDtd *)0x0) && (doc->extSubset == (_xmlDtd *)0x0)) {
    return 0;
  }
  if (doc->type == XML_HTML_DOCUMENT_NODE) {
    iVar1 = _xmlStrEqual((xmlChar *)"id",attr->name);
    if ((((iVar1 != 0) || (iVar1 = _xmlStrEqual((xmlChar *)"name",attr->name), iVar1 != 0)) &&
        (elem != (xmlNodePtr)0x0)) &&
       (iVar1 = _xmlStrEqual(elem->name,(xmlChar *)"input"), iVar1 == 0)) {
      return 1;
    }
    return 0;
  }
  if (elem == (xmlNodePtr)0x0) {
    return 0;
  }
  local_20 = (xmlAttributePtr)0x0;
  if ((elem->ns == (xmlNs *)0x0) || (elem->ns->prefix == (xmlChar *)0x0)) {
    local_c0 = elem->name;
  }
  else {
    local_c0 = _xmlBuildQName(elem->name,elem->ns->prefix,local_58,0x32);
  }
  local_18 = local_c0;
  if ((attr->ns == (xmlNs *)0x0) || (attr->ns->prefix == (xmlChar *)0x0)) {
    local_b8 = attr->name;
  }
  else {
    local_b8 = _xmlBuildQName(attr->name,attr->ns->prefix,local_98,0x32);
  }
  local_10 = local_b8;
  if ((((local_18 != (xmlChar *)0x0) && (local_b8 != (xmlChar *)0x0)) &&
      (local_20 = _xmlGetDtdAttrDesc(doc->intSubset,local_18,local_b8),
      local_20 == (xmlAttributePtr)0x0)) && (doc->extSubset != (_xmlDtd *)0x0)) {
    local_20 = _xmlGetDtdAttrDesc(doc->extSubset,local_18,local_10);
  }
  if ((local_98 != local_10) && (attr->name != local_10)) {
    (*(code *)_xmlFree)(local_10);
  }
  if ((local_58 != local_18) && (elem->name != local_18)) {
    (*(code *)_xmlFree)(local_18);
  }
  if ((local_20 != (xmlAttributePtr)0x0) && (local_20->atype == XML_ATTRIBUTE_ID)) {
    return 1;
  }
  return 0;
}

