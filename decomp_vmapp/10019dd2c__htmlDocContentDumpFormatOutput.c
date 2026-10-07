
void _htmlDocContentDumpFormatOutput(xmlOutputBufferPtr buf,xmlDocPtr cur,char *encoding,int format)

{
  xmlElementType xVar1;
  
  _xmlInitParser();
  if ((buf != (xmlOutputBufferPtr)0x0) && (cur != (xmlDocPtr)0x0)) {
    xVar1 = cur->type;
    cur->type = XML_HTML_DOCUMENT_NODE;
    if (cur->intSubset != (_xmlDtd *)0x0) {
      FUN_10019d06b(buf,cur,0);
    }
    if (cur->children != (_xmlNode *)0x0) {
      FUN_10019d429(buf,cur,cur->children,encoding,format);
    }
    _xmlOutputBufferWriteString(buf,"\n");
    cur->type = xVar1;
  }
  return;
}

