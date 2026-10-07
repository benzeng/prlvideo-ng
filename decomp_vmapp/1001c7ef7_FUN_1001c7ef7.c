
void FUN_1001c7ef7(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
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
  if (param_1[4] != 0) {
    (*(code *)_xmlFree)(param_1[4]);
    param_1[4] = 0;
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
        if (plVar1[7] != 0) {
          lVar2 = (*(code *)_xmlMemStrdup)(plVar1[7]);
          param_1[4] = lVar2;
        }
        if ((int)plVar1[5] != 0) {
          *(int *)(param_1 + 2) = (int)plVar1[5];
        }
        _xmlFreeURI(plVar1);
      }
    }
  }
  return;
}

