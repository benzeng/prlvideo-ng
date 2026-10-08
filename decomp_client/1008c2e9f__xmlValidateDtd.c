
int _xmlValidateDtd(xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlDtdPtr dtd)

{
  _xmlDtd *p_Var1;
  _xmlDtd *p_Var2;
  int iVar3;
  uint uVar4;
  xmlNodePtr elem;
  uint local_44;
  
  if (dtd == (xmlDtdPtr)0x0) {
    local_44 = 0;
  }
  else if (doc == (xmlDocPtr)0x0) {
    local_44 = 0;
  }
  else {
    p_Var1 = doc->extSubset;
    p_Var2 = doc->intSubset;
    doc->extSubset = dtd;
    doc->intSubset = (_xmlDtd *)0x0;
    iVar3 = _xmlValidateRoot(ctxt,doc);
    if (iVar3 == 0) {
      doc->extSubset = p_Var1;
      doc->intSubset = p_Var2;
      local_44 = 0;
    }
    else {
      if (doc->ids != (void *)0x0) {
        _xmlFreeIDTable(doc->ids);
        doc->ids = (void *)0x0;
      }
      if (doc->refs != (void *)0x0) {
        _xmlFreeRefTable(doc->refs);
        doc->refs = (void *)0x0;
      }
      elem = _xmlDocGetRootElement(doc);
      local_44 = _xmlValidateElement(ctxt,doc,elem);
      uVar4 = _xmlValidateDocumentFinal(ctxt,doc);
      local_44 = local_44 & uVar4;
      doc->extSubset = p_Var1;
      doc->intSubset = p_Var2;
    }
  }
  return local_44;
}

