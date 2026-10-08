
undefined4 FUN_10092681a(undefined8 param_1,long param_2,long param_3,long param_4,int param_5)

{
  xmlNsPtr *ppxVar1;
  undefined8 uVar2;
  undefined4 local_60;
  long local_30;
  long local_28;
  int local_18;
  int local_14;
  
  if (param_3 == 0) {
    FUN_10091b9cb(param_1,*(undefined8 *)(param_2 + 0x18),0xbfd,
                  "Internal error: xmlSchemaCheckCSelectorXPath, the selector is not specified.\n",0
                  ,0);
    local_60 = 0xffffffff;
  }
  else {
    local_30 = param_4;
    if (param_4 == 0) {
      local_30 = *(long *)(param_2 + 0x18);
    }
    if (*(long *)(param_3 + 0x18) == 0) {
      FUN_10091dd92(param_1,0xbdd,0,0,local_30,"The XPath expression of the selector is not valid",0
                   );
      local_60 = 0xbdd;
    }
    else {
      local_28 = 0;
      ppxVar1 = _xmlGetNsList(*(xmlDocPtr *)(param_4 + 0x40),*(xmlNodePtr *)(param_4 + 0x28));
      if (ppxVar1 != (xmlNsPtr *)0x0) {
        local_14 = 0;
        for (local_18 = 0; ppxVar1[local_18] != (xmlNsPtr)0x0; local_18 = local_18 + 1) {
          local_14 = local_14 + 1;
        }
        local_28 = (*(code *)_xmlMalloc)((long)local_14 * 0x10 + 8);
        if (local_28 == 0) {
          FUN_10091b97e(param_1,"allocating a namespace array",0);
          return 0xffffffff;
        }
        for (local_18 = 0; local_18 < local_14; local_18 = local_18 + 1) {
          *(xmlChar **)((long)local_18 * 0x10 + local_28) = ppxVar1[local_18]->href;
          *(xmlChar **)((long)local_18 * 0x10 + local_28 + 8) = ppxVar1[local_18]->prefix;
        }
        *(undefined8 *)((long)local_14 * 0x10 + local_28) = 0;
        (*(code *)_xmlFree)(ppxVar1);
      }
      if (param_5 == 0) {
        uVar2 = _xmlPatterncompile(*(undefined8 *)(param_3 + 0x18),0,2,local_28);
        *(undefined8 *)(param_3 + 0x20) = uVar2;
      }
      else {
        uVar2 = _xmlPatterncompile(*(undefined8 *)(param_3 + 0x18),0,4,local_28);
        *(undefined8 *)(param_3 + 0x20) = uVar2;
      }
      if (local_28 != 0) {
        (*(code *)_xmlFree)(local_28);
      }
      if (*(long *)(param_3 + 0x20) == 0) {
        FUN_10091dd92(param_1,0xbdd,0,0,local_30,"The XPath expression \'%s\' could not be compiled"
                      ,*(undefined8 *)(param_3 + 0x18));
        local_60 = 0xbdd;
      }
      else {
        local_60 = 0;
      }
    }
  }
  return local_60;
}

