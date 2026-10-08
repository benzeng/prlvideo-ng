
undefined1 FUN_100056d00(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 uVar8;
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
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar7;
  FUN_10005bd60(local_a8);
  FUN_10005ae70(local_b8);
  local_b8[0] = &PTR_FUN_10226c338;
  FUN_10005ae70(local_c8);
  local_c8[0] = &PTR_FUN_10226c378;
  QString::toUtf8();
  FUN_100df99c0("SGAC","prl_client_app",0,"Removing item from Dock by path=\'%s\'",
                local_d8 + *(long *)(local_d8 + 0x10));
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_89 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100056dda;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_100056dda:
  iVar3 = FUN_10005bfb0(local_a8);
  if (iVar3 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      FUN_100df99c0("SGAC","prl_client_app",1,"Failed to read Dock defaults, err %i",iVar3);
    }
    goto LAB_1000570b3;
  }
  iVar3 = FUN_10005c0c0(local_a8,local_b8);
  if (iVar3 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      FUN_100df99c0("SGAC","prl_client_app",1,
                    "Failed to get persistent-others section from Dock defaults, err %i",iVar3);
    }
    goto LAB_1000570b3;
  }
  QString::toUtf8();
  puVar6 = local_88;
  iVar3 = _FSPathMakeRef(local_e0 + *(long *)(local_e0 + 0x10),puVar6,0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_89 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100056eec;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_100056eec:
  if ((iVar3 == -0x2b) || (iVar3 == -0x23)) {
    puVar6 = (undefined1 *)0x0;
  }
  else if (iVar3 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar8 = 0;
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",1,"FSPathMakeRef() err %i, path=\"%s\"",iVar3,
                    local_e8 + *(long *)(local_e8 + 0x10));
      if (*(int *)local_e8 == -1) {
        uVar8 = 0;
      }
      else {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_89 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_89) {
            uVar8 = 0;
            goto LAB_1000570b3;
          }
        }
        QArrayData::deallocate(local_e8,1,8);
        uVar8 = 0;
      }
    }
    goto LAB_1000570b3;
  }
  uVar4 = FUN_10005bbd0(local_b8);
  uVar5 = (ulong)uVar4;
  bVar1 = false;
  while (0 < (long)uVar5) {
    uVar5 = uVar5 - 1;
    FUN_10005bbf0(local_b8,uVar5,local_c8);
    cVar2 = FUN_100058d10(local_c8,param_1,puVar6,&local_c9,0);
    if (cVar2 == '\0') {
      uVar8 = 0;
      FUN_100df99c0("SGAC","prl_client_app",0,"Failed to check persistent-others item path");
      lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_1000570b3;
    }
    if (local_c9 != '\0') {
      bVar1 = true;
      FUN_10005bc70(local_b8,uVar5);
    }
  }
  if (bVar1) {
    FUN_10005c150(local_a8,local_b8);
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
    uVar8 = 1;
    FUN_10005c060(local_a8);
  }
  else {
    uVar8 = 0;
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
LAB_1000570b3:
  FUN_10005aeb0(local_c8);
  FUN_10005aeb0(local_b8);
  FUN_10005be80(local_a8);
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

