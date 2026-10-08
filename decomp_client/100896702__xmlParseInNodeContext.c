
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserErrors
_xmlParseInNodeContext(xmlNodePtr node,char *data,int datalen,int options,xmlNodePtr *lst)

{
  xmlNodePtr cur;
  long lVar1;
  xmlParserErrors local_70;
  uint local_60;
  _xmlDoc *local_50;
  xmlParserCtxtPtr local_48;
  _xmlDoc *local_40;
  xmlNodePtr local_30;
  int local_28;
  xmlParserErrors local_24;
  xmlNs *local_20;
  xmlChar *local_18;
  xmlChar *local_10;
  
  local_28 = 0;
  if ((((lst == (xmlNodePtr *)0x0) || (node == (xmlNodePtr)0x0)) || (data == (char *)0x0)) ||
     (datalen < 0)) {
    local_70 = XML_ERR_INTERNAL_ERROR;
  }
  else if ((node->type < XML_DTD_NODE) &&
          (local_50 = (_xmlDoc *)node, (1L << ((byte)node->type & 0x3f) & 0x23beU) != 0)) {
    for (; ((local_50 != (_xmlDoc *)0x0 && (local_50->type != XML_ELEMENT_NODE)) &&
           ((local_50->type != XML_DOCUMENT_NODE && (local_50->type != XML_HTML_DOCUMENT_NODE))));
        local_50 = (_xmlDoc *)local_50->parent) {
    }
    if (local_50 == (_xmlDoc *)0x0) {
      local_70 = XML_ERR_INTERNAL_ERROR;
    }
    else {
      if (local_50->type == XML_ELEMENT_NODE) {
        local_40 = local_50->doc;
      }
      else {
        local_40 = local_50;
      }
      if (local_40 == (_xmlDoc *)0x0) {
        local_70 = XML_ERR_INTERNAL_ERROR;
      }
      else {
        if (local_40->type == XML_DOCUMENT_NODE) {
          local_48 = (xmlParserCtxtPtr)_xmlCreateMemoryParserCtxt(data,datalen);
        }
        else {
          if (local_40->type != XML_HTML_DOCUMENT_NODE) {
            return XML_ERR_INTERNAL_ERROR;
          }
          local_48 = _htmlCreateMemoryParserCtxt(data,datalen);
        }
        if (local_48 == (xmlParserCtxtPtr)0x0) {
          local_70 = XML_ERR_NO_MEMORY;
        }
        else {
          cur = _xmlNewComment((xmlChar *)0x0);
          if (cur == (xmlNodePtr)0x0) {
            _xmlFreeParserCtxt(local_48);
            local_70 = XML_ERR_NO_MEMORY;
          }
          else {
            _xmlAddChild((xmlNodePtr)local_50,cur);
            if (local_40->dict == (_xmlDict *)0x0) {
              local_60 = options | 0x1000;
            }
            else {
              if (local_48->dict != (xmlDictPtr)0x0) {
                _xmlDictFree(local_48->dict);
              }
              local_48->dict = local_40->dict;
              local_60 = options;
            }
            _xmlCtxtUseOptions(local_48,local_60);
            FUN_1008785ae(local_48);
            local_48->myDoc = local_40;
            if (local_50->type == XML_ELEMENT_NODE) {
              _nodePush(local_48,local_50);
              for (local_30 = (xmlNodePtr)local_50;
                  (local_30 != (xmlNodePtr)0x0 && (local_30->type == XML_ELEMENT_NODE));
                  local_30 = local_30->parent) {
                for (local_20 = local_30->nsDef; local_20 != (xmlNs *)0x0; local_20 = local_20->next
                    ) {
                  if (local_48->dict == (xmlDictPtr)0x0) {
                    local_18 = local_20->prefix;
                    local_10 = local_20->href;
                  }
                  else {
                    local_18 = _xmlDictLookup(local_48->dict,local_20->prefix,-1);
                    local_10 = _xmlDictLookup(local_48->dict,local_20->href,-1);
                  }
                  lVar1 = FUN_10088a9f3(local_48,local_18);
                  if (lVar1 == 0) {
                    FUN_100878ca6(local_48,local_18,local_10);
                    local_28 = local_28 + 1;
                  }
                }
              }
              local_48->instate = XML_PARSER_CONTENT;
            }
            if ((local_48->validate != 0) || (local_48->replaceEntities != 0)) {
              local_48->loadsubset = local_48->loadsubset | 8;
            }
            _xmlParseContent(local_48);
            FUN_100878f14(local_48,local_28);
            if ((*local_48->input->cur == '<') && (local_48->input->cur[1] == '/')) {
              FUN_100877520(local_48,0x55,0);
            }
            else if (*local_48->input->cur != '\0') {
              FUN_100877520(local_48,0x56,0);
            }
            if ((local_48->node != (xmlNodePtr)0x0) && ((_xmlDoc *)local_48->node != local_50)) {
              FUN_100877520(local_48,0x55,0);
              local_48->wellFormed = 0;
            }
            if (local_48->wellFormed == 0) {
              if (local_48->errNo == 0) {
                local_24 = XML_ERR_INTERNAL_ERROR;
              }
              else {
                local_24 = local_48->errNo;
              }
            }
            else {
              local_24 = XML_ERR_OK;
            }
            local_30 = cur->next;
            cur->next = (_xmlNode *)0x0;
            local_50->last = cur;
            if (local_30 != (_xmlNode *)0x0) {
              local_30->prev = (_xmlNode *)0x0;
            }
            *lst = local_30;
            for (; local_30 != (_xmlNode *)0x0; local_30 = local_30->next) {
              local_30->parent = (_xmlNode *)0x0;
            }
            _xmlUnlinkNode(cur);
            _xmlFreeNode(cur);
            if (local_24 != XML_ERR_OK) {
              _xmlFreeNodeList(*lst);
              *lst = (xmlNodePtr)0x0;
            }
            if (local_40->dict != (_xmlDict *)0x0) {
              local_48->dict = (xmlDictPtr)0x0;
            }
            _xmlFreeParserCtxt(local_48);
            local_70 = local_24;
          }
        }
      }
    }
  }
  else {
    local_70 = XML_ERR_INTERNAL_ERROR;
  }
  return local_70;
}

