
int _xmlValidBuildContentModel(xmlValidCtxtPtr ctxt,xmlElementPtr elem)

{
  int iVar1;
  xmlAutomataPtr pxVar2;
  xmlAutomataStatePtr pxVar3;
  xmlRegexpPtr pxVar4;
  int local_13ac;
  char local_1398 [5008];
  
  if ((ctxt == (xmlValidCtxtPtr)0x0) || (elem == (xmlElementPtr)0x0)) {
    local_13ac = 0;
  }
  else if (elem->type == XML_ELEMENT_DECL) {
    if (elem->etype == XML_ELEMENT_TYPE_ELEMENT) {
      if (elem->contModel == (xmlRegexpPtr)0x0) {
        pxVar2 = _xmlNewAutomata();
        ctxt->am = pxVar2;
        if (ctxt->am == (xmlAutomataPtr)0x0) {
          FUN_1008b763a(ctxt,elem,1,"Cannot create automata for element %s\n",elem->name,0,0);
          local_13ac = 0;
        }
        else {
          pxVar3 = _xmlAutomataGetInitState(ctxt->am);
          ctxt->state = pxVar3;
          FUN_1008b7fda(elem->content,ctxt,elem->name);
          _xmlAutomataSetFinalState(ctxt->am,ctxt->state);
          pxVar4 = _xmlAutomataCompile(ctxt->am);
          elem->contModel = pxVar4;
          iVar1 = _xmlRegexpIsDeterminist(elem->contModel);
          if (iVar1 == 1) {
            ctxt->state = (xmlAutomataStatePtr)0x0;
            _xmlFreeAutomata(ctxt->am);
            ctxt->am = (xmlAutomataPtr)0x0;
            local_13ac = 1;
          }
          else {
            local_1398[0] = '\0';
            _xmlSnprintfElementContent(local_1398,5000,elem->content,1);
            FUN_1008b763a(ctxt,elem,0x1f9,"Content model of %s is not determinist: %s\n",elem->name,
                          local_1398,0);
            ctxt->valid = 0;
            ctxt->state = (xmlAutomataStatePtr)0x0;
            _xmlFreeAutomata(ctxt->am);
            ctxt->am = (xmlAutomataPtr)0x0;
            local_13ac = 0;
          }
        }
      }
      else {
        iVar1 = _xmlRegexpIsDeterminist(elem->contModel);
        if (iVar1 == 0) {
          ctxt->valid = 0;
          local_13ac = 0;
        }
        else {
          local_13ac = 1;
        }
      }
    }
    else {
      local_13ac = 1;
    }
  }
  else {
    local_13ac = 0;
  }
  return local_13ac;
}

