
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1006acb90(long param_1)

{
  bool bVar1;
  char extraout_AL;
  char extraout_AL_00;
  char extraout_AL_01;
  char cVar2;
  char extraout_AL_02;
  char extraout_AL_03;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  long lVar7;
  long lVar8;
  QWidget *pQVar9;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 uVar10;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  char *pcVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  char local_69;
  QVariant local_68;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if ((DAT_102312328 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102312328), iVar3 != 0)) {
    DAT_102312320 = PTR_shared_null_1021e15e8;
    ___cxa_atexit(FUN_100567a10,&DAT_102312320,0x100000000);
    ___cxa_guard_release(&DAT_102312328);
  }
  if ((DAT_102312338 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102312338), iVar3 != 0)) {
    _DAT_102312330 = PTR_shared_null_1021e1288;
    ___cxa_atexit(FUN_100054e40,&DAT_102312330,0x100000000);
    ___cxa_guard_release(&DAT_102312338);
  }
  if (DAT_102312318 == '\0') {
    local_30 = (QArrayData *)QString::fromAscii_helper("LogActionEnabled",0x10);
    FUN_1006ad2d0(&local_30,&DAT_102312330,&DAT_102312320);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006acca2;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_1006acca2:
    DAT_102312318 = '\x01';
  }
  uVar6 = FUN_10069dca0(param_1);
  iVar4 = FUN_1006947d0(uVar6);
  iVar3 = *(int *)(DAT_102312320 + 8);
  if (iVar3 == *(int *)(DAT_102312320 + 0xc)) {
    bVar1 = false;
  }
  else {
    puVar12 = (undefined8 *)(DAT_102312320 + (long)iVar3 * 8 + 0x10);
    lVar7 = (long)*(int *)(DAT_102312320 + 0xc) * 8 + (long)iVar3 * -8;
    do {
      if (*(int *)*puVar12 == iVar4) {
        FUN_10018d830(&local_38,*(undefined8 *)(param_1 + 0x20));
        cVar2 = operator==(&local_38,(QString *)&DAT_102312330);
        if (*(int *)local_38.field0_0x0 == -1) {
LAB_1006acd47:
          if (cVar2 == '\0') {
            bVar1 = false;
            goto LAB_1006ace26;
          }
        }
        else {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            local_21 = *(int *)local_38.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1006acd47;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
          if (cVar2 == '\0') {
            bVar1 = false;
            goto LAB_1006ace26;
          }
        }
        uVar6 = FUN_10069dca0(param_1);
        uVar5 = FUN_1006947d0(uVar6);
        FUN_1006946e0(&local_48,uVar5);
        QString::toLocal8Bit();
        FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"Test %s action enabled state...",
                      local_40 + *(long *)(local_40 + 0x10));
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_21 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1006acdee;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_1006acdee:
        bVar1 = true;
        if (*(int *)local_48 == -1) goto LAB_1006ace26;
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_21 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1006ace26;
        }
        QArrayData::deallocate(local_48,2,8);
        goto LAB_1006ace26;
      }
      puVar12 = puVar12 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
    bVar1 = false;
  }
