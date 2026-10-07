
void _xmlParserPrintFileInfo(xmlParserInputPtr input)

{
  uint uVar1;
  xmlGenericErrorFunc pxVar2;
  char *pcVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  
  if (input != (xmlParserInputPtr)0x0) {
    if (input->filename == (char *)0x0) {
      ppxVar4 = ___xmlGenericError();
      pxVar2 = *ppxVar4;
      uVar1 = input->line;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar5,"Entity: line %d: ",(ulong)uVar1);
    }
    else {
      ppxVar4 = ___xmlGenericError();
      pxVar2 = *ppxVar4;
      uVar1 = input->line;
      pcVar3 = input->filename;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar5,"%s:%d: ",pcVar3,(ulong)uVar1);
    }
  }
  return;
}

