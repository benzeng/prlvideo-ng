
int _htmlSaveFileEnc(char *filename,xmlDocPtr cur,char *encoding)

{
  int iVar1;
  
  iVar1 = _htmlSaveFileFormat(filename,cur,encoding,1);
  return iVar1;
}

