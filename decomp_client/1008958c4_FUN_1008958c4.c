
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int FUN_1008958c4(_xmlDoc *param_1,long param_2,_xmlSAXHandler *param_3,void *param_4,int param_5,
                 long param_6,long param_7,undefined8 *param_8)

{
  xmlChar *pxVar1;
  int local_7c;
  xmlChar local_48;
  xmlChar local_47;
  xmlChar local_46;
  xmlChar local_45;
  xmlParserCtxtPtr local_38;
  xmlDocPtr local_30;
  xmlNodePtr local_28;
  _xmlSAXHandler *local_20;
  int local_18;
  xmlCharEncoding local_14;
  _xmlNode *local_10;
  
  local_20 = (_xmlSAXHandler *)0x0;
  local_18 = 0;
  if (param_5 < 0x29) {
    if (param_8 != (undefined8 *)0x0) {
      *param_8 = 0;
    }
    if ((param_6 == 0) && (param_7 == 0)) {
      local_7c = 1;
    }
    else if (param_1 == (_xmlDoc *)0x0) {
      local_7c = 1;
    }
    else {
      local_38 = (xmlParserCtxtPtr)_xmlCreateEntityParserCtxt(param_6,param_7,0);
      if (local_38 == (xmlParserCtxtPtr)0x0) {
        local_7c = 0x1b;
      }
      else {
        local_38->userData = local_38;
        if (param_2 == 0) {
          local_38->_private = (void *)0x0;
          local_38->validate = 0;
          local_38->external = 2;
          local_38->loadsubset = 0;
        }
        else {
          local_38->_private = *(void **)(param_2 + 0x1a8);
          local_38->loadsubset = *(int *)(param_2 + 0x1b0);
          local_38->validate = *(int *)(param_2 + 0x9c);
          local_38->external = *(int *)(param_2 + 0x94);
          local_38->record_info = *(int *)(param_2 + 0x68);
          (local_38->node_seq).maximum = *(ulong *)(param_2 + 0x70);
          (local_38->node_seq).length = *(ulong *)(param_2 + 0x78);
          (local_38->node_seq).buffer = *(xmlParserNodeInfo **)(param_2 + 0x80);
        }
        if (param_3 != (_xmlSAXHandler *)0x0) {
          local_20 = local_38->sax;
          local_38->sax = param_3;
          if (param_4 != (void *)0x0) {
            local_38->userData = param_4;
          }
        }
        FUN_1008785ae(local_38);
        local_30 = _xmlNewDoc((xmlChar *)"1.0");
        if (local_30 == (xmlDocPtr)0x0) {
          (local_38->node_seq).maximum = 0;
          (local_38->node_seq).length = 0;
          (local_38->node_seq).buffer = (xmlParserNodeInfo *)0x0;
          _xmlFreeParserCtxt(local_38);
          local_7c = 1;
        }
        else {
          if (param_1 == (_xmlDoc *)0x0) {
            if (param_2 != 0) {
              local_30->dict = *(_xmlDict **)(param_2 + 0x1c8);
            }
          }
          else {
            local_30->intSubset = param_1->intSubset;
            local_30->extSubset = param_1->extSubset;
            local_30->dict = param_1->dict;
          }
          _xmlDictReference(local_30->dict);
          if (param_1->URL != (xmlChar *)0x0) {
            pxVar1 = _xmlStrdup(param_1->URL);
            local_30->URL = pxVar1;
          }
          local_28 = _xmlNewDocNode(local_30,(xmlNsPtr)0x0,(xmlChar *)"pseudoroot",(xmlChar *)0x0);
          if (local_28 == (xmlNodePtr)0x0) {
            if (param_3 != (_xmlSAXHandler *)0x0) {
              local_38->sax = local_20;
            }
            (local_38->node_seq).maximum = 0;
            (local_38->node_seq).length = 0;
            (local_38->node_seq).buffer = (xmlParserNodeInfo *)0x0;
            _xmlFreeParserCtxt(local_38);
            local_30->intSubset = (_xmlDtd *)0x0;
            local_30->extSubset = (_xmlDtd *)0x0;
            _xmlFreeDoc(local_30);
            local_7c = 1;
          }
          else {
            _xmlAddChild((xmlNodePtr)local_30,local_28);
            _nodePush(local_38,local_30->children);
            if (param_1 == (_xmlDoc *)0x0) {
              local_38->myDoc = local_30;
            }
            else {
              local_38->myDoc = param_1;
              local_28->doc = param_1;
            }
            if (local_38->progressive == 0) {
              if ((long)local_38->input->end - (long)local_38->input->cur < 0xfa) {
                FUN_100879cbc(local_38);
              }
            }
            if (3 < (long)local_38->input->end - (long)local_38->input->cur) {
              local_48 = *local_38->input->cur;
              local_47 = local_38->input->cur[1];
              local_46 = local_38->input->cur[2];
              local_45 = local_38->input->cur[3];
              local_14 = _xmlDetectCharEncoding(&local_48,4);
              if (local_14 != XML_CHAR_ENCODING_ERROR) {
                _xmlSwitchEncoding(local_38,local_14);
              }
            }
            if (((((*local_38->input->cur == '<') && (local_38->input->cur[1] == '?')) &&
                 (local_38->input->cur[2] == 'x')) &&
                ((local_38->input->cur[3] == 'm' && (local_38->input->cur[4] == 'l')))) &&
               (((local_38->input->cur[5] == ' ' ||
                 ((8 < local_38->input->cur[5] && (local_38->input->cur[5] < 0xb)))) ||
                (local_38->input->cur[5] == '\r')))) {
              _xmlParseTextDecl(local_38);
            }
            local_38->instate = XML_PARSER_CONTENT;
            local_38->depth = param_5;
            _xmlParseContent(local_38);
            if ((*local_38->input->cur == '<') && (local_38->input->cur[1] == '/')) {
              FUN_100877520(local_38,0x55,0);
            }
            else if (*local_38->input->cur != '\0') {
              FUN_100877520(local_38,0x56,0);
            }
            if (local_38->node != local_30->children) {
              FUN_100877520(local_38,0x55,0);
            }
            if (local_38->wellFormed == 0) {
              if (local_38->errNo == 0) {
                local_18 = 1;
              }
              else {
                local_18 = local_38->errNo;
              }
            }
            else {
              if (param_8 != (undefined8 *)0x0) {
                local_10 = local_30->children->children;
                *param_8 = local_10;
                for (; local_10 != (_xmlNode *)0x0; local_10 = local_10->next) {
                  local_10->parent = (_xmlNode *)0x0;
                }
                local_30->children->children = (_xmlNode *)0x0;
              }
              local_18 = 0;
            }
            if (param_3 != (_xmlSAXHandler *)0x0) {
              local_38->sax = local_20;
            }
            *(ulong *)(param_2 + 0x70) = (local_38->node_seq).maximum;
            *(ulong *)(param_2 + 0x78) = (local_38->node_seq).length;
            *(xmlParserNodeInfo **)(param_2 + 0x80) = (local_38->node_seq).buffer;
            (local_38->node_seq).maximum = 0;
            (local_38->node_seq).length = 0;
            (local_38->node_seq).buffer = (xmlParserNodeInfo *)0x0;
            _xmlFreeParserCtxt(local_38);
            local_30->intSubset = (_xmlDtd *)0x0;
            local_30->extSubset = (_xmlDtd *)0x0;
            _xmlFreeDoc(local_30);
            local_7c = local_18;
          }
        }
      }
    }
  }
  else {
    local_7c = 0x59;
  }
  return local_7c;
}

