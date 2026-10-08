
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1006ae060(long param_1)

{
  bool bVar1;
  char cVar2;
  char extraout_AL;
  char extraout_AL_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  undefined7 uVar7;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  char local_49;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if ((DAT_102312350 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102312350), iVar3 != 0)) {
    DAT_102312348 = PTR_shared_null_1021e15e8;
    ___cxa_atexit(FUN_100567a10,&DAT_102312348,0x100000000);
    ___cxa_guard_release(&DAT_102312350);
  }
  if ((DAT_102312360 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102312360), iVar3 != 0)) {
    _DAT_102312358 = PTR_shared_null_1021e1288;
    ___cxa_atexit(FUN_100054e40,&DAT_102312358,0x100000000);
    ___cxa_guard_release(&DAT_102312360);
  }
  if (DAT_102312340 == '\0') {
    local_30 = (QArrayData *)QString::fromAscii_helper("LogActionVisibility",0x13);
    FUN_1006ad2d0(&local_30,&DAT_102312358,&DAT_102312348);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006ae172;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_1006ae172:
    DAT_102312340 = '\x01';
  }
  uVar6 = FUN_10069dca0(param_1);
  iVar4 = FUN_1006947d0(uVar6);
  iVar3 = *(int *)(DAT_102312348 + 8);
  if (iVar3 == *(int *)(DAT_102312348 + 0xc)) {
    bVar1 = false;
  }
  else {
    puVar10 = (undefined8 *)(DAT_102312348 + (long)iVar3 * 8 + 0x10);
    lVar8 = (long)*(int *)(DAT_102312348 + 0xc) * 8 + (long)iVar3 * -8;
    do {
      if (*(int *)*puVar10 == iVar4) {
        FUN_10018d830(&local_38,*(undefined8 *)(param_1 + 0x20));
        cVar2 = operator==(&local_38,(QString *)&DAT_102312358);
        if (*(int *)local_38.field0_0x0 == -1) {
LAB_1006ae218:
          if (cVar2 == '\0') {
            bVar1 = false;
            goto LAB_1006ae2f9;
          }
        }
        else {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            local_21 = *(int *)local_38.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1006ae218;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
          if (cVar2 == '\0') {
            bVar1 = false;
            goto LAB_1006ae2f9;
          }
        }
        uVar6 = FUN_10069dca0(param_1);
        uVar5 = FUN_1006947d0(uVar6);
        FUN_1006946e0(&local_48,uVar5);
        QString::toLocal8Bit();
        FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"Test %s action visibility...",
                      local_40 + *(long *)(local_40 + 0x10));
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_21 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1006ae2c1;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_1006ae2c1:
        bVar1 = true;
        if (*(int *)local_48 == -1) goto LAB_1006ae2f9;
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_21 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006ae2f9;
        }
        QArrayData::deallocate(local_48,2,8);
        goto LAB_1006ae2f9;
      }
      puVar10 = puVar10 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
    bVar1 = false;
  }
LAB_1006ae2f9:
  FUN_10069e1e0(param_1);
  if (extraout_AL == '\0') {
    if (!bVar1) {
      uVar11 = 0;
      uVar7 = extraout_var;
      goto LAB_1006ae443;
    }
    pcVar9 = "Hidden by specific action case";
    uVar11 = 0;
  }
  else {
    local_49 = '\0';
    uVar6 = FUN_10069dca0(param_1);
    uVar6 = FUN_1006adb20(uVar6,*(undefined8 *)(param_1 + 0x20),PTR_s_visibleForStates_1021f5550,
                          &local_49);
    if (((char)uVar6 == '\0') && (uVar7 = (undefined7)((ulong)uVar6 >> 8), local_49 != '\0')) {
      if (!bVar1) {
        uVar11 = 0;
        goto LAB_1006ae443;
      }
      pcVar9 = "Hidden: VM state is incompatible";
      uVar11 = 0;
    }
    else {
      uVar6 = FUN_10069dca0(param_1);
      uVar6 = FUN_1006addc0(uVar6,*(undefined8 *)(param_1 + 0x20),PTR_s_visibleForView_1021f5570,
                            &local_49);
      if (((char)uVar6 == '\0') && (uVar7 = (undefined7)((ulong)uVar6 >> 8), local_49 != '\0')) {
        if (!bVar1) {
          uVar11 = 0;
          goto LAB_1006ae443;
        }
        pcVar9 = "Hidden: VM view is incompatible";
        uVar11 = 0;
      }
      else {
        uVar6 = FUN_10069dca0(param_1);
        FUN_1006adf10(uVar6,*(undefined8 *)(param_1 + 0x20),PTR_s_visibleWithAttributes_1021f5580,
                      &local_49);
        uVar7 = extraout_var_00;
        if ((extraout_AL_00 == '\0') && (local_49 != '\0')) {
          if (!bVar1) {
            uVar11 = 0;
            goto LAB_1006ae443;
          }
          pcVar9 = "Hidden: VM attributes are incompatible";
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
          if (!bVar1) goto LAB_1006ae443;
          pcVar9 = "Visible";
          uVar11 = 1;
        }
      }
    }
  }
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,pcVar9);
  uVar7 = extraout_var_01;
LAB_1006ae443:
  return CONCAT71(uVar7,uVar11);
}

