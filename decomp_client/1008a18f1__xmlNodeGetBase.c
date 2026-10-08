
xmlChar * _xmlNodeGetBase(xmlDocPtr doc,xmlNodePtr cur)

{
  int iVar1;
  xmlChar *pxVar2;
  xmlChar *pxVar3;
  xmlChar *local_40;
  xmlNodePtr local_38;
  _xmlDoc *local_30;
  xmlChar *local_28;
  
  local_28 = (xmlChar *)0x0;
  if ((cur == (xmlNodePtr)0x0) && (doc == (xmlDocPtr)0x0)) {
    local_40 = (xmlChar *)0x0;
  }
  else {
    local_30 = doc;
    if (doc == (xmlDocPtr)0x0) {
      local_30 = cur->doc;
    }
    local_38 = cur;
    if ((local_30 == (_xmlDoc *)0x0) || (local_30->type != XML_HTML_DOCUMENT_NODE)) {
      for (; local_38 != (xmlNodePtr)0x0; local_38 = local_38->parent) {
        if (local_38->type == XML_ENTITY_DECL) {
          pxVar2 = _xmlStrdup(local_38[1]._private);
          return pxVar2;
        }
        if ((local_38->type == XML_ELEMENT_NODE) &&
           (pxVar2 = _xmlGetNsProp(local_38,(xmlChar *)"base",
                                   (xmlChar *)"http://www.w3.org/XML/1998/namespace"),
           pxVar2 != (xmlChar *)0x0)) {
          if (local_28 != (xmlChar *)0x0) {
            pxVar3 = (xmlChar *)_xmlBuildURI(local_28,pxVar2);
            if (pxVar3 == (xmlChar *)0x0) {
              (*(code *)_xmlFree)(local_28);
              (*(code *)_xmlFree)(pxVar2);
              return (xmlChar *)0x0;
            }
            (*(code *)_xmlFree)(local_28);
            (*(code *)_xmlFree)(pxVar2);
            pxVar2 = pxVar3;
          }
          local_28 = pxVar2;
          iVar1 = _xmlStrncmp(local_28,(xmlChar *)"http://",7);
          if (((iVar1 == 0) || (iVar1 = _xmlStrncmp(local_28,(xmlChar *)"ftp://",6), iVar1 == 0)) ||
             (iVar1 = _xmlStrncmp(local_28,(xmlChar *)"urn:",4), iVar1 == 0)) {
            return local_28;
          }
        }
      }
      if ((local_30 == (_xmlDoc *)0x0) || (local_30->URL == (xmlChar *)0x0)) {
        local_40 = local_28;
      }
      else if (local_28 == (xmlChar *)0x0) {
        local_40 = _xmlStrdup(local_30->URL);
      }
      else {
        local_40 = (xmlChar *)_xmlBuildURI(local_28,local_30->URL);
        (*(code *)_xmlFree)(local_28);
      }
    }
    else {
      local_38 = local_30->children;
      while ((local_38 != (xmlNodePtr)0x0 && (local_38->name != (xmlChar *)0x0))) {
        if (local_38->type == XML_ELEMENT_NODE) {
          iVar1 = _xmlStrcasecmp(local_38->name,(xmlChar *)"html");
          if (iVar1 == 0) {
            local_38 = local_38->children;
          }
          else {
            iVar1 = _xmlStrcasecmp(local_38->name,(xmlChar *)"head");
            if (iVar1 == 0) {
              local_38 = local_38->children;
            }
            else {
              iVar1 = _xmlStrcasecmp(local_38->name,(xmlChar *)"base");
              if (iVar1 == 0) {
                pxVar2 = _xmlGetProp(local_38,(xmlChar *)"href");
                return pxVar2;
              }
              local_38 = local_38->next;
            }
          }
        }
        else {
          local_38 = local_38->next;
        }
      }
      local_40 = (xmlChar *)0x0;
    }
  }
  return local_40;
}

