
int _xmlSaveFormatFile(char *filename,xmlDocPtr cur,int format)

{
  int iVar1;
  
  iVar1 = _xmlSaveFormatFileEnc(filename,cur,(char *)0x0,format);
  return iVar1;
}

