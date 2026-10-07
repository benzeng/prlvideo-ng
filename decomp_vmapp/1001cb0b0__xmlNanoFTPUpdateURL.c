
undefined4 _xmlNanoFTPUpdateURL(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((((param_2 != 0) && (param_1 != (long *)0x0)) && (*param_1 != 0)) &&
     ((param_1[1] != 0 && (plVar2 = (long *)_xmlParseURIRaw(param_2,1), plVar2 != (long *)0x0)))) {
    if ((*plVar2 == 0) || (plVar2[3] == 0)) {
      _xmlFreeURI(plVar2);
    }
    else {
      iVar1 = _strcmp((char *)*param_1,(char *)*plVar2);
      if (((iVar1 == 0) && (iVar1 = _strcmp((char *)param_1[1],(char *)plVar2[3]), iVar1 == 0)) &&
         (((int)plVar2[5] == 0 || ((int)param_1[2] == (int)plVar2[5])))) {
        if ((int)plVar2[5] != 0) {
          *(int *)(param_1 + 2) = (int)plVar2[5];
        }
        if (param_1[3] != 0) {
          (*(code *)_xmlFree)(param_1[3]);
          param_1[3] = 0;
        }
        if (plVar2[6] == 0) {
          lVar3 = (*(code *)_xmlMemStrdup)("/");
          param_1[3] = lVar3;
        }
        else {
          lVar3 = (*(code *)_xmlMemStrdup)(plVar2[6]);
          param_1[3] = lVar3;
        }
        _xmlFreeURI(plVar2);
        return 0;
      }
      _xmlFreeURI(plVar2);
    }
  }
  return 0xffffffff;
}

