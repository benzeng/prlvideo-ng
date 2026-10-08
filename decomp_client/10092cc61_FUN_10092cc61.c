
undefined4
FUN_10092cc61(long param_1,long param_2,xmlNodePtr param_3,undefined8 *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  xmlChar *pxVar4;
  _xmlAttr *local_30;
  xmlChar *local_20;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == (xmlNodePtr)0x0)) ||
     (param_4 == (undefined8 *)0x0)) {
    return 0xffffffff;
  }
  *param_4 = 0;
  for (local_30 = param_3->properties; local_30 != (_xmlAttr *)0x0; local_30 = local_30->next) {
    if (local_30->ns == (xmlNs *)0x0) {
      iVar1 = _xmlStrEqual(local_30->name,(xmlChar *)"id");
      if ((iVar1 == 0) &&
         (iVar1 = _xmlStrEqual(local_30->name,(xmlChar *)"schemaLocation"), iVar1 == 0)) {
        FUN_10091dac6(param_1,0xbdb,0,0,local_30);
      }
    }
    else {
      iVar1 = _xmlStrEqual(local_30->ns->href,PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
      if (iVar1 != 0) {
        FUN_10091dac6(param_1,0xbdb,0,0,local_30);
      }
    }
  }
  FUN_100922c95(param_1,0,0,param_3,"id");
  lVar2 = FUN_100920729(param_3,"schemaLocation");
  if (lVar2 == 0) {
    FUN_10091d7dc(param_1,0xbdc,0,param_3,"schemaLocation",0);
  }
  else {
    uVar3 = _xmlSchemaGetBuiltInType(0x1d);
    iVar1 = FUN_100923679(param_1,0,0,lVar2,uVar3,param_4);
    if (iVar1 == 0) {
      pxVar4 = _xmlNodeGetBase(param_3->doc,param_3);
      if (pxVar4 == (xmlChar *)0x0) {
        local_20 = (xmlChar *)_xmlBuildURI(*param_4,param_3->doc->URL);
      }
      else {
        local_20 = (xmlChar *)_xmlBuildURI(*param_4,pxVar4);
        (*(code *)_xmlFree)(pxVar4);
      }
      if (local_20 == (xmlChar *)0x0) {
        FUN_10091c652(param_1,"xmlSchemaParseIncludeOrRedefine",
                      "could not build an URI from the schemaLocation");
        return 0xffffffff;
      }
      pxVar4 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x98),local_20,-1);
      *param_4 = pxVar4;
      (*(code *)_xmlFree)(local_20);
      iVar1 = _xmlStrEqual((xmlChar *)*param_4,*(xmlChar **)(param_1 + 0x50));
      if (iVar1 == 0) {
        return 0;
      }
      if (param_5 == 3) {
        FUN_10091dd92(param_1,0xc09,0,0,param_3,"The schema document \'%s\' cannot redefine itself."
                      ,*param_4);
      }
      else {
        FUN_10091dd92(param_1,0xbea,0,0,param_3,"The schema document \'%s\' cannot include itself.",
                      *param_4);
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x20);
}

