
void _xmlSetStructuredErrorFunc(void *ctx,xmlStructuredErrorFunc handler)

{
  void **ppvVar1;
  xmlStructuredErrorFunc *ppxVar2;
  
  ppvVar1 = ___xmlGenericErrorContext();
  *ppvVar1 = ctx;
  ppxVar2 = ___xmlStructuredError();
  *ppxVar2 = handler;
  return;
}

