
int FUN_100241eab(undefined8 *param_1,xmlDocPtr param_2)

{
  int iVar1;
  int local_bc;
  xmlValidCtxt local_a8;
  int local_34;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  if (((param_1 == (undefined8 *)0x0) || (param_1[5] == 0)) || (param_2 == (xmlDocPtr)0x0)) {
    local_bc = -1;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    local_30 = param_1[5];
    local_28 = *(long *)(local_30 + 8);
    if (local_28 == 0) {
      FUN_100230bfa(param_1,0x22,0,0,0);
      local_bc = -1;
    }
    else {
      local_20 = FUN_10022e535(param_1,0);
      param_1[0xc] = local_20;
      local_34 = FUN_1002418f5(param_1,*(undefined8 *)(local_28 + 0x18));
      if ((param_1[0xc] == 0) || (*(long *)(local_20 + 8) == 0)) {
        if (param_1[0xd] != 0) {
          local_c = -1;
          for (local_10 = 0; local_10 < *(int *)param_1[0xd]; local_10 = local_10 + 1) {
            local_20 = *(long *)(*(long *)(param_1[0xd] + 8) + (long)local_10 * 8);
            local_18 = *(undefined8 *)(local_20 + 8);
            local_18 = FUN_10023cf59(param_1,local_18);
            if (local_18 == 0) {
              local_c = 0;
            }
            FUN_10022eca1(param_1,local_20);
          }
          if ((local_c == -1) && (local_34 != -1)) {
            FUN_100230bfa(param_1,0x23,0,0,0);
            local_34 = -1;
          }
        }
      }
      else {
        local_20 = param_1[0xc];
        local_18 = *(undefined8 *)(local_20 + 8);
        local_18 = FUN_10023cf59(param_1,local_18);
        if ((local_18 != 0) && (local_34 != -1)) {
          FUN_100230bfa(param_1,0x23,0,0,0);
          local_34 = -1;
        }
      }
      if (param_1[0xc] != 0) {
        FUN_10022eca1(param_1,param_1[0xc]);
        param_1[0xc] = 0;
      }
      if (local_34 != 0) {
        FUN_100230a38(param_1);
      }
      if (*(int *)(param_1 + 8) == 1) {
        _memset(&local_a8,0,0x70);
        local_a8.valid = 1;
        local_a8.error = (xmlValidityErrorFunc)param_1[1];
        local_a8.warning = (xmlValidityWarningFunc)param_1[2];
        local_a8.userData = (void *)*param_1;
        iVar1 = _xmlValidateDocumentFinal(&local_a8,param_2);
        if (iVar1 != 1) {
          local_34 = -1;
        }
      }
      if ((local_34 == 0) && (*(int *)((long)param_1 + 0x44) != 0)) {
        local_34 = -1;
      }
      local_bc = local_34;
    }
  }
  return local_bc;
}

