
int FUN_10023f20b(long param_1,long param_2,long param_3)

{
  int *piVar1;
  xmlGenericErrorFunc pxVar2;
  int iVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  int local_54;
  int local_30;
  undefined4 local_2c;
  long local_28;
  long local_20;
  
  local_30 = 0;
  local_2c = 0;
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (iVar3 = _xmlStrEqual(*(xmlChar **)(param_3 + 0x10),*(xmlChar **)(param_2 + 0x10)), iVar3 == 0)
     ) {
    FUN_100230bfa(param_1,0xd,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10),0);
    return 0;
  }
  if ((*(long *)(param_2 + 0x18) == 0) || (**(char **)(param_2 + 0x18) == '\0')) {
    if ((*(long *)(param_3 + 0x48) != 0) &&
       ((*(long *)(param_2 + 0x18) != 0 && (*(long *)(param_2 + 0x10) == 0)))) {
      FUN_100230bfa(param_1,0x13,*(undefined8 *)(param_3 + 0x10),0,0);
      return 0;
    }
    if ((*(long *)(param_3 + 0x48) != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      FUN_100230bfa(param_1,0x13,*(undefined8 *)(param_2 + 0x10),0,0);
      return 0;
    }
  }
  else {
    if (*(long *)(param_3 + 0x48) == 0) {
      FUN_100230bfa(param_1,0xf,*(undefined8 *)(param_3 + 0x10),0,0);
      return 0;
    }
    iVar3 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_3 + 0x48) + 0x10),
                         *(xmlChar **)(param_2 + 0x18));
    if (iVar3 == 0) {
      FUN_100230bfa(param_1,0x11,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_2 + 0x18),0);
      return 0;
    }
  }
  if (*(long *)(param_2 + 0x50) == 0) {
    local_54 = 1;
  }
  else {
    piVar1 = *(int **)(param_2 + 0x50);
    if (*piVar1 == 2) {
      if (param_1 != 0) {
        local_2c = *(undefined4 *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
      }
      for (local_28 = *(long *)(piVar1 + 0xc); local_28 != 0; local_28 = *(long *)(local_28 + 0x40))
      {
        iVar3 = FUN_10023f20b(param_1,local_28,param_3);
        if (iVar3 == 1) {
          if (param_1 != 0) {
            *(undefined4 *)(param_1 + 0x38) = local_2c;
          }
          return 0;
        }
        if (iVar3 < 0) {
          if (param_1 == 0) {
            return iVar3;
          }
          *(undefined4 *)(param_1 + 0x38) = local_2c;
          return iVar3;
        }
      }
      local_30 = 1;
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0x38) = local_2c;
      }
    }
    else if (*piVar1 == 0x11) {
      if (param_1 != 0) {
        local_2c = *(undefined4 *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
      }
      for (local_20 = *(long *)(piVar1 + 0x14); local_20 != 0; local_20 = *(long *)(local_20 + 0x40)
          ) {
        local_30 = FUN_10023f20b(param_1,local_20,param_3);
        if (local_30 == 1) {
          if (param_1 != 0) {
            *(undefined4 *)(param_1 + 0x38) = local_2c;
          }
          return 1;
        }
        if (local_30 < 0) {
          if (param_1 == 0) {
            return local_30;
          }
          *(undefined4 *)(param_1 + 0x38) = local_2c;
          return local_30;
        }
      }
      if (param_1 != 0) {
        if (local_30 == 0) {
          if (0 < *(int *)(param_1 + 0x50)) {
            FUN_10023094e(param_1,0);
          }
        }
        else if (((*(uint *)(param_1 + 0x38) ^ 1) & 1) != 0) {
          FUN_100230a38(param_1);
        }
      }
      local_30 = 0;
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0x38) = local_2c;
      }
    }
    else {
      ppxVar4 = ___xmlGenericError();
      pxVar2 = *ppxVar4;
      ppvVar5 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar5,"Unimplemented block at %s:%d\n","relaxng.c",0x24fc);
      local_30 = -1;
    }
    local_54 = local_30;
  }
  return local_54;
}

