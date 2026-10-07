
xmlDocPtr _xmlCopyDoc(xmlDocPtr doc,int recursive)

{
  char *pcVar1;
  xmlChar *pxVar2;
  xmlDtdPtr pxVar3;
  xmlNsPtr pxVar4;
  _xmlNode *p_Var5;
  xmlDocPtr local_30;
  _xmlNode *local_10;
  
  if (doc == (xmlDocPtr)0x0) {
    local_30 = (xmlDocPtr)0x0;
  }
  else {
    local_30 = _xmlNewDoc(doc->version);
    if (local_30 == (xmlDocPtr)0x0) {
      local_30 = (xmlDocPtr)0x0;
    }
    else {
      if (doc->name != (char *)0x0) {
        pcVar1 = (char *)(*(code *)_xmlMemStrdup)(doc->name);
        local_30->name = pcVar1;
      }
      if (doc->encoding != (xmlChar *)0x0) {
        pxVar2 = _xmlStrdup(doc->encoding);
        local_30->encoding = pxVar2;
      }
      if (doc->URL != (xmlChar *)0x0) {
        pxVar2 = _xmlStrdup(doc->URL);
        local_30->URL = pxVar2;
      }
      local_30->charset = doc->charset;
      local_30->compression = doc->compression;
      local_30->standalone = doc->standalone;
      if (recursive != 0) {
        local_30->last = (_xmlNode *)0x0;
        local_30->children = (_xmlNode *)0x0;
        if (doc->intSubset != (_xmlDtd *)0x0) {
          pxVar3 = _xmlCopyDtd(doc->intSubset);
          local_30->intSubset = pxVar3;
          _xmlSetTreeDoc((xmlNodePtr)local_30->intSubset,local_30);
          local_30->intSubset->parent = local_30;
        }
        if (doc->oldNs != (_xmlNs *)0x0) {
          pxVar4 = _xmlCopyNamespaceList(doc->oldNs);
          local_30->oldNs = pxVar4;
        }
        if (doc->children != (_xmlNode *)0x0) {
          p_Var5 = (_xmlNode *)FUN_10016c9a1(doc->children,local_30,local_30);
          local_30->children = p_Var5;
          local_30->last = (_xmlNode *)0x0;
          for (local_10 = local_30->children; local_10 != (_xmlNode *)0x0; local_10 = local_10->next
              ) {
            if (local_10->next == (_xmlNode *)0x0) {
              local_30->last = local_10;
            }
          }
        }
      }
    }
  }
  return local_30;
}

