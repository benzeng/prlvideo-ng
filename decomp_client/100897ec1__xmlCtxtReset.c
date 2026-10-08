
/* WARNING: Enum "enum_2029": Some values do not have unique names */

void _xmlCtxtReset(xmlParserCtxtPtr ctxt)

{
  xmlDictPtr dict;
  int iVar1;
  long lVar2;
  
  if (ctxt != (xmlParserCtxtPtr)0x0) {
    dict = ctxt->dict;
    while (lVar2 = _inputPop(ctxt), lVar2 != 0) {
      _xmlFreeInputStream(lVar2);
    }
    ctxt->inputNr = 0;
    ctxt->input = (xmlParserInputPtr)0x0;
    ctxt->spaceNr = 0;
    *ctxt->spaceTab = -1;
    ctxt->space = ctxt->spaceTab;
    ctxt->nodeNr = 0;
    ctxt->node = (xmlNodePtr)0x0;
    ctxt->nameNr = 0;
    ctxt->name = (xmlChar *)0x0;
    if ((ctxt->version != (xmlChar *)0x0) &&
       ((dict == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(dict,ctxt->version), iVar1 == 0)))) {
      (*(code *)_xmlFree)(ctxt->version);
    }
    ctxt->version = (xmlChar *)0x0;
    if ((ctxt->encoding != (xmlChar *)0x0) &&
       ((dict == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(dict,ctxt->encoding), iVar1 == 0)))) {
      (*(code *)_xmlFree)(ctxt->encoding);
    }
    ctxt->encoding = (xmlChar *)0x0;
    if ((ctxt->directory != (char *)0x0) &&
       ((dict == (xmlDictPtr)0x0 ||
        (iVar1 = _xmlDictOwns(dict,(xmlChar *)ctxt->directory), iVar1 == 0)))) {
      (*(code *)_xmlFree)(ctxt->directory);
    }
    ctxt->directory = (char *)0x0;
    if ((ctxt->extSubURI != (xmlChar *)0x0) &&
       ((dict == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(dict,ctxt->extSubURI), iVar1 == 0)))) {
      (*(code *)_xmlFree)(ctxt->extSubURI);
    }
    ctxt->extSubURI = (xmlChar *)0x0;
    if ((ctxt->extSubSystem != (xmlChar *)0x0) &&
       ((dict == (xmlDictPtr)0x0 || (iVar1 = _xmlDictOwns(dict,ctxt->extSubSystem), iVar1 == 0)))) {
      (*(code *)_xmlFree)(ctxt->extSubSystem);
    }
    ctxt->extSubSystem = (xmlChar *)0x0;
    if (ctxt->myDoc != (xmlDocPtr)0x0) {
      _xmlFreeDoc(ctxt->myDoc);
    }
    ctxt->myDoc = (xmlDocPtr)0x0;
    ctxt->standalone = -1;
    ctxt->hasExternalSubset = 0;
    ctxt->hasPErefs = 0;
    ctxt->html = 0;
    ctxt->external = 0;
    ctxt->instate = XML_PARSER_EOF;
    ctxt->token = 0;
    ctxt->wellFormed = 1;
    ctxt->nsWellFormed = 1;
    ctxt->disableSAX = 0;
    ctxt->valid = 1;
    ctxt->record_info = 0;
    ctxt->nbChars = 0;
    ctxt->checkIndex = 0;
    ctxt->inSubset = 0;
    ctxt->errNo = 0;
    ctxt->depth = 0;
    ctxt->charset = 1;
    ctxt->catalogs = (void *)0x0;
    _xmlInitNodeInfoSeq(&ctxt->node_seq);
    if (ctxt->attsDefault != (xmlHashTablePtr)0x0) {
      _xmlHashFree(ctxt->attsDefault,(xmlHashDeallocator)_xmlFree);
      ctxt->attsDefault = (xmlHashTablePtr)0x0;
    }
    if (ctxt->attsSpecial != (xmlHashTablePtr)0x0) {
      _xmlHashFree(ctxt->attsSpecial,(xmlHashDeallocator)0x0);
      ctxt->attsSpecial = (xmlHashTablePtr)0x0;
    }
    if (ctxt->catalogs != (void *)0x0) {
      _xmlCatalogFreeLocal(ctxt->catalogs);
    }
    if ((ctxt->lastError).code != 0) {
      _xmlResetError(&ctxt->lastError);
    }
    return;
  }
  return;
}

