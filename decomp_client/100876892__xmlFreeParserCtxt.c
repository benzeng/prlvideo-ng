
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void _xmlFreeParserCtxt(xmlParserCtxtPtr ctxt)

{
  _xmlSAXHandler *p_Var1;
  _xmlNode *p_Var2;
  _xmlAttr *p_Var3;
  long lVar4;
  _xmlSAXHandler *p_Var5;
  xmlNodePtr local_38;
  xmlAttrPtr local_28;
  
  if (ctxt != (xmlParserCtxtPtr)0x0) {
    while (lVar4 = _inputPop(ctxt), lVar4 != 0) {
      _xmlFreeInputStream(lVar4);
    }
    if (ctxt->spaceTab != (int *)0x0) {
      (*(code *)_xmlFree)(ctxt->spaceTab);
    }
    if (ctxt->nameTab != (xmlChar **)0x0) {
      (*(code *)_xmlFree)(ctxt->nameTab);
    }
    if (ctxt->nodeTab != (xmlNodePtr *)0x0) {
      (*(code *)_xmlFree)(ctxt->nodeTab);
    }
    if (ctxt->inputTab != (xmlParserInputPtr *)0x0) {
      (*(code *)_xmlFree)(ctxt->inputTab);
    }
    if (ctxt->version != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(ctxt->version);
    }
    if (ctxt->encoding != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(ctxt->encoding);
    }
    if (ctxt->extSubURI != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(ctxt->extSubURI);
    }
    if (ctxt->extSubSystem != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(ctxt->extSubSystem);
    }
    if ((ctxt->sax != (_xmlSAXHandler *)0x0) &&
       (p_Var1 = ctxt->sax, p_Var5 = (_xmlSAXHandler *)___xmlDefaultSAXHandler(), p_Var1 != p_Var5))
    {
      (*(code *)_xmlFree)(ctxt->sax);
    }
    if (ctxt->directory != (char *)0x0) {
      (*(code *)_xmlFree)(ctxt->directory);
    }
    if ((ctxt->vctxt).nodeTab != (xmlNodePtr *)0x0) {
      (*(code *)_xmlFree)((ctxt->vctxt).nodeTab);
    }
    if (ctxt->atts != (xmlChar **)0x0) {
      (*(code *)_xmlFree)(ctxt->atts);
    }
    if (ctxt->dict != (xmlDictPtr)0x0) {
      _xmlDictFree(ctxt->dict);
    }
    if (ctxt->nsTab != (xmlChar **)0x0) {
      (*(code *)_xmlFree)(ctxt->nsTab);
    }
    if (ctxt->pushTab != (void **)0x0) {
      (*(code *)_xmlFree)(ctxt->pushTab);
    }
    if (ctxt->attallocs != (int *)0x0) {
      (*(code *)_xmlFree)(ctxt->attallocs);
    }
    if (ctxt->attsDefault != (xmlHashTablePtr)0x0) {
      _xmlHashFree(ctxt->attsDefault,(xmlHashDeallocator)_xmlFree);
    }
    if (ctxt->attsSpecial != (xmlHashTablePtr)0x0) {
      _xmlHashFree(ctxt->attsSpecial,(xmlHashDeallocator)0x0);
    }
    if (ctxt->freeElems != (xmlNodePtr)0x0) {
      local_38 = ctxt->freeElems;
      while (local_38 != (xmlNodePtr)0x0) {
        p_Var2 = local_38->next;
        (*(code *)_xmlFree)(local_38);
        local_38 = p_Var2;
      }
    }
    if (ctxt->freeAttrs != (xmlAttrPtr)0x0) {
      local_28 = ctxt->freeAttrs;
      while (local_28 != (xmlAttrPtr)0x0) {
        p_Var3 = local_28->next;
        (*(code *)_xmlFree)(local_28);
        local_28 = p_Var3;
      }
    }
    if ((ctxt->lastError).message != (char *)0x0) {
      (*(code *)_xmlFree)((ctxt->lastError).message);
    }
    if ((ctxt->lastError).file != (char *)0x0) {
      (*(code *)_xmlFree)((ctxt->lastError).file);
    }
    if ((ctxt->lastError).str1 != (char *)0x0) {
      (*(code *)_xmlFree)((ctxt->lastError).str1);
    }
    if ((ctxt->lastError).str2 != (char *)0x0) {
      (*(code *)_xmlFree)((ctxt->lastError).str2);
    }
    if ((ctxt->lastError).str3 != (char *)0x0) {
      (*(code *)_xmlFree)((ctxt->lastError).str3);
    }
    if (ctxt->catalogs != (void *)0x0) {
      _xmlCatalogFreeLocal(ctxt->catalogs);
    }
    (*(code *)_xmlFree)(ctxt);
  }
  return;
}

