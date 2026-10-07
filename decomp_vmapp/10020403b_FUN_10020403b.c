
undefined4 FUN_10020403b(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 local_fc;
  undefined8 *local_e0;
  undefined8 *local_d8;
  long *local_d0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined4 *local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  
  lVar1 = *(long *)(param_2 + 0x70);
  local_b8 = (undefined4 *)0x0;
  local_b0 = (undefined4 *)0x0;
  local_a8 = (undefined4 *)0x0;
  local_a0 = (undefined4 *)0x0;
  local_98 = (undefined4 *)0x0;
  local_90 = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  local_80 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x0;
  local_68 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_58 = (undefined4 *)0x0;
  local_50 = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  if ((*(long *)(param_2 + 0xb0) == 0) && (*(long *)(lVar1 + 0xb0) == 0)) {
    return 0;
  }
  local_d0 = *(long **)(param_2 + 0xb0);
  if (local_d0 != (long *)0x0) {
    for (; *local_d0 != 0; local_d0 = (long *)*local_d0) {
    }
  }
  for (local_d8 = *(undefined8 **)(param_2 + 0xb0); local_d8 != (undefined8 *)0x0;
      local_d8 = (undefined8 *)*local_d8) {
    puVar2 = (undefined4 *)local_d8[1];
    switch(*puVar2) {
    case 1000:
      local_90 = puVar2;
      break;
    case 0x3e9:
      local_80 = puVar2;
      break;
    case 0x3ea:
      local_88 = puVar2;
      break;
    case 0x3eb:
      local_78 = puVar2;
      break;
    case 0x3ec:
      local_b0 = puVar2;
      break;
    case 0x3ed:
      local_a8 = puVar2;
      break;
    case 0x3f1:
      local_b8 = puVar2;
      break;
    case 0x3f2:
      local_a0 = puVar2;
      break;
    case 0x3f3:
      local_98 = puVar2;
    }
  }
  for (local_d8 = *(undefined8 **)(lVar1 + 0xb0); local_d8 != (undefined8 *)0x0;
      local_d8 = (undefined8 *)*local_d8) {
    puVar2 = (undefined4 *)local_d8[1];
    switch(*puVar2) {
    case 1000:
      local_48 = puVar2;
      break;
    case 0x3e9:
      local_38 = puVar2;
      break;
    case 0x3ea:
      local_40 = puVar2;
      break;
    case 0x3eb:
      local_30 = puVar2;
      break;
    case 0x3ec:
      local_68 = puVar2;
      break;
    case 0x3ed:
      local_60 = puVar2;
      break;
    case 0x3f1:
      local_70 = puVar2;
      break;
    case 0x3f2:
      local_58 = puVar2;
      break;
    case 0x3f3:
      local_50 = puVar2;
    }
  }
  if ((local_b8 != (undefined4 *)0x0) &&
     ((local_98 != (undefined4 *)0x0 || (local_a0 != (undefined4 *)0x0)))) {
    FUN_1001ea46a(param_1,0x6b5,0,local_b8,*(undefined8 *)(local_b8 + 10),
                  "It is an error for both \'length\' and either of \'minLength\' or \'maxLength\' to be specified on the same type definition"
                  ,0);
  }
  if ((local_88 != (undefined4 *)0x0) && (local_78 != (undefined4 *)0x0)) {
    uVar6 = FUN_100208cf9(*local_78);
    uVar7 = FUN_100208cf9(*local_88);
    FUN_1001ea330(param_1,0x6b5,0,local_88,*(undefined8 *)(local_88 + 10),
                  "It is an error for both \'%s\' and \'%s\' to be specified on the same type definition"
                  ,uVar7,uVar6,0);
  }
  if ((local_90 != (undefined4 *)0x0) && (local_80 != (undefined4 *)0x0)) {
    uVar6 = FUN_100208cf9(*local_80);
    uVar7 = FUN_100208cf9(*local_90);
    FUN_1001ea330(param_1,0x6b5,0,local_90,*(undefined8 *)(local_90 + 10),
                  "It is an error for both \'%s\' and \'%s\' to be specified on the same type definition"
                  ,uVar7,uVar6,0);
  }
  if ((local_b8 == (undefined4 *)0x0) || (local_70 == (undefined4 *)0x0)) {
LAB_100204608:
    if ((local_98 != (undefined4 *)0x0) && (local_50 != (undefined4 *)0x0)) {
      iVar5 = _xmlSchemaCompareValues
                        (*(undefined8 *)(local_98 + 0xe),*(undefined8 *)(local_50 + 0xe));
      if (iVar5 == -2) goto LAB_100205514;
      if (iVar5 == -1) {
        FUN_100203ec8(param_1,local_98,local_50,1,1,1);
      }
      if ((iVar5 != 0) && (local_50[0xc] != 0)) {
        FUN_1001ea46a(param_1,0x6b5,0,local_98,*(undefined8 *)(local_98 + 10),
                      "The base type\'s facet is \'fixed\', thus the value must not differ",0);
      }
    }
    if ((local_a0 != (undefined4 *)0x0) && (local_58 != (undefined4 *)0x0)) {
      iVar5 = _xmlSchemaCompareValues
                        (*(undefined8 *)(local_a0 + 0xe),*(undefined8 *)(local_58 + 0xe));
      if (iVar5 == -2) goto LAB_100205514;
      if (iVar5 == 1) {
        FUN_100203ec8(param_1,local_a0,local_58,0xffffffff,1,1);
      }
      if ((iVar5 != 0) && (local_58[0xc] != 0)) {
        FUN_1001ea46a(param_1,0x6b5,0,local_a0,*(undefined8 *)(local_a0 + 10),
                      "The base type\'s facet is \'fixed\', thus the value must not differ",0);
      }
    }
    if (local_b8 == (undefined4 *)0x0) {
      local_b8 = local_70;
    }
    if (local_b8 != (undefined4 *)0x0) {
      puVar2 = local_70;
      if (local_98 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_b8 + 0xe),*(undefined8 *)(local_98 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        puVar2 = local_b8;
        if (iVar5 == -1) {
          FUN_100203ec8(param_1,local_b8,local_98,1,1,0);
        }
      }
      local_b8 = puVar2;
      if (local_a0 == (undefined4 *)0x0) {
        local_a0 = local_58;
      }
      if (local_a0 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_b8 + 0xe),*(undefined8 *)(local_a0 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == 1) {
          FUN_100203ec8(param_1,local_b8,local_a0,0xffffffff,1,0);
        }
      }
    }
    if (local_88 != (undefined4 *)0x0) {
      if (local_90 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_88 + 0xe),*(undefined8 *)(local_90 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == -1) {
          FUN_100203ec8(param_1,local_88,local_90,1,1,0);
        }
      }
      if (local_40 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_88 + 0xe),*(undefined8 *)(local_40 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == 1) {
          FUN_100203ec8(param_1,local_88,local_40,0xffffffff,1,1);
        }
        if ((iVar5 != 0) && (local_40[0xc] != 0)) {
          FUN_1001ea46a(param_1,0x6b5,0,local_88,*(undefined8 *)(local_88 + 10),
                        "The base type\'s facet is \'fixed\', thus the value must not differ",0);
        }
      }
      if (local_30 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_88 + 0xe),*(undefined8 *)(local_30 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 != -1) {
          FUN_100203ec8(param_1,local_88,local_30,0xffffffff,0,1);
        }
      }
      if (local_48 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_88 + 0xe),*(undefined8 *)(local_48 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == -1) {
          FUN_100203ec8(param_1,local_88,local_48,1,1,1);
        }
      }
      if (local_38 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_88 + 0xe),*(undefined8 *)(local_38 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 != 1) {
          FUN_100203ec8(param_1,local_88,local_38,1,0,1);
        }
      }
    }
    if (local_78 != (undefined4 *)0x0) {
      if (local_80 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_78 + 0xe),*(undefined8 *)(local_80 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == -1) {
          FUN_100203ec8(param_1,local_78,local_80,1,1,0);
        }
      }
      if (local_30 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_78 + 0xe),*(undefined8 *)(local_30 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == 1) {
          FUN_100203ec8(param_1,local_78,local_30,0xffffffff,1,1);
        }
        if ((iVar5 != 0) && (local_30[0xc] != 0)) {
          FUN_1001ea46a(param_1,0x6b5,0,local_78,*(undefined8 *)(local_78 + 10),
                        "The base type\'s facet is \'fixed\', thus the value must not differ",0);
        }
      }
      if (local_40 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_78 + 0xe),*(undefined8 *)(local_40 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == 1) {
          FUN_100203ec8(param_1,local_78,local_40,0xffffffff,1,1);
        }
      }
      if (local_48 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_78 + 0xe),*(undefined8 *)(local_48 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 != 1) {
          FUN_100203ec8(param_1,local_78,local_48,1,0,1);
        }
      }
      if (local_38 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_78 + 0xe),*(undefined8 *)(local_38 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 != 1) {
          FUN_100203ec8(param_1,local_78,local_38,1,0,1);
        }
      }
    }
    if (local_80 != (undefined4 *)0x0) {
      if (local_88 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_80 + 0xe),*(undefined8 *)(local_88 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 != -1) {
          FUN_100203ec8(param_1,local_80,local_88,0xffffffff,0,0);
        }
      }
      if (local_38 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_80 + 0xe),*(undefined8 *)(local_38 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == -1) {
          FUN_100203ec8(param_1,local_80,local_38,1,1,1);
        }
        if ((iVar5 != 0) && (local_38[0xc] != 0)) {
          FUN_1001ea46a(param_1,0x6b5,0,local_80,*(undefined8 *)(local_80 + 10),
                        "The base type\'s facet is \'fixed\', thus the value must not differ",0);
        }
      }
      if (local_40 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_80 + 0xe),*(undefined8 *)(local_40 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == 1) {
          FUN_100203ec8(param_1,local_80,local_40,0xffffffff,1,1);
        }
      }
      if (local_48 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_80 + 0xe),*(undefined8 *)(local_48 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == -1) {
          FUN_100203ec8(param_1,local_80,local_48,1,1,1);
        }
      }
      if (local_30 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_80 + 0xe),*(undefined8 *)(local_30 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 != -1) {
          FUN_100203ec8(param_1,local_80,local_30,0xffffffff,0,1);
        }
      }
    }
    if (local_90 != (undefined4 *)0x0) {
      if (local_78 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_90 + 0xe),*(undefined8 *)(local_78 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 != -1) {
          FUN_100203ec8(param_1,local_90,local_78,0xffffffff,0,0);
        }
      }
      if (local_48 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_90 + 0xe),*(undefined8 *)(local_48 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == -1) {
          FUN_100203ec8(param_1,local_90,local_48,1,1,1);
        }
        if ((iVar5 != 0) && (local_48[0xc] != 0)) {
          FUN_1001ea46a(param_1,0x6b5,0,local_90,*(undefined8 *)(local_90 + 10),
                        "The base type\'s facet is \'fixed\', thus the value must not differ",0);
        }
      }
      if (local_40 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_90 + 0xe),*(undefined8 *)(local_40 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 == 1) {
          FUN_100203ec8(param_1,local_90,local_40,0xffffffff,1,1);
        }
      }
      if (local_38 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_90 + 0xe),*(undefined8 *)(local_38 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 != 1) {
          FUN_100203ec8(param_1,local_90,local_38,1,0,1);
        }
      }
      if (local_30 != (undefined4 *)0x0) {
        iVar5 = _xmlSchemaCompareValues
                          (*(undefined8 *)(local_90 + 0xe),*(undefined8 *)(local_30 + 0xe));
        if (iVar5 == -2) goto LAB_100205514;
        if (iVar5 != -1) {
          FUN_100203ec8(param_1,local_90,local_30,0xffffffff,0,1);
        }
      }
    }
    if ((local_b0 != (undefined4 *)0x0) && (local_68 != (undefined4 *)0x0)) {
      iVar5 = _xmlSchemaCompareValues
                        (*(undefined8 *)(local_b0 + 0xe),*(undefined8 *)(local_68 + 0xe));
      if (iVar5 == -2) goto LAB_100205514;
      if (iVar5 == 1) {
        FUN_100203ec8(param_1,local_b0,local_68,0xffffffff,1,1);
      }
      if ((iVar5 != 0) && (local_68[0xc] != 0)) {
        FUN_1001ea46a(param_1,0x6b5,0,local_b0,*(undefined8 *)(local_b0 + 10),
                      "The base type\'s facet is \'fixed\', thus the value must not differ",0);
      }
    }
    if ((local_a8 != (undefined4 *)0x0) && (local_60 != (undefined4 *)0x0)) {
      iVar5 = _xmlSchemaCompareValues
                        (*(undefined8 *)(local_a8 + 0xe),*(undefined8 *)(local_60 + 0xe));
      if (iVar5 == -2) goto LAB_100205514;
      if (iVar5 == 1) {
        FUN_100203ec8(param_1,local_a8,local_60,0xffffffff,1,1);
      }
      if ((iVar5 != 0) && (local_60[0xc] != 0)) {
        FUN_1001ea46a(param_1,0x6b5,0,local_a8,*(undefined8 *)(local_a8 + 10),
                      "The base type\'s facet is \'fixed\', thus the value must not differ",0);
      }
    }
    if (local_b0 == (undefined4 *)0x0) {
      local_b0 = local_68;
    }
    if (local_a8 == (undefined4 *)0x0) {
      local_a8 = local_60;
    }
    if ((local_b0 != (undefined4 *)0x0) && (local_a8 != (undefined4 *)0x0)) {
      iVar5 = _xmlSchemaCompareValues
                        (*(undefined8 *)(local_a8 + 0xe),*(undefined8 *)(local_b0 + 0xe));
      if (iVar5 == -2) goto LAB_100205514;
      if (iVar5 == 1) {
        FUN_100203ec8(param_1,local_a8,local_b0,0xffffffff,1,0);
      }
    }
    for (local_d8 = *(undefined8 **)(lVar1 + 0xb0); local_d8 != (undefined8 *)0x0;
        local_d8 = (undefined8 *)*local_d8) {
      piVar3 = (int *)local_d8[1];
      if ((*piVar3 != 0x3ee) && (*piVar3 != 0x3ef)) {
        for (local_e0 = *(undefined8 **)(param_2 + 0xb0); local_e0 != (undefined8 *)0x0;
            local_e0 = (undefined8 *)*local_e0) {
          piVar4 = (int *)local_e0[1];
          if (*piVar4 == *piVar3) {
            if (*piVar4 == 0x3f0) {
              if (piVar4[0xd] < piVar3[0xd]) {
                FUN_1001ea46a(param_1,0x6b5,0,local_b8,*(undefined8 *)(local_b8 + 10),
                              "The \'whitespace\' value has to be equal to or stronger than the \'whitespace\' value of the base type"
                              ,0);
              }
              if ((piVar3[0xc] != 0) && (piVar4[0xd] != piVar3[0xd])) {
                FUN_1001ea46a(param_1,0x6b5,0,piVar4,*(undefined8 *)(piVar4 + 10),
                              "The base type\'s facet is \'fixed\', thus the value must not differ",
                              0);
              }
            }
            break;
          }
        }
        if (local_e0 == (undefined8 *)0x0) {
          plVar8 = (long *)(*(code *)_xmlMalloc)(0x10);
          if (plVar8 == (long *)0x0) {
            FUN_1001e8056(param_1,"deriving facets, creating a facet link",0);
            return 0xffffffff;
          }
          plVar8[1] = local_d8[1];
          *plVar8 = 0;
          if (local_d0 == (long *)0x0) {
            *(long **)(param_2 + 0xb0) = plVar8;
            local_d0 = plVar8;
          }
          else {
            *local_d0 = (long)plVar8;
            local_d0 = plVar8;
          }
        }
      }
    }
    local_fc = 0;
  }
  else {
    iVar5 = _xmlSchemaCompareValues(*(undefined8 *)(local_b8 + 0xe),*(undefined8 *)(local_70 + 0xe))
    ;
    if (iVar5 != -2) {
      if ((iVar5 != 0) && (FUN_100203ec8(param_1,local_b8,local_70,0,0,1), local_70[0xc] != 0)) {
        FUN_1001ea46a(param_1,0x6b5,0,local_b8,*(undefined8 *)(local_b8 + 10),
                      "The base type\'s facet is \'fixed\', thus the value must not differ",0);
      }
      goto LAB_100204608;
    }
LAB_100205514:
    FUN_1001e8d2a(param_1,"xmlSchemaDeriveAndValidateFacets","an error occured");
    local_fc = 0xffffffff;
  }
  return local_fc;
}

