
int FUN_100940507(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 param_4,
                 xmlChar *param_5,long param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  undefined4 local_64;
  undefined8 local_40;
  int local_38;
  int local_34;
  int *local_30;
  undefined8 *local_28;
  int *local_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_34 = 0;
  local_40 = 0;
  if (*param_3 == 1) {
    return 0;
  }
  if (*(long *)(param_3 + 0x2c) != 0) {
    if (((uint)param_3[0x16] >> 8 & 1) == 0) {
      if (((uint)param_3[0x16] >> 6 & 1) == 0) goto LAB_10094086a;
    }
    else {
      local_30 = (int *)FUN_100932674(param_3);
      if ((local_30[0x28] == 1) || ((*local_30 == 1 && (local_30[0x28] == 0x2e)))) {
        local_14 = FUN_10093c74a(param_3);
      }
      else {
        local_14 = 3;
      }
      local_64 = param_4;
      if (param_6 != 0) {
        local_64 = _xmlSchemaGetValType(param_6);
      }
      for (local_28 = *(undefined8 **)(param_3 + 0x2c); local_38 = 0, local_28 != (undefined8 *)0x0;
          local_28 = (undefined8 *)*local_28) {
        uVar1 = *(uint *)local_28[1];
        if (uVar1 < 0x3ee) {
LAB_100940667:
          local_38 = _xmlSchemaValidateFacetWhtsp
                               (local_28[1],local_14,local_64,param_5,param_6,local_14);
LAB_100940695:
          if (local_38 < 0) {
            FUN_10091c652(param_1,"xmlSchemaValidateFacets","validating against a atomic type facet"
                         );
            return -1;
          }
          if (0 < local_38) {
            if (param_8 == 0) {
              return local_38;
            }
            FUN_10091d1fe(param_1,local_38,param_2,param_5,local_40,param_3,local_28[1],0,0,0);
            if (local_34 == 0) {
              local_34 = local_38;
            }
          }
        }
        else if (0x3f0 < uVar1) {
          if (0x3f3 < uVar1) goto LAB_100940667;
          local_38 = _xmlSchemaValidateLengthFacetWhtsp
                               (local_28[1],local_64,param_5,param_6,&local_40,local_14);
          goto LAB_100940695;
        }
      }
    }
    if (((uint)param_3[0x16] >> 6 & 1) != 0) {
      for (local_28 = *(undefined8 **)(param_3 + 0x2c); local_38 = 0, local_28 != (undefined8 *)0x0;
          local_28 = (undefined8 *)*local_28) {
        if (*(int *)local_28[1] - 0x3f1U < 3) {
          local_38 = _xmlSchemaValidateListSimpleTypeFacet(local_28[1],param_5,param_7,0);
          if (local_38 < 0) {
            FUN_10091c652(param_1,"xmlSchemaValidateFacets","validating against a list type facet");
            return -1;
          }
          if (0 < local_38) {
            if (param_8 == 0) {
              return local_38;
            }
            FUN_10091d1fe(param_1,local_38,param_2,param_5,param_7,param_3,local_28[1],0,0,0);
            if (local_34 == 0) {
              local_34 = local_38;
            }
          }
        }
      }
    }
  }
LAB_10094086a:
  if (-1 < local_34) {
    local_10 = 0;
    local_38 = 0;
    local_30 = param_3;
    do {
      for (local_20 = *(int **)(local_30 + 0x1e); local_20 != (int *)0x0;
          local_20 = *(int **)(local_20 + 2)) {
        if (*local_20 == 0x3ef) {
          local_10 = 1;
          local_38 = FUN_10093b64b(*(undefined8 *)(local_20 + 0xe),param_6);
          if (local_38 == 1) break;
          if (local_38 < 0) {
            FUN_10091c652(param_1,"xmlSchemaValidateFacets",
                          "validating against an enumeration facet");
            return -1;
          }
        }
      }
    } while (((local_38 == 0) && (local_30 = *(int **)(local_30 + 0x1c), local_30 != (int *)0x0)) &&
            (*local_30 != 1));
    if ((local_10 != 0) && (local_38 == 0)) {
      local_38 = 0x730;
      if (param_8 == 0) {
        return 0x730;
      }
      FUN_10091d1fe(param_1,0x730,param_2,param_5,0,param_3,0,0,0,0);
      if (local_34 == 0) {
        local_34 = local_38;
      }
    }
  }
  if (local_34 < 0) {
    return local_34;
  }
  local_20 = (int *)0x0;
  local_30 = param_3;
  do {
    local_c = 0;
    for (local_28 = *(undefined8 **)(local_30 + 0x2c); local_28 != (undefined8 *)0x0;
        local_28 = (undefined8 *)*local_28) {
      if (*(int *)local_28[1] == 0x3ee) {
        local_c = 1;
        local_38 = _xmlRegexpExec(*(xmlRegexpPtr *)(local_28[1] + 0x40),param_5);
        if (local_38 == 1) break;
        if (local_38 < 0) {
          FUN_10091c652(param_1,"xmlSchemaValidateFacets","validating against a pattern facet");
          return -1;
        }
        local_20 = (int *)local_28[1];
      }
    }
    if ((local_c != 0) && (local_38 != 1)) {
      local_38 = 0x72f;
      if (param_8 == 0) {
        return 0x72f;
      }
      FUN_10091d1fe(param_1,0x72f,param_2,param_5,0,param_3,local_20,0,0,0);
      if (local_34 != 0) {
        return local_34;
      }
      return local_38;
    }
    local_30 = *(int **)(local_30 + 0x1c);
    if (local_30 == (int *)0x0) {
      return local_34;
    }
    if (*local_30 == 1) {
      return local_34;
    }
  } while( true );
}

