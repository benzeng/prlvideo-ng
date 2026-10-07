
int FUN_10020e132(long param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_6c;
  long local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  local_20 = 0;
  if (param_3 == (long *)0x0) {
    local_6c = -1;
  }
  else {
    *param_3 = 0;
    if (param_2 == 0) {
      local_6c = 0;
    }
    else {
      local_28 = 0;
      local_30 = 0;
      *(long *)(param_1 + 0xb8) = param_2;
      local_20 = FUN_10020df85(param_1,*(undefined8 *)(param_2 + 0x28),&local_28,&local_30);
      if (local_20 == 0) {
        lVar2 = FUN_1001ed0e5(*(undefined8 *)(param_1 + 0x28),local_30,local_28);
        *param_3 = lVar2;
        if (*param_3 == 0) {
          local_38 = 0;
          uVar3 = FUN_1001e6d76(&local_38,local_28,local_30);
          uVar4 = _xmlSchemaGetBuiltInType(0x15);
          FUN_1001e8d5c(param_1,0x73b,0,uVar4,
                        "The QName value \'%s\' of the xsi:type attribute does not resolve to a type definition"
                        ,uVar3,0);
          if (local_38 != 0) {
            (*(code *)_xmlFree)(local_38);
          }
          local_20 = *(int *)(param_1 + 0x60);
        }
        else if (param_4 != 0) {
          local_1c = 0;
          if (((*(uint *)(param_4 + 0x58) >> 0xb & 1) != 0) ||
             ((*(uint *)(*(long *)(param_4 + 0x38) + 0x58) >> 0x12 & 1) != 0)) {
            local_1c = 2;
          }
          if (((*(uint *)(param_4 + 0x58) >> 0xc & 1) != 0) ||
             ((*(uint *)(*(long *)(param_4 + 0x38) + 0x58) >> 0x13 & 1) != 0)) {
            local_1c = local_1c | 1;
          }
          iVar1 = FUN_1002035dd(*param_3,*(undefined8 *)(param_4 + 0x38),local_1c);
          if (iVar1 != 0) {
            local_40 = 0;
            uVar3 = FUN_1001e6d76(&local_40,*(undefined8 *)(*param_3 + 0xd0),
                                  *(undefined8 *)(*param_3 + 0x10));
            FUN_1001e8d5c(param_1,0x73c,0,0,
                          "The type definition \'%s\', specified by xsi:type, is blocked or not validly derived from the type definition of the element declaration"
                          ,uVar3,0);
            if (local_40 != 0) {
              (*(code *)_xmlFree)(local_40);
            }
            local_20 = *(int *)(param_1 + 0x60);
            *param_3 = 0;
          }
        }
      }
      else if (local_20 < 0) {
        FUN_1001e8d2a(param_1,"xmlSchemaValidateElementByDeclaration",
                      "calling xmlSchemaQNameExpand() to validate the attribute \'xsi:type\'");
        *(undefined8 *)(param_1 + 0xb8) =
             *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa4) * 8);
        return -1;
      }
      *(undefined8 *)(param_1 + 0xb8) =
           *(undefined8 *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa4) * 8);
      local_6c = local_20;
    }
  }
  return local_6c;
}

