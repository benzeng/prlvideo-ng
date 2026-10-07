
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int _xmlInitParserCtxt(xmlParserCtxtPtr ctxt)

{
  xmlDictPtr pxVar1;
  _xmlSAXHandler *p_Var2;
  xmlParserInputPtr *ppxVar3;
  long lVar4;
  xmlNodePtr *ppxVar5;
  xmlChar **ppxVar6;
  int *piVar7;
  int local_24;
  
  if (ctxt == (xmlParserCtxtPtr)0x0) {
    FUN_10013fbd7(0,"Got NULL parser context\n",0);
    local_24 = -1;
  }
  else {
    _xmlDefaultSAXHandlerInit();
    if (ctxt->dict == (xmlDictPtr)0x0) {
      pxVar1 = _xmlDictCreate();
      ctxt->dict = pxVar1;
    }
    if (ctxt->dict == (xmlDictPtr)0x0) {
      _xmlErrMemory(0,"cannot initialize parser context\n");
      local_24 = -1;
    }
    else {
      if (ctxt->sax == (_xmlSAXHandler *)0x0) {
        p_Var2 = (_xmlSAXHandler *)(*(code *)_xmlMalloc)(0x100);
        ctxt->sax = p_Var2;
      }
      if (ctxt->sax == (_xmlSAXHandler *)0x0) {
        _xmlErrMemory(0,"cannot initialize parser context\n");
        local_24 = -1;
      }
      else {
        _xmlSAXVersion(ctxt->sax,2);
        ctxt->maxatts = 0;
        ctxt->atts = (xmlChar **)0x0;
        if (ctxt->inputTab == (xmlParserInputPtr *)0x0) {
          ppxVar3 = (xmlParserInputPtr *)(*(code *)_xmlMalloc)(0x28);
          ctxt->inputTab = ppxVar3;
          ctxt->inputMax = 5;
        }
        if (ctxt->inputTab == (xmlParserInputPtr *)0x0) {
          _xmlErrMemory(0,"cannot initialize parser context\n");
          ctxt->inputNr = 0;
          ctxt->inputMax = 0;
          ctxt->input = (xmlParserInputPtr)0x0;
          local_24 = -1;
        }
        else {
          while( true ) {
            lVar4 = _inputPop(ctxt);
            if (lVar4 == 0) break;
            _xmlFreeInputStream(lVar4);
          }
          ctxt->inputNr = 0;
          ctxt->input = (xmlParserInputPtr)0x0;
          ctxt->version = (xmlChar *)0x0;
          ctxt->encoding = (xmlChar *)0x0;
          ctxt->standalone = -1;
          ctxt->hasExternalSubset = 0;
          ctxt->hasPErefs = 0;
          ctxt->html = 0;
          ctxt->external = 0;
          ctxt->instate = XML_PARSER_EOF;
          ctxt->token = 0;
          ctxt->directory = (char *)0x0;
          if (ctxt->nodeTab == (xmlNodePtr *)0x0) {
            ppxVar5 = (xmlNodePtr *)(*(code *)_xmlMalloc)(0x50);
            ctxt->nodeTab = ppxVar5;
            ctxt->nodeMax = 10;
          }
          if (ctxt->nodeTab == (xmlNodePtr *)0x0) {
            _xmlErrMemory(0,"cannot initialize parser context\n");
            ctxt->nodeNr = 0;
            ctxt->nodeMax = 0;
            ctxt->node = (xmlNodePtr)0x0;
            ctxt->inputNr = 0;
            ctxt->inputMax = 0;
            ctxt->input = (xmlParserInputPtr)0x0;
            local_24 = -1;
          }
          else {
            ctxt->nodeNr = 0;
            ctxt->node = (xmlNodePtr)0x0;
            if (ctxt->nameTab == (xmlChar **)0x0) {
              ppxVar6 = (xmlChar **)(*(code *)_xmlMalloc)(0x50);
              ctxt->nameTab = ppxVar6;
              ctxt->nameMax = 10;
            }
            if (ctxt->nameTab == (xmlChar **)0x0) {
              _xmlErrMemory(0,"cannot initialize parser context\n");
              ctxt->nodeNr = 0;
              ctxt->nodeMax = 0;
              ctxt->node = (xmlNodePtr)0x0;
              ctxt->inputNr = 0;
              ctxt->inputMax = 0;
              ctxt->input = (xmlParserInputPtr)0x0;
              ctxt->nameNr = 0;
              ctxt->nameMax = 0;
              ctxt->name = (xmlChar *)0x0;
              local_24 = -1;
            }
            else {
              ctxt->nameNr = 0;
              ctxt->name = (xmlChar *)0x0;
              if (ctxt->spaceTab == (int *)0x0) {
                piVar7 = (int *)(*(code *)_xmlMalloc)(0x28);
                ctxt->spaceTab = piVar7;
                ctxt->spaceMax = 10;
              }
              if (ctxt->spaceTab == (int *)0x0) {
                _xmlErrMemory(0,"cannot initialize parser context\n");
                ctxt->nodeNr = 0;
                ctxt->nodeMax = 0;
                ctxt->node = (xmlNodePtr)0x0;
                ctxt->inputNr = 0;
                ctxt->inputMax = 0;
                ctxt->input = (xmlParserInputPtr)0x0;
                ctxt->nameNr = 0;
                ctxt->nameMax = 0;
                ctxt->name = (xmlChar *)0x0;
                ctxt->spaceNr = 0;
                ctxt->spaceMax = 0;
                ctxt->space = (int *)0x0;
                local_24 = -1;
              }
              else {
                ctxt->spaceNr = 1;
                ctxt->spaceMax = 10;
                *ctxt->spaceTab = -1;
                ctxt->space = ctxt->spaceTab;
                ctxt->userData = ctxt;
                ctxt->myDoc = (xmlDocPtr)0x0;
                ctxt->wellFormed = 1;
                ctxt->nsWellFormed = 1;
                ctxt->valid = 1;
                piVar7 = ___xmlLoadExtDtdDefaultValue();
                ctxt->loadsubset = *piVar7;
                piVar7 = ___xmlDoValidityCheckingDefaultValue();
                ctxt->validate = *piVar7;
                piVar7 = ___xmlPedanticParserDefaultValue();
                ctxt->pedantic = *piVar7;
                piVar7 = ___xmlLineNumbersDefaultValue();
                ctxt->linenumbers = *piVar7;
                piVar7 = ___xmlKeepBlanksDefaultValue();
                ctxt->keepBlanks = *piVar7;
                if (ctxt->keepBlanks == 0) {
                  ctxt->sax->ignorableWhitespace = _xmlSAX2IgnorableWhitespace;
                }
                (ctxt->vctxt).finishDtd = 0xabcd1234;
                (ctxt->vctxt).userData = ctxt;
                (ctxt->vctxt).error = _xmlParserValidityError;
                (ctxt->vctxt).warning = _xmlParserValidityWarning;
                if (ctxt->validate != 0) {
                  piVar7 = ___xmlGetWarningsDefaultValue();
                  if (*piVar7 == 0) {
                    (ctxt->vctxt).warning = (xmlValidityWarningFunc)0x0;
                  }
                  else {
                    (ctxt->vctxt).warning = _xmlParserValidityWarning;
                  }
                  (ctxt->vctxt).nodeMax = 0;
                }
                piVar7 = ___xmlSubstituteEntitiesDefaultValue();
                ctxt->replaceEntities = *piVar7;
                ctxt->record_info = 0;
                ctxt->nbChars = 0;
                ctxt->checkIndex = 0;
                ctxt->inSubset = 0;
                ctxt->errNo = 0;
                ctxt->depth = 0;
                ctxt->charset = 1;
                ctxt->catalogs = (void *)0x0;
                _xmlInitNodeInfoSeq(&ctxt->node_seq);
                local_24 = 0;
              }
            }
          }
        }
      }
    }
  }
  return local_24;
}