LAB_1006ace26:
  FUN_10069e110(param_1);
  if (extraout_AL == '\0') {
    if (!bVar1) {
      uVar13 = 0;
      uVar10 = extraout_var;
      goto LAB_1006ad1a7;
    }
    pcVar11 = "Disabled by specific action case";
    uVar13 = 0;
  }
  else {
    uVar6 = FUN_10018c280(*(undefined8 *)(param_1 + 0x20));
    lVar7 = FUN_100319960(uVar6);
    if ((lVar7 != 0) && (lVar8 = FUN_100323e30(lVar7,0), lVar8 != 0)) {
      pQVar9 = (QWidget *)FUN_100323e30(lVar7,0);
      WidgetUtils::isBlockedByModal(pQVar9);
      if (extraout_AL_00 != '\0') {
        if (!bVar1) {
          uVar13 = 0;
          uVar10 = extraout_var_00;
          goto LAB_1006ad1a7;
        }
        pcVar11 = "Disabled: blocked by modal";
        uVar13 = 0;
        goto LAB_1006ad19e;
      }
    }
    FUN_10018ff50(*(undefined8 *)(param_1 + 0x20));
    if (extraout_AL_01 == '\0') {
      FUN_10069dca0(param_1);
      QObject::property((char *)&local_58);
      cVar2 = QVariant::toBool();
      if (cVar2 == '\0') {
        cVar2 = FUN_10018ecf0(*(undefined8 *)(param_1 + 0x20));
        QVariant::~QVariant(&local_58);
        if (cVar2 == '\0') {
          if (!bVar1) {
            uVar13 = 0;
            uVar10 = extraout_var_02;
            goto LAB_1006ad1a7;
          }
          pcVar11 = "Disabled: VM is invalid";
          uVar13 = 0;
          goto LAB_1006ad19e;
        }
      }
      else {
        QVariant::~QVariant(&local_58);
      }
      FUN_10069dca0(param_1);
      QObject::property((char *)&local_68);
      cVar2 = QVariant::toBool();
      if (cVar2 == '\0') {
        cVar2 = FUN_10018c770(*(undefined8 *)(param_1 + 0x20));
        QVariant::~QVariant(&local_68);
        if (cVar2 != '\0') {
          if (!bVar1) {
            uVar13 = 0;
            uVar10 = extraout_var_03;
            goto LAB_1006ad1a7;
          }
          pcVar11 = "Disabled: VM is a template";
          uVar13 = 0;
          goto LAB_1006ad19e;
        }
      }
      else {
        QVariant::~QVariant(&local_68);
      }
      uVar6 = FUN_10069dca0(param_1);
      FUN_1006ad8b0(uVar6,*(undefined8 *)(param_1 + 0x20));
      if (extraout_AL_02 == '\0') {
        if (!bVar1) {
          uVar13 = 0;
          uVar10 = extraout_var_04;
          goto LAB_1006ad1a7;
        }
        pcVar11 = "Disabled: VM access rights check failed";
        uVar13 = 0;
      }
      else {
        local_69 = '\0';
        uVar6 = FUN_10069dca0(param_1);
        uVar6 = FUN_1006adb20(uVar6,*(undefined8 *)(param_1 + 0x20),PTR_s_enabledForStates_1021f5540
                              ,&local_69);
        if (((char)uVar6 == '\0') && (uVar10 = (undefined7)((ulong)uVar6 >> 8), local_69 != '\0')) {
          if (!bVar1) {
            uVar13 = 0;
            goto LAB_1006ad1a7;
          }
          pcVar11 = "Disabled: VM state is incompatible";
          uVar13 = 0;
        }
        else {
          uVar6 = FUN_10069dca0(param_1);
          uVar6 = FUN_1006adc70(uVar6,*(undefined8 *)(param_1 + 0x20),
                                PTR_s_enabledForAdditionStates_1021f5558,&local_69);
          if (((char)uVar6 == '\0') && (uVar10 = (undefined7)((ulong)uVar6 >> 8), local_69 != '\0'))
          {
            if (!bVar1) {
              uVar13 = 0;
              goto LAB_1006ad1a7;
            }
            pcVar11 = "Disabled: VM addition state is incompatible";
            uVar13 = 0;
          }
          else {
            uVar6 = FUN_10069dca0(param_1);
            uVar6 = FUN_1006addc0(uVar6,*(undefined8 *)(param_1 + 0x20),
                                  PTR_s_enabledForView_1021f5560,&local_69);
            if (((char)uVar6 == '\0') &&
               (uVar10 = (undefined7)((ulong)uVar6 >> 8), local_69 != '\0')) {
              if (!bVar1) {
                uVar13 = 0;
                goto LAB_1006ad1a7;
              }
              pcVar11 = "Disabled: VM view is incompatible";
              uVar13 = 0;
            }
            else {
              uVar6 = FUN_10069dca0(param_1);
              FUN_1006adf10(uVar6,*(undefined8 *)(param_1 + 0x20),
                            PTR_s_enabledWithAttributes_1021f5578,&local_69);
              uVar10 = extraout_var_05;
              if ((extraout_AL_03 == '\0') && (local_69 != '\0')) {
                if (!bVar1) {
                  uVar13 = 0;
                  goto LAB_1006ad1a7;
                }
                pcVar11 = "Disabled: VM attributes are incompatible";
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
                if (!bVar1) goto LAB_1006ad1a7;
                pcVar11 = "Enabled";
                uVar13 = 1;
              }
            }
          }
        }
      }
    }
    else {
      if (!bVar1) {
        uVar13 = 0;
        uVar10 = extraout_var_01;
        goto LAB_1006ad1a7;
      }
      pcVar11 = "Disabled: VM is upgrading";
      uVar13 = 0;
    }
  }
LAB_1006ad19e:
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,pcVar11);
  uVar10 = extraout_var_06;
LAB_1006ad1a7:
  return CONCAT71(uVar10,uVar13);
}

