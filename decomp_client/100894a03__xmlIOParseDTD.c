
/* WARNING: Enum "enum_2039": Some values do not have unique names */
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlDtdPtr _xmlIOParseDTD(xmlSAXHandlerPtr sax,xmlParserInputBufferPtr input,xmlCharEncoding enc)

{
  xmlCharEncoding xVar1;
  xmlDocPtr pxVar2;
  xmlDtdPtr pxVar3;
  xmlDtdPtr local_68;
  xmlChar local_48;
  xmlChar local_47;
  xmlChar local_46;
  xmlChar local_45;
  xmlDtdPtr local_38;
  xmlParserCtxtPtr local_30;
  xmlParserInputPtr local_28;
  _xmlNode *local_20;
  
  local_38 = (xmlDtdPtr)0x0;
  local_28 = (xmlParserInputPtr)0x0;
  if (input == (xmlParserInputBufferPtr)0x0) {
    local_68 = (xmlDtdPtr)0x0;
  }
  else {
    local_30 = _xmlNewParserCtxt();
    if (local_30 == (xmlParserCtxtPtr)0x0) {
      local_68 = (xmlDtdPtr)0x0;
    }
    else {
      if (sax != (xmlSAXHandlerPtr)0x0) {
        if (local_30->sax != (_xmlSAXHandler *)0x0) {
          (*(code *)_xmlFree)(local_30->sax);
        }
        local_30->sax = sax;
        local_30->userData = local_30;
      }
      FUN_1008785ae(local_30);
      local_28 = _xmlNewIOInputStream(local_30,input,XML_CHAR_ENCODING_ERROR);
      if (local_28 == (xmlParserInputPtr)0x0) {
        if (sax != (xmlSAXHandlerPtr)0x0) {
          local_30->sax = (_xmlSAXHandler *)0x0;
        }
        _xmlFreeParserCtxt(local_30);
        local_68 = (xmlDtdPtr)0x0;
      }
      else {
        _xmlPushInput(local_30,local_28);
        if (enc != XML_CHAR_ENCODING_ERROR) {
          _xmlSwitchEncoding(local_30,enc);
        }
        local_28->filename = (char *)0x0;
        local_28->line = 1;
        local_28->col = 1;
        local_28->base = local_30->input->cur;
        local_28->cur = local_30->input->cur;
        local_28->free = (xmlParserInputDeallocate)0x0;
        local_30->inSubset = 2;
        pxVar2 = _xmlNewDoc((xmlChar *)"1.0");
        local_30->myDoc = pxVar2;
        pxVar2 = local_30->myDoc;
        pxVar3 = _xmlNewDtd(local_30->myDoc,(xmlChar *)"none",(xmlChar *)"none",(xmlChar *)"none");
        pxVar2->extSubset = pxVar3;
        if ((enc == XML_CHAR_ENCODING_ERROR) &&
           (3 < (long)local_30->input->end - (long)local_30->input->cur)) {
          local_48 = *local_30->input->cur;
          local_47 = local_30->input->cur[1];
          local_46 = local_30->input->cur[2];
          local_45 = local_30->input->cur[3];
          xVar1 = _xmlDetectCharEncoding(&local_48,4);
          if (xVar1 != XML_CHAR_ENCODING_ERROR) {
            _xmlSwitchEncoding(local_30,xVar1);
          }
        }
        _xmlParseExternalSubset(local_30,"none","none");
        if (local_30->myDoc != (xmlDocPtr)0x0) {
          if (local_30->wellFormed == 0) {
            local_38 = (xmlDtdPtr)0x0;
          }
          else {
            local_38 = local_30->myDoc->extSubset;
            local_30->myDoc->extSubset = (_xmlDtd *)0x0;
            if (local_38 != (xmlDtdPtr)0x0) {
              local_38->doc = (_xmlDoc *)0x0;
              for (local_20 = local_38->children; local_20 != (_xmlNode *)0x0;
                  local_20 = local_20->next) {
                local_20->doc = (_xmlDoc *)0x0;
              }
            }
          }
          _xmlFreeDoc(local_30->myDoc);
          local_30->myDoc = (xmlDocPtr)0x0;
        }
        if (sax != (xmlSAXHandlerPtr)0x0) {
          local_30->sax = (_xmlSAXHandler *)0x0;
        }
        _xmlFreeParserCtxt(local_30);
        local_68 = local_38;
      }
    }
  }
  return local_68;
}

