
void _xmlSAX2InitHtmlDefaultSAXHandler(xmlSAXHandler *hdlr)

{
  if ((hdlr != (xmlSAXHandler *)0x0) && (hdlr->initialized == 0)) {
    hdlr->internalSubset = _xmlSAX2InternalSubset;
    hdlr->externalSubset = (externalSubsetSAXFunc)0x0;
    hdlr->isStandalone = (isStandaloneSAXFunc)0x0;
    hdlr->hasInternalSubset = (hasInternalSubsetSAXFunc)0x0;
    hdlr->hasExternalSubset = (hasExternalSubsetSAXFunc)0x0;
    hdlr->resolveEntity = (resolveEntitySAXFunc)0x0;
    hdlr->getEntity = _xmlSAX2GetEntity;
    hdlr->getParameterEntity = (getParameterEntitySAXFunc)0x0;
    hdlr->entityDecl = (entityDeclSAXFunc)0x0;
    hdlr->attributeDecl = (attributeDeclSAXFunc)0x0;
    hdlr->elementDecl = (elementDeclSAXFunc)0x0;
    hdlr->notationDecl = (notationDeclSAXFunc)0x0;
    hdlr->unparsedEntityDecl = (unparsedEntityDeclSAXFunc)0x0;
    hdlr->setDocumentLocator = _xmlSAX2SetDocumentLocator;
    hdlr->startDocument = _xmlSAX2StartDocument;
    hdlr->endDocument = _xmlSAX2EndDocument;
    hdlr->startElement = _xmlSAX2StartElement;
    hdlr->endElement = _xmlSAX2EndElement;
    hdlr->reference = (referenceSAXFunc)0x0;
    hdlr->characters = _xmlSAX2Characters;
    hdlr->cdataBlock = _xmlSAX2CDataBlock;
    hdlr->ignorableWhitespace = _xmlSAX2IgnorableWhitespace;
    hdlr->processingInstruction = _xmlSAX2ProcessingInstruction;
    hdlr->comment = _xmlSAX2Comment;
    hdlr->warning = _xmlParserWarning;
    hdlr->error = _xmlParserError;
    hdlr->fatalError = _xmlParserError;
    hdlr->initialized = 1;
  }
  return;
}

