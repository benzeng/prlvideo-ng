
xmlChar * _xmlValidNormalizeAttributeValue
                    (xmlDocPtr doc,xmlNodePtr elem,xmlChar *name,xmlChar *value)

{
  xmlChar *local_90;
  xmlChar local_68 [64];
  xmlChar *local_28;
  xmlChar *local_20;
  xmlAttributePtr local_18;
  xmlChar *local_10;
  
  local_18 = (xmlAttributePtr)0x0;
  if (doc == (xmlDocPtr)0x0) {
    local_90 = (xmlChar *)0x0;
  }
  else if (elem == (xmlNodePtr)0x0) {
    local_90 = (xmlChar *)0x0;
  }
  else if (name == (xmlChar *)0x0) {
    local_90 = (xmlChar *)0x0;
  }
  else if (value == (xmlChar *)0x0) {
    local_90 = (xmlChar *)0x0;
  }
  else {
    if ((elem->ns != (xmlNs *)0x0) && (elem->ns->prefix != (xmlChar *)0x0)) {
      local_10 = _xmlBuildQName(elem->name,elem->ns->prefix,local_68,0x32);
      if (local_10 == (xmlChar *)0x0) {
        return (xmlChar *)0x0;
      }
      local_18 = _xmlGetDtdAttrDesc(doc->intSubset,local_10,name);
      if ((local_18 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
        local_18 = _xmlGetDtdAttrDesc(doc->extSubset,local_10,name);
      }
      if ((local_68 != local_10) && (elem->name != local_10)) {
        (*(code *)_xmlFree)(local_10);
      }
    }
    local_18 = _xmlGetDtdAttrDesc(doc->intSubset,elem->name,name);
    if ((local_18 == (xmlAttributePtr)0x0) && (doc->extSubset != (_xmlDtd *)0x0)) {
      local_18 = _xmlGetDtdAttrDesc(doc->extSubset,elem->name,name);
    }
    if (local_18 == (xmlAttributePtr)0x0) {
      local_90 = (xmlChar *)0x0;
    }
    else if (local_18->atype == XML_ATTRIBUTE_CDATA) {
      local_90 = (xmlChar *)0x0;
    }
    else {
      local_90 = _xmlStrdup(value);
      local_20 = value;
      if (local_90 == (xmlChar *)0x0) {
        local_90 = (xmlChar *)0x0;
      }
      else {
        for (; local_28 = local_90, *local_20 == ' '; local_20 = local_20 + 1) {
        }
        while (*local_20 != '\0') {
          if (*local_20 == ' ') {
            for (; *local_20 == ' '; local_20 = local_20 + 1) {
            }
            if (*local_20 != '\0') {
              *local_28 = ' ';
              local_28 = local_28 + 1;
            }
          }
          else {
            *local_28 = *local_20;
            local_20 = local_20 + 1;
            local_28 = local_28 + 1;
          }
        }
        *local_28 = '\0';
      }
    }
  }
  return local_90;
}

