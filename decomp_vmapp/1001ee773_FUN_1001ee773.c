
/* WARNING: Removing unreachable block (ram,0x0001001ee85a) */

undefined4 *
FUN_1001ee773(long param_1,long param_2,xmlChar *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  xmlHashTablePtr pxVar3;
  xmlChar *pxVar4;
  undefined4 *local_58;
  long *local_18;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (xmlChar *)0x0)) {
    local_58 = (undefined4 *)0x0;
  }
  else {
    if ((**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 0) ||
       (**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 1)) {
      lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50);
    }
    else {
      lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50) + 0x50);
    }
    local_18 = (long *)(lVar1 + 0x70);
    if (*local_18 == 0) {
      pxVar3 = _xmlHashCreateDict(10,*(xmlDictPtr *)(param_1 + 0x98));
      *local_18 = (long)pxVar3;
    }
    if (*local_18 == 0) {
      local_58 = (undefined4 *)0x0;
    }
    else {
      local_58 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
      if (local_58 == (undefined4 *)0x0) {
        FUN_1001e8056(param_1,"adding group",0);
        local_58 = (undefined4 *)0x0;
      }
      else {
        _memset(local_58,0,0x48);
        pxVar4 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),param_3,-1);
        *(xmlChar **)(local_58 + 8) = pxVar4;
        *local_58 = 0x11;
        *(undefined8 *)(local_58 + 0xc) = param_5;
        *(undefined8 *)(local_58 + 10) = param_4;
        iVar2 = _xmlHashAddEntry((xmlHashTablePtr)*local_18,*(xmlChar **)(local_58 + 8),local_58);
        if (iVar2 == 0) {
          FUN_1001eb5a2(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x40,local_58);
          FUN_1001eb5a2(*(long *)(param_1 + 0x30) + 0x20,local_58);
        }
        else {
          FUN_1001ea46a(param_1,0x6e0,0,0,param_5,
                        "A global model group definition with the name \'%s\' does already exist",
                        param_3);
          (*(code *)_xmlFree)(local_58);
          local_58 = (undefined4 *)0x0;
        }
      }
    }
  }
  return local_58;
}

