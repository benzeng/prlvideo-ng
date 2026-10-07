
void _xmlSAX2InitDefaultSAXHandler(xmlSAXHandler *hdlr,int warning)

{
  if ((hdlr != (xmlSAXHandler *)0x0) && (hdlr->initialized == 0)) {
    _xmlSAXVersion(hdlr,DAT_1011151c0);
    if (warning == 0) {
      hdlr->warning = (warningSAXFunc)0x0;
    }
    else {
      hdlr->warning = _xmlParserWarning;
    }
  }
  return;
}

