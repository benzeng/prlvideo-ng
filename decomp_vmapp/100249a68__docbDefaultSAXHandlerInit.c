
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _docbDefaultSAXHandlerInit(void)

{
  xmlSAXHandler *hdlr;
  
  hdlr = (xmlSAXHandler *)___docbDefaultSAXHandler();
  _xmlSAX2InitDocbDefaultSAXHandler(hdlr);
  return;
}

