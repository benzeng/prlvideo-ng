
undefined4
FUN_100922900(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             xmlChar *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  char *pcVar2;
  xmlChar *pxVar3;
  undefined4 local_5c;
  int local_24;
  xmlChar *local_20;
  xmlNsPtr local_18;
  int local_c;
  
  *param_7 = 0;
  *param_8 = 0;
  local_c = _xmlValidateQName(param_6,1);
  if (local_c < 1) {
    if (local_c < 0) {
      local_5c = 0xffffffff;
    }
    else {
      pcVar2 = _strchr((char *)param_6,0x3a);
      if (pcVar2 == (char *)0x0) {
        local_18 = _xmlSearchNs(*(xmlDocPtr *)(param_5 + 0x40),*(xmlNodePtr *)(param_5 + 0x28),
                                (xmlChar *)0x0);
        if (local_18 == (xmlNsPtr)0x0) {
          if ((*(uint *)(param_2 + 0x30) >> 9 & 1) != 0) {
            *param_7 = *(undefined8 *)(param_1 + 0xd0);
          }
        }
        else {
          pxVar3 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),local_18->href,-1);
          *param_7 = pxVar3;
        }
        pxVar3 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),param_6,-1);
        *param_8 = pxVar3;
        local_5c = 0;
      }
      else {
        pxVar3 = _xmlSplitQName3(param_6,&local_24);
        *param_8 = pxVar3;
        pxVar3 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),(xmlChar *)*param_8,-1);
        *param_8 = pxVar3;
        local_20 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),param_6,local_24);
        local_18 = _xmlSearchNs(*(xmlDocPtr *)(param_5 + 0x40),*(xmlNodePtr *)(param_5 + 0x28),
                                local_20);
        if (local_18 == (xmlNsPtr)0x0) {
          uVar1 = _xmlSchemaGetBuiltInType(0x15);
          FUN_10091e207(param_1,0xbdd,param_4,param_5,uVar1,0,param_6,
                        "The value \'%s\' of simple type \'xs:QName\' has no corresponding namespace declaration in scope"
                        ,param_6,0);
          local_5c = *(undefined4 *)(param_1 + 0x20);
        }
        else {
          pxVar3 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),local_18->href,-1);
          *param_7 = pxVar3;
          local_5c = 0;
        }
      }
    }
  }
  else {
    uVar1 = _xmlSchemaGetBuiltInType(0x15);
    FUN_10091e207(param_1,0xbdd,param_4,param_5,uVar1,0,param_6,0,0,0);
    *param_8 = param_6;
    local_5c = *(undefined4 *)(param_1 + 0x20);
  }
  return local_5c;
}

