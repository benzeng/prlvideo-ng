
undefined4
FUN_10018a928(undefined8 param_1,xmlDocPtr param_2,undefined8 param_3,undefined4 param_4,
             xmlChar *param_5)

{
  byte bVar1;
  byte *name;
  byte *pbVar2;
  xmlEntityPtr pxVar3;
  undefined4 local_44;
  xmlEntityPtr local_40;
  byte *local_28;
  xmlNotationPtr local_10;
  
  local_44 = 1;
  switch(param_4) {
  case 5:
    local_40 = _xmlGetDocEntity(param_2,param_5);
    if ((local_40 == (xmlEntityPtr)0x0) && (param_2->standalone == 1)) {
      param_2->standalone = 0;
      local_40 = _xmlGetDocEntity(param_2,param_5);
    }
    if (local_40 == (xmlEntityPtr)0x0) {
      FUN_100183d12(param_1,param_2,0x217,"ENTITY attribute %s reference an unknown entity \"%s\"\n"
                    ,param_3,param_5,0);
      local_44 = 0;
    }
    else if (local_40->etype != XML_EXTERNAL_GENERAL_UNPARSED_ENTITY) {
      FUN_100183d12(param_1,param_2,0x1ff,
                    "ENTITY attribute %s reference an entity \"%s\" of wrong type\n",param_3,param_5
                    ,0);
      local_44 = 0;
    }
    break;
  case 6:
    pbVar2 = _xmlStrdup(param_5);
    local_28 = pbVar2;
    if (pbVar2 == (byte *)0x0) {
      return 0;
    }
    while (name = local_28, *local_28 != 0) {
      for (; (((*local_28 != 0 && (*local_28 != 0x20)) && ((*local_28 < 9 || (10 < *local_28)))) &&
             (*local_28 != 0xd)); local_28 = local_28 + 1) {
      }
      bVar1 = *local_28;
      *local_28 = 0;
      pxVar3 = _xmlGetDocEntity(param_2,name);
      if (pxVar3 == (xmlEntityPtr)0x0) {
        FUN_100183d12(param_1,param_2,0x217,
                      "ENTITIES attribute %s reference an unknown entity \"%s\"\n",param_3,name,0);
        local_44 = 0;
      }
      else if (pxVar3->etype != XML_EXTERNAL_GENERAL_UNPARSED_ENTITY) {
        FUN_100183d12(param_1,param_2,0x1ff,
                      "ENTITIES attribute %s reference an entity \"%s\" of wrong type\n",param_3,
                      name,0);
        local_44 = 0;
      }
      if (bVar1 == 0) break;
      *local_28 = bVar1;
      for (; (*local_28 == 0x20 || (((8 < *local_28 && (*local_28 < 0xb)) || (*local_28 == 0xd))));
          local_28 = local_28 + 1) {
      }
    }
    (*(code *)_xmlFree)(pbVar2);
    break;
  case 10:
    local_10 = _xmlGetDtdNotationDesc(param_2->intSubset,param_5);
    if ((local_10 == (xmlNotationPtr)0x0) && (param_2->extSubset != (_xmlDtd *)0x0)) {
      local_10 = _xmlGetDtdNotationDesc(param_2->extSubset,param_5);
    }
    if (local_10 == (xmlNotationPtr)0x0) {
      FUN_100183d12(param_1,param_2,0x219,
                    "NOTATION attribute %s reference an unknown notation \"%s\"\n",param_3,param_5,0
                   );
      local_44 = 0;
    }
  }
  return local_44;
}

