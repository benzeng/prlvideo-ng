
undefined4 FUN_100941d43(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong in_stack_ffffffffffffff98;
  undefined4 local_54;
  long local_40;
  long local_38;
  long local_30;
  int local_24;
  long local_20;
  
  local_38 = *(long *)(*(long *)(param_1 + 0xb8) + 0x50);
  local_30 = *(long *)(local_38 + 0x38);
  if (local_38 == 0) {
    FUN_10091c684(param_1,0x735,0,0,"No matching declaration available",0,0);
    local_54 = *(undefined4 *)(param_1 + 0x60);
  }
  else if ((*(uint *)(local_38 + 0x58) >> 4 & 1) == 0) {
    if (local_30 == 0) {
      FUN_10091c684(param_1,0x753,0,0,"The type definition is absent",0,0);
      local_54 = 0x753;
    }
    else {
      if (*(int *)(param_1 + 0x118) != 0) {
        local_20 = FUN_10093cac5(param_1,2);
        if (local_20 != 0) {
          *(long *)(param_1 + 0xb8) = local_20;
          lVar4 = local_20 + 0x30;
          uVar1 = *(undefined8 *)(local_20 + 0x28);
          uVar3 = _xmlSchemaGetBuiltInType(0xf);
          local_24 = FUN_100940cd5(param_1,0,uVar3,uVar1,lVar4,1,
                                   in_stack_ffffffffffffff98 & 0xffffffff00000000,0);
          *(undefined8 *)(param_1 + 0xb8) =
               *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa4) * 8);
          if (local_24 < 0) {
            FUN_10091c652(param_1,"xmlSchemaValidateElemDecl",
                          "calling xmlSchemaVCheckCVCSimpleType() to validate the attribute \'xsi:nil\'"
                         );
            return 0xffffffff;
          }
          if (local_24 == 0) {
            if (((*(uint *)(local_38 + 0x58) ^ 1) & 1) == 0) {
              iVar2 = _xmlSchemaValueGetAsBoolean(*(undefined8 *)(local_20 + 0x30));
              if (iVar2 != 0) {
                if ((((byte)(*(uint *)(local_38 + 0x58) >> 3) & 1) == 1) &&
                   (*(long *)(local_38 + 0x90) != 0)) {
                  FUN_10091c684(param_1,0x739,0,0,
                                "The element cannot be \'nilled\' because there is a fixed value constraint defined for it"
                                ,0,0);
                }
                else {
                  *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) =
                       *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) | 4;
                }
              }
            }
            else {
              FUN_10091c684(param_1,0x737,0,0,"The element is not \'nillable\'",0,0);
            }
          }
        }
        local_20 = FUN_10093cac5(param_1,1);
        if (local_20 != 0) {
          local_40 = 0;
          local_24 = FUN_100941a5a(param_1,local_20,&local_40,local_38);
          if ((local_24 != 0) && (local_24 == -1)) {
            FUN_10091c652(param_1,"xmlSchemaValidateElemDecl",
                          "calling xmlSchemaProcessXSIType() to process the attribute \'xsi:type\'")
            ;
            return 0xffffffff;
          }
          if (local_40 != 0) {
            *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) =
                 *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) | 8;
            local_30 = local_40;
          }
        }
      }
      if ((*(long *)(local_38 + 0xc0) != 0) &&
         (iVar2 = FUN_10093efeb(param_1,local_38), iVar2 == -1)) {
        return 0xffffffff;
      }
      if (local_30 == 0) {
        FUN_10091c684(param_1,0x753,0,0,"The type definition is absent",0,0);
        local_54 = 0x753;
      }
      else {
        *(long *)(*(long *)(param_1 + 0xb8) + 0x38) = local_30;
        local_54 = 0;
      }
    }
  }
  else {
    FUN_10091c684(param_1,0x736,0,0,"The element declaration is abstract",0,0);
    local_54 = *(undefined4 *)(param_1 + 0x60);
  }
  return local_54;
}

