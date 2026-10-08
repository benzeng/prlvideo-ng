
/* WARNING: Enum "enum_2029": Some values do not have unique names */
/* WARNING: Enum "enum_2039": Some values do not have unique names */

xmlDtdPtr _xmlSAXParseDTD(xmlSAXHandlerPtr sax,xmlChar *ExternalID,xmlChar *SystemID)

{
  xmlCharEncoding xVar1;
  xmlParserCtxtPtr ctxt;
  xmlChar *systemId;
  xmlDocPtr pxVar2;
  xmlDtdPtr pxVar3;
  _xmlDtd *local_68;
  _xmlDtd *local_48;
  xmlParserInputPtr local_38;
  _xmlNode *local_20;
  
  local_48 = (_xmlDtd *)0x0;
  local_38 = (xmlParserInputPtr)0x0;
  if ((ExternalID == (xmlChar *)0x0) && (SystemID == (xmlChar *)0x0)) {
    local_68 = (_xmlDtd *)0x0;
  }
  else {
    ctxt = _xmlNewParserCtxt();
    if (ctxt == (xmlParserCtxtPtr)0x0) {
      local_68 = (_xmlDtd *)0x0;
    }
    else {
      if (sax != (xmlSAXHandlerPtr)0x0) {
        if (ctxt->sax != (_xmlSAXHandler *)0x0) {
          (*(code *)_xmlFree)(ctxt->sax);
        }
        ctxt->sax = sax;
        ctxt->userData = ctxt;
      }
      systemId = (xmlChar *)_xmlCanonicPath(SystemID);
      if ((SystemID == (xmlChar *)0x0) || (systemId != (xmlChar *)0x0)) {
        if ((ctxt->sax != (_xmlSAXHandler *)0x0) &&
           (ctxt->sax->resolveEntity != (resolveEntitySAXFunc)0x0)) {
          local_38 = (*ctxt->sax->resolveEntity)(ctxt,ExternalID,systemId);
        }
        if (local_38 == (xmlParserInputPtr)0x0) {
          if (sax != (xmlSAXHandlerPtr)0x0) {
            ctxt->sax = (_xmlSAXHandler *)0x0;
          }
          _xmlFreeParserCtxt(ctxt);
          if (systemId != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(systemId);
          }
          local_68 = (_xmlDtd *)0x0;
        }
        else {
          _xmlPushInput(ctxt,local_38);
          if (3 < (long)ctxt->input->end - (long)ctxt->input->cur) {
            xVar1 = _xmlDetectCharEncoding(ctxt->input->cur,4);
            _xmlSwitchEncoding(ctxt,xVar1);
          }
          if (local_38->filename == (char *)0x0) {
            local_38->filename = (char *)systemId;
          }
          else {
            (*(code *)_xmlFree)(systemId);
          }
          local_38->line = 1;
          local_38->col = 1;
          local_38->base = ctxt->input->cur;
          local_38->cur = ctxt->input->cur;
          local_38->free = (xmlParserInputDeallocate)0x0;
          ctxt->inSubset = 2;
          pxVar2 = _xmlNewDoc((xmlChar *)"1.0");
          ctxt->myDoc = pxVar2;
          pxVar2 = ctxt->myDoc;
          pxVar3 = _xmlNewDtd(ctxt->myDoc,(xmlChar *)"none",ExternalID,SystemID);
          pxVar2->extSubset = pxVar3;
          _xmlParseExternalSubset(ctxt,ExternalID,SystemID);
          if (ctxt->myDoc != (xmlDocPtr)0x0) {
            if (ctxt->wellFormed == 0) {
              local_48 = (_xmlDtd *)0x0;
            }
            else {
              local_48 = ctxt->myDoc->extSubset;
              ctxt->myDoc->extSubset = (_xmlDtd *)0x0;
              if (local_48 != (_xmlDtd *)0x0) {
                local_48->doc = (_xmlDoc *)0x0;
                for (local_20 = local_48->children; local_20 != (_xmlNode *)0x0;
                    local_20 = local_20->next) {
                  local_20->doc = (_xmlDoc *)0x0;
                }
              }
            }
            _xmlFreeDoc(ctxt->myDoc);
            ctxt->myDoc = (xmlDocPtr)0x0;
          }
          if (sax != (xmlSAXHandlerPtr)0x0) {
            ctxt->sax = (_xmlSAXHandler *)0x0;
          }
          _xmlFreeParserCtxt(ctxt);
          local_68 = local_48;
        }
      }
      else {
        _xmlFreeParserCtxt(ctxt);
        local_68 = (_xmlDtd *)0x0;
      }
    }
  }
  return local_68;
}

