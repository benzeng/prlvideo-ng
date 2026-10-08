
xmlChar * _xmlGetNodePath(xmlNodePtr node)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  xmlChar *local_e8;
  xmlChar local_d8 [99];
  undefined1 local_75;
  xmlNodePtr local_68;
  _xmlNode *local_60;
  _xmlNode *local_58;
  xmlChar *local_50;
  xmlChar *local_48;
  ulong local_40;
  char *local_38;
  char *local_30;
  xmlChar *local_28;
  uint local_1c;
  
  local_50 = (xmlChar *)0x0;
  local_1c = 0;
  if (node == (xmlNodePtr)0x0) {
    local_e8 = (xmlChar *)0x0;
  }
  else {
    local_40 = 500;
    local_50 = (xmlChar *)(*(code *)_xmlMallocAtomic)(500);
    if (local_50 == (xmlChar *)0x0) {
      FUN_1008991e0("getting node path");
      local_e8 = (xmlChar *)0x0;
    }
    else {
      local_38 = (char *)(*(code *)_xmlMallocAtomic)(local_40);
      if (local_38 == (char *)0x0) {
        FUN_1008991e0("getting node path");
        (*(code *)_xmlFree)(local_50);
        local_e8 = (xmlChar *)0x0;
      }
      else {
        *local_50 = '\0';
        local_68 = node;
        do {
          local_28 = "";
          local_30 = "?";
          local_1c = 0;
          if ((local_68->type == XML_DOCUMENT_NODE) || (local_68->type == XML_HTML_DOCUMENT_NODE)) {
            if (*local_50 == '/') break;
            local_30 = "/";
            local_58 = (_xmlNode *)0x0;
          }
          else if (local_68->type == XML_ELEMENT_NODE) {
            local_30 = "/";
            local_28 = local_68->name;
            if (local_68->ns != (xmlNs *)0x0) {
              if (local_68->ns->prefix == (xmlChar *)0x0) {
                _snprintf((char *)local_d8,99,"%s",local_68->name);
              }
              else {
                _snprintf((char *)local_d8,99,"%s:%s",local_68->ns->prefix,local_68->name);
              }
              local_75 = 0;
              local_28 = local_d8;
            }
            local_58 = local_68->parent;
            for (local_60 = local_68->prev; local_60 != (_xmlNode *)0x0; local_60 = local_60->prev)
            {
              if (((local_60->type == XML_ELEMENT_NODE) &&
                  (iVar3 = _xmlStrEqual(local_68->name,local_60->name), iVar3 != 0)) &&
                 ((local_60->ns == local_68->ns ||
                  (((local_60->ns != (xmlNs *)0x0 && (local_68->ns != (xmlNs *)0x0)) &&
                   (iVar3 = _xmlStrEqual(local_68->ns->prefix,local_60->ns->prefix), iVar3 != 0)))))
                 ) {
                local_1c = local_1c + 1;
              }
            }
            if (local_1c == 0) {
              local_60 = local_68->next;
              while ((local_60 != (_xmlNode *)0x0 && (local_1c == 0))) {
                if (((local_60->type == XML_ELEMENT_NODE) &&
                    (iVar3 = _xmlStrEqual(local_68->name,local_60->name), iVar3 != 0)) &&
                   ((local_60->ns == local_68->ns ||
                    (((local_60->ns != (xmlNs *)0x0 && (local_68->ns != (xmlNs *)0x0)) &&
                     (iVar3 = _xmlStrEqual(local_68->ns->prefix,local_60->ns->prefix), iVar3 != 0)))
                    ))) {
                  local_1c = local_1c + 1;
                }
                local_60 = local_60->next;
              }
              if (local_1c != 0) {
                local_1c = 1;
              }
            }
            else {
              local_1c = local_1c + 1;
            }
          }
          else if (local_68->type == XML_COMMENT_NODE) {
            local_30 = "/";
            local_28 = "comment()";
            local_58 = local_68->parent;
            for (local_60 = local_68->prev; local_60 != (_xmlNode *)0x0; local_60 = local_60->prev)
            {
              if (local_60->type == XML_COMMENT_NODE) {
                local_1c = local_1c + 1;
              }
            }
            if (local_1c == 0) {
              local_60 = local_68->next;
              while ((local_60 != (_xmlNode *)0x0 && (local_1c == 0))) {
                if (local_60->type == XML_COMMENT_NODE) {
                  local_1c = 1;
                }
                local_60 = local_60->next;
              }
              if (local_1c != 0) {
                local_1c = 1;
              }
            }
            else {
              local_1c = local_1c + 1;
            }
          }
          else if ((local_68->type == XML_TEXT_NODE) || (local_68->type == XML_CDATA_SECTION_NODE))
          {
            local_30 = "/";
            local_28 = "text()";
            local_58 = local_68->parent;
            for (local_60 = local_68->prev; local_60 != (_xmlNode *)0x0; local_60 = local_60->prev)
            {
              if ((local_68->type == XML_TEXT_NODE) || (local_68->type == XML_CDATA_SECTION_NODE)) {
                local_1c = local_1c + 1;
              }
            }
            if (local_1c == 0) {
              local_60 = local_68->next;
              while ((local_60 != (_xmlNode *)0x0 && (local_1c == 0))) {
                if ((local_60->type == XML_TEXT_NODE) || (local_60->type == XML_CDATA_SECTION_NODE))
                {
                  local_1c = 1;
                }
                local_60 = local_60->next;
              }
              if (local_1c != 0) {
                local_1c = 1;
              }
            }
            else {
              local_1c = local_1c + 1;
            }
          }
          else if (local_68->type == XML_PI_NODE) {
            local_30 = "/";
            _snprintf((char *)local_d8,99,"processing-instruction(\'%s\')",local_68->name);
            local_75 = 0;
            local_28 = local_d8;
            local_58 = local_68->parent;
            for (local_60 = local_68->prev; local_60 != (_xmlNode *)0x0; local_60 = local_60->prev)
            {
              if ((local_60->type == XML_PI_NODE) &&
                 (iVar3 = _xmlStrEqual(local_68->name,local_60->name), iVar3 != 0)) {
                local_1c = local_1c + 1;
              }
            }
            if (local_1c == 0) {
              local_60 = local_68->next;
              while ((local_60 != (_xmlNode *)0x0 && (local_1c == 0))) {
                if ((local_60->type == XML_PI_NODE) &&
                   (iVar3 = _xmlStrEqual(local_68->name,local_60->name), iVar3 != 0)) {
                  local_1c = local_1c + 1;
                }
                local_60 = local_60->next;
              }
              if (local_1c != 0) {
                local_1c = 1;
              }
            }
            else {
              local_1c = local_1c + 1;
            }
          }
          else if (local_68->type == XML_ATTRIBUTE_NODE) {
            local_30 = "/@";
            local_28 = local_68->name;
            if (local_68->ns != (xmlNs *)0x0) {
              if (local_68->ns->prefix == (xmlChar *)0x0) {
                _snprintf((char *)local_d8,99,"%s",local_68->name);
              }
              else {
                _snprintf((char *)local_d8,99,"%s:%s",local_68->ns->prefix,local_68->name);
              }
              local_75 = 0;
              local_28 = local_d8;
            }
            local_58 = local_68->parent;
          }
          else {
            local_58 = local_68->parent;
          }
          iVar3 = _xmlStrlen(local_50);
          pcVar2 = local_38;
          if (local_40 < (long)iVar3 + 0x78U) {
            lVar1 = local_40 * 2;
            iVar3 = _xmlStrlen(local_50);
            local_40 = lVar1 + iVar3 + 0x78;
            local_48 = (xmlChar *)(*(code *)_xmlRealloc)(local_50,local_40);
            if (local_48 == (xmlChar *)0x0) {
              FUN_1008991e0("getting node path");
              (*(code *)_xmlFree)(local_38);
              (*(code *)_xmlFree)(local_50);
              return (xmlChar *)0x0;
            }
            local_50 = local_48;
            local_48 = (xmlChar *)(*(code *)_xmlRealloc)(local_38,local_40);
            pcVar2 = (char *)local_48;
            if (local_48 == (xmlChar *)0x0) {
              FUN_1008991e0("getting node path");
              (*(code *)_xmlFree)(local_38);
              (*(code *)_xmlFree)(local_50);
              return (xmlChar *)0x0;
            }
          }
          local_38 = pcVar2;
          if (local_1c == 0) {
            _snprintf(local_38,local_40,"%s%s%s",local_30,local_28,local_50);
          }
          else {
            _snprintf(local_38,local_40,"%s%s[%d]%s",local_30,local_28,(ulong)local_1c,local_50);
          }
          _snprintf((char *)local_50,local_40,"%s",local_38);
          local_68 = local_58;
        } while (local_58 != (_xmlNode *)0x0);
        (*(code *)_xmlFree)(local_38);
        local_e8 = local_50;
      }
    }
  }
  return local_e8;
}

