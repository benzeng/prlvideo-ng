
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void FUN_1008cb129(htmlParserCtxtPtr param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  xmlChar *str1;
  
  str1 = _xmlStrdup(param_1->name);
  iVar1 = param_1->nameNr;
  do {
    while( true ) {
      lVar2 = param_1->nbChars;
      if ((param_1->progressive == 0) &&
         ((long)param_1->input->end - (long)param_1->input->cur < 0xfa)) {
        _xmlParserInputGrow(param_1->input,0xfa);
      }
      if ((*param_1->input->cur != '<') || (param_1->input->cur[1] != '/')) break;
      iVar3 = FUN_1008caa2b(param_1);
      if ((iVar3 != 0) && ((str1 != (xmlChar *)0x0 || (param_1->nameNr == 0)))) {
        if (str1 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(str1);
        }
        return;
      }
    }
    if ((0 < param_1->nameNr) &&
       ((param_1->nameNr <= iVar1 && (iVar3 = _xmlStrEqual(str1,param_1->name), iVar3 == 0)))) {
      if (str1 == (xmlChar *)0x0) {
        return;
      }
      (*(code *)_xmlFree)(str1);
      return;
    }
    if ((*param_1->input->cur == '\0') ||
       ((iVar3 = _xmlStrEqual(str1,(xmlChar *)"script"), iVar3 == 0 &&
        (iVar3 = _xmlStrEqual(str1,(xmlChar *)"style"), iVar3 == 0)))) {
      if (((*param_1->input->cur == '<') &&
          ((((param_1->input->cur[1] == '!' &&
             (iVar3 = FUN_1008c894e(param_1->input->cur[2]), iVar3 == 0x44)) &&
            (iVar3 = FUN_1008c894e(param_1->input->cur[3]), iVar3 == 0x4f)) &&
           ((iVar3 = FUN_1008c894e(param_1->input->cur[4]), iVar3 == 0x43 &&
            (iVar3 = FUN_1008c894e(param_1->input->cur[5]), iVar3 == 0x54)))))) &&
         ((iVar3 = FUN_1008c894e(param_1->input->cur[6]), iVar3 == 0x59 &&
          ((iVar3 = FUN_1008c894e(param_1->input->cur[7]), iVar3 == 0x50 &&
           (iVar3 = FUN_1008c894e(param_1->input->cur[8]), iVar3 == 0x45)))))) {
        FUN_1008c3ec0(param_1,800,"Misplaced DOCTYPE declaration\n","DOCTYPE",0);
        FUN_1008c9bd1(param_1);
      }
      if ((((*param_1->input->cur == '<') && (param_1->input->cur[1] == '!')) &&
          (param_1->input->cur[2] == '-')) && (param_1->input->cur[3] == '-')) {
        FUN_1008c9056(param_1);
      }
      else if ((*param_1->input->cur == '<') && (param_1->input->cur[1] == '?')) {
        FUN_1008c8963(param_1);
      }
      else if (*param_1->input->cur == '<') {
        _htmlParseElement(param_1);
      }
      else if (*param_1->input->cur == '&') {
        FUN_1008cad40(param_1);
      }
      else {
        if (*param_1->input->cur == '\0') {
          FUN_1008c4d1f(param_1);
          goto LAB_1008cb513;
        }
        FUN_1008c7fee(param_1);
      }
      if (param_1->nbChars == lVar2) {
        if (param_1->node != (xmlNodePtr)0x0) {
          FUN_1008c3ec0(param_1,1,"detected an error in element content\n",0,0);
        }
LAB_1008cb513:
        if (str1 == (xmlChar *)0x0) {
          return;
        }
        (*(code *)_xmlFree)(str1);
        return;
      }
    }
    else {
      FUN_1008c7a42(param_1);
    }
    if ((param_1->progressive == 0) &&
       ((long)param_1->input->end - (long)param_1->input->cur < 0xfa)) {
      _xmlParserInputGrow(param_1->input,0xfa);
    }
  } while( true );
}

