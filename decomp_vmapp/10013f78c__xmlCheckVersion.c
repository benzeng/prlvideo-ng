
void _xmlCheckVersion(int version)

{
  xmlGenericErrorFunc pxVar1;
  xmlGenericErrorFunc *ppxVar2;
  void **ppvVar3;
  
  _xmlInitParser();
  if (version / 10000 != 2) {
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"Fatal: program compiled against libxml %d using libxml %d\n",
              (ulong)(uint)(version / 10000),2);
    _fprintf(*(FILE **)PTR____stderrp_100ba2328,
             "Fatal: program compiled against libxml %d using libxml %d\n",
             (ulong)(uint)(version / 10000),2);
  }
  if (0xce < version / 100) {
    ppxVar2 = ___xmlGenericError();
    pxVar1 = *ppxVar2;
    ppvVar3 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar3,"Warning: program compiled against libxml %d using older %d\n",
              (ulong)(uint)(version / 100),0xce);
  }
  return;
}

