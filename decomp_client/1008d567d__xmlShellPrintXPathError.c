
void _xmlShellPrintXPathError(int errorType,char *arg)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  char *local_38;
  
  local_38 = arg;
  if (arg == (char *)0x0) {
    local_38 = "Result";
  }
  switch(errorType) {
  case 0:
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"%s: no such node\n",local_38);
    break;
  case 2:
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"%s is a Boolean\n",local_38);
    break;
  case 3:
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"%s is a number\n",local_38);
    break;
  case 4:
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"%s is a string\n",local_38);
    break;
  case 5:
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"%s is a point\n",local_38);
    break;
  case 6:
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"%s is a range\n",local_38);
    break;
  case 7:
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"%s is a range\n",local_38);
    break;
  case 8:
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"%s is user-defined\n",local_38);
    break;
  case 9:
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"%s is an XSLT value tree\n",local_38);
  }
  return;
}

