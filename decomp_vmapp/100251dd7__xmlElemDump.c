
void _xmlElemDump(FILE *f,xmlDocPtr doc,xmlNodePtr cur)

{
  xmlOutputBufferPtr buf;
  
  _xmlInitParser();
  if (cur != (xmlNodePtr)0x0) {
    buf = _xmlOutputBufferCreateFile(f,(xmlCharEncodingHandlerPtr)0x0);
    if (buf != (xmlOutputBufferPtr)0x0) {
      if ((doc == (xmlDocPtr)0x0) || (doc->type != XML_HTML_DOCUMENT_NODE)) {
        _xmlNodeDumpOutput(buf,doc,cur,0,1,(char *)0x0);
      }
      else {
        _htmlNodeDumpOutput(buf,doc,cur,(char *)0x0);
      }
      _xmlOutputBufferClose(buf);
    }
  }
  return;
}

