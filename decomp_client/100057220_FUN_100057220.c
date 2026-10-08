
undefined1 FUN_100057220(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  long lVar9;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  char local_c9;
  undefined **local_c8 [2];
  undefined **local_b8 [2];
  undefined1 local_a8 [31];
  undefined1 local_89;
  undefined1 local_88 [80];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar9;
  FUN_10005bd60(local_a8);
  FUN_10005ae70(local_b8);
  local_b8[0] = &PTR_FUN_10226c338;
  FUN_10005ae70(local_c8);
  local_c8[0] = &PTR_FUN_10226c378;
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    lVar1 = *(long *)(local_d8 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",3,"Updating Dock tile with name=\'%s\' and path=\'%s\'",
                  local_d8 + lVar1,local_e0 + *(long *)(local_e0 + 0x10));
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_89 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_100057343;
      }
      QArrayData::deallocate(local_e0,1,8);
    }
LAB_100057343:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_89 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_89) goto LAB_100057382;
      }
      QArrayData::deallocate(local_d8,1,8);
    }
  }
LAB_100057382:
  iVar4 = FUN_10005bfb0(local_a8);
  if (iVar4 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      FUN_100df99c0("SGAC","prl_client_app",1,"Failed to read Dock defaults, err %i",iVar4);
    }
    goto LAB_100057660;
  }
  iVar4 = FUN_10005c0c0(local_a8,local_b8);
  if (iVar4 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      FUN_100df99c0("SGAC","prl_client_app",1,
                    "Failed to get persistent-others section from Dock defaults, err %i",iVar4);
    }
    goto LAB_100057660;
  }
  QString::toUtf8();
  puVar7 = local_88;
  iVar4 = _FSPathMakeRef(local_e8 + *(long *)(local_e8 + 0x10),puVar7,0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_89 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100057488;
    }
    QArrayData::deallocate(local_e8,1,8);
  }
LAB_100057488:
  if ((iVar4 == -0x2b) || (iVar4 == -0x23)) {
    puVar7 = (undefined1 *)0x0;
  }
  else if (iVar4 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar8 = 0;
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",1,"FSPathMakeRef() err %i, path=\"%s\"",iVar4,
                    local_f0 + *(long *)(local_f0 + 0x10));
      if (*(int *)local_f0 == -1) {
        uVar8 = 0;
      }
      else {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_89 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_89) {
            uVar8 = 0;
            goto LAB_100057660;
          }
        }
        QArrayData::deallocate(local_f0,1,8);
        uVar8 = 0;
      }
    }
    goto LAB_100057660;
  }
  uVar5 = FUN_10005bbd0(local_b8);
  uVar6 = (ulong)uVar5;
  bVar2 = false;
  while (0 < (long)uVar6) {
    uVar6 = uVar6 - 1;
    FUN_10005bbf0(local_b8,uVar6,local_c8);
    cVar3 = FUN_100058d10(local_c8,param_1,puVar7,&local_c9,0);
    if (cVar3 == '\0') {
      uVar8 = 0;
      FUN_100df99c0("SGAC","prl_client_app",0,"Failed to check persistent-others item path");
      lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_100057660;
    }
    if (local_c9 != '\0') {
      FUN_100059290(local_c8,param_2);
      bVar2 = true;
      FUN_10005bcb0(local_b8,uVar6,local_c8);
    }
  }
  if (bVar2) {
    FUN_10005c150(local_a8,local_b8);
    lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
    uVar8 = 1;
    FUN_10005c060(local_a8);
  }
  else {
    uVar8 = 0;
    lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
LAB_100057660:
  FUN_10005aeb0(local_c8);
  FUN_10005aeb0(local_b8);
  FUN_10005be80(local_a8);
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

