
xmlDtdPtr _xmlCreateIntSubset(xmlDocPtr doc,xmlChar *name,xmlChar *ExternalID,xmlChar *SystemID)

{
  _xmlNode *p_Var1;
  xmlDtdPtr pxVar2;
  xmlChar *pxVar3;
  xmlRegisterNodeFunc *ppxVar4;
  xmlDtdPtr local_50;
  _xmlNode *local_10;
  
  if ((doc == (xmlDocPtr)0x0) || (pxVar2 = _xmlGetIntSubset(doc), pxVar2 == (xmlDtdPtr)0x0)) {
    local_50 = (xmlDtdPtr)(*(code *)_xmlMalloc)(0x80);
    if (local_50 == (xmlDtdPtr)0x0) {
      FUN_1001658b8("building internal subset");
      local_50 = (xmlDtdPtr)0x0;
    }
    else {
      _memset(local_50,0,0x80);
      local_50->type = XML_DTD_NODE;
      if (name != (xmlChar *)0x0) {
        pxVar3 = _xmlStrdup(name);
        local_50->name = pxVar3;
        if (local_50->name == (xmlChar *)0x0) {
          FUN_1001658b8("building internal subset");
          (*(code *)_xmlFree)(local_50);
          return (xmlDtdPtr)0x0;
        }
      }
      if (ExternalID != (xmlChar *)0x0) {
        pxVar3 = _xmlStrdup(ExternalID);
        local_50->ExternalID = pxVar3;
        if (local_50->ExternalID == (xmlChar *)0x0) {
          FUN_1001658b8("building internal subset");
          if (local_50->name != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_50->name);
          }
          (*(code *)_xmlFree)(local_50);
          return (xmlDtdPtr)0x0;
        }
      }
      if (SystemID != (xmlChar *)0x0) {
        pxVar3 = _xmlStrdup(SystemID);
        local_50->SystemID = pxVar3;
        if (local_50->SystemID == (xmlChar *)0x0) {
          FUN_1001658b8("building internal subset");
          if (local_50->name != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_50->name);
          }
          if (local_50->ExternalID != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_50->ExternalID);
          }
          (*(code *)_xmlFree)(local_50);
          return (xmlDtdPtr)0x0;
        }
      }
      if (doc != (xmlDocPtr)0x0) {
        doc->intSubset = local_50;
        local_50->parent = doc;
        local_50->doc = doc;
        if (doc->children == (_xmlNode *)0x0) {
          doc->children = (_xmlNode *)local_50;
          doc->last = (_xmlNode *)local_50;
        }
        else if (doc->type == XML_HTML_DOCUMENT_NODE) {
          p_Var1 = doc->children;
          p_Var1->prev = (_xmlNode *)local_50;
          local_50->next = p_Var1;
          doc->children = (_xmlNode *)local_50;
        }
        else {
          for (local_10 = doc->children;
              (local_10 != (_xmlNode *)0x0 && (local_10->type != XML_ELEMENT_NODE));
              local_10 = local_10->next) {
          }
          if (local_10 == (_xmlNode *)0x0) {
            local_50->prev = doc->last;
            local_50->prev->next = (_xmlNode *)local_50;
            local_50->next = (_xmlNode *)0x0;
            doc->last = (_xmlNode *)local_50;
          }
          else {
            local_50->next = local_10;
            local_50->prev = local_10->prev;
            if (local_50->prev == (_xmlNode *)0x0) {
              doc->children = (_xmlNode *)local_50;
            }
            else {
              local_50->prev->next = (_xmlNode *)local_50;
            }
            local_10->prev = (_xmlNode *)local_50;
          }
        }
      }
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar4 = ___xmlRegisterNodeDefaultValue(), *ppxVar4 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar4 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar4)((xmlNodePtr)local_50);
      }
    }
  }
  else {
    local_50 = (xmlDtdPtr)0x0;
  }
  return local_50;
}

