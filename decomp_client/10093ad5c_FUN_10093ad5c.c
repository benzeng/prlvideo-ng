
int FUN_10093ad5c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  int local_44;
  int *local_40;
  long local_38;
  long local_30;
  uint local_28;
  int local_24;
  xmlAttrPtr local_20;
  
  local_44 = 0;
  local_40 = *(int **)(param_2 + 0x38);
  if (*(long *)(param_2 + 0x98) != 0) {
    local_38 = *(long *)(param_2 + 0x98);
    FUN_10093b4d3(local_38,param_1);
    if (((*(uint *)(param_2 + 0x58) >> 1 ^ 1) & 1) != 0) {
      FUN_10091dd92(param_1,0xbe6,0,param_2,*(undefined8 *)(param_2 + 0x48),
                    "Only global element declarations can have a substitution group affiliation",0);
      local_44 = 0xbe6;
    }
    if (local_38 == param_2) {
      local_30 = local_38;
    }
    else if (*(long *)(local_38 + 0x98) == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_10093ac8b(local_38,local_38);
    }
    if (local_30 != 0) {
      local_50 = 0;
      local_58 = 0;
      uVar2 = FUN_10091a9d6(&local_58,local_38);
      uVar3 = FUN_10091a9d6(&local_50,local_30);
      FUN_10091dc58(param_1,0xbe9,0,local_30,*(undefined8 *)(local_30 + 0x48),
                    "The element declaration \'%s\' defines a circular substitution group to element declaration \'%s\'"
                    ,uVar3,uVar2,0);
      if (local_50 != 0) {
        (*(code *)_xmlFree)(local_50);
        local_50 = 0;
      }
      if (local_58 != 0) {
        (*(code *)_xmlFree)(local_58);
        local_58 = 0;
      }
      local_44 = 0xbe9;
    }
    if (*(int **)(*(long *)(param_2 + 0x98) + 0x38) != local_40) {
      local_28 = 0;
      if ((*(uint *)(local_38 + 0x58) >> 0xf & 1) != 0) {
        local_28 = 2;
      }
      if ((*(uint *)(local_38 + 0x58) >> 0x10 & 1) != 0) {
        local_28 = local_28 | 1;
      }
      iVar1 = FUN_100936f05(local_40,*(undefined8 *)(local_38 + 0x38),local_28);
      if (iVar1 != 0) {
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_44 = 0xbe7;
        uVar2 = FUN_10091a9d6(&local_70,*(undefined8 *)(local_38 + 0x38));
        uVar3 = FUN_10091a9d6(&local_68,local_38);
        uVar4 = FUN_10091a9d6(&local_60,local_40);
        FUN_10091dc58(param_1,0xbe7,0,param_2,*(undefined8 *)(param_2 + 0x48),
                      "The type definition \'%s\' was either rejected by the substitution group affiliation \'%s\', or not validly derived from its type definition \'%s\'"
                      ,uVar4,uVar3,uVar2);
        if (local_60 != 0) {
          (*(code *)_xmlFree)(local_60);
          local_60 = 0;
        }
        if (local_68 != 0) {
          (*(code *)_xmlFree)(local_68);
          local_68 = 0;
        }
        if (local_70 != 0) {
          (*(code *)_xmlFree)(local_70);
          local_70 = 0;
        }
      }
    }
  }
  if ((*(long *)(param_2 + 0x90) == 0) ||
     ((((*local_40 != 4 && ((*local_40 != 1 || (local_40[0x28] == 0x2d)))) ||
       (iVar1 = FUN_10093254b(local_40,0x17), iVar1 == 0)) &&
      ((((*local_40 != 5 && (local_40[0x28] != 0x2d)) ||
        ((local_40[0x17] != 4 && (local_40[0x17] != 6)))) ||
       (iVar1 = FUN_10093254b(*(undefined8 *)(local_40 + 0x30),0x17), iVar1 == 0)))))) {
    if (*(long *)(param_2 + 0x90) != 0) {
      local_20 = (xmlAttrPtr)0x0;
      if (local_40 == (int *)0x0) {
        FUN_10091b9cb(param_1,*(undefined8 *)(param_2 + 0x48),0xbfd,
                      "Internal error: xmlSchemaCheckElemPropsCorrect, type is missing... skipping validation of the value constraint"
                      ,0,0);
        return -1;
      }
      if (*(long *)(param_2 + 0x48) != 0) {
        if ((*(uint *)(param_2 + 0x58) >> 3 & 1) == 0) {
          local_20 = _xmlHasProp(*(xmlNodePtr *)(param_2 + 0x48),(xmlChar *)"default");
        }
        else {
          local_20 = _xmlHasProp(*(xmlNodePtr *)(param_2 + 0x48),(xmlChar *)"fixed");
        }
      }
      local_24 = FUN_100936b81(param_1,local_20,local_40,*(undefined8 *)(param_2 + 0x90),
                               param_2 + 0xb8);
      if (local_24 != 0) {
        if (-1 < local_24) {
          return local_24;
        }
        FUN_10091c652(param_1,"xmlSchemaElemCheckValConstr",
                      "failed to validate the value constraint of an element declaration");
        return -1;
      }
    }
  }
  else {
    local_44 = 0xbe8;
    FUN_10091dd92(param_1,0xbe8,0,param_2,*(undefined8 *)(param_2 + 0x48),
                  "The type definition (or type definition\'s content type) is or is derived from ID; value constraints are not allowed in conjunction with such a type definition"
                  ,0);
  }
  return local_44;
}

