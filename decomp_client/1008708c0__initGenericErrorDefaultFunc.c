
void _initGenericErrorDefaultFunc(xmlGenericErrorFunc *handler)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  
  if (handler == (xmlGenericErrorFunc *)0x0) {
    ppxVar2 = ___xmlGenericError();
    *ppxVar2 = _xmlGenericErrorDefaultFunc;
  }
  else {
    pxVar1 = *handler;
    ppxVar2 = ___xmlGenericError();
    *ppxVar2 = pxVar1;
  }
  return;
}

