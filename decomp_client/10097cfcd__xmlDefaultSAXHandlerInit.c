
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlDefaultSAXHandlerInit(void)

{
  xmlSAXHandler *hdlr;
  
  hdlr = (xmlSAXHandler *)___xmlDefaultSAXHandler();
  _xmlSAXVersion(hdlr,1);
  return;
}

