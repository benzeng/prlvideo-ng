
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _htmlDefaultSAXHandlerInit(void)

{
  xmlSAXHandler *hdlr;
  
  hdlr = (xmlSAXHandler *)___htmlDefaultSAXHandler();
  _xmlSAX2InitHtmlDefaultSAXHandler(hdlr);
  return;
}

