
void * FUN_1001edf1b(long param_1,long param_2,xmlChar *param_3,undefined8 param_4,
                    undefined8 param_5,int param_6)

{
  long lVar1;
  int iVar2;
  xmlChar *pxVar3;
  xmlHashTablePtr pxVar4;
  void *local_60;
  long *local_18;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (xmlChar *)0x0)) {
    local_60 = (void *)0x0;
  }
  else {
    local_60 = (void *)(*(code *)_xmlMalloc)(200);
    if (local_60 == (void *)0x0) {
      FUN_1001e8056(param_1,"allocating element",0);
      local_60 = (void *)0x0;
    }
    else {
      _memset(local_60,0,200);
      pxVar3 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),param_3,-1);
      *(xmlChar **)((long)local_60 + 0x10) = pxVar3;
      *(undefined8 *)((long)local_60 + 0x60) = param_4;
      if (param_6 == 0) {
        FUN_1001eb5a2(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x48,local_60);
      }
      else {
        if ((**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 0) ||
           (**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 1)) {
          lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50);
        }
        else {
          lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50) + 0x50);
        }
        local_18 = (long *)(lVar1 + 0x50);
        if (*local_18 == 0) {
          pxVar4 = _xmlHashCreateDict(10,*(xmlDictPtr *)(param_1 + 0x98));
          *local_18 = (long)pxVar4;
        }
        if (*local_18 == 0) {
          if (local_60 != (void *)0x0) {
            (*(code *)_xmlFree)(local_60);
          }
          return (void *)0x0;
        }
        iVar2 = _xmlHashAddEntry((xmlHashTablePtr)*local_18,param_3,local_60);
        if (iVar2 != 0) {
          FUN_1001ea46a(param_1,0x6e2,0,0,param_5,
                        "A global element declaration with the name \'%s\' does already exist",
                        param_3);
          (*(code *)_xmlFree)(local_60);
          return (void *)0x0;
        }
        FUN_1001eb5a2(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x40,local_60);
      }
      FUN_1001eb5a2(*(long *)(param_1 + 0x30) + 0x20,local_60);
    }
  }
  return local_60;
}

