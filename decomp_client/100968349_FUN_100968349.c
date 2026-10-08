
undefined4 FUN_100968349(long param_1,xmlNodePtr param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  xmlChar *value;
  undefined4 *userdata;
  undefined8 uVar4;
  xmlHashTablePtr pxVar5;
  undefined4 local_38;
  void *local_20;
  
  local_38 = 0;
  value = _xmlGetProp(param_2,(xmlChar *)"name");
  if (value == (xmlChar *)0x0) {
    FUN_100960ece(param_1,param_2,0x3f6,"define has no name\n",0,0);
  }
  else {
    FUN_10096d1af(value);
    iVar3 = _xmlValidateNCName(value,0);
    if (iVar3 != 0) {
      FUN_100960ece(param_1,param_2,0x419,"define name \'%s\' is not an NCName\n",value,0);
    }
    userdata = (undefined4 *)FUN_10096154d(param_1,param_2);
    if (userdata == (undefined4 *)0x0) {
      (*(code *)_xmlFree)(value);
      return 0xffffffff;
    }
    *userdata = 10;
    *(xmlChar **)(userdata + 4) = value;
    if (param_2->children == (_xmlNode *)0x0) {
      FUN_100960ece(param_1,param_2,0x3f4,"define has no children\n",0,0);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      *(xmlChar **)(param_1 + 0x50) = value;
      uVar4 = FUN_10096a7f3(param_1,param_2->children,0);
      *(undefined8 *)(userdata + 0xc) = uVar4;
      *(undefined8 *)(param_1 + 0x50) = uVar1;
    }
    if (*(long *)(*(long *)(param_1 + 0x30) + 0x30) == 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      pxVar5 = _xmlHashCreate(10);
      *(xmlHashTablePtr *)(lVar2 + 0x30) = pxVar5;
    }
    if (*(long *)(*(long *)(param_1 + 0x30) + 0x30) == 0) {
      FUN_100960ece(param_1,param_2,0x3f3,"Could not create definition hash\n",0,0);
      local_38 = 0xffffffff;
    }
    else {
      iVar3 = _xmlHashAddEntry(*(xmlHashTablePtr *)(*(long *)(param_1 + 0x30) + 0x30),value,userdata
                              );
      if (iVar3 < 0) {
        local_20 = _xmlHashLookup(*(xmlHashTablePtr *)(*(long *)(param_1 + 0x30) + 0x30),value);
        if (local_20 == (void *)0x0) {
          FUN_100960ece(param_1,param_2,0x3f3,"Internal error on define aggregation of %s\n",value,0
                       );
          local_38 = 0xffffffff;
        }
        else {
          for (; *(long *)((long)local_20 + 0x58) != 0; local_20 = *(void **)((long)local_20 + 0x58)
              ) {
          }
          *(undefined4 **)((long)local_20 + 0x58) = userdata;
        }
      }
    }
  }
  return local_38;
}

