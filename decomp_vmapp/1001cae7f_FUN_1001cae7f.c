
void FUN_1001cae7f(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  xmlChar *pxVar4;
  
  if (*param_1 != 0) {
    (*(code *)_xmlFree)(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (*(code *)_xmlFree)(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    (*(code *)_xmlFree)(param_1[3]);
    param_1[3] = 0;
  }
  if (param_2 != 0) {
    plVar1 = (long *)_xmlParseURIRaw(param_2,1);
    if (plVar1 != (long *)0x0) {
      if ((*plVar1 == 0) || (plVar1[3] == 0)) {
        _xmlFreeURI(plVar1);
      }
      else {
        lVar2 = (*(code *)_xmlMemStrdup)(*plVar1);
        *param_1 = lVar2;
        lVar2 = (*(code *)_xmlMemStrdup)(plVar1[3]);
        param_1[1] = lVar2;
        if (plVar1[6] == 0) {
          lVar2 = (*(code *)_xmlMemStrdup)("/");
          param_1[3] = lVar2;
        }
        else {
          lVar2 = (*(code *)_xmlMemStrdup)(plVar1[6]);
          param_1[3] = lVar2;
        }
        if ((int)plVar1[5] != 0) {
          *(int *)(param_1 + 2) = (int)plVar1[5];
        }
        if (plVar1[4] != 0) {
          pcVar3 = _strchr((char *)plVar1[4],0x3a);
          if (pcVar3 == (char *)0x0) {
            lVar2 = (*(code *)_xmlMemStrdup)(plVar1[4]);
            param_1[4] = lVar2;
          }
          else {
            pxVar4 = _xmlStrndup((xmlChar *)plVar1[4],(int)pcVar3 - (int)plVar1[4]);
            param_1[4] = (long)pxVar4;
            lVar2 = (*(code *)_xmlMemStrdup)(pcVar3 + 1);
            param_1[5] = lVar2;
          }
        }
        _xmlFreeURI(plVar1);
      }
    }
  }
  return;
}

