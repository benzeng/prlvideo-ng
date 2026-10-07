
int _xmlSAXVersion(xmlSAXHandler *hdlr,int version)

{
  int local_18;
  
  if (hdlr == (xmlSAXHandler *)0x0) {
    local_18 = -1;
  }
  else {
    if (version == 2) {
      hdlr->startElement = (startElementSAXFunc)0x0;
      hdlr->endElement = (endElementSAXFunc)0x0;
      hdlr->startElementNs = _xmlSAX2StartElementNs;
      hdlr->endElementNs = _xmlSAX2EndElementNs;
      hdlr->serror = (xmlStructuredErrorFunc)0x0;
      hdlr->initialized = 0xdeedbeaf;
    }
    else {
      if (version != 1) {
        return -1;
      }
      hdlr->startElement = _xmlSAX2StartElement;
      hdlr->endElement = _xmlSAX2EndElement;
      hdlr->initialized = 1;
    }
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
    hdlr->reference = _xmlSAX2Reference;
    hdlr->characters = _xmlSAX2Characters;
    hdlr->cdataBlock = _xmlSAX2CDataBlock;
    hdlr->ignorableWhitespace = _xmlSAX2Characters;
    hdlr->processingInstruction = _xmlSAX2ProcessingInstruction;
    hdlr->comment = _xmlSAX2Comment;
    hdlr->warning = _xmlParserWarning;
    hdlr->error = _xmlParserError;
    hdlr->fatalError = _xmlParserError;
    local_18 = 0;
  }
  return local_18;
}

