
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

int _xmlParseCtxtExternalEntity(xmlParserCtxtPtr ctx,xmlChar *URL,xmlChar *ID,xmlNodePtr *lst)

{
  xmlChar *pxVar1;
  int local_6c;
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
  xmlNodePtr local_10;
  
  local_20 = (_xmlSAXHandler *)0x0;
  local_18 = 0;
  if (ctx == (xmlParserCtxtPtr)0x0) {
    local_6c = -1;
  }
  else if (ctx->depth < 0x29) {
    if (lst != (xmlNodePtr *)0x0) {
      *lst = (xmlNodePtr)0x0;
    }
    if ((URL == (xmlChar *)0x0) && (ID == (xmlChar *)0x0)) {
      local_6c = -1;
    }
    else if (ctx->myDoc == (xmlDocPtr)0x0) {
      local_6c = -1;
    }
    else {
      local_38 = (xmlParserCtxtPtr)_xmlCreateEntityParserCtxt(URL,ID,0);
      if (local_38 == (xmlParserCtxtPtr)0x0) {
        local_6c = -1;
      }
      else {
        local_38->userData = local_38;
        local_38->_private = ctx->_private;
        local_20 = local_38->sax;
        local_38->sax = ctx->sax;
        FUN_100144c86(local_38);
        local_30 = _xmlNewDoc((xmlChar *)"1.0");
        if (local_30 == (xmlDocPtr)0x0) {
          _xmlFreeParserCtxt(local_38);
          local_6c = -1;
        }
        else {
          if (ctx->myDoc->dict != (_xmlDict *)0x0) {
            local_30->dict = ctx->myDoc->dict;
            _xmlDictReference(local_30->dict);
          }
          if (ctx->myDoc != (xmlDocPtr)0x0) {
            local_30->intSubset = ctx->myDoc->intSubset;
            local_30->extSubset = ctx->myDoc->extSubset;
          }
          if (ctx->myDoc->URL != (xmlChar *)0x0) {
            pxVar1 = _xmlStrdup(ctx->myDoc->URL);
            local_30->URL = pxVar1;
          }
          local_28 = _xmlNewDocNode(local_30,(xmlNsPtr)0x0,(xmlChar *)"pseudoroot",(xmlChar *)0x0);
          if (local_28 == (xmlNodePtr)0x0) {
            local_38->sax = local_20;
            _xmlFreeParserCtxt(local_38);
            local_30->intSubset = (_xmlDtd *)0x0;
            local_30->extSubset = (_xmlDtd *)0x0;
            _xmlFreeDoc(local_30);
            local_6c = -1;
          }
          else {
            _xmlAddChild((xmlNodePtr)local_30,local_28);
            _nodePush(local_38,local_30->children);
            if (ctx->myDoc == (xmlDocPtr)0x0) {
              local_38->myDoc = local_30;
            }
            else {
              local_38->myDoc = ctx->myDoc;
              local_30->children->doc = ctx->myDoc;
            }
            if (local_38->progressive == 0) {
              if ((long)local_38->input->end - (long)local_38->input->cur < 0xfa) {
                FUN_100146394(local_38);
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
            local_38->validate = ctx->validate;
            local_38->valid = ctx->valid;
            local_38->loadsubset = ctx->loadsubset;
            local_38->depth = ctx->depth + 1;
            local_38->replaceEntities = ctx->replaceEntities;
            if (local_38->validate == 0) {
              (local_38->vctxt).error = (xmlValidityErrorFunc)0x0;
              (local_38->vctxt).warning = (xmlValidityWarningFunc)0x0;
            }
            else {
              (local_38->vctxt).error = (ctx->vctxt).error;
              (local_38->vctxt).warning = (ctx->vctxt).warning;
            }
            (local_38->vctxt).nodeTab = (xmlNodePtr *)0x0;
            (local_38->vctxt).nodeNr = 0;
            (local_38->vctxt).nodeMax = 0;
            (local_38->vctxt).node = (xmlNodePtr)0x0;
            if (local_38->dict != (xmlDictPtr)0x0) {
              _xmlDictFree(local_38->dict);
            }
            local_38->dict = ctx->dict;
            pxVar1 = _xmlDictLookup(local_38->dict,(xmlChar *)"xml",3);
            local_38->str_xml = pxVar1;
            pxVar1 = _xmlDictLookup(local_38->dict,(xmlChar *)"xmlns",5);
            local_38->str_xmlns = pxVar1;
            pxVar1 = _xmlDictLookup(local_38->dict,(xmlChar *)"http://www.w3.org/XML/1998/namespace"
                                    ,0x24);
            local_38->str_xml_ns = pxVar1;
            local_38->dictNames = ctx->dictNames;
            local_38->attsDefault = ctx->attsDefault;
            local_38->attsSpecial = ctx->attsSpecial;
            local_38->linenumbers = ctx->linenumbers;
            _xmlParseContent(local_38);
            ctx->validate = local_38->validate;
            ctx->valid = local_38->valid;
            if ((*local_38->input->cur == '<') && (local_38->input->cur[1] == '/')) {
              FUN_100143bf8(local_38,0x55,0);
            }
            else if (*local_38->input->cur != '\0') {
              FUN_100143bf8(local_38,0x56,0);
            }
            if (local_38->node != local_30->children) {
              FUN_100143bf8(local_38,0x55,0);
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
              if (lst != (xmlNodePtr *)0x0) {
                local_10 = local_30->children->children;
                *lst = local_10;
                for (; local_10 != (xmlNodePtr)0x0; local_10 = local_10->next) {
                  local_10->parent = (_xmlNode *)0x0;
                }
                local_30->children->children = (_xmlNode *)0x0;
              }
              local_18 = 0;
            }
            local_38->sax = local_20;
            local_38->dict = (xmlDictPtr)0x0;
            local_38->attsDefault = (xmlHashTablePtr)0x0;
            local_38->attsSpecial = (xmlHashTablePtr)0x0;
            _xmlFreeParserCtxt(local_38);
            local_30->intSubset = (_xmlDtd *)0x0;
            local_30->extSubset = (_xmlDtd *)0x0;
            _xmlFreeDoc(local_30);
            local_6c = local_18;
          }
        }
      }
    }
  }
  else {
    local_6c = 0x59;
  }
  return local_6c;
}

