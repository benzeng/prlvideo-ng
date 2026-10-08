
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void _htmlParseElement(htmlParserCtxtPtr ctxt)

{
  int iVar1;
  xmlParserNodeInfo local_68;
  xmlChar *local_40;
  xmlChar *local_38;
  htmlElemDesc *local_30;
  int local_28;
  int local_24;
  xmlChar *local_20;
  
  local_38 = (xmlChar *)0x0;
  if ((ctxt == (htmlParserCtxtPtr)0x0) || (ctxt->input == (xmlParserInputPtr)0x0)) {
    FUN_1008c3ec0(ctxt,1,"htmlParseElement: context error\n",0,0);
  }
  else {
    if (ctxt->record_info != 0) {
      local_68.begin_pos =
           (ulong)(ctxt->input->cur + (ctxt->input->consumed - (long)ctxt->input->base));
      local_68.begin_line = (ulong)ctxt->input->line;
    }
    local_28 = FUN_1008ca198(ctxt);
    local_40 = ctxt->name;
    if ((local_28 == 0) && (local_40 != (xmlChar *)0x0)) {
      local_30 = _htmlTagLookup(local_40);
      if (local_30 == (htmlElemDesc *)0x0) {
        FUN_1008c3ec0(ctxt,0x321,"Tag %s invalid\n",local_40,0);
      }
      if ((*ctxt->input->cur == '/') && (ctxt->input->cur[1] == '>')) {
        ctxt->nbChars = ctxt->nbChars + 2;
        ctxt->input->cur = ctxt->input->cur + 2;
        ctxt->input->col = ctxt->input->col + 2;
        if ((ctxt->sax != (_xmlSAXHandler *)0x0) &&
           (ctxt->sax->endElement != (endElementSAXFunc)0x0)) {
          (*ctxt->sax->endElement)(ctxt->userData,local_40);
        }
        FUN_1008c419c(ctxt);
      }
      else if (*ctxt->input->cur == '>') {
        _xmlNextChar(ctxt);
        if ((local_30 == (htmlElemDesc *)0x0) || (local_30->empty == '\0')) {
          local_38 = _xmlStrdup(ctxt->name);
          local_24 = ctxt->nameNr;
          while ((((8 < *ctxt->input->cur && (*ctxt->input->cur < 0xb)) ||
                  (*ctxt->input->cur == '\r')) || (0x1f < *ctxt->input->cur))) {
            local_20 = ctxt->input->cur;
            FUN_1008cb129(ctxt);
            if ((ctxt->input->cur == local_20) || (ctxt->nameNr < local_24)) break;
          }
          if ((local_38 != (xmlChar *)0x0) && (ctxt->record_info != 0)) {
            local_68.end_pos =
                 (ulong)(ctxt->input->cur + (ctxt->input->consumed - (long)ctxt->input->base));
            local_68.end_line = (ulong)ctxt->input->line;
            local_68.node = ctxt->node;
            _xmlParserAddNodeInfo(ctxt,&local_68);
          }
          if (((*ctxt->input->cur < 9) || (10 < *ctxt->input->cur)) &&
             ((*ctxt->input->cur != '\r' && (*ctxt->input->cur < 0x20)))) {
            FUN_1008c4d1f(ctxt);
          }
          if (local_38 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_38);
          }
        }
        else {
          if ((ctxt->sax != (_xmlSAXHandler *)0x0) &&
             (ctxt->sax->endElement != (endElementSAXFunc)0x0)) {
            (*ctxt->sax->endElement)(ctxt->userData,local_40);
          }
          FUN_1008c419c(ctxt);
        }
      }
      else {
        FUN_1008c3ec0(ctxt,0x49,"Couldn\'t find end of Start Tag %s\n",local_40,0);
        iVar1 = _xmlStrEqual(local_40,ctxt->name);
        if (iVar1 != 0) {
          _nodePop(ctxt);
          FUN_1008c419c(ctxt);
        }
        if ((local_38 != (xmlChar *)0x0) && (ctxt->record_info != 0)) {
          local_68.end_pos =
               (ulong)(ctxt->input->cur + (ctxt->input->consumed - (long)ctxt->input->base));
          local_68.end_line = (ulong)ctxt->input->line;
          local_68.node = ctxt->node;
          _xmlParserAddNodeInfo(ctxt,&local_68);
        }
      }
    }
    else if (*ctxt->input->cur == '>') {
      _xmlNextChar(ctxt);
    }
  }
  return;
}

