
int _xmlDocDump(FILE *f,xmlDocPtr cur)

{
  int iVar1;
  
  iVar1 = _xmlDocFormatDump(f,cur,0);
  return iVar1;
}

