
int FUN_100944152(void *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar3;
  int local_b8;
  xmlChar *local_a8 [11];
  int local_4c;
  int local_48;
  int local_44;
  long local_40;
  int *local_38;
  int local_2c;
  long local_28;
  xmlRegExecCtxtPtr local_20;
  
  uVar3 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 0x20);
  local_2c = 0;
  if (*(int *)((long)param_1 + 0xa4) < 1) {
    FUN_10091c652(param_1,"xmlSchemaValidateChildElem","not intended for the validation root");
    return -1;
  }
  local_40 = *(long *)(*(long *)((long)param_1 + 0xa8) + (long)*(int *)((long)param_1 + 0xa4) * 8 +
                      -8);
  if ((*(uint *)(local_40 + 0x40) >> 5 & 1) != 0) {
    *(uint *)(local_40 + 0x40) = *(uint *)(local_40 + 0x40) ^ 0x20;
  }
  if ((*(uint *)(local_40 + 0x40) >> 2 & 1) != 0) {
    *(undefined8 *)((long)param_1 + 0xb8) =
         *(undefined8 *)
          (*(long *)((long)param_1 + 0xa8) + (long)*(int *)((long)param_1 + 0xa4) * 8 + -8);
    local_2c = 0x738;
    FUN_10091c684(param_1,0x738,0,0,
                  "Neither character nor element content is allowed, because the element was \'nilled\'"
                  ,0,0);
    *(undefined8 *)((long)param_1 + 0xb8) =
         *(undefined8 *)(*(long *)((long)param_1 + 0xa8) + (long)*(int *)((long)param_1 + 0xa4) * 8)
    ;
    goto LAB_1009442b4;
  }
  local_38 = *(int **)(local_40 + 0x38);
  if (local_38[0x28] == 0x2d) {
    lVar1 = *(long *)((long)param_1 + 0xb8);
    uVar2 = FUN_100920924(*(undefined8 *)((long)param_1 + 0x28),
                          *(undefined8 *)(*(long *)((long)param_1 + 0xb8) + 0x18),
                          *(undefined8 *)(*(long *)((long)param_1 + 0xb8) + 0x20));
    *(undefined8 *)(lVar1 + 0x50) = uVar2;
    if (*(long *)(*(long *)((long)param_1 + 0xb8) + 0x50) == 0) {
      local_28 = FUN_10093cac5(param_1,1);
      if (local_28 == 0) {
        lVar1 = *(long *)((long)param_1 + 0xb8);
        uVar2 = _xmlSchemaGetBuiltInType(0x2d);
        *(undefined8 *)(lVar1 + 0x38) = uVar2;
      }
      else {
        local_2c = FUN_100941a5a(param_1,local_28,*(long *)((long)param_1 + 0xb8) + 0x38,0);
        if (local_2c != 0) {
          if (local_2c != -1) {
            return local_2c;
          }
          FUN_10091c652(param_1,"xmlSchemaValidateChildElem",
                        "calling xmlSchemaProcessXSIType() to process the attribute \'xsi:nil\'");
          return -1;
        }
      }
    }
    return 0;
  }
  switch(local_38[0x17]) {
  case 1:
    *(undefined8 *)((long)param_1 + 0xb8) =
         *(undefined8 *)
          (*(long *)((long)param_1 + 0xa8) + (long)*(int *)((long)param_1 + 0xa4) * 8 + -8);
    local_2c = 0x731;
    FUN_10091c684(param_1,0x731,0,0,
                  "Element content is not allowed, because the content type is empty",0,0);
    *(undefined8 *)((long)param_1 + 0xb8) =
         *(undefined8 *)(*(long *)((long)param_1 + 0xa8) + (long)*(int *)((long)param_1 + 0xa4) * 8)
    ;
    goto LAB_1009442b4;
  case 2:
  case 3:
    local_48 = 10;
    if (*(long *)(local_38 + 0x32) == 0) {
      FUN_10091c652(param_1,"xmlSchemaValidateChildElem",
                    "type has elem content but no content model");
      return -1;
    }
    if ((*(uint *)(local_40 + 0x40) >> 8 & 1) != 0) {
      FUN_10091c652(param_1,"xmlSchemaValidateChildElem",
                    "validating elem, but elem content is already invalid");
      return -1;
    }
    local_20 = *(xmlRegExecCtxtPtr *)(local_40 + 0x70);
    if (local_20 == (xmlRegExecCtxtPtr)0x0) {
      local_20 = _xmlRegNewExecCtxt(*(xmlRegexpPtr *)(local_38 + 0x32),FUN_10094366a,param_1);
      if (local_20 == (xmlRegExecCtxtPtr)0x0) {
        FUN_10091c652(param_1,"xmlSchemaValidateChildElem","failed to create a regex context");
        return -1;
      }
      *(xmlRegExecCtxtPtr *)(local_40 + 0x70) = local_20;
    }
    local_2c = _xmlRegExecPushString2
                         (local_20,*(xmlChar **)(*(long *)((long)param_1 + 0xb8) + 0x18),
                          *(xmlChar **)(*(long *)((long)param_1 + 0xb8) + 0x20),
                          *(void **)((long)param_1 + 0xb8));
    if (*(int *)((long)param_1 + 0x60) == 0x71a) {
      FUN_10091c652(param_1,"xmlSchemaValidateChildElem","calling xmlRegExecPushString2()");
      return -1;
    }
    if (local_2c < 0) {
      _xmlRegExecErrInfo(local_20,(xmlChar **)0x0,&local_48,&local_4c,local_a8,&local_44);
      FUN_10091ce4a(param_1,0x74f,0,0,"This element is not expected",local_48,
                    CONCAT44(uVar3,local_4c),local_a8);
      local_2c = *(int *)((long)param_1 + 0x60);
      goto LAB_1009442b4;
    }
  default:
    local_b8 = 0;
    break;
  case 4:
  case 6:
    *(undefined8 *)((long)param_1 + 0xb8) =
         *(undefined8 *)
          (*(long *)((long)param_1 + 0xa8) + (long)*(int *)((long)param_1 + 0xa4) * 8 + -8);
    if ((*local_38 == 5) || (local_38[0x28] == 0x2d)) {
      local_2c = 0x732;
      FUN_10091c684(param_1,0x732,0,0,
                    "Element content is not allowed, because the content type is a simple type definition"
                    ,0,0);
    }
    else {
      local_2c = 0x724;
      FUN_10091c684(param_1,0x724,0,0,
                    "Element content is not allowed, because the type definition is simple",0,0);
    }
    *(undefined8 *)((long)param_1 + 0xb8) =
         *(undefined8 *)(*(long *)((long)param_1 + 0xa8) + (long)*(int *)((long)param_1 + 0xa4) * 8)
    ;
    local_2c = *(int *)((long)param_1 + 0x60);
LAB_1009442b4:
    *(undefined4 *)((long)param_1 + 0x120) = *(undefined4 *)((long)param_1 + 0xa4);
    *(uint *)(*(long *)((long)param_1 + 0xb8) + 0x40) =
         *(uint *)(*(long *)((long)param_1 + 0xb8) + 0x40) | 0x200;
    *(uint *)(local_40 + 0x40) = *(uint *)(local_40 + 0x40) | 0x100;
    local_b8 = local_2c;
  }
  return local_b8;
}

