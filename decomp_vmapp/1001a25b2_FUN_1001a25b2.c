
undefined4 FUN_1001a25b2(xmlShellCtxtPtr param_1,xmlChar *param_2,xmlNodePtr param_3)

{
  xmlChar *pxVar1;
  xmlNodePtr local_20;
  
  if (((param_1 != (xmlShellCtxtPtr)0x0) && (param_3 != (xmlNodePtr)0x0)) &&
     (param_2 != (xmlChar *)0x0)) {
    pxVar1 = _xmlStrchr(param_2,'?');
    local_20 = param_3;
    if (((pxVar1 == (xmlChar *)0x0) && (pxVar1 = _xmlStrchr(param_2,'*'), pxVar1 == (xmlChar *)0x0))
       && (pxVar1 = _xmlStrchr(param_2,'.'), pxVar1 == (xmlChar *)0x0)) {
      _xmlStrchr(param_2,'[');
    }
LAB_1001a27e4:
    if (local_20 != (xmlNodePtr)0x0) {
      if (local_20->type == XML_COMMENT_NODE) {
        pxVar1 = _xmlStrstr(local_20->content,param_2);
        if (pxVar1 != (xmlChar *)0x0) {
          pxVar1 = _xmlGetNodePath(local_20);
          _fprintf(param_1->output,"%s : ",pxVar1);
          _xmlShellList(param_1,(char *)0x0,local_20,(xmlNodePtr)0x0);
        }
      }
      else if ((local_20->type == XML_TEXT_NODE) &&
              (pxVar1 = _xmlStrstr(local_20->content,param_2), pxVar1 != (xmlChar *)0x0)) {
        pxVar1 = _xmlGetNodePath(local_20->parent);
        _fprintf(param_1->output,"%s : ",pxVar1);
        _xmlShellList(param_1,(char *)0x0,local_20->parent,(xmlNodePtr)0x0);
      }
      if ((local_20->type == XML_DOCUMENT_NODE) || (local_20->type == XML_HTML_DOCUMENT_NODE)) {
        local_20 = local_20->children;
      }
      else if ((local_20->children == (_xmlNode *)0x0) || (local_20->type == XML_ENTITY_REF_NODE)) {
        if (local_20->next == (_xmlNode *)0x0) {
          do {
            if (local_20 == (xmlNodePtr)0x0) goto LAB_1001a27e4;
            if (local_20->parent != (_xmlNode *)0x0) {
              local_20 = local_20->parent;
            }
            if (local_20->next != (_xmlNode *)0x0) {
              local_20 = local_20->next;
              goto LAB_1001a27e4;
            }
          } while (local_20->parent != (_xmlNode *)0x0);
          local_20 = (xmlNodePtr)0x0;
        }
        else {
          local_20 = local_20->next;
        }
      }
      else {
        local_20 = local_20->children;
      }
      goto LAB_1001a27e4;
    }
  }
  return 0;
}

