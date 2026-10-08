
/* WARNING: Removing unreachable block (ram,0x000100922439) */

int * FUN_10092234a(long param_1,long param_2,long param_3,undefined8 param_4,int param_5,
                   undefined8 param_6)

{
  long lVar1;
  int iVar2;
  xmlHashTablePtr pxVar3;
  int *local_60;
  long *local_18;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_60 = (int *)0x0;
  }
  else {
    if ((**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 0) ||
       (**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 1)) {
      lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50);
    }
    else {
      lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50) + 0x50);
    }
    local_18 = (long *)(lVar1 + 0x90);
    if (*local_18 == 0) {
      pxVar3 = _xmlHashCreateDict(10,*(xmlDictPtr *)(param_1 + 0x98));
      *local_18 = (long)pxVar3;
    }
    if (*local_18 == 0) {
      local_60 = (int *)0x0;
    }
    else {
      local_60 = (int *)(*(code *)_xmlMalloc)(0x50);
      if (local_60 == (int *)0x0) {
        FUN_10091b97e(param_1,"allocating an identity-constraint definition",0);
        local_60 = (int *)0x0;
      }
      else {
        _memset(local_60,0,0x50);
        *(undefined8 *)(local_60 + 10) = param_4;
        *(long *)(local_60 + 8) = param_3;
        *local_60 = param_5;
        *(undefined8 *)(local_60 + 6) = param_6;
        iVar2 = _xmlHashAddEntry((xmlHashTablePtr)*local_18,*(xmlChar **)(local_60 + 8),local_60);
        if (iVar2 == 0) {
          FUN_10091eeca(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x40,local_60);
          if (param_5 == 0x18) {
            FUN_10091eeca(*(long *)(param_1 + 0x30) + 0x20,local_60);
          }
        }
        else {
          FUN_10091dc58(param_1,0x6e1,0,0,param_6,
                        "An identity-constraint definition with the name \'%s\' and targetNamespace \'%s\' does already exist"
                        ,*(undefined8 *)(local_60 + 8),*(undefined8 *)(local_60 + 10),0);
          (*(code *)_xmlFree)(local_60);
          local_60 = (int *)0x0;
        }
      }
    }
  }
  return local_60;
}

