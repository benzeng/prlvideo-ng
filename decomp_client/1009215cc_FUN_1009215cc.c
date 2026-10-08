
undefined4 *
FUN_1009215cc(long param_1,long param_2,xmlChar *param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  int iVar2;
  xmlChar *pxVar3;
  xmlHashTablePtr pxVar4;
  undefined4 *local_58;
  long *local_18;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_58 = (undefined4 *)0x0;
  }
  else {
    local_58 = (undefined4 *)(*(code *)_xmlMalloc)(0x70);
    if (local_58 == (undefined4 *)0x0) {
      FUN_10091b97e(param_1,"allocating attribute group",0);
      local_58 = (undefined4 *)0x0;
    }
    else {
      _memset(local_58,0,0x70);
      *local_58 = 0x10;
      *(undefined8 *)(local_58 + 0x10) = param_4;
      if (param_5 == 0) {
        FUN_10091eeca(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x48,local_58);
      }
      else {
        local_58[0x12] = local_58[0x12] | 2;
        pxVar3 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),param_3,-1);
        *(xmlChar **)(local_58 + 4) = pxVar3;
        *(undefined8 *)(local_58 + 0x1a) = *(undefined8 *)(param_1 + 0xd0);
        if ((**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 0) ||
           (**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 1)) {
          lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50);
        }
        else {
          lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50) + 0x50);
        }
        local_18 = (long *)(lVar1 + 0x48);
        if (*local_18 == 0) {
          pxVar4 = _xmlHashCreateDict(10,*(xmlDictPtr *)(param_1 + 0x98));
          *local_18 = (long)pxVar4;
        }
        if (*local_18 == 0) {
          if (local_58 != (undefined4 *)0x0) {
            (*(code *)_xmlFree)(local_58);
          }
          return (undefined4 *)0x0;
        }
        iVar2 = _xmlHashAddEntry((xmlHashTablePtr)*local_18,param_3,local_58);
        if (iVar2 != 0) {
          FUN_10091dd92(param_1,0x6e3,0,0,param_4,
                        "A global attribute group definition with the name \'%s\' does already exist"
                        ,param_3);
          (*(code *)_xmlFree)(local_58);
          return (undefined4 *)0x0;
        }
        FUN_10091eeca(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x40,local_58);
      }
      FUN_10091eeca(*(long *)(param_1 + 0x30) + 0x20,local_58);
    }
  }
  return local_58;
}

