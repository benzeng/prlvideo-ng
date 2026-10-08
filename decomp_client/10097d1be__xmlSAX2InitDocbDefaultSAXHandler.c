
void _xmlSAX2InitDocbDefaultSAXHandler(xmlSAXHandler *hdlr)

{
  if ((hdlr != (xmlSAXHandler *)0x0) && (hdlr->initialized == 0)) {
    hdlr->internalSubset = _xmlSAX2InternalSubset;
    hdlr->externalSubset = (externalSubsetSAXFunc)0x0;
    hdlr->isStandalone = _xmlSAX2IsStandalone;
    hdlr->hasInternalSubset = _xmlSAX2HasInternalSubset;
    hdlr->hasExternalSubset = _xmlSAX2HasExternalSubset;
    hdlr->resolveEntity = _xmlSAX2ResolveEntity;
    hdlr->getEntity = _xmlSAX2GetEntity;
    hdlr->getParameterEntity = (getParameterEntitySAXFunc)0x0;
    hdlr->entityDecl = _xmlSAX2EntityDecl;
    hdlr->attributeDecl = (attributeDeclSAXFunc)0x0;
    hdlr->elementDecl = (elementDeclSAXFunc)0x0;
    hdlr->notationDecl = (notationDeclSAXFunc)0x0;
    hdlr->unparsedEntityDecl = (unparsedEntityDeclSAXFunc)0x0;
    hdlr->setDocumentLocator = _xmlSAX2SetDocumentLocator;
    hdlr->startDocument = _xmlSAX2StartDocument;
    hdlr->endDocument = _xmlSAX2EndDocument;
    hdlr->startElement = _xmlSAX2StartElement;
    hdlr->endElement = _xmlSAX2EndElement;
    hdlr->reference = _xmlSAX2Reference;
    hdlr->characters = _xmlSAX2Characters;
    hdlr->cdataBlock = (cdataBlockSAXFunc)0x0;
    hdlr->ignorableWhitespace = _xmlSAX2IgnorableWhitespace;
    hdlr->processingInstruction = (processingInstructionSAXFunc)0x0;
    hdlr->comment = _xmlSAX2Comment;
    hdlr->warning = _xmlParserWarning;
    hdlr->error = _xmlParserError;
    hdlr->fatalError = _xmlParserError;
    hdlr->initialized = 1;
  }
  return;
}

