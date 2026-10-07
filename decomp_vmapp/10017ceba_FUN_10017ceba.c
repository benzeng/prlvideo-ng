
void FUN_10017ceba(undefined8 param_1)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  
  ppxVar2 = ___xmlGenericError();
  pxVar1 = *ppxVar2;
  ppvVar3 = ___xmlGenericErrorContext();
  (*pxVar1)(*ppvVar3,"Memory tag error occurs :%p \n\t bye\n",param_1);
  return;
}

