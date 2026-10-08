
void FUN_1005d2b10(long param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined1 uVar8;
  undefined8 in_R9;
  byte local_5e2;
  byte local_5e1;
  QArrayData *local_5e0;
  int *local_5d8;
  QArrayData *local_5d0;
  int *local_5c8;
  undefined1 local_5c0 [88];
  undefined1 local_568 [47];
  byte local_539;
  QArrayData *local_538 [5];
  undefined1 local_510 [72];
  QArrayData *local_4c8;
  undefined1 local_4b8 [40];
  undefined1 local_490 [88];
  undefined1 local_438 [40];
  QString local_410;
  undefined1 local_401;
  QString local_400;
  int *local_3f8;
  undefined1 local_3e9;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  byte *local_358;
  char *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  QString *local_2b8;
  char *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 *local_218;
  char *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  byte *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte *local_38;
  char *local_30;
  
  FUN_1005eca90();
  local_401 = 0;
  lVar6 = param_1 + 0x48;
  lVar4 = FUN_1005ec990(lVar6);
  if ((*(int *)(lVar4 + 0x60) == 0) ||
     (lVar4 = FUN_1005ec990(lVar6), uVar8 = local_401, *(int *)(lVar4 + 0x60) == 4)) {
    lVar4 = FUN_1005ec990(lVar6);
    uVar8 = 1;
    if ((*(int *)(lVar4 + 0x38) != 0x809) &&
       (((lVar4 = FUN_1005ec990(lVar6), *(int *)(lVar4 + 0x38) != 0x80b &&
         (lVar4 = FUN_1005ec990(lVar6), *(int *)(lVar4 + 0x38) != 0x80c)) &&
        (lVar4 = FUN_1005ec990(lVar6), *(int *)(lVar4 + 0x38) != 0x80e)))) {
      lVar4 = FUN_1005ec990(lVar6);
      uVar8 = *(int *)(lVar4 + 0x38) == 0x80f;
    }
  }
  local_401 = uVar8;
  uVar5 = FUN_1005ec990(lVar6);
  FUN_1005b69c0(local_490,uVar5);
  cVar2 = FUN_10073dd70(local_490);
  if (cVar2 == '\0') {
    uVar5 = FUN_1005ec990(lVar6);
    FUN_1005b9860(local_538,uVar5);
    local_410.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_538[0];
    if (1 < *(int *)local_538[0] + 1U) {
      LOCK();
      *(int *)local_538[0] = *(int *)local_538[0] + 1;
      local_3e9 = *(int *)local_538[0] != 0;
      UNLOCK();
    }
    FUN_1001ea7d0(local_538);
  }
  else {
    uVar5 = FUN_1005ec990(lVar6);
    FUN_1005b69c0(local_510,uVar5);
    local_410.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_4c8;
    if (1 < *(int *)local_4c8 + 1U) {
      LOCK();
      *(int *)local_4c8 = *(int *)local_4c8 + 1;
      local_3e9 = *(int *)local_4c8 != 0;
      UNLOCK();
    }
    FUN_100252c80(local_4b8);
    FUN_100252e70(local_510);
  }
  FUN_100252c80(local_438);
  FUN_100252e70(local_490);
  iVar3 = QString::compare_helper
                    ((QArrayData *)(local_410.field0_0x0 + *(long *)(local_410.field0_0x0 + 0x10)),
                     *(int *)(local_410.field0_0x0 + 4),PTR_s_KeyNotRequired_102270d08,0xffffffff,1)
  ;
  if (iVar3 == 0) {
    local_539 = 1;
LAB_1005d2cdc:
    QString::fromUtf8_helper((char *)&local_400,0x1e41978);
    QString::operator=(&local_410,&local_400);
    if (*(int *)local_400.field0_0x0 != -1) {
      if (*(int *)local_400.field0_0x0 != 0) {
        LOCK();
        *(int *)local_400.field0_0x0 = *(int *)local_400.field0_0x0 + -1;
        local_3e9 = *(int *)local_400.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_3e9) goto LAB_1005d2d40;
      }
      QArrayData::deallocate((QArrayData *)local_400.field0_0x0,2,8);
    }
  }
  else {
    uVar5 = FUN_1005ec990(lVar6);
    local_539 = FUN_1005b9980(uVar5);
    if (local_539 != 0) goto LAB_1005d2cdc;
  }
LAB_1005d2d40:
  uVar5 = FUN_1005ec990(lVar6);
  FUN_1005b69c0(local_5c0,uVar5);
  cVar2 = FUN_10073dd70(local_5c0);
  if (cVar2 == '\0') goto LAB_1005d2f7a;
  local_5d0 = (QArrayData *)QString::fromAscii_helper("store",5);
  uVar5 = FUN_10073fe80(&local_5d0);
  FUN_1007444c0(&local_5c8,uVar5,local_5c0,local_568);
  if (*(int *)local_5d0 != -1) {
    if (*(int *)local_5d0 != 0) {
      LOCK();
      *(int *)local_5d0 = *(int *)local_5d0 + -1;
      local_3e9 = *(int *)local_5d0 != 0;
      UNLOCK();
      if ((bool)local_3e9) goto LAB_1005d2deb;
    }
    QArrayData::deallocate(local_5d0,2,8);
  }
