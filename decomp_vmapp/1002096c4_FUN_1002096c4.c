
int FUN_1002096c4(long param_1,undefined8 param_2,xmlNodePtr param_3,xmlChar *param_4,long *param_5,
                 int param_6)

{
  long lVar1;
  xmlChar *pxVar2;
  int local_68;
  xmlChar *local_30;
  int local_24;
  xmlChar *local_20;
  xmlChar *local_18;
  xmlNsPtr local_10;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x28) != 0)) {
    local_68 = _xmlValidateQName(param_4,1);
    if (local_68 == 0) {
      local_20 = (xmlChar *)0x0;
      local_30 = (xmlChar *)0x0;
      local_24 = local_68;
      local_20 = _xmlSplitQName2(param_4,&local_30);
      if (local_30 == (xmlChar *)0x0) {
        lVar1 = FUN_1001ed4ff(param_2,param_4,0);
        if (lVar1 == 0) {
          return 1;
        }
        if ((param_6 != 0) && (param_5 != (long *)0x0)) {
          pxVar2 = _xmlStrdup(param_4);
          lVar1 = _xmlSchemaNewNOTATIONValue(pxVar2,0);
          *param_5 = lVar1;
          if (*param_5 == 0) {
            local_24 = -1;
          }
        }
      }
      else {
        local_18 = (xmlChar *)0x0;
        if (param_1 == 0) {
          if (param_3 == (xmlNodePtr)0x0) {
            (*(code *)_xmlFree)(local_30);
            (*(code *)_xmlFree)(local_20);
            return 1;
          }
          local_10 = _xmlSearchNs(param_3->doc,param_3,local_30);
          if (local_10 != (xmlNsPtr)0x0) {
            local_18 = local_10->href;
          }
        }
        else {
          local_18 = (xmlChar *)FUN_10020947d(param_1,local_30);
        }
        if (local_18 == (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_30);
          (*(code *)_xmlFree)(local_20);
          return 1;
        }
        lVar1 = FUN_1001ed4ff(param_2,local_20,local_18);
        if (lVar1 == 0) {
          local_24 = 1;
        }
        else if ((param_6 != 0) && (param_5 != (long *)0x0)) {
          pxVar2 = _xmlStrdup(local_18);
          lVar1 = _xmlSchemaNewNOTATIONValue(local_20,pxVar2);
          *param_5 = lVar1;
          if (*param_5 == 0) {
            local_24 = -1;
          }
        }
        (*(code *)_xmlFree)(local_30);
        (*(code *)_xmlFree)(local_20);
      }
      local_68 = local_24;
    }
  }
  else {
    FUN_1001e8d2a(param_1,"xmlSchemaValidateNotation","a schema is needed on the validation context"
                 );
    local_68 = -1;
  }
  return local_68;
}

