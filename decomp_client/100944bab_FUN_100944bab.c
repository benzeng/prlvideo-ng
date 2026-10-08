
int FUN_100944bab(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int local_34;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  if ((*(int *)(param_1 + 0x120) != -1) && (*(int *)(param_1 + 0x120) <= *(int *)(param_1 + 0xa4)))
  {
    FUN_10091c652(param_1,"xmlSchemaValidateElem","in skip-state");
    goto LAB_100944bfd;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar2 = FUN_10093cb49(param_1);
    if (iVar2 == -1) goto LAB_100944bfd;
  }
  if (*(int *)(param_1 + 0xa4) < 1) {
    lVar1 = *(long *)(param_1 + 0xb8);
    uVar3 = FUN_100920924(*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18),
                          *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20));
    *(undefined8 *)(lVar1 + 0x50) = uVar3;
    iVar2 = local_1c;
    if (*(long *)(*(long *)(param_1 + 0xb8) + 0x50) == 0) {
      local_1c = 0x735;
      FUN_10091c684(param_1,0x735,0,0,
                    "No matching global declaration available for the validation root",0,0);
      goto LAB_10094502e;
    }
LAB_100944d59:
    local_1c = iVar2;
    if (*(long *)(*(long *)(param_1 + 0xb8) + 0x50) == 0) {
LAB_100944e10:
      if (*(long *)(*(long *)(param_1 + 0xb8) + 0x38) == 0) {
        *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) =
             *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) | 0x400;
        local_1c = 0x753;
        FUN_10091c684(param_1,0x753,0,0,"The type definition is absent",0,0);
      }
      else if ((*(uint *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x38) + 0x58) >> 0x14 & 1) == 0) {
        if (*(long *)(param_1 + 200) != 0) {
          local_1c = FUN_10093dd2c(param_1,1);
          if (local_1c == -1) {
            FUN_10091c652(param_1,"xmlSchemaValidateElem","calling xmlSchemaXPathEvaluate()");
            goto LAB_100944bfd;
          }
        }
        if ((**(int **)(*(long *)(param_1 + 0xb8) + 0x38) == 5) ||
           (*(int *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x38) + 0xa0) == 0x2d)) {
          if ((*(int *)(param_1 + 0x118) != 0) ||
             (*(long *)(*(long *)(*(long *)(param_1 + 0xb8) + 0x38) + 0x90) != 0)) {
            local_1c = FUN_10094231d(param_1);
          }
        }
        else if (*(int *)(param_1 + 0x118) != 0) {
          local_1c = FUN_100942114(param_1);
        }
        if (*(int *)(param_1 + 0x118) != 0) {
          FUN_1009421ee(param_1);
        }
        if (local_1c == -1) {
          FUN_10091c652(param_1,"xmlSchemaValidateElem","calling attributes validation");
          goto LAB_100944bfd;
        }
        local_1c = 0;
      }
      else {
        *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) =
             *(uint *)(*(long *)(param_1 + 0xb8) + 0x40) | 0x400;
        local_1c = 0x754;
        FUN_10091c684(param_1,0x754,0,0,"The type definition is abstract",0,0);
      }
    }
    else if (**(int **)(*(long *)(param_1 + 0xb8) + 0x50) == 2) {
      local_1c = FUN_1009432d1(param_1,&local_20);
      if (local_1c == 0) {
        if (local_20 == 0) {
          local_1c = 0;
          if (**(int **)(*(long *)(param_1 + 0xb8) + 0x50) != 0xe) {
            *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x50) = 0;
            local_1c = 0;
            goto LAB_100944e10;
          }
          goto LAB_100944e2a;
        }
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xa4);
      }
      else if (local_1c < 0) {
        FUN_10091c652(param_1,"xmlSchemaValidateElem","calling xmlSchemaValidateElemWildcard()");
        goto LAB_100944bfd;
      }
    }
    else {
LAB_100944e2a:
      local_1c = FUN_100941d43(param_1);
      if (local_1c == 0) goto LAB_100944e10;
      if (local_1c < 0) {
        FUN_10091c652(param_1,"xmlSchemaValidateElem","calling xmlSchemaValidateElemDecl()");
        goto LAB_100944bfd;
      }
    }
LAB_10094502e:
    if (local_1c != 0) {
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xa4);
    }
    local_34 = local_1c;
  }
  else {
    local_1c = FUN_100944152(param_1);
    if (local_1c == 0) {
      if (*(int *)(param_1 + 0xa4) == *(int *)(param_1 + 0x120)) goto LAB_10094502e;
      iVar2 = 0;
      if ((*(long *)(*(long *)(param_1 + 0xb8) + 0x50) != 0) ||
         (*(long *)(*(long *)(param_1 + 0xb8) + 0x38) != 0)) goto LAB_100944d59;
      FUN_10091c652(param_1,"xmlSchemaValidateElem",
                    "the child element was valid but neither the declaration nor the type was set");
    }
    else {
      if (-1 < local_1c) goto LAB_10094502e;
      FUN_10091c652(param_1,"xmlSchemaValidateElem","calling xmlSchemaStreamValidateChildElement()")
      ;
    }
LAB_100944bfd:
    local_34 = -1;
  }
  return local_34;
}

