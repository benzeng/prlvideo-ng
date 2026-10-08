
int _xmlValidateDocument(xmlValidCtxtPtr ctxt,xmlDocPtr doc)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  xmlDtdPtr pxVar4;
  xmlNodePtr elem;
  uint local_3c;
  xmlChar *local_10;
  
  if (doc == (xmlDocPtr)0x0) {
    local_3c = 0;
  }
  else if ((doc->intSubset == (_xmlDtd *)0x0) && (doc->extSubset == (_xmlDtd *)0x0)) {
    FUN_1008b74a8(ctxt,0x20a,"no DTD found!\n",0);
    local_3c = 0;
  }
  else {
    if ((doc->intSubset != (_xmlDtd *)0x0) &&
       (((doc->intSubset->SystemID != (xmlChar *)0x0 ||
         (doc->intSubset->ExternalID != (xmlChar *)0x0)) && (doc->extSubset == (_xmlDtd *)0x0)))) {
      if (doc->intSubset->SystemID == (xmlChar *)0x0) {
        local_10 = (xmlChar *)0x0;
      }
      else {
        local_10 = (xmlChar *)_xmlBuildURI(doc->intSubset->SystemID,doc->URL);
        if (local_10 == (xmlChar *)0x0) {
          FUN_1008b74a8(ctxt,0x205,"Could not build URI for external subset \"%s\"\n",
                        doc->intSubset->SystemID);
          return 0;
        }
      }
      pxVar4 = _xmlParseDTD(doc->intSubset->ExternalID,local_10);
      doc->extSubset = pxVar4;
      if (local_10 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_10);
      }
      if (doc->extSubset == (_xmlDtd *)0x0) {
        if (doc->intSubset->SystemID == (xmlChar *)0x0) {
          FUN_1008b74a8(ctxt,0x205,"Could not load the external subset \"%s\"\n",
                        doc->intSubset->ExternalID);
        }
        else {
          FUN_1008b74a8(ctxt,0x205,"Could not load the external subset \"%s\"\n",
                        doc->intSubset->SystemID);
        }
        return 0;
      }
    }
    if (doc->ids != (void *)0x0) {
      _xmlFreeIDTable(doc->ids);
      doc->ids = (void *)0x0;
    }
    if (doc->refs != (void *)0x0) {
      _xmlFreeRefTable(doc->refs);
      doc->refs = (void *)0x0;
    }
    uVar1 = _xmlValidateDtdFinal(ctxt,doc);
    iVar2 = _xmlValidateRoot(ctxt,doc);
    if (iVar2 == 0) {
      local_3c = 0;
    }
    else {
      elem = _xmlDocGetRootElement(doc);
      uVar3 = _xmlValidateElement(ctxt,doc,elem);
      local_3c = _xmlValidateDocumentFinal(ctxt,doc);
      local_3c = uVar1 & uVar3 & local_3c;
    }
  }
  return local_3c;
}

