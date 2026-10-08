
void FUN_100081530(QObject *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  Data *pDVar7;
  Data *pDVar8;
  long lVar9;
  Data_conflict local_360;
  undefined4 local_358;
  QArrayData *local_350;
  int *local_348 [4];
  QVariant local_328 [2];
  QArrayData *local_310;
  Data *local_308;
  _func_void_Node_ptr *local_300;
  Data *local_2f8;
  undefined *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  code *local_2e0;
  undefined *local_2d8;
  int *local_2d0;
  QObject *local_2c8;
  undefined *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  code *local_2b0;
  undefined *local_2a8;
  int *local_2a0;
  QObject *local_298;
  undefined *local_290;
  undefined4 local_288;
  undefined4 local_284;
  code *local_280;
  undefined *local_278;
  QObject *local_270;
  int *local_268;
  QObject *local_260;
  undefined *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  code *local_248;
  undefined *local_240;
  QObject *local_238;
  int *local_230;
  QObject *local_228;
  undefined *local_220;
  undefined4 local_218;
  undefined4 local_214;
  code *local_210;
  undefined *local_208;
  QObject *local_200;
  int *local_1f8;
  QObject *local_1f0;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  int *local_1c8;
  QObject *local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  QObject *local_198;
  int *local_190;
  QObject *local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  QObject *local_160;
  int *local_158;
  QObject *local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  int *local_128;
  QObject *local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  QObject *local_f8;
  int *local_f0;
  QObject *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  QObject *local_c0;
  int *local_b8;
  QObject *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  QObject *local_88;
  int *local_80;
  QObject *local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  QObject *local_50;
  int *local_48;
  QObject *local_40;
  undefined1 local_31;
  
  piVar4 = (int *)0x0;
  if (param_1 != (QObject *)0x0) {
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
  }
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  puVar3 = PTR___NSConcreteStackBlock_1021e1280;
  local_70 = PTR___NSConcreteStackBlock_1021e1280;
  local_68 = 0xc6000000;
  local_64 = 0;
  local_60 = FUN_1000825e0;
  local_58 = &DAT_1021edbb0;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_50 = param_1;
  local_48 = piVar4;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setVmOpenHandler__102269f58,&local_70);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  local_a8 = puVar3;
  local_a0 = 0xc6000000;
  local_9c = 0;
  local_98 = FUN_100083050;
  local_90 = &DAT_1021edbe0;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_88 = param_1;
  local_80 = piVar4;
  local_78 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setSelectionHandler__102269f60,&local_a8);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  local_e0 = puVar3;
  local_d8 = 0xc6000000;
  local_d4 = 0;
  local_d0 = FUN_1000834d0;
  local_c8 = &DAT_1021edc70;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_c0 = param_1;
  local_b8 = piVar4;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setVmTrashHandler__102269f68,&local_e0);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  local_118 = puVar3;
  local_110 = 0xc6000000;
  local_10c = 0;
  local_108 = FUN_100083dc0;
  local_100 = &DAT_1021edca0;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_f8 = param_1;
  local_f0 = piVar4;
  local_e8 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setVmDropHandler__102269f70,&local_118);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_appBar_102269f78);
  local_148 = puVar3;
  local_140 = 0xc6000000;
  local_13c = 0;
  local_138 = FUN_1000842c0;
  local_130 = &DAT_1021edcd0;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_128 = piVar4;
  local_120 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setButtonPressedHandler__102269f80,&local_148);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  local_180 = puVar3;
  local_178 = 0xc6000000;
  local_174 = 0;
  local_170 = FUN_100084660;
  local_168 = &DAT_1021edd00;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_160 = param_1;
  local_158 = piVar4;
  local_150 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setButtonPressedHandler__102269f80,&local_180);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  local_1b8 = puVar3;
  local_1b0 = 0xc6000000;
  local_1ac = 0;
  local_1a8 = FUN_100084930;
  local_1a0 = &DAT_1021edd30;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_198 = param_1;
  local_190 = piVar4;
  local_188 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar5,PTR_s_setDevButtonPressedHandler__102269f90,&local_1b8);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_appBar_102269f78);
  local_1e8 = puVar3;
  local_1e0 = 0xc6000000;
  local_1dc = 0;
  local_1d8 = FUN_100084e90;
  local_1d0 = &DAT_1021edd60;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_1c8 = piVar4;
  local_1c0 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setButtonUpdateHandler__102269f98,&local_1e8);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  local_220 = puVar3;
  local_218 = 0xc6000000;
  local_214 = 0;
  local_210 = FUN_100085050;
  local_208 = &DAT_1021edd90;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_200 = param_1;
  local_1f8 = piVar4;
  local_1f0 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setButtonUpdateHandler__102269f98,&local_220);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  local_258 = puVar3;
  local_250 = 0xc6000000;
  local_24c = 0;
  local_248 = FUN_1000853a0;
  local_240 = &DAT_1021eddc0;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_238 = param_1;
  local_230 = piVar4;
  local_228 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setVmThrowAwayHandler__102269fa0,&local_258);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  local_290 = puVar3;
  local_288 = 0xc6000000;
  local_284 = 0;
  local_280 = FUN_1000855d0;
  local_278 = &DAT_1021ede20;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_270 = param_1;
  local_268 = piVar4;
  local_260 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setMenuUpdateHandler__102269fc0,&local_290);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  local_2c0 = puVar3;
  local_2b8 = 0xc6000000;
  local_2b4 = 0;
  local_2b0 = FUN_100085e60;
  local_2a8 = &DAT_1021ede50;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_2a0 = piVar4;
  local_298 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setAddButtonHandler__102269fc8,&local_2c0);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  local_2f0 = puVar3;
  local_2e8 = 0xc6000000;
  local_2e4 = 0;
  local_2e0 = FUN_100085f20;
  local_2d8 = &DAT_1021ede80;
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  local_2d0 = piVar4;
  local_2c8 = param_1;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setViewModeHandler__102269fd0,&local_2f0);
  uVar5 = FUN_1006915d0();
  FUN_100084410(&local_300);
  FUN_100086830(&local_2f8,&local_300);
  local_308 = (Data *)PTR_shared_null_1021e15e8;
  pQVar6 = (QArrayData *)QString::fromAscii_helper("enabled",7);
  local_310 = pQVar6;
  FUN_1000341d0(&local_308,&local_310);
  local_350 = (QArrayData *)QString::fromAscii_helper("onActionChanged",0xf);
  local_358 = 0x80000000;
  local_360.field7 = 0;
  FUN_100a1c6b0(local_348,&local_350,param_1,&local_360);
  FUN_100691840(uVar5,&local_2f8,&local_308,local_348);
  QVariant::~QVariant(local_328);
  if (local_348[0] != (int *)0x0) {
    LOCK();
    *local_348[0] = *local_348[0] + -1;
    local_31 = *local_348[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_348[0] != (int *)0x0)) {
      operator_delete(local_348[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_360);
  if (*(int *)local_350 != -1) {
    if (*(int *)local_350 != 0) {
      LOCK();
      *(int *)local_350 = *(int *)local_350 + -1;
      local_31 = *(int *)local_350 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100081cde;
    }
    QArrayData::deallocate(local_350,2,8);
  }
LAB_100081cde:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100081d0d;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100081d0d:
  pDVar8 = local_308;
  if (*(int *)local_308 != -1) {
    if (*(int *)local_308 != 0) {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_31 = *(int *)local_308 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100081da1;
    }
    iVar2 = *(int *)(local_308 + 0xc);
    if (iVar2 != *(int *)(local_308 + 8)) {
      lVar9 = (long)*(int *)(local_308 + 8) * 8 + (long)iVar2 * -8;
      pDVar7 = local_308 + (long)iVar2 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar6 == 0) {
LAB_100081d80:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar6 = *(QArrayData **)pDVar7;
            goto LAB_100081d80;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_100081da1:
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_31 = *(int *)local_2f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100081e0f;
    }
    iVar2 = *(int *)(local_2f8 + 0xc);
    if (iVar2 != *(int *)(local_2f8 + 8)) {
      lVar9 = (long)*(int *)(local_2f8 + 8) * 8 + (long)iVar2 * -8;
      pDVar8 = local_2f8 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar8 != (void *)0x0) {
          operator_delete(*(void **)pDVar8);
        }
        pDVar8 = pDVar8 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(local_2f8);
  }
LAB_100081e0f:
  if (*(int *)(local_300 + 0x10) != -1) {
    if (*(int *)(local_300 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_300 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100081e3d;
    }
    QHashData::free_helper(local_300);
  }
LAB_100081e3d:
  if (local_2d0 != (int *)0x0) {
    LOCK();
    *local_2d0 = *local_2d0 + -1;
    local_31 = *local_2d0 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_2d0 != (int *)0x0)) {
      operator_delete(local_2d0);
    }
  }
  if (local_2a0 != (int *)0x0) {
    LOCK();
    *local_2a0 = *local_2a0 + -1;
    local_31 = *local_2a0 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_2a0 != (int *)0x0)) {
      operator_delete(local_2a0);
    }
  }
  if (local_268 != (int *)0x0) {
    LOCK();
    *local_268 = *local_268 + -1;
    local_31 = *local_268 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_268 != (int *)0x0)) {
      operator_delete(local_268);
    }
  }
  if (local_230 != (int *)0x0) {
    LOCK();
    *local_230 = *local_230 + -1;
    local_31 = *local_230 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_230 != (int *)0x0)) {
      operator_delete(local_230);
    }
  }
  if (local_1f8 != (int *)0x0) {
    LOCK();
    *local_1f8 = *local_1f8 + -1;
    local_31 = *local_1f8 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_1f8 != (int *)0x0)) {
      operator_delete(local_1f8);
    }
  }
  if (local_1c8 != (int *)0x0) {
    LOCK();
    *local_1c8 = *local_1c8 + -1;
    local_31 = *local_1c8 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_1c8 != (int *)0x0)) {
      operator_delete(local_1c8);
    }
  }
  if (local_190 != (int *)0x0) {
    LOCK();
    *local_190 = *local_190 + -1;
    local_31 = *local_190 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_190 != (int *)0x0)) {
      operator_delete(local_190);
    }
  }
  if (local_158 != (int *)0x0) {
    LOCK();
    *local_158 = *local_158 + -1;
    local_31 = *local_158 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_158 != (int *)0x0)) {
      operator_delete(local_158);
    }
  }
  if (local_128 != (int *)0x0) {
    LOCK();
    *local_128 = *local_128 + -1;
    local_31 = *local_128 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_128 != (int *)0x0)) {
      operator_delete(local_128);
    }
  }
  if (local_f0 != (int *)0x0) {
    LOCK();
    *local_f0 = *local_f0 + -1;
    local_31 = *local_f0 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_f0 != (int *)0x0)) {
      operator_delete(local_f0);
    }
  }
  if (local_b8 != (int *)0x0) {
    LOCK();
    *local_b8 = *local_b8 + -1;
    local_31 = *local_b8 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_b8 != (int *)0x0)) {
      operator_delete(local_b8);
    }
  }
  if (local_80 != (int *)0x0) {
    LOCK();
    *local_80 = *local_80 + -1;
    local_31 = *local_80 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_80 != (int *)0x0)) {
      operator_delete(local_80);
    }
  }
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + -1;
    local_31 = *local_48 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_48 != (int *)0x0)) {
      operator_delete(local_48);
    }
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_31 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar4);
    }
  }
  return;
}

