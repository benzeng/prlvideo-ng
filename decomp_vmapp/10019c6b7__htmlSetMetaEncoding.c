
int _htmlSetMetaEncoding(htmlDocPtr doc,xmlChar *encoding)

{
  _xmlNode *cur;
  int iVar1;
  int local_bc;
  xmlChar local_a8 [99];
  undefined1 local_45;
  _xmlNode *local_38;
  xmlNodePtr local_30;
  xmlChar *local_28;
  _xmlAttr *local_20;
  int local_14;
  xmlChar *local_10;
  
  if (doc == (htmlDocPtr)0x0) {
    local_bc = -1;
  }
  else {
    if (encoding != (xmlChar *)0x0) {
      _snprintf((char *)local_a8,100,"text/html; charset=%s",encoding);
      local_45 = 0;
    }
    for (local_38 = doc->children; local_38 != (_xmlNode *)0x0; local_38 = local_38->next) {
      if ((local_38->type == XML_ELEMENT_NODE) && (local_38->name != (xmlChar *)0x0)) {
        iVar1 = _xmlStrcasecmp(local_38->name,(xmlChar *)"html");
        if (iVar1 == 0) break;
        iVar1 = _xmlStrcasecmp(local_38->name,(xmlChar *)"head");
        if (iVar1 == 0) goto LAB_10019c842;
        iVar1 = _xmlStrcasecmp(local_38->name,(xmlChar *)"meta");
        if (iVar1 == 0) goto LAB_10019c8e3;
      }
    }
    if (local_38 == (_xmlNode *)0x0) {
      local_bc = -1;
    }
    else {
      for (local_38 = local_38->children; local_38 != (_xmlNode *)0x0; local_38 = local_38->next) {
        if ((local_38->type == XML_ELEMENT_NODE) && (local_38->name != (xmlChar *)0x0)) {
          iVar1 = _xmlStrcasecmp(local_38->name,(xmlChar *)"head");
          if (iVar1 == 0) break;
          iVar1 = _xmlStrcasecmp(local_38->name,(xmlChar *)"meta");
          if (iVar1 == 0) goto LAB_10019c8e3;
        }
      }
      if (local_38 == (_xmlNode *)0x0) {
        local_bc = -1;
      }
      else {
LAB_10019c842:
        if (local_38->children != (_xmlNode *)0x0) {
          local_38 = local_38->children;
LAB_10019c8e3:
          if (encoding != (xmlChar *)0x0) {
            local_30 = _xmlNewDocNode(doc,(xmlNsPtr)0x0,(xmlChar *)"meta",(xmlChar *)0x0);
            _xmlAddPrevSibling(local_38,local_30);
            _xmlNewProp(local_30,(xmlChar *)"http-equiv",(xmlChar *)"Content-Type");
            _xmlNewProp(local_30,(xmlChar *)"content",local_a8);
          }
          do {
            while( true ) {
              if (local_38 == (_xmlNode *)0x0) {
                return 0;
              }
              if (((local_38->type == XML_ELEMENT_NODE) && (local_38->name != (xmlChar *)0x0)) &&
                 (iVar1 = _xmlStrcasecmp(local_38->name,(xmlChar *)"meta"), iVar1 == 0)) break;
LAB_10019caaa:
              local_38 = local_38->next;
            }
            local_20 = local_38->properties;
            local_28 = (xmlChar *)0x0;
            local_14 = 0;
            for (; local_20 != (_xmlAttr *)0x0; local_20 = local_20->next) {
              if (((local_20->children != (_xmlNode *)0x0) &&
                  (local_20->children->type == XML_TEXT_NODE)) &&
                 (local_20->children->next == (_xmlNode *)0x0)) {
                local_10 = local_20->children->content;
                iVar1 = _xmlStrcasecmp(local_20->name,(xmlChar *)"http-equiv");
                if ((iVar1 == 0) &&
                   (iVar1 = _xmlStrcasecmp(local_10,(xmlChar *)"Content-Type"), iVar1 == 0)) {
                  local_14 = 1;
                }
                else if ((local_10 != (xmlChar *)0x0) &&
                        (iVar1 = _xmlStrcasecmp(local_20->name,(xmlChar *)"content"), iVar1 == 0)) {
                  local_28 = local_10;
                }
                if ((local_14 != 0) && (local_28 != (xmlChar *)0x0)) break;
              }
            }
            cur = local_38;
            if ((local_14 == 0) || (local_28 == (xmlChar *)0x0)) goto LAB_10019caaa;
            local_30 = local_38;
            local_38 = local_38->next;
            _xmlUnlinkNode(cur);
            _xmlFreeNode(local_30);
          } while( true );
        }
        if (encoding == (xmlChar *)0x0) {
          local_bc = 0;
        }
        else {
          local_30 = _xmlNewDocNode(doc,(xmlNsPtr)0x0,(xmlChar *)"meta",(xmlChar *)0x0);
          _xmlAddChild(local_38,local_30);
          _xmlNewProp(local_30,(xmlChar *)"http-equiv",(xmlChar *)"Content-Type");
          _xmlNewProp(local_30,(xmlChar *)"content",local_a8);
          local_bc = 0;
        }
      }
    }
  }
  return local_bc;
}

