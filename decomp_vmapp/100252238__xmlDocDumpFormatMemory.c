
void _xmlDocDumpFormatMemory(xmlDocPtr cur,xmlChar **mem,int *size,int format)

{
  _xmlDocDumpFormatMemoryEnc(cur,mem,size,(char *)0x0,format);
  return;
}

