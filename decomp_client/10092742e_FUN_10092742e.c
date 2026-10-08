
long FUN_10092742e(undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5
                  )

{
  int iVar1;
  undefined8 uVar2;
  long local_68;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  long *local_18;
  long *local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  local_18 = (long *)0x0;
  local_10 = (long *)0x0;
  for (local_20 = *(long *)(param_3 + 0x58); local_20 != 0; local_20 = *(long *)(local_20 + 0x30)) {
    if (*(long *)(local_20 + 0x48) == 0) {
      iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"id");
      if (((iVar1 == 0) &&
          (iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"name"), iVar1 == 0)) &&
         ((param_4 != 0x18 ||
          (iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"refer"), iVar1 == 0)))) {
        FUN_10091dac6(param_1,0xbdb,0,0,local_20);
      }
    }
    else {
      iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                           PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
      if (iVar1 != 0) {
        FUN_10091dac6(param_1,0xbdb,0,0,local_20);
      }
    }
  }
  local_20 = FUN_100920729(param_3,"name");
  if (local_20 == 0) {
    FUN_10091d7dc(param_1,0xbdc,0,param_3,"name",0);
    local_68 = 0;
  }
  else {
    uVar2 = _xmlSchemaGetBuiltInType(0x16);
    iVar1 = FUN_100923679(param_1,0,0,local_20,uVar2,&local_38);
    if (iVar1 == 0) {
      local_30 = FUN_10092234a(param_1,param_2,local_38,param_5,param_4,param_3);
      if (local_30 == 0) {
        local_68 = 0;
      }
      else {
        FUN_100922c95(param_1,0,local_30,param_3,"id");
        if (param_4 == 0x18) {
          local_20 = FUN_100920729(param_3,"refer");
          if (local_20 == 0) {
            FUN_10091d7dc(param_1,0xbdc,0,param_3,"refer",0);
          }
          else {
            uVar2 = FUN_100921e20(param_1,0x17,0,0);
            *(undefined8 *)(local_30 + 0x48) = uVar2;
            if (*(long *)(local_30 + 0x48) == 0) {
              return 0;
            }
            FUN_100922b92(param_1,param_2,0,0,local_20,*(long *)(local_30 + 0x48) + 0x20,
                          *(long *)(local_30 + 0x48) + 0x18);
            FUN_100923805(param_1,param_2,param_3,local_30,
                          *(undefined8 *)(*(long *)(local_30 + 0x48) + 0x20));
          }
        }
        local_28 = *(long *)(param_3 + 0x18);
        if ((((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
            (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"annotation"),
            iVar1 != 0)) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0)) {
          uVar2 = FUN_100923b32(param_1,param_2,local_28);
          *(undefined8 *)(local_30 + 8) = uVar2;
          local_28 = *(long *)(local_28 + 0x30);
        }
        if (local_28 == 0) {
          FUN_10091e58d(param_1,0xbda,0,0,param_3,0,"A child element is missing",
                        "(annotation?, (selector, field+))");
        }
        if (((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"selector"), iVar1 != 0
            && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                     PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0))
           )) {
          uVar2 = FUN_100927155(param_1,param_2,local_30,local_28,0);
          *(undefined8 *)(local_30 + 0x30) = uVar2;
          local_28 = *(long *)(local_28 + 0x30);
          if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
              (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"field"), iVar1 == 0))
             || (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                      PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 == 0)
             ) {
            FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_28,0,"(annotation?, (selector, field+))");
          }
          else {
            do {
              local_18 = (long *)FUN_100927155(param_1,param_2,local_30,local_28,1);
              if (local_18 != (long *)0x0) {
                *(undefined4 *)(local_18 + 2) = *(undefined4 *)(local_30 + 0x40);
                *(int *)(local_30 + 0x40) = *(int *)(local_30 + 0x40) + 1;
                if (local_10 == (long *)0x0) {
                  *(long **)(local_30 + 0x38) = local_18;
                  local_10 = local_18;
                }
                else {
                  *local_10 = (long)local_18;
                  local_10 = local_18;
                }
              }
              local_28 = *(long *)(local_28 + 0x30);
            } while ((((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
                     (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"field"),
                     iVar1 != 0)) &&
                    (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                          PTR_s_http___www_w3_org_2001_XMLSchema_102279850),
                    iVar1 != 0));
          }
        }
        if (local_28 != 0) {
          FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_28,0,"(annotation?, (selector, field+))");
        }
        local_68 = local_30;
      }
    }
    else {
      local_68 = 0;
    }
  }
  return local_68;
}

