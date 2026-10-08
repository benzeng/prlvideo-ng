
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int _xmlParseBalancedChunkMemoryRecover
              (xmlDocPtr doc,xmlSAXHandlerPtr sax,void *user_data,int depth,xmlChar *string,
              xmlNodePtr *lst,int recover)

{
  _xmlNode *p_Var1;
  int iVar2;
  xmlParserCtxtPtr ctxt;
  xmlDocPtr doc_00;
  xmlChar *pxVar3;
  xmlNodePtr cur;
  int local_7c;
  _xmlSAXHandler *local_30;
  int local_14;
  xmlNodePtr local_10;
  
  local_30 = (_xmlSAXHandler *)0x0;
  if (depth < 0x29) {
    if (lst != (xmlNodePtr *)0x0) {
      *lst = (xmlNodePtr)0x0;
    }
    if (string == (xmlChar *)0x0) {
      local_7c = -1;
    }
    else {
      iVar2 = _xmlStrlen(string);
      ctxt = (xmlParserCtxtPtr)_xmlCreateMemoryParserCtxt(string,iVar2);
      if (ctxt == (xmlParserCtxtPtr)0x0) {
        local_7c = -1;
      }
      else {
        ctxt->userData = ctxt;
        if (sax != (xmlSAXHandlerPtr)0x0) {
          local_30 = ctxt->sax;
          ctxt->sax = sax;
          if (user_data != (void *)0x0) {
            ctxt->userData = user_data;
          }
        }
        doc_00 = _xmlNewDoc((xmlChar *)"1.0");
        if (doc_00 == (xmlDocPtr)0x0) {
          _xmlFreeParserCtxt(ctxt);
          local_7c = -1;
        }
        else {
          if ((doc == (xmlDocPtr)0x0) || (doc->dict == (_xmlDict *)0x0)) {
            _xmlCtxtUseOptions(ctxt,0x1000);
          }
          else {
            _xmlDictFree(ctxt->dict);
            ctxt->dict = doc->dict;
            _xmlDictReference(ctxt->dict);
            pxVar3 = _xmlDictLookup(ctxt->dict,(xmlChar *)"xml",3);
            ctxt->str_xml = pxVar3;
            pxVar3 = _xmlDictLookup(ctxt->dict,(xmlChar *)"xmlns",5);
            ctxt->str_xmlns = pxVar3;
            pxVar3 = _xmlDictLookup(ctxt->dict,(xmlChar *)"http://www.w3.org/XML/1998/namespace",
                                    0x24);
            ctxt->str_xml_ns = pxVar3;
            ctxt->dictNames = 1;
          }
          if (doc != (xmlDocPtr)0x0) {
            doc_00->intSubset = doc->intSubset;
            doc_00->extSubset = doc->extSubset;
          }
          cur = _xmlNewDocNode(doc_00,(xmlNsPtr)0x0,(xmlChar *)"pseudoroot",(xmlChar *)0x0);
          if (cur == (xmlNodePtr)0x0) {
            if (sax != (xmlSAXHandlerPtr)0x0) {
              ctxt->sax = local_30;
            }
            _xmlFreeParserCtxt(ctxt);
            doc_00->intSubset = (_xmlDtd *)0x0;
            doc_00->extSubset = (_xmlDtd *)0x0;
            _xmlFreeDoc(doc_00);
            local_7c = -1;
          }
          else {
            _xmlAddChild((xmlNodePtr)doc_00,cur);
            _nodePush(ctxt,cur);
            if (doc == (xmlDocPtr)0x0) {
              ctxt->myDoc = doc_00;
            }
            else {
              ctxt->myDoc = doc_00;
              doc_00->children->doc = doc;
            }
            ctxt->instate = XML_PARSER_CONTENT;
            ctxt->depth = depth;
            ctxt->validate = 0;
            ctxt->loadsubset = 0;
            FUN_1008785ae(ctxt);
            if (doc == (xmlDocPtr)0x0) {
              _xmlParseContent(ctxt);
            }
            else {
              p_Var1 = doc->children;
              doc->children = (_xmlNode *)0x0;
              _xmlParseContent(ctxt);
              doc->children = p_Var1;
            }
            if ((*ctxt->input->cur == '<') && (ctxt->input->cur[1] == '/')) {
              FUN_100877520(ctxt,0x55,0);
            }
            else if (*ctxt->input->cur != '\0') {
              FUN_100877520(ctxt,0x56,0);
            }
            if (ctxt->node != doc_00->children) {
              FUN_100877520(ctxt,0x55,0);
            }
            if (ctxt->wellFormed == 0) {
              if (ctxt->errNo == 0) {
                local_14 = 1;
              }
              else {
                local_14 = ctxt->errNo;
              }
            }
            else {
              local_14 = 0;
            }
            if ((lst != (xmlNodePtr *)0x0) && ((local_14 == 0 || (recover == 1)))) {
              local_10 = doc_00->children->children;
              *lst = local_10;
              for (; local_10 != (xmlNodePtr)0x0; local_10 = local_10->next) {
                _xmlSetTreeDoc(local_10,doc);
                local_10->parent = (_xmlNode *)0x0;
              }
              doc_00->children->children = (_xmlNode *)0x0;
            }
            if (sax != (xmlSAXHandlerPtr)0x0) {
              ctxt->sax = local_30;
            }
            _xmlFreeParserCtxt(ctxt);
            doc_00->intSubset = (_xmlDtd *)0x0;
            doc_00->extSubset = (_xmlDtd *)0x0;
            _xmlFreeDoc(doc_00);
            local_7c = local_14;
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

