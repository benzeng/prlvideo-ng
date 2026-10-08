
long FUN_100356ef0(bool param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long unaff_R12;
  int iVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 local_70 [16];
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  uVar5 = FUN_100319950(param_2);
  FUN_1003591b0(&local_60,uVar5);
  FUN_100359780(&local_58,&local_60);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (*local_60 == -1) {
LAB_100356f87:
    do {
      iVar6 = 2;
      if (local_50 == local_48) break;
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
        if (((piVar1 != (int *)0x0) && (lVar2 != 0)) && (piVar1[1] != 0)) {
          auVar8 = FUN_100325fd0(lVar2);
          local_70 = auVar8;
          cVar3 = QRect::contains((QPoint *)local_70,param_1);
          if (cVar3 != '\0') {
            unaff_R12 = 0;
            if (piVar1[1] != 0) {
              unaff_R12 = lVar2;
            }
            iVar6 = 1;
            goto LAB_100357027;
          }
        }
        local_40 = 0;
      }
LAB_100357027:
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar1);
        }
      }
      if (iVar6 != 5) break;
      local_50 = local_50 + 2;
      uVar4 = local_40 ^ 1;
      bVar7 = local_40 != 1;
      iVar6 = 2;
      local_40 = uVar4;
    } while (bVar7);
  }
  else {
    if (*local_60 == 0) {
LAB_100356f73:
      FUN_100359550(&local_60,local_60);
    }
    else {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100356f73;
    }
    if (local_40 != 0) goto LAB_100356f87;
    iVar6 = 2;
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) goto LAB_10035709f;
      local_31 = 0;
    }
    FUN_100359550(&local_58,local_58);
  }
LAB_10035709f:
  if (iVar6 == 2) {
    unaff_R12 = 0;
  }
  return unaff_R12;
}

