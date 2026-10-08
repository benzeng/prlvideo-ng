
void _xmlSetGenericErrorFunc(void *ctx,xmlGenericErrorFunc handler)

{
  void **ppvVar1;
  xmlGenericErrorFunc *ppxVar2;
  
  ppvVar1 = ___xmlGenericErrorContext();
  *ppvVar1 = ctx;
  if (handler == (xmlGenericErrorFunc)0x0) {
    ppxVar2 = ___xmlGenericError();
    *ppxVar2 = _xmlGenericErrorDefaultFunc;
  }
  else {
    ppxVar2 = ___xmlGenericError();
    *ppxVar2 = handler;
  }
  return;
}

