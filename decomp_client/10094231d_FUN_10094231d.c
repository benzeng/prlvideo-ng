
undefined4 FUN_10094231d(long param_1)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  undefined8 uVar3;
  xmlAttrPtr pxVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  ulong uVar7;
  long in_stack_ffffffffffffff38;
  uint uVar8;
  long local_a0;
  xmlChar local_98 [16];
  long local_88;
  undefined8 *local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  xmlChar *local_38;
  xmlChar *local_30;
  xmlNsPtr local_28;
  uint local_20;
  undefined4 local_1c;
  
  local_88 = *(long *)(*(long *)(param_1 + 0xb8) + 0x38);
  local_78 = 0;
  local_70 = 0;
  local_48 = 0;
  local_40 = 0;
  local_4c = *(int *)(param_1 + 0x118);
  for (local_80 = *(undefined8 **)(local_88 + 0x90); local_80 != (undefined8 *)0x0;
      local_80 = (undefined8 *)*local_80) {
    local_50 = 0;
    local_78 = local_80[1];
    local_70 = local_78;
    if (*(long *)(local_78 + 0x90) != 0) {
      local_70 = *(long *)(local_78 + 0x90);
    }
    for (local_54 = 0; local_54 < local_4c; local_54 = local_54 + 1) {
      local_68 = *(long *)(*(long *)(param_1 + 0x110) + (long)local_54 * 8);
      if ((((*(int *)(local_68 + 0x5c) == 0) &&
           (**(char **)(local_68 + 0x18) == **(char **)(local_70 + 0x10))) &&
          (iVar2 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x18),*(xmlChar **)(local_70 + 0x10)),
          iVar2 != 0)) &&
         (iVar2 = _xmlStrEqual(*(xmlChar **)(local_68 + 0x20),*(xmlChar **)(local_70 + 0x70)),
         iVar2 != 0)) {
        local_50 = 1;
        *(undefined4 *)(local_68 + 0x58) = 2;
        *(long *)(local_68 + 0x50) = local_78;
        *(long *)(local_68 + 0x48) = local_70;
        *(undefined8 *)(local_68 + 0x38) = *(undefined8 *)(local_70 + 0x60);
        break;
      }
    }
    if (local_50 == 0) {
      if (*(int *)(local_78 + 0x50) == 1) {
        local_60 = FUN_10093fc38(param_1);
        if (local_60 == 0) {
          FUN_10091c652(param_1,"xmlSchemaVAttributesComplex","calling xmlSchemaGetFreshAttrInfo()")
          ;
          return 0xffffffff;
        }
        *(undefined4 *)(local_60 + 0x58) = 4;
        *(long *)(local_60 + 0x50) = local_78;
        *(long *)(local_60 + 0x48) = local_70;
      }
      else if ((*(int *)(local_78 + 0x50) == 2) &&
              ((*(long *)(local_78 + 0x58) != 0 || (*(long *)(local_70 + 0x58) != 0)))) {
        local_60 = FUN_10093fc38(param_1);
        if (local_60 == 0) {
          FUN_10091c652(param_1,"xmlSchemaVAttributesComplex","calling xmlSchemaGetFreshAttrInfo()")
          ;
          return 0xffffffff;
        }
        *(undefined4 *)(local_60 + 0x58) = 8;
        *(long *)(local_60 + 0x50) = local_78;
        *(long *)(local_60 + 0x48) = local_70;
        *(undefined8 *)(local_60 + 0x38) = *(undefined8 *)(local_70 + 0x60);
        *(undefined8 *)(local_60 + 0x18) = *(undefined8 *)(local_70 + 0x10);
        *(undefined8 *)(local_60 + 0x20) = *(undefined8 *)(local_70 + 0x70);
      }
    }
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    if (*(long *)(local_88 + 0x98) != 0) {
      for (local_54 = 0; local_54 < local_4c; local_54 = local_54 + 1) {
        local_68 = *(long *)(*(long *)(param_1 + 0x110) + (long)local_54 * 8);
        if ((*(int *)(local_68 + 0x58) == 1) &&
           (iVar2 = FUN_100933a02(*(undefined8 *)(local_88 + 0x98),*(undefined8 *)(local_68 + 0x20))
           , iVar2 != 0)) {
          if (*(int *)(*(long *)(local_88 + 0x98) + 0x28) == 1) {
            *(undefined4 *)(local_68 + 0x58) = 0xd;
          }
          else {
            uVar3 = FUN_100920b4c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(local_68 + 0x18),
                                  *(undefined8 *)(local_68 + 0x20));
            *(undefined8 *)(local_68 + 0x48) = uVar3;
            if (*(long *)(local_68 + 0x48) == 0) {
              if (*(int *)(*(long *)(local_88 + 0x98) + 0x28) == 2) {
                *(undefined4 *)(local_68 + 0x58) = 0xe;
              }
              else {
                *(undefined4 *)(local_68 + 0x58) = 10;
              }
            }
            else {
              *(undefined4 *)(local_68 + 0x58) = 2;
              *(undefined8 *)(local_68 + 0x38) = *(undefined8 *)(*(long *)(local_68 + 0x48) + 0x60);
              iVar2 = FUN_10093254b(*(undefined8 *)(local_68 + 0x38),0x17);
              if (iVar2 != 0) {
                if (local_40 == 0) {
                  local_40 = 1;
                  for (local_80 = *(undefined8 **)(local_88 + 0x90); local_80 != (undefined8 *)0x0;
                      local_80 = (undefined8 *)*local_80) {
                    iVar2 = FUN_10093254b(*(undefined8 *)(local_80[1] + 0x60),0x17);
                    if (iVar2 != 0) {
                      *(undefined4 *)(local_68 + 0x58) = 0x10;
                      ppxVar5 = ___xmlGenericError();
                      pxVar1 = *ppxVar5;
                      ppvVar6 = ___xmlGenericErrorContext();
                      (*pxVar1)(*ppvVar6,"Unimplemented block at %s:%d\n","xmlschemas.c",0x5811);
                    }
                  }
                }
                else {
                  *(undefined4 *)(local_68 + 0x58) = 0xf;
                  ppxVar5 = ___xmlGenericError();
                  pxVar1 = *ppxVar5;
                  ppvVar6 = ___xmlGenericErrorContext();
                  (*pxVar1)(*ppvVar6,"Unimplemented block at %s:%d\n","xmlschemas.c",0x57fe);
                }
              }
            }
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      for (local_54 = 0; local_54 < *(int *)(param_1 + 0x118); local_54 = local_54 + 1) {
        local_68 = *(long *)(*(long *)(param_1 + 0x110) + (long)local_54 * 8);
        if ((*(int *)(local_68 + 0x58) == 2) || (*(int *)(local_68 + 0x58) == 8)) {
          if (*(long *)(local_68 + 0x38) == 0) {
            *(undefined4 *)(local_68 + 0x58) = 6;
          }
          else {
            *(long *)(param_1 + 0xb8) = local_68;
            local_3c = 0;
            local_48 = 0;
            if ((*(long *)(param_1 + 200) != 0) &&
               (local_48 = FUN_10093dd2c(param_1,2), local_48 == -1)) {
              FUN_10091c652(param_1,"xmlSchemaVAttributesComplex","calling xmlSchemaXPathEvaluate()"
                           );
              goto LAB_1009428ff;
            }
            uVar8 = (uint)((ulong)in_stack_ffffffffffffff38 >> 0x20);
            if (*(int *)(local_68 + 0x58) == 8) {
              if (local_48 != 0) {
                if (*(long *)(*(long *)(local_68 + 0x50) + 0x58) == 0) {
                  *(undefined8 *)(local_68 + 0x28) =
                       *(undefined8 *)(*(long *)(local_68 + 0x50) + 0x58);
                  *(undefined8 *)(local_68 + 0x30) =
                       *(undefined8 *)(*(long *)(local_68 + 0x50) + 0x88);
                }
                else {
                  *(undefined8 *)(local_68 + 0x28) =
                       *(undefined8 *)(*(long *)(local_68 + 0x48) + 0x58);
                  *(undefined8 *)(local_68 + 0x30) =
                       *(undefined8 *)(*(long *)(local_68 + 0x48) + 0x88);
                }
                if (*(long *)(local_68 + 0x30) == 0) {
                  FUN_10091c652(param_1,"xmlSchemaVAttributesComplex",
                                "default/fixed value on an attribute use was not precomputed");
                  goto LAB_1009428ff;
                }
                uVar3 = _xmlSchemaCopyValue(*(undefined8 *)(local_68 + 0x30));
                *(undefined8 *)(local_68 + 0x30) = uVar3;
                if (*(long *)(local_68 + 0x30) == 0) {
                  FUN_10091c652(param_1,"xmlSchemaVAttributesComplex","calling xmlSchemaCopyValue()"
                               );
                  goto LAB_1009428ff;
                }
              }
              if ((((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*(long *)(local_68 + 8) != 0)) &&
                 (*(long *)(*(long *)(local_68 + 8) + 0x40) != 0)) {
                local_30 = *(xmlChar **)(local_68 + 0x28);
                local_38 = (xmlChar *)
                           FUN_100940af9(*(undefined8 *)(local_68 + 0x38),
                                         *(undefined8 *)(local_68 + 0x28));
                if (local_38 != (xmlChar *)0x0) {
                  local_30 = local_38;
                }
                if (*(long *)(local_68 + 0x20) == 0) {
                  pxVar4 = _xmlNewProp(*(xmlNodePtr *)(*(long *)(local_68 + 8) + 0x28),
                                       *(xmlChar **)(local_68 + 0x18),local_30);
                  if (pxVar4 == (xmlAttrPtr)0x0) {
                    FUN_10091c652(param_1,"xmlSchemaVAttributesComplex","callling xmlNewProp()");
                    if (local_38 != (xmlChar *)0x0) {
                      (*(code *)_xmlFree)(local_38);
                    }
                    goto LAB_1009428ff;
                  }
                }
                else {
                  local_28 = _xmlSearchNsByHref(*(xmlDocPtr *)(*(long *)(local_68 + 8) + 0x40),
                                                *(xmlNodePtr *)(*(long *)(local_68 + 8) + 0x28),
                                                *(xmlChar **)(local_68 + 0x20));
                  if (local_28 == (xmlNsPtr)0x0) {
                    local_20 = 0;
                    local_28 = (xmlNsPtr)0x0;
                    do {
                      uVar7 = (ulong)local_20;
                      local_20 = local_20 + 1;
                      _snprintf((char *)local_98,0xc,"p%d",uVar7);
                      local_28 = _xmlSearchNs(*(xmlDocPtr *)(*(long *)(local_68 + 8) + 0x40),
                                              *(xmlNodePtr *)(*(long *)(local_68 + 8) + 0x28),
                                              local_98);
                      if (1000 < (int)local_20) {
                        FUN_10091c652(param_1,"xmlSchemaVAttributesComplex",
                                      "could not compute a ns prefix for a default/fixed attribute")
                        ;
                        if (local_38 != (xmlChar *)0x0) {
                          (*(code *)_xmlFree)(local_38);
                        }
                        goto LAB_1009428ff;
                      }
                    } while (local_28 != (xmlNsPtr)0x0);
                    local_28 = _xmlNewNs(*(xmlNodePtr *)(param_1 + 0x90),
                                         *(xmlChar **)(local_68 + 0x20),local_98);
                  }
                  _xmlNewNsProp(*(xmlNodePtr *)(*(long *)(local_68 + 8) + 0x28),local_28,
                                *(xmlChar **)(local_68 + 0x18),local_30);
                }
                if (local_38 != (xmlChar *)0x0) {
                  (*(code *)_xmlFree)(local_38);
                }
              }
            }
            else {
              if (*(long *)(param_1 + 0x80) != 0) {
                _xmlSchemaFreeValue(*(undefined8 *)(param_1 + 0x80));
                *(undefined8 *)(param_1 + 0x80) = 0;
              }
              if (((*(uint *)(*(long *)(local_68 + 0x48) + 0x78) >> 9 & 1) == 0) &&
                 ((*(long *)(local_68 + 0x50) == 0 ||
                  ((*(uint *)(*(long *)(local_68 + 0x50) + 0x78) >> 9 & 1) == 0)))) {
                local_3c = 0;
              }
              else {
                local_3c = 1;
              }
              if ((local_48 == 0) && (local_3c == 0)) {
                in_stack_ffffffffffffff38 = (ulong)uVar8 << 0x20;
                local_44 = FUN_100940cd5(param_1,*(undefined8 *)(local_68 + 8),
                                         *(undefined8 *)(local_68 + 0x38),
                                         *(undefined8 *)(local_68 + 0x28),0,1,
                                         in_stack_ffffffffffffff38,0);
              }
              else {
                *(uint *)(local_68 + 0x40) = *(uint *)(local_68 + 0x40) | 0x10;
                in_stack_ffffffffffffff38 = CONCAT44(uVar8,1);
                local_44 = FUN_100940cd5(param_1,*(undefined8 *)(local_68 + 8),
                                         *(undefined8 *)(local_68 + 0x38),
                                         *(undefined8 *)(local_68 + 0x28),local_68 + 0x30,1,
                                         in_stack_ffffffffffffff38,0);
              }
              if (local_44 == 0) {
                if (local_3c != 0) {
                  local_1c = FUN_10093c74a(*(undefined8 *)(local_68 + 0x38));
                  if (*(long *)(local_68 + 0x30) == 0) {
                    ppxVar5 = ___xmlGenericError();
                    pxVar1 = *ppxVar5;
                    ppvVar6 = ___xmlGenericErrorContext();
                    (*pxVar1)(*ppvVar6,"Unimplemented block at %s:%d\n","xmlschemas.c",0x5900);
                  }
                  else if ((*(long *)(local_68 + 0x50) == 0) ||
                          (*(long *)(*(long *)(local_68 + 0x50) + 0x58) == 0)) {
                    if (*(long *)(*(long *)(local_68 + 0x48) + 0x88) == 0) {
                      ppxVar5 = ___xmlGenericError();
                      pxVar1 = *ppxVar5;
                      ppvVar6 = ___xmlGenericErrorContext();
                      (*pxVar1)(*ppvVar6,"Unimplemented block at %s:%d\n","xmlschemas.c",0x5916);
                    }
                    else {
                      *(undefined8 *)(local_68 + 0x60) =
                           *(undefined8 *)(*(long *)(local_68 + 0x48) + 0x58);
                      iVar2 = FUN_10093b64b(*(undefined8 *)(local_68 + 0x30),
                                            *(undefined8 *)(*(long *)(local_68 + 0x48) + 0x88));
                      if (iVar2 == 0) {
                        *(undefined4 *)(local_68 + 0x58) = 7;
                      }
                    }
                  }
                  else if (*(long *)(*(long *)(local_68 + 0x50) + 0x88) == 0) {
                    ppxVar5 = ___xmlGenericError();
                    pxVar1 = *ppxVar5;
                    ppvVar6 = ___xmlGenericErrorContext();
                    (*pxVar1)(*ppvVar6,"Unimplemented block at %s:%d\n","xmlschemas.c",0x5907);
                  }
                  else {
                    *(undefined8 *)(local_68 + 0x60) =
                         *(undefined8 *)(*(long *)(local_68 + 0x50) + 0x58);
                    iVar2 = FUN_10093b64b(*(undefined8 *)(local_68 + 0x30),
                                          *(undefined8 *)(*(long *)(local_68 + 0x50) + 0x88));
                    if (iVar2 == 0) {
                      *(undefined4 *)(local_68 + 0x58) = 7;
                    }
                  }
                }
              }
              else {
                if (local_44 == -1) {
                  FUN_10091c652(param_1,"xmlSchemaVAttributesComplex",
                                "calling xmlSchemaStreamValidateSimpleTypeValue()");
                  goto LAB_1009428ff;
                }
                *(undefined4 *)(local_68 + 0x58) = 5;
              }
            }
            if (local_48 == 0) {
              if (*(long *)(param_1 + 200) != 0) {
                FUN_10093e1e3(param_1);
              }
            }
            else {
              iVar2 = FUN_10093e258(param_1,*(int *)(param_1 + 0xa4) + 1);
              if (iVar2 == -1) {
                FUN_10091c652(param_1,"xmlSchemaVAttributesComplex",
                              "calling xmlSchemaXPathEvaluate()");
LAB_1009428ff:
                *(undefined8 *)(param_1 + 0xb8) =
                     *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa4) * 8)
                ;
                return 0xffffffff;
              }
            }
          }
        }
      }
      for (local_54 = 0; local_54 < *(int *)(param_1 + 0x118); local_54 = local_54 + 1) {
        local_68 = *(long *)(*(long *)(param_1 + 0x110) + (long)local_54 * 8);
        if ((((*(int *)(local_68 + 0x58) != 0x11) && (*(int *)(local_68 + 0x58) != 2)) &&
            (*(int *)(local_68 + 0x58) != 0xd)) && (*(int *)(local_68 + 0x58) != 0xe)) {
          *(long *)(param_1 + 0xb8) = local_68;
          switch(*(undefined4 *)(local_68 + 0x58)) {
          case 1:
            if (*(int *)(local_68 + 0x5c) == 0) {
              if (*(long *)(local_88 + 0x98) == 0) {
                FUN_10091cd86(param_1,0x74a,local_68,0);
              }
              else {
                FUN_10091cd86(param_1,0x74b,local_68,0);
              }
            }
            break;
          case 4:
            local_a0 = 0;
            *(undefined8 *)(param_1 + 0xb8) =
                 *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa4) * 8);
            uVar3 = FUN_10091a69e(&local_a0,*(undefined8 *)(*(long *)(local_68 + 0x48) + 0x70),
                                  *(undefined8 *)(*(long *)(local_68 + 0x48) + 0x10));
            FUN_10091c684(param_1,0x74c,0,0,"The attribute \'%s\' is required but missing",uVar3,0);
            if (local_a0 != 0) {
              (*(code *)_xmlFree)(local_a0);
              local_a0 = 0;
            }
            break;
          case 6:
            FUN_10091c684(param_1,0x746,0,0,"The type definition is absent",0,0);
            break;
          case 7:
            FUN_10091c684(param_1,0x752,0,0,
                          "The value \'%s\' does not match the fixed value constraint \'%s\'",
                          *(undefined8 *)(local_68 + 0x28),*(undefined8 *)(local_68 + 0x60));
            break;
          case 10:
            FUN_10091c684(param_1,0x756,0,0,
                          "No matching global attribute declaration available, but demanded by the strict wildcard"
                          ,0,0);
          }
        }
      }
      *(undefined8 *)(param_1 + 0xb8) =
           *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa4) * 8);
    }
  }
  return 0;
}

