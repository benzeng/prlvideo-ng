
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int _htmlParseCharRef(htmlParserCtxtPtr ctxt)

{
  bool bVar1;
  int local_30;
  int local_c;
  
  local_c = 0;
  if ((ctxt == (htmlParserCtxtPtr)0x0) || (ctxt->input == (xmlParserInputPtr)0x0)) {
    FUN_1008c3ec0(ctxt,1,"htmlParseCharRef: context error\n",0,0);
    local_30 = 0;
  }
  else {
    if (((*ctxt->input->cur == '&') && (ctxt->input->cur[1] == '#')) &&
       ((ctxt->input->cur[2] == 'x' || (ctxt->input->cur[2] == 'X')))) {
      ctxt->nbChars = ctxt->nbChars + 3;
      ctxt->input->cur = ctxt->input->cur + 3;
      ctxt->input->col = ctxt->input->col + 3;
      while (*ctxt->input->cur != ';') {
        if ((*ctxt->input->cur < 0x30) || (0x39 < *ctxt->input->cur)) {
          if ((*ctxt->input->cur < 0x61) || (0x66 < *ctxt->input->cur)) {
            if ((*ctxt->input->cur < 0x41) || (0x46 < *ctxt->input->cur)) {
              FUN_1008c3ec0(ctxt,6,"htmlParseCharRef: invalid hexadecimal value\n",0,0);
              return 0;
            }
            local_c = local_c * 0x10 + (uint)*ctxt->input->cur + -0x37;
          }
          else {
            local_c = local_c * 0x10 + (uint)*ctxt->input->cur + -0x57;
          }
        }
        else {
          local_c = local_c * 0x10 + (uint)*ctxt->input->cur + -0x30;
        }
        _xmlNextChar(ctxt);
      }
      if (*ctxt->input->cur == ';') {
        _xmlNextChar(ctxt);
      }
    }
    else if ((*ctxt->input->cur == '&') && (ctxt->input->cur[1] == '#')) {
      ctxt->nbChars = ctxt->nbChars + 2;
      ctxt->input->cur = ctxt->input->cur + 2;
      ctxt->input->col = ctxt->input->col + 2;
      while (*ctxt->input->cur != ';') {
        if ((*ctxt->input->cur < 0x30) || (0x39 < *ctxt->input->cur)) {
          FUN_1008c3ec0(ctxt,7,"htmlParseCharRef: invalid decimal value\n",0,0);
          return 0;
        }
        local_c = local_c * 10 + (uint)*ctxt->input->cur + -0x30;
        _xmlNextChar(ctxt);
      }
      if (*ctxt->input->cur == ';') {
        _xmlNextChar(ctxt);
      }
    }
    else {
      FUN_1008c3ec0(ctxt,8,"htmlParseCharRef: invalid value\n",0,0);
    }
    if (local_c < 0x100) {
      if ((((local_c < 9) || (10 < local_c)) && (local_c != 0xd)) && (local_c < 0x20)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else if ((((local_c < 0x100) || (0xd7ff < local_c)) &&
             ((local_c < 0xe000 || (0xfffd < local_c)))) &&
            ((local_c < 0x10000 || (0x10ffff < local_c)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_30 = local_c;
    }
    else {
      FUN_1008c3fbf(ctxt,9,"htmlParseCharRef: invalid xmlChar value %d\n",local_c);
      local_30 = 0;
    }
  }
  return local_30;
}

