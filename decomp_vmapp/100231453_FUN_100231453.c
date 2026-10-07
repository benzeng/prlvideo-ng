
undefined4
FUN_100231453(xmlChar *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  void *pvVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  undefined8 *userdata;
  xmlChar *pxVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 local_5c;
  
  if ((((DAT_1011b8920 == (xmlHashTablePtr)0x0) || (param_1 == (xmlChar *)0x0)) || (param_4 == 0))
     || (param_5 == 0)) {
    local_5c = 0xffffffff;
  }
  else {
    pvVar3 = _xmlHashLookup(DAT_1011b8920,param_1);
    if (pvVar3 == (void *)0x0) {
      userdata = (undefined8 *)(*(code *)_xmlMalloc)(0x38);
      if (userdata == (undefined8 *)0x0) {
        FUN_10022d41d(0,"adding types library\n");
        local_5c = 0xffffffff;
      }
      else {
        puVar8 = userdata;
        for (lVar7 = 7; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        pxVar6 = _xmlStrdup(param_1);
        *userdata = pxVar6;
        userdata[1] = param_2;
        userdata[2] = param_3;
        userdata[4] = param_5;
        userdata[3] = param_4;
        userdata[5] = param_6;
        userdata[6] = param_7;
        iVar2 = _xmlHashAddEntry(DAT_1011b8920,param_1,userdata);
        if (iVar2 < 0) {
          ppxVar4 = ___xmlGenericError();
          pxVar1 = *ppxVar4;
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar5,"Relax-NG types library failed to register \'%s\'\n",param_1);
          FUN_10023140b(userdata,param_1);
          local_5c = 0xffffffff;
        }
        else {
          local_5c = 0;
        }
      }
    }
    else {
      ppxVar4 = ___xmlGenericError();
      pxVar1 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar1)(*ppvVar5,"Relax-NG types library \'%s\' already registered\n",param_1);
      local_5c = 0xffffffff;
    }
  }
  return local_5c;
}

