
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void _xmlParseElement(xmlParserCtxtPtr param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_7c;
  xmlParserNodeInfo local_78;
  xmlChar *local_48;
  xmlChar *local_40;
  xmlChar *local_38;
  int local_2c;
  xmlNodePtr local_28;
  int local_1c;
  
  local_1c = param_1->nsNr;
  if (param_1->record_info != 0) {
    local_78.begin_pos =
         (ulong)(param_1->input->cur + (param_1->input->consumed - (long)param_1->input->base));
    local_78.begin_line = (ulong)param_1->input->line;
  }
  if (param_1->spaceNr == 0) {
    FUN_100146164(param_1,0xffffffff);
  }
  else {
    FUN_100146164(param_1,*param_1->space);
  }
  local_2c = param_1->input->line;
  if (param_1->sax2 == 0) {
    local_38 = (xmlChar *)_xmlParseStartTag(param_1);
  }
  else {
    local_38 = (xmlChar *)FUN_1001582dc(param_1,&local_40,&local_48,&local_7c);
  }
  if (local_38 == (xmlChar *)0x0) {
    FUN_10014626d(param_1);
  }
  else {
    _namePush(param_1,local_38);
    local_28 = param_1->node;
    if ((((param_1->validate != 0) && (param_1->wellFormed != 0)) &&
        (param_1->myDoc != (xmlDocPtr)0x0)) &&
       ((param_1->node != (xmlNodePtr)0x0 && (param_1->node == param_1->myDoc->children)))) {
      uVar1 = param_1->valid;
      uVar2 = _xmlValidateRoot(&param_1->vctxt,param_1->myDoc);
      param_1->valid = uVar1 & uVar2;
    }
    if ((*param_1->input->cur == '/') && (param_1->input->cur[1] == '>')) {
      param_1->nbChars = param_1->nbChars + 2;
      param_1->input->cur = param_1->input->cur + 2;
      param_1->input->col = param_1->input->col + 2;
      if (*param_1->input->cur == '%') {
        _xmlParserHandlePEReference(param_1);
      }
      if (*param_1->input->cur == '\0') {
        iVar3 = _xmlParserInputGrow(param_1->input,0xfa);
        if (iVar3 < 1) {
          _xmlPopInput(param_1);
        }
      }
      if (param_1->sax2 == 0) {
        if (((param_1->sax != (_xmlSAXHandler *)0x0) &&
            (param_1->sax->endElement != (endElementSAXFunc)0x0)) && (param_1->disableSAX == 0)) {
          (*param_1->sax->endElement)(param_1->userData,local_38);
        }
      }
      else if (((param_1->sax != (_xmlSAXHandler *)0x0) &&
               (param_1->sax->endElementNs != (endElementNsSAX2Func)0x0)) &&
              (param_1->disableSAX == 0)) {
        (*param_1->sax->endElementNs)(param_1->userData,local_38,local_40,local_48);
      }
      _namePop(param_1);
      FUN_10014626d(param_1);
      if (param_1->nsNr != local_1c) {
        FUN_1001455ec(param_1,param_1->nsNr - local_1c);
      }
      if ((local_28 != (xmlNodePtr)0x0) && (param_1->record_info != 0)) {
        local_78.end_pos =
             (ulong)(param_1->input->cur + (param_1->input->consumed - (long)param_1->input->base));
        local_78.end_line = (ulong)param_1->input->line;
        local_78.node = local_28;
        _xmlParserAddNodeInfo(param_1,&local_78);
      }
    }
    else if (*param_1->input->cur == '>') {
      param_1->input->col = param_1->input->col + 1;
      param_1->input->cur = param_1->input->cur + 1;
      param_1->nbChars = param_1->nbChars + 1;
      if (*param_1->input->cur == '\0') {
        _xmlParserInputGrow(param_1->input,0xfa);
      }
      _xmlParseContent(param_1);
      if ((((*param_1->input->cur < 9) || (10 < *param_1->input->cur)) &&
          (*param_1->input->cur != '\r')) && (*param_1->input->cur < 0x20)) {
        FUN_10014469f(param_1,0x4d,"Premature end of data in tag %s line %d\n",local_38,local_2c,0);
        _nodePop(param_1);
        _namePop(param_1);
        FUN_10014626d(param_1);
        if (param_1->nsNr != local_1c) {
          FUN_1001455ec(param_1,param_1->nsNr - local_1c);
        }
      }
      else {
        if (param_1->sax2 == 0) {
          FUN_100156970(param_1,local_2c);
        }
        else {
          FUN_10015984e(param_1,local_40,local_48,local_2c,param_1->nsNr - local_1c,local_7c);
          _namePop(param_1);
        }
        if ((local_28 != (xmlNodePtr)0x0) && (param_1->record_info != 0)) {
          local_78.end_pos =
               (ulong)(param_1->input->cur + (param_1->input->consumed - (long)param_1->input->base)
                      );
          local_78.end_line = (ulong)param_1->input->line;
          local_78.node = local_28;
          _xmlParserAddNodeInfo(param_1,&local_78);
        }
      }
    }
    else {
      FUN_10014469f(param_1,0x49,"Couldn\'t find end of Start Tag %s line %d\n",local_38,local_2c,0)
      ;
      _nodePop(param_1);
      _namePop(param_1);
      FUN_10014626d(param_1);
      if (param_1->nsNr != local_1c) {
        FUN_1001455ec(param_1,param_1->nsNr - local_1c);
      }
      if ((local_28 != (xmlNodePtr)0x0) && (param_1->record_info != 0)) {
        local_78.end_pos =
             (ulong)(param_1->input->cur + (param_1->input->consumed - (long)param_1->input->base));
        local_78.end_line = (ulong)param_1->input->line;
        local_78.node = local_28;
        _xmlParserAddNodeInfo(param_1,&local_78);
      }
    }
  }
  return;
}

