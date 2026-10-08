
undefined1 FUN_1000588e0(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 *local_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  char local_c9;
  undefined **local_c8 [2];
  undefined **local_b8 [2];
  undefined1 local_a8 [31];
  undefined1 local_89;
  undefined1 local_88 [80];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar4;
  FUN_10005bd60(local_a8);
  FUN_10005ae70(local_b8);
  local_b8[0] = &PTR_FUN_10226c338;
  FUN_10005ae70(local_c8);
  local_c8[0] = &PTR_FUN_10226c378;
  iVar2 = FUN_10005bfb0(local_a8);
  if (iVar2 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      FUN_100df99c0("SGAC","prl_client_app",1,"Failed to read Dock defaults, err %i",iVar2);
    }
    goto LAB_100058b43;
  }
  iVar2 = FUN_10005c0c0(local_a8,local_b8);
  if (iVar2 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      FUN_100df99c0("SGAC","prl_client_app",1,
                    "Failed to get persistent-others section from Dock defaults, err %i",iVar2);
    }
    goto LAB_100058b43;
  }
  QString::toUtf8();
  local_f0 = local_88;
  iVar2 = _FSPathMakeRef(local_d8 + *(long *)(local_d8 + 0x10),local_f0,0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_89 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_100058a67;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_100058a67:
  if ((iVar2 == -0x2b) || (iVar2 == -0x23)) {
    local_f0 = (undefined1 *)0x0;
  }
  else if (iVar2 != 0) {
    if (DAT_10230ffd0 < 1) {
      uVar5 = 0;
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",1,"FSPathMakeRef() err %i, path=\"%s\"",iVar2,
                    local_e0 + *(long *)(local_e0 + 0x10));
      if (*(int *)local_e0 == -1) {
        uVar5 = 0;
      }
      else {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_89 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_89) {
            uVar5 = 0;
            goto LAB_100058b43;
          }
        }
        QArrayData::deallocate(local_e0,1,8);
        uVar5 = 0;
      }
    }
    goto LAB_100058b43;
  }
  uVar3 = FUN_10005bbd0(local_b8);
  lVar4 = 0;
  if (uVar3 != 0) {
    do {
      FUN_10005bbf0(local_b8,lVar4,local_c8);
      cVar1 = FUN_100058d10(local_c8,param_1,local_f0,&local_c9,param_3);
      if (cVar1 == '\0') {
        uVar5 = 0;
        FUN_100df99c0("SGAC","prl_client_app",0,"Failed to check persistent-others item path");
        lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100058b43;
      }
      if (local_c9 != '\0') {
        *param_2 = 1;
        goto LAB_100058b36;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (long)(ulong)uVar3);
  }
  *param_2 = 0;
LAB_100058b36:
  uVar5 = 1;
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100058b43:
  FUN_10005aeb0(local_c8);
  FUN_10005aeb0(local_b8);
  FUN_10005be80(local_a8);
  if (lVar4 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

