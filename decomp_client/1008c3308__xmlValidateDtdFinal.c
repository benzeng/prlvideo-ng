
int _xmlValidateDtdFinal(xmlValidCtxtPtr ctxt,xmlDocPtr doc)

{
  _xmlDtd *p_Var1;
  int local_3c;
  
  if (doc == (xmlDocPtr)0x0) {
    local_3c = 0;
  }
  else if ((doc->intSubset == (_xmlDtd *)0x0) && (doc->extSubset == (_xmlDtd *)0x0)) {
    local_3c = 0;
  }
  else {
    ctxt->doc = doc;
    ctxt->valid = 1;
    p_Var1 = doc->intSubset;
    if ((p_Var1 != (_xmlDtd *)0x0) && (p_Var1->attributes != (void *)0x0)) {
      _xmlHashScan(p_Var1->attributes,FUN_1008c305b,ctxt);
    }
    if ((p_Var1 != (_xmlDtd *)0x0) && (p_Var1->entities != (void *)0x0)) {
      _xmlHashScan(p_Var1->entities,FUN_1008c2ff6,ctxt);
    }
    p_Var1 = doc->extSubset;
    if ((p_Var1 != (_xmlDtd *)0x0) && (p_Var1->attributes != (void *)0x0)) {
      _xmlHashScan(p_Var1->attributes,FUN_1008c305b,ctxt);
    }
    if ((p_Var1 != (_xmlDtd *)0x0) && (p_Var1->entities != (void *)0x0)) {
      _xmlHashScan(p_Var1->entities,FUN_1008c2ff6,ctxt);
    }
    local_3c = ctxt->valid;
  }
  return local_3c;
}

