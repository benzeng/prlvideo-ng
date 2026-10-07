
xmlChar * _xmlValidCtxtNormalizeAttributeValue
                    (xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr elem,xmlChar *name,xmlChar *value
                    )

{
  int iVar1;
  xmlChar *local_a8;
  xmlChar local_78 [64];
  xmlChar *local_38;
  xmlChar *local_30;
  xmlChar *local_28;
  xmlAttributePtr local_20;
  int local_14;
  xmlChar *local_10;
  
  local_20 = (xmlAttributePtr)0x0;
  local_14 = 0;
  if (doc == (xmlDocPtr)0x0) {
    local_a8 = (xmlChar *)0x0;
  }
  else if (elem == (xmlNodePtr)0x0) {
    local_a8 = (xmlChar *)0x0;
  }
  else if (name == (xmlChar *)0x0) {
    local_a8 = (xmlChar *)0x0;
  }
  else if (value == (xmlChar *)0x0) {
    local_a8 = (xmlChar *)0x0;
  }
  else {
    if ((elem->ns != (xmlNs *)0x0) && (elem->ns->prefix != (xmlChar *)0x0)) {
      local_10 = _xmlBuildQName(elem->name,elem->ns->prefix,local_78,0x32);
      if (local_10 == (xmlChar *)0x0) {
        return (xmlChar *)0x0;
      }
      local_20 = _xmlGetDtdAttrDesc(doc->intSubset,local_10,name);
      if (((local_20 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) &&
         (local_20 = _xmlGetDtdAttrDesc(doc->extSubset,local_10,name),
         local_20 != (xmlAttributePtr)0x0)) {
        local_14 = 1;
      }
      if ((local_78 != local_10) && (elem->name != local_10)) {
        (*(code *)_xmlFree)(local_10);
      }
    }
    if ((local_20 == (xmlAttributePtr)0x0) && (doc->intSubset != (_xmlDtd *)0x0)) {
      local_20 = _xmlGetDtdAttrDesc(doc->intSubset,elem->name,name);
    }
    if (((local_20 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) &&
       (local_20 = _xmlGetDtdAttrDesc(doc->extSubset,elem->name,name),
       local_20 != (xmlAttributePtr)0x0)) {
      local_14 = 1;
    }
    if (local_20 == (xmlAttributePtr)0x0) {
      local_a8 = (xmlChar *)0x0;
    }
    else if (local_20->atype == XML_ATTRIBUTE_CDATA) {
      local_a8 = (xmlChar *)0x0;
    }
    else {
      local_38 = _xmlStrdup(value);
      local_28 = value;
      if (local_38 == (xmlChar *)0x0) {
        local_a8 = (xmlChar *)0x0;
      }
      else {
        for (; local_30 = local_38, *local_28 == ' '; local_28 = local_28 + 1) {
        }
        while (*local_28 != '\0') {
          if (*local_28 == ' ') {
            for (; *local_28 == ' '; local_28 = local_28 + 1) {
            }
            if (*local_28 != '\0') {
              *local_30 = ' ';
              local_30 = local_30 + 1;
            }
          }
          else {
            *local_30 = *local_28;
            local_28 = local_28 + 1;
            local_30 = local_30 + 1;
          }
        }
        *local_30 = '\0';
        if (((doc->standalone != 0) && (local_14 == 1)) &&
           (iVar1 = _xmlStrEqual(value,local_38), iVar1 == 0)) {
          FUN_100183d12(ctxt,elem,0x212,
                        "standalone: %s on %s value had to be normalized based on external subset declaration\n"
                        ,name,elem->name,0);
          ctxt->valid = 0;
        }
        local_a8 = local_38;
      }
    }
  }
  return local_a8;
}

