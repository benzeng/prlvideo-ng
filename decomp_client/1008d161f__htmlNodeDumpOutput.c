
void _htmlNodeDumpOutput(xmlOutputBufferPtr buf,xmlDocPtr doc,xmlNodePtr cur,char *encoding)

{
  _htmlNodeDumpFormatOutput(buf,doc,cur,encoding,1);
  return;
}

