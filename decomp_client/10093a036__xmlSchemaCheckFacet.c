
int _xmlSchemaCheckFacet(undefined4 *param_1,int *param_2,long param_3)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  xmlRegexpPtr pxVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_50;
  long local_30;
  int local_28;
  uint local_24;
  int *local_20;
  
  local_28 = 0;
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (int *)0x0)) {
    return -1;
  }
  local_24 = (uint)(param_3 != 0);
  local_50 = param_3;
  switch(*param_1) {
  case 1000:
  case 0x3e9:
  case 0x3ea:
  case 0x3eb:
  case 0x3ef:
    local_20 = param_2;
    if ((*param_2 != 1) && (local_20 = *(int **)(param_2 + 0x1c), local_20 == (int *)0x0)) {
      FUN_10091c652(param_3,"xmlSchemaCheckFacet","a type user derived type has no base type");
      return -1;
    }
    if ((local_24 == 0) && (local_50 = _xmlSchemaNewParserCtxt("*"), local_50 == 0)) {
      return -1;
    }
    local_28 = FUN_100940cd5(local_50,*(undefined8 *)(param_1 + 10),local_20,
                             *(undefined8 *)(param_1 + 4),param_1 + 0xe,1,1,0);
    if (local_28 == 0) {
      if (*(long *)(param_1 + 0xe) == 0) {
        if (local_24 != 0) {
          FUN_10091c652(local_50,"xmlSchemaCheckFacet","value was not computed");
        }
        ppxVar3 = ___xmlGenericError();
        pxVar1 = *ppxVar3;
        ppvVar4 = ___xmlGenericErrorContext();
        (*pxVar1)(*ppvVar4,"Unimplemented block at %s:%d\n","xmlschemas.c",0x449b);
      }
    }
    else {
      if (local_28 < 0) {
        if (local_24 != 0) {
          uVar7 = FUN_10093c621(*param_1);
          FUN_10091c684(local_50,0xbfd,*(undefined8 *)(param_1 + 10),0,
                        "Internal error: xmlSchemaCheckFacet, failed to validate the value \'%s\' of the facet \'%s\' against the base type"
                        ,*(undefined8 *)(param_1 + 4),uVar7);
        }
LAB_10093a205:
        if ((local_24 == 0) && (local_50 != 0)) {
          _xmlSchemaFreeParserCtxt(local_50);
        }
        return -1;
      }
      local_28 = 0x6b5;
      if (local_24 != 0) {
        local_30 = 0;
        uVar7 = FUN_10091a69e(&local_30,*(undefined8 *)(local_20 + 0x34),
                              *(undefined8 *)(local_20 + 4));
        FUN_10091c684(local_50,local_28,*(undefined8 *)(param_1 + 10),param_1,
                      "The value \'%s\' of the facet does not validate against the base type \'%s\'"
                      ,*(undefined8 *)(param_1 + 4),uVar7);
        if (local_30 != 0) {
          (*(code *)_xmlFree)(local_30);
          local_30 = 0;
        }
      }
    }
    break;
  case 0x3ec:
  case 0x3ed:
  case 0x3f1:
  case 0x3f2:
  case 0x3f3:
    uVar7 = *(undefined8 *)(param_1 + 4);
    uVar6 = _xmlSchemaGetBuiltInType(0x21);
    local_28 = _xmlSchemaValidatePredefinedType(uVar6,uVar7,param_1 + 0xe);
    if (local_28 != 0) {
      if (local_28 < 0) {
        if (local_24 != 0) {
          FUN_10091c652(param_3,"xmlSchemaCheckFacet","validating facet value");
        }
        goto LAB_10093a205;
      }
      local_28 = 0x6b5;
      if (local_24 != 0) {
        uVar7 = FUN_10093c621(*param_1);
        FUN_10091c684(param_3,local_28,*(undefined8 *)(param_1 + 10),param_2,
                      "The value \'%s\' of the facet \'%s\' is not a valid \'nonNegativeInteger\'",
                      *(undefined8 *)(param_1 + 4),uVar7);
      }
    }
    break;
  case 0x3ee:
    pxVar5 = _xmlRegexpCompile(*(xmlChar **)(param_1 + 4));
    *(xmlRegexpPtr *)(param_1 + 0x10) = pxVar5;
    if ((*(long *)(param_1 + 0x10) == 0) && (local_28 = 0x6dc, local_24 != 0)) {
      FUN_10091c684(param_3,0x6dc,*(undefined8 *)(param_1 + 10),param_2,
                    "The value \'%s\' of the facet \'pattern\' is not a valid regular expression",
                    *(undefined8 *)(param_1 + 4),0);
    }
    break;
  case 0x3f0:
    iVar2 = _xmlStrEqual(*(xmlChar **)(param_1 + 4),(xmlChar *)"preserve");
    if (iVar2 == 0) {
      iVar2 = _xmlStrEqual(*(xmlChar **)(param_1 + 4),(xmlChar *)"replace");
      if (iVar2 == 0) {
        iVar2 = _xmlStrEqual(*(xmlChar **)(param_1 + 4),(xmlChar *)"collapse");
        if (iVar2 == 0) {
          local_28 = 0x6b5;
          if (local_24 != 0) {
            FUN_10091c684(param_3,0x6b5,*(undefined8 *)(param_1 + 10),param_2,
                          "The value \'%s\' of the facet \'whitespace\' is not valid",
                          *(undefined8 *)(param_1 + 4),0);
          }
        }
        else {
          param_1[0xd] = 3;
        }
      }
      else {
        param_1[0xd] = 2;
      }
    }
    else {
      param_1[0xd] = 1;
    }
  }
  if ((local_24 == 0) && (local_50 != 0)) {
    _xmlSchemaFreeParserCtxt(local_50);
  }
  return local_28;
}

