
undefined4 * FUN_1001fc2e5(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar3;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar4;
  int local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_28 = 0;
  local_40 = 0;
  local_10 = 0;
  local_c = 0;
  local_44 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return (undefined4 *)0x0;
  }
  local_30 = *(undefined8 *)(param_1 + 0xa0);
  if (param_4 != 0) {
    local_20 = FUN_1001ece01(param_3,"name");
    if (local_20 == 0) {
      FUN_1001e9eb4(param_1,0xbdc,0,param_3,"name",0);
      return (undefined4 *)0x0;
    }
    uVar2 = _xmlSchemaGetBuiltInType(0x16);
    iVar1 = FUN_1001efd51(param_1,0,0,local_20,uVar2,&local_40);
    if (iVar1 != 0) {
      return (undefined4 *)0x0;
    }
  }
  if (param_4 == 0) {
    local_38 = (undefined4 *)
               FUN_1001ee16d(param_1,param_2,0,*(undefined8 *)(param_1 + 0xd0),param_3,0);
    if (local_38 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    local_40 = *(undefined8 *)(local_38 + 4);
    *(long *)(local_38 + 0x12) = param_3;
    *local_38 = 5;
  }
  else {
    local_38 = (undefined4 *)
               FUN_1001ee16d(param_1,param_2,local_40,*(undefined8 *)(param_1 + 0xd0),param_3,1);
    if (local_38 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *(long *)(local_38 + 0x12) = param_3;
    *local_38 = 5;
    local_38[0x16] = local_38[0x16] | 8;
  }
  *(undefined8 *)(local_38 + 0x34) = *(undefined8 *)(param_1 + 0xd0);
  for (local_20 = *(long *)(param_3 + 0x58); local_20 != 0; local_20 = *(long *)(local_20 + 0x30)) {
    if (*(long *)(local_20 + 0x48) == 0) {
      iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"id");
      if (iVar1 == 0) {
        iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"mixed");
        if (iVar1 == 0) {
          if (param_4 == 0) {
            FUN_1001ea19e(param_1,0xbdb,0,local_38,local_20);
          }
          else {
            iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"name");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"abstract");
              if (iVar1 == 0) {
                iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"final");
                uVar3 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
                uVar4 = (undefined4)((ulong)in_stack_ffffffffffffff70 >> 0x20);
                if (iVar1 == 0) {
                  iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"block");
                  uVar3 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
                  uVar4 = (undefined4)((ulong)in_stack_ffffffffffffff70 >> 0x20);
                  if (iVar1 == 0) {
                    FUN_1001ea19e(param_1,0xbdb,0,local_38,local_20);
                  }
                  else {
                    local_18 = FUN_1001ecf24(param_1,local_20);
                    in_stack_ffffffffffffff70 = CONCAT44(uVar4,0xffffffff);
                    in_stack_ffffffffffffff68 = CONCAT44(uVar3,0xffffffff);
                    iVar1 = FUN_1001f2b8b(local_18,local_38 + 0x16,0xffffffff,0x40000,0x80000,
                                          0xffffffff,in_stack_ffffffffffffff68,
                                          in_stack_ffffffffffffff70);
                    if (iVar1 == 0) {
                      local_c = 1;
                    }
                    else {
                      in_stack_ffffffffffffff70 = 0;
                      in_stack_ffffffffffffff68 = local_18;
                      FUN_1001ea8df(param_1,0xbdd,local_38,local_20,0,
                                    "(#all | List of (extension | restriction)) ",local_18,0,0,0);
                    }
                  }
                }
                else {
                  local_18 = FUN_1001ecf24(param_1,local_20);
                  in_stack_ffffffffffffff70 = CONCAT44(uVar4,0xffffffff);
                  in_stack_ffffffffffffff68 = CONCAT44(uVar3,0xffffffff);
                  iVar1 = FUN_1001f2b8b(local_18,local_38 + 0x16,0xffffffff,0x200,0x400,0xffffffff,
                                        in_stack_ffffffffffffff68,in_stack_ffffffffffffff70);
                  if (iVar1 == 0) {
                    local_10 = 1;
                  }
                  else {
                    in_stack_ffffffffffffff70 = 0;
                    in_stack_ffffffffffffff68 = local_18;
                    FUN_1001ea8df(param_1,0xbdd,local_38,local_20,0,
                                  "(#all | List of (extension | restriction))",local_18,0,0,0);
                  }
                }
              }
              else {
                iVar1 = FUN_1001ef983(param_1,0,local_38,local_20);
                if (iVar1 != 0) {
                  local_38[0x16] = local_38[0x16] | 0x100000;
                }
              }
            }
          }
        }
        else {
          iVar1 = FUN_1001ef983(param_1,0,local_38,local_20);
          if (iVar1 != 0) {
            local_38[0x16] = local_38[0x16] | 1;
          }
        }
      }
      else {
        FUN_1001ef36d(param_1,0,local_38,param_3,"id");
      }
    }
    else {
      iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                           PTR_s_http___www_w3_org_2001_XMLSchema_101111750);
      if (iVar1 != 0) {
        FUN_1001ea19e(param_1,0xbdb,0,local_38,local_20);
      }
    }
  }
  if (local_c == 0) {
    if ((*(uint *)(param_2 + 0x30) >> 7 & 1) != 0) {
      local_38[0x16] = local_38[0x16] | 0x80000;
    }
    if ((*(uint *)(param_2 + 0x30) >> 6 & 1) != 0) {
      local_38[0x16] = local_38[0x16] | 0x40000;
    }
  }
  if (local_10 == 0) {
    if ((*(uint *)(param_2 + 0x30) >> 3 & 1) != 0) {
      local_38[0x16] = local_38[0x16] | 0x400;
    }
    if ((*(uint *)(param_2 + 0x30) >> 2 & 1) != 0) {
      local_38[0x16] = local_38[0x16] | 0x200;
    }
  }
  local_28 = *(long *)(param_3 + 0x18);
  if (((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
     ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"annotation"), iVar1 != 0 &&
      (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                            PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)))) {
    uVar2 = FUN_1001f020a(param_1,param_2,local_28);
    *(undefined8 *)(local_38 + 0xc) = uVar2;
    local_28 = *(long *)(local_28 + 0x30);
  }
  *(undefined4 **)(param_1 + 0xa0) = local_38;
  if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
     ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"simpleContent"), iVar1 == 0
      || (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                               PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0)))) {
    if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
        (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"complexContent"),
        iVar1 == 0)) ||
       (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                             PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0)) {
      uVar2 = _xmlSchemaGetBuiltInType(0x2d);
      *(undefined8 *)(local_38 + 0x1c) = uVar2;
      local_38[0x16] = local_38[0x16] | 4;
      if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
         ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"all"), iVar1 == 0 ||
          (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0)))) {
        if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"choice"), iVar1 == 0 ||
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0))))
        {
          if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
              (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"sequence"),
              iVar1 == 0)) ||
             (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0)) {
            if (((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
               ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"group"), iVar1 != 0
                && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                         PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                   iVar1 != 0)))) {
              uVar2 = FUN_1001f657a(param_1,param_2,local_28);
              *(undefined8 *)(local_38 + 0xe) = uVar2;
              local_28 = *(long *)(local_28 + 0x30);
            }
          }
          else {
            uVar2 = FUN_1001f9f0b(param_1,param_2,local_28,6,1);
            *(undefined8 *)(local_38 + 0xe) = uVar2;
            local_28 = *(long *)(local_28 + 0x30);
          }
        }
        else {
          uVar2 = FUN_1001f9f0b(param_1,param_2,local_28,7,1);
          *(undefined8 *)(local_38 + 0xe) = uVar2;
          local_28 = *(long *)(local_28 + 0x30);
        }
      }
      else {
        uVar2 = FUN_1001f9f0b(param_1,param_2,local_28,8,1);
        *(undefined8 *)(local_38 + 0xe) = uVar2;
        local_28 = *(long *)(local_28 + 0x30);
      }
      local_28 = FUN_1001f001c(param_1,param_2,local_28,local_38);
      if (((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
         ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"anyAttribute"),
          iVar1 != 0 &&
          (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)))) {
        uVar2 = FUN_1001f1773(param_1,param_2,local_28);
        *(undefined8 *)(local_38 + 0x26) = uVar2;
        local_28 = *(long *)(local_28 + 0x30);
      }
    }
    else {
      local_38[0x17] = 1;
      FUN_1001fbf22(param_1,param_2,local_28,&local_44);
      local_28 = *(long *)(local_28 + 0x30);
    }
  }
  else {
    if ((local_38[0x16] & 1) != 0) {
      local_38[0x16] = local_38[0x16] ^ 1;
    }
    FUN_1001fbbb8(param_1,param_2,local_28,&local_44);
    local_28 = *(long *)(local_28 + 0x30);
  }
  if (local_28 != 0) {
    FUN_1001eac65(param_1,0xbd9,0,local_38,param_3,local_28,0,
                  "(annotation?, (simpleContent | complexContent | ((group | all | choice | sequence)?, ((attribute | attributeGroup)*, anyAttribute?))))"
                 );
  }
  if (((param_4 != 0) && (*(int *)(param_1 + 0xc4) != 0)) && (local_44 == 0)) {
    FUN_1001ea46a(param_1,0xc09,0,0,param_3,
                  "This is a redefinition, thus the <complexType> must have a <restriction> or <extension> grand-child"
                  ,0);
  }
  *(undefined8 *)(param_1 + 0xa0) = local_30;
  return local_38;
}

