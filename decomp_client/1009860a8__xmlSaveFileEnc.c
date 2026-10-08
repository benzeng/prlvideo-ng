
int _xmlSaveFileEnc(char *filename,xmlDocPtr cur,char *encoding)

{
  int iVar1;
  
  iVar1 = _xmlSaveFormatFileEnc(filename,cur,encoding,0);
  return iVar1;
}

