
void * FUN_1001ee16d(long param_1,long param_2,xmlChar *param_3,undefined8 param_4,
                    undefined8 param_5,int param_6)

{
  long lVar1;
  xmlGenericErrorFunc pxVar2;
  xmlChar *pxVar3;
  xmlHashTablePtr pxVar4;
  undefined8 uVar5;
  xmlGenericErrorFunc *ppxVar6;
  void **ppvVar7;
  void *local_80;
  long local_40;
  void *local_38;
  long *local_30;
  int local_24;
  void *local_20;
  
  local_38 = (void *)0x0;
  local_30 = (long *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_80 = (void *)0x0;
  }
  else {
    local_38 = (void *)(*(code *)_xmlMalloc)(0xd8);
    if (local_38 == (void *)0x0) {
      FUN_1001e8056(param_1,"allocating type",0);
      local_80 = (void *)0x0;
    }
    else {
      _memset(local_38,0,0xd8);
      if (param_3 != (xmlChar *)0x0) {
        pxVar3 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),param_3,-1);
        *(xmlChar **)((long)local_38 + 0x10) = pxVar3;
      }
      *(undefined8 *)((long)local_38 + 0xd0) = param_4;
      *(undefined8 *)((long)local_38 + 0x48) = param_5;
      *(undefined4 *)((long)local_38 + 0x50) = 1;
      *(undefined4 *)((long)local_38 + 0x54) = 1;
      if (param_6 == 0) {
        FUN_1001eb5a2(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x48,local_38);
      }
      else {
        if ((**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 0) ||
           (**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 1)) {
          lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50);
        }
        else {
          lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50) + 0x50);
        }
        local_30 = (long *)(lVar1 + 0x38);
        if (*local_30 == 0) {
          pxVar4 = _xmlHashCreateDict(10,*(xmlDictPtr *)(param_1 + 0x98));
          *local_30 = (long)pxVar4;
        }
        if (*local_30 == 0) {
          if (local_38 != (void *)0x0) {
            (*(code *)_xmlFree)(local_38);
          }
          return (void *)0x0;
        }
        local_24 = _xmlHashAddEntry((xmlHashTablePtr)*local_30,param_3,local_38);
        if (local_24 == 0) {
          FUN_1001eb5a2(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x40,local_38);
        }
        else {
          if (*(int *)(param_1 + 0xc4) == 0) {
            local_40 = 0;
            uVar5 = FUN_1001e6d76(&local_40,param_4,param_3);
            FUN_1001ea46a(param_1,0x6e1,0,0,param_5,
                          "A global type definition with the name \'%s\' does already exist",uVar5);
            if (local_40 != 0) {
              (*(code *)_xmlFree)(local_40);
              local_40 = 0;
            }
            (*(code *)_xmlFree)(local_38);
            return (void *)0x0;
          }
          ppxVar6 = ___xmlGenericError();
          pxVar2 = *ppxVar6;
          ppvVar7 = ___xmlGenericErrorContext();
          (*pxVar2)(*ppvVar7,"Unimplemented block at %s:%d\n","xmlschemas.c",0x12aa);
          local_20 = _xmlHashLookup((xmlHashTablePtr)*local_30,param_3);
          if (local_20 == (void *)0x0) {
            FUN_1001e8d2a(param_1,"xmlSchemaAddType",
                          "hash list did not return a redefined type component, but should");
            (*(code *)_xmlFree)(local_38);
            return (void *)0x0;
          }
          *(undefined8 *)((long)local_38 + 0x80) = *(undefined8 *)((long)local_20 + 0x80);
          *(void **)((long)local_20 + 0x80) = local_38;
          FUN_1001eb5a2(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x48,local_38);
        }
      }
      FUN_1001eb5a2(*(long *)(param_1 + 0x30) + 0x20,local_38);
      local_80 = local_38;
    }
  }
  return local_80;
}

