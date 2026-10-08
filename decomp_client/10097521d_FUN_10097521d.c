
undefined4 FUN_10097521d(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  xmlGenericErrorFunc pxVar2;
  int *piVar3;
  int iVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  undefined4 local_5c;
  long local_38;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    ppxVar5 = ___xmlGenericError();
    pxVar2 = *ppxVar5;
    ppvVar6 = ___xmlGenericErrorContext();
    (*pxVar2)(*ppvVar6,"Unimplemented block at %s:%d\n","relaxng.c",0x2881);
    FUN_1009625c9(param_1,*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if ((*(long *)(param_1 + 0x68) == 0) || (**(int **)(param_1 + 0x68) == 1)) {
    if (*(long *)(param_1 + 0x68) != 0) {
      *(undefined8 *)(param_1 + 0x60) = **(undefined8 **)(*(long *)(param_1 + 0x68) + 8);
      FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    local_5c = FUN_1009731bf(param_1,param_2);
    if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x68) != 0)) {
      ppxVar5 = ___xmlGenericError();
      pxVar2 = *ppxVar5;
      ppvVar6 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar6,"Unimplemented block at %s:%d\n","relaxng.c",0x288d);
      FUN_1009625c9(param_1,*(undefined8 *)(param_1 + 0x60));
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if ((*(long *)(param_1 + 0x68) != 0) && (**(int **)(param_1 + 0x68) == 1)) {
      *(undefined8 *)(param_1 + 0x60) = **(undefined8 **)(*(long *)(param_1 + 0x68) + 8);
      FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
  }
  else {
    piVar3 = *(int **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    local_38 = 0;
    local_28 = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
    for (local_2c = 0; local_2c < *piVar3; local_2c = local_2c + 1) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)(piVar3 + 2) + (long)local_2c * 8);
      *(undefined8 *)(param_1 + 0x68) = 0;
      iVar4 = FUN_1009731bf(param_1,param_2);
      if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x68) != 0)) {
        ppxVar5 = ___xmlGenericError();
        pxVar2 = *ppxVar5;
        ppvVar6 = ___xmlGenericErrorContext();
        (*pxVar2)(*ppvVar6,"Unimplemented block at %s:%d\n","relaxng.c",0x28a6);
        FUN_1009625c9(param_1,*(undefined8 *)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      if (iVar4 == 0) {
        if (*(long *)(param_1 + 0x68) == 0) {
          if (local_38 == 0) {
            *(undefined8 *)(*(long *)(piVar3 + 2) + (long)local_28 * 8) =
                 *(undefined8 *)(param_1 + 0x60);
            local_28 = local_28 + 1;
            *(undefined8 *)(param_1 + 0x60) = 0;
          }
          else {
            FUN_100961b7d(param_1,local_38,*(undefined8 *)(param_1 + 0x60));
            *(undefined8 *)(param_1 + 0x60) = 0;
          }
        }
        else if (local_38 == 0) {
          local_38 = *(long *)(param_1 + 0x68);
          *(undefined8 *)(param_1 + 0x68) = 0;
          for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
            FUN_100961b7d(param_1,local_38,
                          *(undefined8 *)(*(long *)(piVar3 + 2) + (long)local_24 * 8));
          }
        }
        else {
          for (local_24 = 0; local_24 < **(int **)(param_1 + 0x68); local_24 = local_24 + 1) {
            FUN_100961b7d(param_1,local_38,
                          *(undefined8 *)
                           (*(long *)(*(long *)(param_1 + 0x68) + 8) + (long)local_24 * 8));
          }
          FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
          *(undefined8 *)(param_1 + 0x68) = 0;
        }
      }
      else if (*(long *)(param_1 + 0x60) == 0) {
        if (*(long *)(param_1 + 0x68) != 0) {
          for (local_24 = 0; local_24 < **(int **)(param_1 + 0x68); local_24 = local_24 + 1) {
            FUN_1009625c9(param_1,*(undefined8 *)
                                   (*(long *)(*(long *)(param_1 + 0x68) + 8) + (long)local_24 * 8));
          }
          FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
          *(undefined8 *)(param_1 + 0x68) = 0;
        }
      }
      else {
        FUN_1009625c9(param_1,*(undefined8 *)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    if (local_38 == 0) {
      if (local_28 < 2) {
        if (local_28 == 1) {
          *(undefined8 *)(param_1 + 0x60) = **(undefined8 **)(piVar3 + 2);
          FUN_100961cac(param_1,piVar3);
          local_20 = 0;
        }
        else {
          local_20 = 0xffffffff;
          FUN_100961cac(param_1,piVar3);
          if (*(long *)(param_1 + 0x68) != 0) {
            FUN_100961cac(param_1,*(undefined8 *)(param_1 + 0x68));
            *(undefined8 *)(param_1 + 0x68) = 0;
          }
        }
      }
      else {
        *piVar3 = local_28;
        *(int **)(param_1 + 0x68) = piVar3;
        local_20 = 0;
      }
    }
    else {
      FUN_100961cac(param_1,piVar3);
      *(long *)(param_1 + 0x68) = local_38;
      local_20 = 0;
    }
    if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x68) != 0)) {
      ppxVar5 = ___xmlGenericError();
      pxVar2 = *ppxVar5;
      ppvVar6 = ___xmlGenericErrorContext();
      (*pxVar2)(*ppvVar6,"Unimplemented block at %s:%d\n","relaxng.c",0x28e8);
      FUN_1009625c9(param_1,*(undefined8 *)(param_1 + 0x60));
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    local_5c = local_20;
  }
  return local_5c;
}

