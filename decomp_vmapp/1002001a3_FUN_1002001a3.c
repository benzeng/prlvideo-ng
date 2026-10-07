
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_1002001a3(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  xmlChar *pxVar8;
  xmlChar *pxVar9;
  xmlChar *local_c8;
  int local_bc;
  xmlChar *local_b8;
  int local_ac;
  long local_a8 [2];
  long *local_98;
  int *local_90;
  long *local_88;
  undefined8 *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  undefined8 local_50;
  int local_44;
  long *local_40;
  long *local_38;
  long *local_30;
  long local_28;
  int local_20;
  undefined4 local_1c;
  
  local_90 = (int *)0x0;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_98 = (long *)0x0;
  local_a8[1] = 0;
  local_60 = (long *)0x0;
  local_a8[0] = 0;
  local_44 = 0;
  local_ac = 0;
  local_50 = _xmlSchemaGetBuiltInType(0x2d);
  if (*(long *)(param_2 + 0x90) != 0) {
    FUN_1001e8d2a(param_1,"xmlSchemaBuildAttributeValidation","attribute uses already builded");
    return 0xffffffff;
  }
  if (*(long *)(param_2 + 0x70) == 0) {
    FUN_1001e8d2a(param_1,"xmlSchemaBuildAttributeValidation","no base type");
    return 0xffffffff;
  }
  local_90 = *(int **)(param_2 + 0x70);
  local_58 = *(long *)(param_2 + 0x40);
  if (local_58 != 0) {
    iVar3 = FUN_1001feda1(param_1,*(uint *)(param_2 + 0x58) >> 2 & 1,local_58,&local_98,local_a8 + 1
                          ,&local_ac);
    if (iVar3 == -1) {
      return 0xffffffff;
    }
    local_44 = FUN_1001ffe65(param_1,local_58,param_2 + 0x98);
    if (local_44 == -1) {
      FUN_1001e8d2a(param_1,"xmlSchemaBuildAttributeValidation",
                    "failed to build an intersected attribute wildcard");
      return 0xffffffff;
    }
  }
  if (local_ac != 0) {
    local_40 = (long *)0x0;
    local_88 = local_98;
LAB_10020069c:
    if (local_88 != (long *)0x0) {
      local_78 = (long *)*local_88;
      local_40 = local_88;
      while (local_78 != (long *)0x0) {
        if ((*(int *)(local_88[1] + 0x50) == 0) || (*(int *)(local_78[1] + 0x50) == 0)) {
          lVar4 = FUN_1001e6d0c(local_88[1]);
          lVar5 = FUN_1001e6d0c(local_78[1]);
          if (lVar4 != lVar5) goto LAB_10020040a;
          lVar4 = FUN_1001e6d41(local_88[1]);
          lVar5 = FUN_1001e6d41(local_78[1]);
          if (lVar4 != lVar5) goto LAB_10020040a;
          if (*(int *)(local_88[1] + 0x50) == *(int *)(local_78[1] + 0x50)) {
            uVar7 = FUN_1001e6d0c(local_78[1]);
            uVar6 = FUN_1001e6d41(local_78[1]);
            uVar7 = FUN_1001e6d76(local_a8,uVar6,uVar7);
            FUN_1001e8dfe(param_1,0xc0e,*(undefined8 *)(local_78[1] + 0x68),0,
                          "Skipping duplicate prohibition of attribute use \'%s\'",uVar7,0,0);
            if (local_a8[0] != 0) {
              (*(code *)_xmlFree)(local_a8[0]);
              local_a8[0] = 0;
            }
            plVar1 = local_78;
            local_38 = local_78;
            *local_40 = *local_78;
            local_78 = (long *)*local_78;
            (*(code *)_xmlFree)(plVar1);
            local_ac = local_ac + -1;
          }
          else {
            if (*(int *)(local_88[1] + 0x50) == 0) {
              local_28 = local_88[1];
            }
            else {
              local_28 = local_78[1];
            }
            uVar7 = FUN_1001e6d0c(local_28);
            uVar6 = FUN_1001e6d41(local_28);
            uVar7 = FUN_1001e6d76(local_a8,uVar6,uVar7);
            FUN_1001e8dfe(param_1,0xc0d,*(undefined8 *)(local_28 + 0x68),0,
                          "Skipping pointless prohibition of attribute use \'%s\', since a corresponding attribute was explicitely declared as well"
                          ,uVar7,0,0);
            if (local_a8[0] != 0) {
              (*(code *)_xmlFree)(local_a8[0]);
              local_a8[0] = 0;
            }
            plVar2 = local_78;
            plVar1 = local_88;
            if (local_88[1] == local_28) {
              local_30 = local_88;
              if (local_68 == (long *)0x0) {
                local_98 = (long *)*local_88;
              }
              else {
                *local_68 = *local_88;
              }
              local_88 = (long *)*local_88;
              (*(code *)_xmlFree)(plVar1);
              local_ac = local_ac + -1;
              goto LAB_10020069c;
            }
            local_30 = local_78;
            *local_40 = *local_78;
            local_78 = (long *)*local_78;
            (*(code *)_xmlFree)(plVar2);
            local_ac = local_ac + -1;
          }
        }
        else {
LAB_10020040a:
          local_40 = local_78;
          local_78 = (long *)*local_78;
        }
      }
      local_68 = local_88;
      local_88 = (long *)*local_88;
      goto LAB_10020069c;
    }
  }
  if (((local_98 != (long *)0x0) && (*local_98 != 0)) && ((*(uint *)(param_2 + 0x58) >> 2 & 1) != 0)
     ) {
    local_88 = local_98;
    while (local_88 != (long *)0x0) {
      if (*(int *)(local_88[1] + 0x50) == 0) {
        local_88 = (long *)*local_88;
      }
      else {
        local_78 = (long *)*local_88;
        while (local_78 != (long *)0x0) {
          if (*(int *)(local_78[1] + 0x50) == 0) {
            local_78 = (long *)*local_78;
          }
          else {
            pxVar8 = (xmlChar *)FUN_1001e6d0c(local_78[1]);
            pxVar9 = (xmlChar *)FUN_1001e6d0c(local_88[1]);
            iVar3 = _xmlStrEqual(pxVar9,pxVar8);
            if (iVar3 != 0) {
              pxVar8 = (xmlChar *)FUN_1001e6d41(local_78[1]);
              pxVar9 = (xmlChar *)FUN_1001e6d41(local_88[1]);
              iVar3 = _xmlStrEqual(pxVar9,pxVar8);
              if (iVar3 != 0) {
                uVar7 = FUN_1001e6d0c(local_78[1]);
                uVar6 = FUN_1001e6d41(local_78[1]);
                uVar7 = FUN_1001e6d76(local_a8,uVar6,uVar7);
                FUN_1001ea4d4(param_1,0x6f9,param_2,local_88[1],
                              "Duplicate attribute use \'%s\' specified",uVar7);
                if (local_a8[0] != 0) {
                  (*(code *)_xmlFree)(local_a8[0]);
                  local_a8[0] = 0;
                }
                break;
              }
            }
            local_78 = (long *)*local_78;
          }
        }
        local_88 = (long *)*local_88;
      }
    }
  }
  if (*(long *)(local_90 + 0x24) != 0) {
    local_80 = *(undefined8 **)(local_90 + 0x24);
LAB_100200a7a:
    if (local_80 != (undefined8 *)0x0) {
      if (local_ac != 0) {
        for (local_88 = local_98; local_88 != (long *)0x0; local_88 = (long *)*local_88) {
          if (*(int *)(local_88[1] + 0x50) == 0) {
            pxVar8 = (xmlChar *)FUN_1001e6d0c(local_80[1]);
            pxVar9 = (xmlChar *)FUN_1001e6d0c(local_88[1]);
            iVar3 = _xmlStrEqual(pxVar9,pxVar8);
            if (iVar3 != 0) {
              pxVar8 = (xmlChar *)FUN_1001e6d41(local_80[1]);
              pxVar9 = (xmlChar *)FUN_1001e6d41(local_88[1]);
              iVar3 = _xmlStrEqual(pxVar9,pxVar8);
              if (iVar3 != 0) {
                if (*(int *)(local_80[1] + 0x50) == 1) {
                  uVar7 = FUN_1001e6d0c(local_80[1]);
                  uVar6 = FUN_1001e6d41(local_80[1]);
                  uVar7 = FUN_1001e6d76(local_a8,uVar6,uVar7);
                  FUN_1001ea46a(param_1,0x6ff,0,param_2,0,
                                "A matching attribute use for the \'required\' attribute use \'%s\' of the base type is missing"
                                ,uVar7);
                  if (local_a8[0] != 0) {
                    (*(code *)_xmlFree)(local_a8[0]);
                    local_a8[0] = 0;
                  }
                }
                local_80 = (undefined8 *)*local_80;
                goto LAB_100200a7a;
              }
            }
          }
        }
      }
      local_78 = (long *)(*(code *)_xmlMalloc)(0x10);
      if (local_78 == (long *)0x0) {
        FUN_1001e8056(param_1,"allocating attribute uses",0);
        return 0xffffffff;
      }
      local_78[1] = local_80[1];
      *local_78 = 0;
      if (*(long *)(param_2 + 0x90) == 0) {
        *(long **)(param_2 + 0x90) = local_78;
      }
      else {
        *local_60 = (long)local_78;
      }
      local_80 = (undefined8 *)*local_80;
      local_60 = local_78;
      goto LAB_100200a7a;
    }
  }
  if (((*(uint *)(param_2 + 0x58) >> 1 & 1) != 0) &&
     (((*local_90 == 1 && (local_90[0x28] == 0x2d)) ||
      ((local_90 != (int *)0x0 && ((*local_90 == 5 && (*(long *)(local_90 + 0x26) != 0)))))))) {
    if (*(long *)(param_2 + 0x98) == 0) {
      *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(local_90 + 0x26);
    }
    else {
      iVar3 = FUN_1001ff084(param_1,*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(local_90 + 0x26)
                           );
      if (iVar3 == -1) {
        return 0xffffffff;
      }
    }
  }
  if ((*(uint *)(param_2 + 0x58) >> 2 & 1) == 0) {
    if (((((*(uint *)(param_2 + 0x58) >> 1 & 1) != 0) && (*(long *)(local_90 + 0x26) != 0)) &&
        (*(long *)(local_90 + 0x26) != *(long *)(param_2 + 0x98))) &&
       (iVar3 = FUN_1001ffd09(*(undefined8 *)(local_90 + 0x26),*(undefined8 *)(param_2 + 0x98)),
       iVar3 != 0)) {
      uVar7 = FUN_1001e7432(local_a8,0,local_90,0);
      FUN_1001ea46a(param_1,0x708,0,param_2,0,
                    "The attribute wildcard is not a valid superset of the one in the base type %s",
                    uVar7);
      if (local_a8[0] != 0) {
        (*(code *)_xmlFree)(local_a8[0]);
      }
      return 1;
    }
  }
  else if (*(long *)(param_2 + 0x98) != 0) {
    if (*(long *)(local_90 + 0x26) == 0) {
      uVar7 = FUN_1001e7432(local_a8,0,local_90,0);
      FUN_1001ea46a(param_1,0x705,0,param_2,0,
                    "The type has an attribute wildcard, but the base type %s does not have one",
                    uVar7);
      if (local_a8[0] != 0) {
        (*(code *)_xmlFree)(local_a8[0]);
      }
      return 1;
    }
    iVar3 = FUN_1001ffd09(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(local_90 + 0x26));
    if (iVar3 != 0) {
      uVar7 = FUN_1001e7432(local_a8,0,local_90,0);
      FUN_1001ea46a(param_1,0x706,0,param_2,0,
                    "The attribute wildcard is not a valid subset of the wildcard in the base type %s"
                    ,uVar7);
      if (local_a8[0] != 0) {
        (*(code *)_xmlFree)(local_a8[0]);
      }
      return 1;
    }
    if (((*local_90 != 1) || (local_90[0x28] != 0x2d)) &&
       (*(int *)(*(long *)(param_2 + 0x98) + 0x28) < *(int *)(*(long *)(local_90 + 0x26) + 0x28))) {
      uVar7 = FUN_1001e7432(local_a8,0,local_90,0);
      FUN_1001ea46a(param_1,0x707,0,param_2,0,
                    "The \'process contents\' of the attribute wildcard is weaker than the one in the base type %s"
                    ,uVar7);
      if (local_a8[0] != 0) {
        (*(code *)_xmlFree)(local_a8[0]);
      }
      return 1;
    }
  }
  if (local_98 != (long *)0x0) {
    if ((*(uint *)(param_2 + 0x58) >> 2 & 1) == 0) {
      if ((*(uint *)(param_2 + 0x58) >> 1 & 1) == 0) {
        FUN_1001e8d2a(param_1,"xmlSchemaBuildAttributeValidation","no derivation method");
        return 0xffffffff;
      }
      if (local_98 != (long *)0x0) {
        if (*(long *)(param_2 + 0x90) == 0) {
          *(long **)(param_2 + 0x90) = local_98;
        }
        else {
          *local_60 = (long)local_98;
        }
      }
    }
    else {
      if ((*local_90 != 1) || (local_90[0x28] != 0x2d)) {
        local_88 = local_98;
LAB_1002011f2:
        do {
          if (local_88 == (long *)0x0) goto LAB_100201284;
          if (*(int *)(local_88[1] + 0x50) != 0) {
            local_20 = 0;
            local_1c = 1;
            for (local_80 = *(undefined8 **)(param_2 + 0x90); local_80 != (undefined8 *)0x0;
                local_80 = (undefined8 *)*local_80) {
              pxVar8 = (xmlChar *)FUN_1001e6d0c(local_80[1]);
              pxVar9 = (xmlChar *)FUN_1001e6d0c(local_88[1]);
              iVar3 = _xmlStrEqual(pxVar9,pxVar8);
              if (iVar3 != 0) {
                pxVar8 = (xmlChar *)FUN_1001e6d41(local_80[1]);
                pxVar9 = (xmlChar *)FUN_1001e6d41(local_88[1]);
                iVar3 = _xmlStrEqual(pxVar9,pxVar8);
                if (iVar3 != 0) {
                  local_20 = 1;
                  if ((*(int *)(local_88[1] + 0x50) == 2) && (*(int *)(local_80[1] + 0x50) == 1)) {
                    FUN_1001ea4d4(param_1,0x6fc,param_2,local_88[1],
                                  "The \'optional\' use is inconsistent with a matching \'required\' use of the base type"
                                  ,0);
                  }
                  else {
                    iVar3 = FUN_100201a0a(*(undefined8 *)(local_88[1] + 0x60),
                                          *(undefined8 *)(local_80[1] + 0x60),0);
                    if (iVar3 == 0) {
                      FUN_10020000e(local_80[1],&local_bc,&local_b8,0);
                      if ((local_b8 == (xmlChar *)0x0) || (local_bc != 1)) {
                        local_80[1] = local_88[1];
                      }
                      else {
                        local_c8 = (xmlChar *)0x0;
                        FUN_10020000e(local_80[1],&local_bc,&local_c8,0);
                        if ((local_bc == 0) || (iVar3 = _xmlStrEqual(local_c8,local_b8), iVar3 == 0)
                           ) {
                          FUN_1001ea4d4(param_1,0xc05,param_2,local_88[1],
                                        "The effective value constraint of the attribute use is inconsistent with its correspondent of the base type"
                                        ,0);
                        }
                        else {
                          local_80[1] = local_88[1];
                        }
                      }
                    }
                    else {
                      FUN_1001ea4d4(param_1,0x6fd,param_2,local_88[1],
                                    "The attribute declaration\'s type definition is not validly derived from the corresponding definition in the base type"
                                    ,0);
                    }
                  }
                  break;
                }
              }
            }
            if (local_20 == 0) {
              if ((*(long *)(local_90 + 0x26) != 0) &&
                 (iVar3 = FUN_1002000da(*(undefined8 *)(local_90 + 0x26),
                                        *(undefined8 *)(local_88[1] + 0x70)), iVar3 == 1)) {
                local_78 = local_88;
                if (local_68 == (long *)0x0) {
                  local_98 = (long *)*local_88;
                }
                else {
                  *local_68 = *local_88;
                }
                plVar1 = (long *)*local_88;
                *local_88 = 0;
                if (*(long *)(param_2 + 0x90) == 0) {
                  *(long **)(param_2 + 0x90) = local_88;
                }
                else {
                  *local_60 = (long)local_88;
                }
                local_60 = local_88;
                local_88 = plVar1;
                goto LAB_1002011f2;
              }
              FUN_1001ea4d4(param_1,0x6fe,param_2,local_88[1],
                            "Neither a matching attribute use, nor a matching wildcard in the base type does exist"
                            ,0);
            }
            local_68 = local_88;
            local_88 = (long *)*local_88;
            goto LAB_1002011f2;
          }
          local_68 = local_88;
          local_88 = (long *)*local_88;
        } while( true );
      }
      *(long **)(param_2 + 0x90) = local_98;
    }
  }
LAB_100200ef8:
  if (*(long *)(param_2 + 0x90) != 0) {
    local_88 = *(long **)(param_2 + 0x90);
    local_68 = (long *)0x0;
    while (plVar1 = local_88, local_88 != (long *)0x0) {
      if (*(int *)(local_88[1] + 0x50) == 0) {
        local_78 = local_88;
        if (local_68 == (long *)0x0) {
          *(long *)(param_2 + 0x90) = *local_88;
        }
        else {
          *local_68 = *local_88;
        }
        local_88 = (long *)*local_88;
        (*(code *)_xmlFree)(plVar1);
      }
      else {
        if ((*(uint *)(param_2 + 0x58) >> 1 & 1) != 0) {
          for (local_78 = (long *)*local_88; local_78 != (long *)0x0; local_78 = (long *)*local_78)
          {
            pxVar8 = (xmlChar *)FUN_1001e6d0c(local_78[1]);
            pxVar9 = (xmlChar *)FUN_1001e6d0c(local_88[1]);
            iVar3 = _xmlStrEqual(pxVar9,pxVar8);
            if (iVar3 != 0) {
              pxVar8 = (xmlChar *)FUN_1001e6d41(local_78[1]);
              pxVar9 = (xmlChar *)FUN_1001e6d41(local_88[1]);
              iVar3 = _xmlStrEqual(pxVar9,pxVar8);
              if (iVar3 != 0) {
                FUN_1001ea4d4(param_1,0x6f9,param_2,local_78[1],"Duplicate attribute use specified",
                              0);
                break;
              }
            }
          }
        }
        if ((*(long *)(local_88[1] + 0x60) != 0) &&
           (iVar3 = FUN_1001fec23(*(undefined8 *)(local_88[1] + 0x60),0x17), iVar3 != 0)) {
          if ((local_70 != (long *)0x0) &&
             (FUN_1001ea4d4(param_1,0x6fa,param_2,local_88[1],
                            "There must not exist more than one attribute use, declared of type \'ID\' or derived from it"
                            ,0), local_a8[0] != 0)) {
            (*(code *)_xmlFree)(local_a8[0]);
            local_a8[0] = 0;
          }
          local_70 = local_88;
        }
        local_68 = local_88;
        local_88 = (long *)*local_88;
      }
    }
  }
  if (((local_90 != (int *)0x0) &&
      (((*local_90 != 1 || (local_90[0x28] != 0x2d)) && (*local_90 == 5)))) &&
     ((*local_90 != 1 && ((((uint)local_90[0x16] >> 0x16 ^ 1) & 1) != 0)))) {
    FUN_1001e8d2a(param_1,"xmlSchemaBuildAttributeValidation",
                  "attribute uses not builded on base type");
  }
  return 0;
LAB_100201284:
  if (local_98 != (long *)0x0) {
    FUN_1001eb7d2(local_98);
  }
  goto LAB_100200ef8;
}