LAB_1005d2deb:
  if (local_5c8[3] == local_5c8[2]) {
    local_5e0 = (QArrayData *)QString::fromAscii_helper("Web Store",9);
    uVar5 = FUN_10073fe80(&local_5e0);
    FUN_1007444c0(&local_5d8,uVar5,local_5c0,local_568);
    if (local_5c8 != local_5d8) {
      local_3f8 = local_5d8;
      if (*local_5d8 != -1) {
        if (*local_5d8 == 0) {
          QListData::detach((int)&local_3f8);
          iVar3 = local_3f8[2];
          if (iVar3 != local_3f8[3]) {
            local_5d8 = local_5d8 + (long)local_5d8[2] * 2 + 4;
            piVar7 = local_3f8 + (long)iVar3 * 2 + 4;
            lVar4 = (long)local_3f8[3] * 8 + (long)iVar3 * -8;
            do {
              piVar1 = *(int **)local_5d8;
              *(int **)piVar7 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_3e9 = *piVar1 != 0;
                UNLOCK();
              }
              piVar7 = piVar7 + 2;
              local_5d8 = local_5d8 + 2;
              lVar4 = lVar4 + -8;
            } while (lVar4 != 0);
          }
        }
        else {
          LOCK();
          *local_5d8 = *local_5d8 + 1;
          local_3e9 = *local_5d8 != 0;
          UNLOCK();
        }
      }
      piVar7 = local_3f8;
      local_3f8 = local_5c8;
      local_5c8 = piVar7;
      FUN_100039a80(&local_3f8);
    }
    FUN_100039a80(&local_5d8);
    if (*(int *)local_5e0 != -1) {
      if (*(int *)local_5e0 != 0) {
        LOCK();
        *(int *)local_5e0 = *(int *)local_5e0 + -1;
        local_3e9 = *(int *)local_5e0 != 0;
        UNLOCK();
        if ((bool)local_3e9) goto LAB_1005d2f55;
      }
      QArrayData::deallocate(local_5e0,2,8);
    }
  }
LAB_1005d2f55:
  if (local_5c8[3] - local_5c8[2] < 2) {
    local_401 = 0;
  }
  FUN_100039a80(&local_5c8);
LAB_1005d2f7a:
  local_5e1 = local_539 ^ 1;
  local_378 = 0;
  uStack_370 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_358 = &local_5e1;
  local_350 = "bool";
  local_368 = 0;
  uStack_360 = 0;
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + 0x50),"setWinKeyRequiredChecked",0,0,0,in_R9,local_358,"bool"
             ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_2b8 = &local_410;
  local_2b0 = "QString";
  local_2c8 = 0;
  uStack_2c0 = 0;
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + 0x50),"setWinKey",0,0,0,in_R9,local_2b8,"QString",0,0,0,0,0,0
             ,0,0,0,0,0,0,0,0,0,0,0,0);
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_218 = &local_401;
  local_210 = "bool";
  local_228 = 0;
  uStack_220 = 0;
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + 0x50),"set64bitVisible",0,0,0,in_R9,local_218,"bool",0,0,0,0,
             0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  lVar6 = FUN_1005ec990(lVar6);
  local_5e2 = *(byte *)(lVar6 + 0x3c) >> 1 & 1;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_38 = &local_5e2;
  local_30 = "bool";
  local_48 = 0;
  uStack_40 = 0;
  QMetaObject::invokeMethod
            (uVar5,"set64bitChecked",0,0,0,in_R9,local_38,"bool",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
            );
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_d8 = &local_539;
  local_d0 = "bool";
  local_e8 = 0;
  uStack_e0 = 0;
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + 0x50),"updateWinKeyControls",0,0,0,in_R9,local_d8,"bool",0,0,
             0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  QMetaObject::invokeMethod
            (*(undefined8 *)(param_1 + 0x50),"updateOsEditions",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,
             0,0,0,0,0,0,0,0);
  FUN_100252c80(local_568);
  FUN_100252e70(local_5c0);
  if (*(int *)local_410.field0_0x0 != -1) {
    if (*(int *)local_410.field0_0x0 != 0) {
      LOCK();
      *(int *)local_410.field0_0x0 = *(int *)local_410.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_410.field0_0x0 != 0) {
        return;
      }
      local_5c0[0] = 0;
    }
    QArrayData::deallocate((QArrayData *)local_410.field0_0x0,2,8);
  }
  return;
}

