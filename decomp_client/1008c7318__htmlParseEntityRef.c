
/* WARNING: Enum "enum_2029": Some values do not have unique names */

htmlEntityDesc * _htmlParseEntityRef(htmlParserCtxtPtr ctxt,xmlChar **str)

{
  xmlChar *name;
  htmlEntityDesc *local_30;
  htmlEntityDesc *local_10;
  
  local_10 = (htmlEntityDesc *)0x0;
  if (str != (xmlChar **)0x0) {
    *str = (xmlChar *)0x0;
  }
  if ((ctxt == (htmlParserCtxtPtr)0x0) || (ctxt->input == (xmlParserInputPtr)0x0)) {
    local_30 = (htmlEntityDesc *)0x0;
  }
  else {
    if (*ctxt->input->cur == '&') {
      _xmlNextChar(ctxt);
      name = (xmlChar *)FUN_1008c6418(ctxt);
      if (name == (xmlChar *)0x0) {
        FUN_1008c3ec0(ctxt,0x44,"htmlParseEntityRef: no name\n",0,0);
      }
      else {
        if ((ctxt->progressive == 0) && ((long)ctxt->input->end - (long)ctxt->input->cur < 0xfa)) {
          _xmlParserInputGrow(ctxt->input,0xfa);
        }
        if (*ctxt->input->cur == ';') {
          if (str != (xmlChar **)0x0) {
            *str = name;
          }
          local_10 = _htmlEntityLookup(name);
          if (local_10 != (htmlEntityDesc *)0x0) {
            _xmlNextChar(ctxt);
          }
        }
        else {
          FUN_1008c3ec0(ctxt,0x17,"htmlParseEntityRef: expecting \';\'\n",0,0);
          if (str != (xmlChar **)0x0) {
            *str = name;
          }
        }
      }
    }
    local_30 = local_10;
  }
  return local_30;
}

