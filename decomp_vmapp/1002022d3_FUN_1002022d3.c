
undefined4 FUN_1002022d3(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined4 *local_78;
  int local_6c;
  int *local_68;
  undefined8 *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int local_3c;
  undefined8 *local_38;
  undefined8 *local_30;
  int *local_28;
  int local_1c;
  
  local_88 = 0;
  if (*param_2 != 4) {
    FUN_1001e8d2a(param_1,"xmlSchemaCheckCOSSTRestricts",
                  "given type is not a user-derived simpleType");
    return 0xffffffff;
  }
  if (((uint)param_2[0x16] >> 8 & 1) == 0) {
    if (((uint)param_2[0x16] >> 6 & 1) == 0) {
      if (((uint)param_2[0x16] >> 7 & 1) != 0) {
        for (local_38 = *(undefined8 **)(param_2 + 0x2a); local_38 != (undefined8 *)0x0;
            local_38 = (undefined8 *)*local_38) {
          if ((*(int *)local_38[1] != 1) && (((*(uint *)(local_38[1] + 0x58) >> 0x16 ^ 1) & 1) != 0)
             ) {
            FUN_100206680(local_38[1],param_1);
          }
          if (((*(uint *)(local_38[1] + 0x58) >> 8 & 1) == 0) &&
             ((*(uint *)(local_38[1] + 0x58) >> 6 & 1) == 0)) {
            uVar2 = FUN_1001e70ae(&local_88,local_38[1]);
            FUN_1001ea46a(param_1,0xbcf,0,param_2,0,
                          "The member type \'%s\' is neither an atomic, nor a list type",uVar2);
            if (local_88 != 0) {
              (*(code *)_xmlFree)(local_88);
            }
            return 0xbcf;
          }
        }
        if (*(int *)(*(long *)(param_2 + 0x1c) + 0xa0) == 0x2e) {
          for (local_38 = *(undefined8 **)(param_2 + 0x2a); local_38 != (undefined8 *)0x0;
              local_38 = (undefined8 *)*local_38) {
            iVar1 = FUN_1002015bb(local_38[1],0x1000);
            if (iVar1 != 0) {
              uVar2 = FUN_1001e70ae(&local_88,local_38[1]);
              FUN_1001ea46a(param_1,0xbd0,0,param_2,0,
                            "The \'final\' of member type \'%s\' contains \'union\'",uVar2);
              if (local_88 != 0) {
                (*(code *)_xmlFree)(local_88);
              }
              return 0xbd0;
            }
          }
          if (*(long *)(param_2 + 0x2c) != 0) {
            FUN_1001ea46a(param_1,0xbd1,0,param_2,0,"No facets allowed",0);
            return 0xbd1;
          }
        }
        else {
          if ((*(uint *)(*(long *)(param_2 + 0x1c) + 0x58) >> 7 & 1) == 0) {
            uVar2 = FUN_1001e70ae(&local_88,*(undefined8 *)(param_2 + 0x1c));
            FUN_1001ea46a(param_1,0xbd3,0,param_2,0,"The base type \'%s\' is not a union type",uVar2
                         );
            if (local_88 != 0) {
              (*(code *)_xmlFree)(local_88);
            }
            return 0xbd3;
          }
          iVar1 = FUN_1002015bb(*(undefined8 *)(param_2 + 0x1c),0x400);
          if (iVar1 != 0) {
            uVar2 = FUN_1001e70ae(&local_88,*(undefined8 *)(param_2 + 0x1c));
            FUN_1001ea46a(param_1,0xbd2,0,param_2,0,
                          "The \'final\' of its base type \'%s\' must not contain \'restriction\'",
                          uVar2);
            if (local_88 != 0) {
              (*(code *)_xmlFree)(local_88);
            }
            return 0xbd2;
          }
          if (*(long *)(param_2 + 0x2a) != 0) {
            local_38 = *(undefined8 **)(param_2 + 0x2a);
            local_30 = (undefined8 *)FUN_1002015f9(*(undefined8 *)(param_2 + 0x1c));
            if ((local_38 == (undefined8 *)0x0) && (local_30 != (undefined8 *)0x0)) {
              FUN_1001e8d2a(param_1,"xmlSchemaCheckCOSSTRestricts",
                            "different number of member types in base");
            }
            for (; local_38 != (undefined8 *)0x0; local_38 = (undefined8 *)*local_38) {
              if (local_30 == (undefined8 *)0x0) {
                FUN_1001e8d2a(param_1,"xmlSchemaCheckCOSSTRestricts",
                              "different number of member types in base");
              }
              if ((local_38[1] != local_30[1]) &&
                 (iVar1 = FUN_100201a0a(local_38[1],local_30[1],0), iVar1 != 0)) {
                local_a0 = 0;
                local_a8 = 0;
                uVar2 = FUN_1001e70ae(&local_a8,*(undefined8 *)(param_2 + 0x1c));
                uVar3 = FUN_1001e70ae(&local_a0,local_30[1]);
                uVar4 = FUN_1001e70ae(&local_88,local_38[1]);
                FUN_1001ea330(param_1,0xbd4,0,param_2,0,
                              "The member type %s is not validly derived from its corresponding member type %s of the base type %s"
                              ,uVar4,uVar3,uVar2);
                if (local_88 != 0) {
                  (*(code *)_xmlFree)(local_88);
                  local_88 = 0;
                }
                if (local_a0 != 0) {
                  (*(code *)_xmlFree)(local_a0);
                  local_a0 = 0;
                }
                if (local_a8 != 0) {
                  (*(code *)_xmlFree)(local_a8);
                }
                return 0xbd4;
              }
              local_30 = (undefined8 *)*local_30;
            }
          }
          if (*(long *)(param_2 + 0x1e) != 0) {
            local_1c = 1;
            local_28 = *(int **)(param_2 + 0x1e);
            do {
              if ((*local_28 != 0x3ee) && (*local_28 != 0x3ef)) {
                FUN_1001ea707(param_1,0xbd5,0,param_2,local_28);
                local_1c = 0;
              }
              local_28 = *(int **)(local_28 + 2);
            } while (local_28 != (int *)0x0);
            if (local_1c == 0) {
              return 0xbd5;
            }
          }
        }
      }
    }
    else {
      local_68 = *(int **)(param_2 + 0xe);
      if ((local_68 == (int *)0x0) ||
         ((*local_68 != 4 && ((*local_68 != 1 || (local_68[0x28] == 0x2d)))))) {
        FUN_1001e8d2a(param_1,"xmlSchemaCheckCOSSTRestricts","failed to evaluate the item type");
        return 0xffffffff;
      }
      if ((*local_68 != 1) && ((((uint)local_68[0x16] >> 0x16 ^ 1) & 1) != 0)) {
        FUN_100206680(local_68,param_1);
      }
      if ((((uint)local_68[0x16] >> 8 & 1) == 0) && (((uint)local_68[0x16] >> 7 & 1) == 0)) {
        uVar2 = FUN_1001e70ae(&local_88,local_68);
        FUN_1001ea46a(param_1,0xbc7,0,param_2,0,
                      "The item type \'%s\' does not have a variety of atomic or union",uVar2);
        if (local_88 != 0) {
          (*(code *)_xmlFree)(local_88);
        }
        return 0xbc7;
      }
      if (((uint)local_68[0x16] >> 7 & 1) != 0) {
        for (local_60 = *(undefined8 **)(local_68 + 0x2a); local_60 != (undefined8 *)0x0;
            local_60 = (undefined8 *)*local_60) {
          if ((*(uint *)(local_60[1] + 0x58) >> 8 & 1) == 0) {
            uVar2 = FUN_1001e70ae(&local_88,local_60[1]);
            FUN_1001ea46a(param_1,0xbc7,0,param_2,0,
                          "The item type is a union type, but the member type \'%s\' of this item type is not atomic"
                          ,uVar2);
            if (local_88 != 0) {
              (*(code *)_xmlFree)(local_88);
            }
            return 0xbc7;
          }
        }
      }
      if ((**(int **)(param_2 + 0x1c) == 1) && (*(int *)(*(long *)(param_2 + 0x1c) + 0xa0) == 0x2e))
      {
        iVar1 = FUN_1002015bb(local_68,0x800);
        if (iVar1 != 0) {
          uVar2 = FUN_1001e70ae(&local_88,local_68);
          FUN_1001ea46a(param_1,0xbc8,0,param_2,0,
                        "The final of its item type \'%s\' must not contain \'list\'",uVar2);
          if (local_88 != 0) {
            (*(code *)_xmlFree)(local_88);
          }
          return 0xbc8;
        }
        if (*(long *)(param_2 + 0x1e) != 0) {
          local_58 = *(int **)(param_2 + 0x1e);
          do {
            if (*local_58 != 0x3f0) {
              FUN_1001ea707(param_1,0xbc9,0,param_2,local_58);
              return 0xbc9;
            }
            local_58 = *(int **)(local_58 + 2);
          } while (local_58 != (int *)0x0);
        }
      }
      else {
        if ((*(uint *)(*(long *)(param_2 + 0x1c) + 0x58) >> 6 & 1) == 0) {
          uVar2 = FUN_1001e70ae(&local_88,*(undefined8 *)(param_2 + 0x1c));
          FUN_1001ea46a(param_1,0xbca,0,param_2,0,"The base type \'%s\' must be a list type",uVar2);
          if (local_88 != 0) {
            (*(code *)_xmlFree)(local_88);
          }
          return 0xbca;
        }
        iVar1 = FUN_1002015bb(*(undefined8 *)(param_2 + 0x1c),0x400);
        if (iVar1 != 0) {
          uVar2 = FUN_1001e70ae(&local_88,*(undefined8 *)(param_2 + 0x1c));
          FUN_1001ea46a(param_1,0xbcb,0,param_2,0,
                        "The \'final\' of the base type \'%s\' must not contain \'restriction\'",
                        uVar2);
          if (local_88 != 0) {
            (*(code *)_xmlFree)(local_88);
          }
          return 0xbcb;
        }
        local_50 = *(int **)(*(long *)(param_2 + 0x1c) + 0x38);
        if ((local_50 == (int *)0x0) ||
           ((*local_50 != 4 && ((*local_50 != 1 || (local_50[0x28] == 0x2d)))))) {
          FUN_1001e8d2a(param_1,"xmlSchemaCheckCOSSTRestricts",
                        "failed to eval the item type of a base type");
          return 0xffffffff;
        }
        if ((local_68 != local_50) && (iVar1 = FUN_100201a0a(local_68,local_50,0), iVar1 != 0)) {
          local_90 = 0;
          local_98 = 0;
          uVar2 = FUN_1001e70ae(&local_98,*(undefined8 *)(param_2 + 0x1c));
          uVar3 = FUN_1001e70ae(&local_90,local_50);
          uVar4 = FUN_1001e70ae(&local_88,local_68);
          FUN_1001ea330(param_1,0xbcc,0,param_2,0,
                        "The item type \'%s\' is not validly derived from the item type \'%s\' of the base type \'%s\'"
                        ,uVar4,uVar3,uVar2);
          if (local_88 != 0) {
            (*(code *)_xmlFree)(local_88);
            local_88 = 0;
          }
          if (local_90 != 0) {
            (*(code *)_xmlFree)(local_90);
            local_90 = 0;
          }
          if (local_98 != 0) {
            (*(code *)_xmlFree)(local_98);
          }
          return 0xbcc;
        }
        if (*(long *)(param_2 + 0x1e) != 0) {
          local_3c = 1;
          local_48 = *(int **)(param_2 + 0x1e);
          do {
            if (5 < *local_48 - 0x3eeU) {
              FUN_1001ea707(param_1,0xbcd,0,param_2,local_48);
              local_3c = 0;
            }
            local_48 = *(int **)(local_48 + 2);
          } while (local_48 != (int *)0x0);
          if (local_3c == 0) {
            return 0xbcd;
          }
        }
      }
    }
  }
  else {
    if ((*(uint *)(*(long *)(param_2 + 0x1c) + 0x58) >> 8 & 1) == 0) {
      uVar2 = FUN_1001e70ae(&local_88,*(undefined8 *)(param_2 + 0x1c));
      FUN_1001ea46a(param_1,0xbc3,0,param_2,0,"The base type \'%s\' is not an atomic simple type",
                    uVar2);
      if (local_88 != 0) {
        (*(code *)_xmlFree)(local_88);
      }
      return 0xbc3;
    }
    iVar1 = FUN_1002015bb(*(undefined8 *)(param_2 + 0x1c),0x400);
    if (iVar1 != 0) {
      uVar2 = FUN_1001e70ae(&local_88,*(undefined8 *)(param_2 + 0x1c));
      FUN_1001ea46a(param_1,0xbc4,0,param_2,0,
                    "The final of its base type \'%s\' must not contain \'restriction\'",uVar2);
      if (local_88 != 0) {
        (*(code *)_xmlFree)(local_88);
      }
      return 0xbc4;
    }
    if (*(long *)(param_2 + 0x1e) != 0) {
      local_6c = 1;
      local_80 = FUN_1001fed4c(param_2);
      if (local_80 == 0) {
        FUN_1001e8d2a(param_1,"xmlSchemaCheckCOSSTRestricts","failed to get primitive type");
        return 0xffffffff;
      }
      local_78 = *(undefined4 **)(param_2 + 0x1e);
      do {
        iVar1 = _xmlSchemaIsBuiltInTypeFacet(local_80,*local_78);
        if (iVar1 == 0) {
          local_6c = 0;
          FUN_1001ea5e9(param_1,0xbc5,0,param_2,local_80,local_78);
        }
        local_78 = *(undefined4 **)(local_78 + 2);
      } while (local_78 != (undefined4 *)0x0);
      if (local_6c == 0) {
        return 0xbc5;
      }
    }
  }
  return 0;
}

