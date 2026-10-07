
int _xmlSaveFile(char *filename,xmlDocPtr cur)

{
  int iVar1;
  
  iVar1 = _xmlSaveFormatFileEnc(filename,cur,(char *)0x0,0);
  return iVar1;
}

