
void _xmlNanoHTTPScanProxy(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if (DAT_1011b7eb0 != 0) {
    (*(code *)_xmlFree)(DAT_1011b7eb0);
    DAT_1011b7eb0 = 0;
  }
  DAT_1011b7eb8 = 0;
  if (param_1 != 0) {
    plVar2 = (long *)_xmlParseURIRaw(param_1,1);
    if ((((plVar2 != (long *)0x0) && (*plVar2 != 0)) &&
        (iVar1 = _strcmp((char *)*plVar2,"http"), iVar1 == 0)) && (plVar2[3] != 0)) {
      DAT_1011b7eb0 = (*(code *)_xmlMemStrdup)(plVar2[3]);
      if ((int)plVar2[5] != 0) {
        DAT_1011b7eb8 = (undefined4)plVar2[5];
      }
      _xmlFreeURI(plVar2);
      return;
    }
    ___xmlIOErr(10,0x7e4,"Syntax Error\n");
    if (plVar2 != (long *)0x0) {
      _xmlFreeURI(plVar2);
    }
  }
  return;
}

