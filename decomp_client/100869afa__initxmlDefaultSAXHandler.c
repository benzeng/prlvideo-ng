
void _initxmlDefaultSAXHandler(xmlSAXHandlerV1 *hdlr,int warning)

{
  if (hdlr->initialized != 1) {
    hdlr->internalSubset = _xmlSAX2InternalSubset;
    hdlr->externalSubset = _xmlSAX2ExternalSubset;
    hdlr->isStandalone = _xmlSAX2IsStandalone;
    hdlr->hasInternalSubset = _xmlSAX2HasInternalSubset;
    hdlr->hasExternalSubset = _xmlSAX2HasExternalSubset;
    hdlr->resolveEntity = _xmlSAX2ResolveEntity;
    hdlr->getEntity = _xmlSAX2GetEntity;
    hdlr->getParameterEntity = _xmlSAX2GetParameterEntity;
    hdlr->entityDecl = _xmlSAX2EntityDecl;
    hdlr->attributeDecl = _xmlSAX2AttributeDecl;
    hdlr->elementDecl = _xmlSAX2ElementDecl;
    hdlr->notationDecl = _xmlSAX2NotationDecl;
    hdlr->unparsedEntityDecl = _xmlSAX2UnparsedEntityDecl;
    hdlr->setDocumentLocator = _xmlSAX2SetDocumentLocator;
    hdlr->startDocument = _xmlSAX2StartDocument;
    hdlr->endDocument = _xmlSAX2EndDocument;
    hdlr->startElement = _xmlSAX2StartElement;
    hdlr->endElement = _xmlSAX2EndElement;
    hdlr->reference = _xmlSAX2Reference;
    hdlr->characters = _xmlSAX2Characters;
    hdlr->cdataBlock = _xmlSAX2CDataBlock;
    hdlr->ignorableWhitespace = _xmlSAX2Characters;
    hdlr->processingInstruction = _xmlSAX2ProcessingInstruction;
    if (warning == 0) {
      hdlr->warning = (warningSAXFunc)0x0;
    }
    else {
      hdlr->warning = _xmlParserWarning;
    }
    hdlr->error = _xmlParserError;
    hdlr->fatalError = _xmlParserError;
    hdlr->initialized = 1;
  }
  return;
}

