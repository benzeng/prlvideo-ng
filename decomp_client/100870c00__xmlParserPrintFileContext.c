
void _xmlParserPrintFileContext(xmlParserInputPtr input)

{
  void *pvVar1;
  void **ppvVar2;
  xmlGenericErrorFunc *ppxVar3;
  
  ppvVar2 = ___xmlGenericErrorContext();
  pvVar1 = *ppvVar2;
  ppxVar3 = ___xmlGenericError();
  FUN_100870a08(input,*ppxVar3,pvVar1);
  return;
}

