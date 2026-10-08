
long FUN_1003e3f10(long param_1,int param_2,int param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long unaff_R15;
  bool bVar7;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_1003e71c0(&local_58,param_1 + 0x28);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (local_58[2] != local_58[3]) {
    do {
      piVar1 = (int *)**(undefined8 **)local_50;
      lVar2 = (*(undefined8 **)local_50)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_31 = *piVar1 != 0;
        UNLOCK();
      }
      iVar6 = 5;
      if (local_40 != 0) {
        if ((((piVar1 != (int *)0x0) && (lVar2 != 0)) && (piVar1[1] != 0)) &&
           (iVar3 = FUN_1003a4d50(lVar2), iVar3 == param_2)) {
          lVar5 = 0;
          if (piVar1[1] != 0) {
            lVar5 = lVar2;
          }
          iVar3 = FUN_1003a4db0(lVar5);
          if (iVar3 == param_3) {
            unaff_R15 = 0;
            if (piVar1[1] != 0) {
              unaff_R15 = lVar2;
            }
            iVar6 = 1;
            goto LAB_1003e4007;
          }
        }
        local_40 = 0;
      }
LAB_1003e4007:
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar1);
        }
      }
      if (iVar6 != 5) goto LAB_1003e4054;
      local_50 = local_50 + 2;
      uVar4 = local_40 ^ 1;
      bVar7 = local_40 != 1;
      local_40 = uVar4;
    } while ((bVar7) && (local_50 != local_48));
  }
  iVar6 = 2;
LAB_1003e4054:
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) goto LAB_1003e407e;
      local_31 = 0;
    }
    FUN_1003e63d0(&local_58,local_58);
  }
LAB_1003e407e:
  if (iVar6 == 2) {
    unaff_R15 = 0;
  }
  return unaff_R15;
}

