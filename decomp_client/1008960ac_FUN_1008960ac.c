
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int FUN_1008960ac(undefined8 *param_1,xmlChar *param_2,void *param_3,undefined8 *param_4)

{
  uint uVar1;
  _xmlSAXHandler *p_Var2;
  int iVar3;
  uint uVar4;
  xmlParserCtxtPtr ctxt;
  xmlChar *pxVar5;
  xmlNodePtr cur;
  int local_7c;
  xmlDocPtr local_50;
  _xmlNode *local_38;
  _xmlNode *local_30;
  int local_24;
  xmlNodePtr local_20;
  
  local_50 = (xmlDocPtr)0x0;
  local_38 = (_xmlNode *)0x0;
  local_30 = (_xmlNode *)0x0;
  if (*(int *)(param_1 + 0x31) < 0x29) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
    if (param_2 == (xmlChar *)0x0) {
      local_7c = 1;
    }
    else {
      iVar3 = _xmlStrlen(param_2);
      ctxt = (xmlParserCtxtPtr)_xmlCreateMemoryParserCtxt(param_2,iVar3);
      if (ctxt == (xmlParserCtxtPtr)0x0) {
        local_7c = 0x1b;
      }
      else {
        if (param_3 == (void *)0x0) {
          ctxt->userData = ctxt;
        }
        else {
          ctxt->userData = param_3;
        }
        if (ctxt->dict != (xmlDictPtr)0x0) {
          _xmlDictFree(ctxt->dict);
        }
        ctxt->dict = (xmlDictPtr)param_1[0x39];
        pxVar5 = _xmlDictLookup(ctxt->dict,(xmlChar *)"xml",3);
        ctxt->str_xml = pxVar5;
        pxVar5 = _xmlDictLookup(ctxt->dict,(xmlChar *)"xmlns",5);
        ctxt->str_xmlns = pxVar5;
        pxVar5 = _xmlDictLookup(ctxt->dict,(xmlChar *)"http://www.w3.org/XML/1998/namespace",0x24);
        ctxt->str_xml_ns = pxVar5;
        p_Var2 = ctxt->sax;
        ctxt->sax = (_xmlSAXHandler *)*param_1;
        FUN_1008785ae(ctxt);
        ctxt->replaceEntities = *(int *)((long)param_1 + 0x1c);
        ctxt->options = *(int *)((long)param_1 + 0x234);
        ctxt->_private = (void *)param_1[0x35];
        if (param_1[2] == 0) {
          local_50 = _xmlNewDoc((xmlChar *)"1.0");
          if (local_50 == (xmlDocPtr)0x0) {
            ctxt->sax = p_Var2;
            ctxt->dict = (xmlDictPtr)0x0;
            _xmlFreeParserCtxt(ctxt);
            return 1;
          }
          local_50->dict = ctxt->dict;
          _xmlDictReference(local_50->dict);
          ctxt->myDoc = local_50;
        }
        else {
          ctxt->myDoc = (xmlDocPtr)param_1[2];
          local_38 = ctxt->myDoc->children;
          local_30 = ctxt->myDoc->last;
        }
        cur = _xmlNewDocNode(ctxt->myDoc,(xmlNsPtr)0x0,(xmlChar *)"pseudoroot",(xmlChar *)0x0);
        if (cur == (xmlNodePtr)0x0) {
          ctxt->sax = p_Var2;
          ctxt->dict = (xmlDictPtr)0x0;
          _xmlFreeParserCtxt(ctxt);
          if (local_50 != (xmlDocPtr)0x0) {
            _xmlFreeDoc(local_50);
          }
          local_7c = 1;
        }
        else {
          ctxt->myDoc->children = (_xmlNode *)0x0;
          ctxt->myDoc->last = (_xmlNode *)0x0;
          _xmlAddChild((xmlNodePtr)ctxt->myDoc,cur);
          _nodePush(ctxt,ctxt->myDoc->children);
          ctxt->instate = XML_PARSER_CONTENT;
          ctxt->depth = *(int *)(param_1 + 0x31) + 1;
          ctxt->validate = 0;
          ctxt->loadsubset = *(int *)(param_1 + 0x36);
          if ((*(int *)((long)param_1 + 0x9c) != 0) || (*(int *)((long)param_1 + 0x1c) != 0)) {
            ctxt->loadsubset = ctxt->loadsubset | 8;
          }
          ctxt->dictNames = *(int *)(param_1 + 0x47);
          ctxt->attsDefault = (xmlHashTablePtr)param_1[0x44];
          ctxt->attsSpecial = (xmlHashTablePtr)param_1[0x45];
          _xmlParseContent(ctxt);
          if ((*ctxt->input->cur == '<') && (ctxt->input->cur[1] == '/')) {
            FUN_100877520(ctxt,0x55,0);
          }
          else if (*ctxt->input->cur != '\0') {
            FUN_100877520(ctxt,0x56,0);
          }
          if (ctxt->node != ctxt->myDoc->children) {
            FUN_100877520(ctxt,0x55,0);
          }
          if (ctxt->wellFormed == 0) {
            if (ctxt->errNo == 0) {
              local_24 = 1;
            }
            else {
              local_24 = ctxt->errNo;
            }
          }
          else {
            local_24 = 0;
          }
          if ((param_4 != (undefined8 *)0x0) && (local_24 == 0)) {
            local_20 = ctxt->myDoc->children->children;
            *param_4 = local_20;
            for (; local_20 != (xmlNodePtr)0x0; local_20 = local_20->next) {
              if ((((*(int *)((long)param_1 + 0x9c) != 0) && (*(int *)(param_1 + 3) != 0)) &&
                  (param_1[2] != 0)) &&
                 ((*(long *)(param_1[2] + 0x50) != 0 && (local_20->type == XML_ELEMENT_NODE)))) {
                uVar1 = *(uint *)(param_1 + 0x13);
                uVar4 = _xmlValidateElement((xmlValidCtxtPtr)(param_1 + 0x14),(xmlDocPtr)param_1[2],
                                            local_20);
                *(uint *)(param_1 + 0x13) = uVar1 & uVar4;
              }
              local_20->parent = (_xmlNode *)0x0;
            }
            ctxt->myDoc->children->children = (_xmlNode *)0x0;
          }
          if (ctxt->myDoc != (xmlDocPtr)0x0) {
            _xmlFreeNode(ctxt->myDoc->children);
            ctxt->myDoc->children = local_38;
            ctxt->myDoc->last = local_30;
          }
          ctxt->sax = p_Var2;
          ctxt->dict = (xmlDictPtr)0x0;
          ctxt->attsDefault = (xmlHashTablePtr)0x0;
          ctxt->attsSpecial = (xmlHashTablePtr)0x0;
          _xmlFreeParserCtxt(ctxt);
          if (local_50 != (xmlDocPtr)0x0) {
            _xmlFreeDoc(local_50);
          }
          local_7c = local_24;
        }
      }
    }
  }
  else {
    local_7c = 0x59;
  }
  return local_7c;
}

