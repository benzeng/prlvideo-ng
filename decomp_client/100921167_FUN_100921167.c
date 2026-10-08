
/* WARNING: Removing unreachable block (ram,0x000100921246) */

undefined8 * FUN_100921167(long param_1,long param_2,xmlChar *param_3)

{
  long lVar1;
  int iVar2;
  xmlHashTablePtr pxVar3;
  xmlChar *pxVar4;
  undefined8 *local_48;
  long *local_18;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (xmlChar *)0x0)) {
    local_48 = (undefined8 *)0x0;
  }
  else {
    if ((**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 0) ||
       (**(int **)(*(long *)(param_1 + 0x30) + 0x18) == 1)) {
      lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50);
    }
    else {
      lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x50) + 0x50);
    }
    local_18 = (long *)(lVar1 + 0x58);
    if (*local_18 == 0) {
      pxVar3 = _xmlHashCreateDict(10,*(xmlDictPtr *)(param_1 + 0x98));
      *local_18 = (long)pxVar3;
    }
    if (*local_18 == 0) {
      local_48 = (undefined8 *)0x0;
    }
    else {
      local_48 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
      if (local_48 == (undefined8 *)0x0) {
        FUN_10091b97e(param_1,"add annotation",0);
        local_48 = (undefined8 *)0x0;
      }
      else {
        *local_48 = 0;
        local_48[1] = 0;
        local_48[2] = 0;
        local_48[3] = 0;
        local_48[4] = 0;
        *(undefined4 *)local_48 = 0x12;
        pxVar4 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),param_3,-1);
        local_48[1] = pxVar4;
        iVar2 = _xmlHashAddEntry((xmlHashTablePtr)*local_18,(xmlChar *)local_48[1],local_48);
        if (iVar2 == 0) {
          FUN_10091eeca(*(long *)(*(long *)(param_1 + 0x30) + 0x18) + 0x40,local_48);
        }
        else {
          FUN_10091b9cb(param_1,*(undefined8 *)(param_1 + 0x58),0x6e5,
                        "A notation declaration with the name \'%s\' does already exist.\n",param_3,
                        0);
          (*(code *)_xmlFree)(local_48);
          local_48 = (undefined8 *)0x0;
        }
      }
    }
  }
  return local_48;
}

