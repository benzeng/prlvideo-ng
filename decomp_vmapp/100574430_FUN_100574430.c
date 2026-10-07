
undefined8 FUN_100574430(long param_1,undefined8 param_2)

{
  char *pcVar1;
  QArrayData *pQVar2;
  size_t sVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  char **ppcVar7;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  undefined1 local_299;
  long local_298;
  char *local_290;
  char *local_288;
  long local_280;
  char *local_278;
  char *local_270;
  long local_268;
  char *local_260;
  char *local_258;
  long local_250;
  char *local_248;
  char *local_240;
  long local_238;
  char *local_230;
  char *local_228;
  long local_220;
  char *local_218;
  char *local_210;
  long local_208;
  char *local_200;
  char *local_1f8;
  long local_1f0;
  char *local_1e8;
  char *local_1e0;
  long local_1d8;
  char *local_1d0;
  char *local_1c8;
  long local_1c0;
  char *local_1b8;
  char *local_1b0;
  long local_1a8;
  char *local_1a0;
  char *local_198;
  long local_190;
  char *local_188;
  char *local_180;
  long local_178;
  char *local_170;
  char *local_168;
  long local_160;
  char *local_158;
  char *local_150;
  long local_148;
  char *local_140;
  char *local_138;
  long local_130;
  char *local_128;
  char *local_120;
  long local_118;
  char *local_110;
  char *local_108;
  long local_100;
  char *local_f8;
  char *local_f0;
  long local_e8;
  char *local_e0;
  char *local_d8;
  long local_d0;
  char *local_c8;
  char *local_c0;
  long local_b8;
  char *local_b0;
  char *local_a8;
  long local_a0;
  char *local_98;
  char *local_90;
  long local_88;
  char *local_80;
  char *local_78;
  long local_70;
  char *local_68;
  char *local_60;
  long local_58;
  char *local_50;
  char *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_298 = param_1 + 0x12f0;
  local_290 = "rd_reqs.delay_rd_list";
  ppcVar7 = &local_288;
  local_288 = "I@";
  local_280 = param_1 + 0x12f8;
  local_278 = "rd_reqs.dio_tracking";
  local_270 = "I@";
  local_268 = param_1 + 0x1300;
  local_260 = "rd_reqs.direct_completion";
  local_258 = "I@";
  local_250 = param_1 + 0x1308;
  local_248 = "rd_reqs.direct_submit";
  local_240 = "I@";
  local_238 = param_1 + 0x1310;
  local_230 = "rd_reqs.total_req";
  local_228 = "I@";
  local_220 = param_1 + 0x1318;
  local_218 = "rd_reqs.zero_req";
  local_210 = "I@";
  local_208 = param_1 + 0x1320;
  local_200 = "wr_reqs.block_creation";
  local_1f8 = "I@";
  local_1f0 = param_1 + 0x1328;
  local_1e8 = "wr_reqs.delay_wr0_list";
  local_1e0 = "I@";
  local_1d8 = param_1 + 0x1330;
  local_1d0 = "wr_reqs.delay_wr1_list";
  local_1c8 = "I@";
  local_1c0 = param_1 + 0x1338;
  local_1b8 = "wr_reqs.dio_tracking";
  local_1b0 = "I@";
  local_1a8 = param_1 + 0x1340;
  local_1a0 = "wr_reqs.direct_submit";
  local_198 = "I@";
  local_190 = param_1 + 0x1348;
  local_188 = "wr_reqs.skip_rd";
  local_180 = "I@";
  local_178 = param_1 + 0x1350;
  local_170 = "wr_reqs.skip_rd_on_unplug";
  local_168 = "I@";
  local_160 = param_1 + 0x1358;
  local_158 = "wr_reqs.submit_rd";
  local_150 = "I@";
  local_148 = param_1 + 0x1360;
  local_140 = "wr_reqs.total_req";
  local_138 = "I@";
  local_130 = param_1 + 0x1368;
  local_128 = "wr_reqs.wait_unplug";
  local_120 = "I@";
  local_118 = param_1 + 0x1370;
  local_110 = "wr_reqs.zero_req";
  local_108 = "I@";
  local_100 = param_1 + 0x1378;
  local_f8 = "group_cache.miss";
  local_f0 = "I@";
  local_e8 = param_1 + 0x1380;
  local_e0 = "group_cache.hit";
  local_d8 = "I@";
  local_d0 = param_1 + 5000;
  local_c8 = "group_cache.progress";
  local_c0 = "I@";
  local_b8 = param_1 + 0x1390;
  local_b0 = "group_cache.loaded";
  local_a8 = "I@";
  local_a0 = param_1 + 0x1398;
  local_98 = "compact.trim_sect_total";
  local_90 = "A@";
  local_88 = param_1 + 0x13a0;
  local_80 = "compact.trim_sect_current";
  local_78 = "A@";
  local_70 = param_1 + 0x13a8;
  local_68 = "compact.runs";
  local_60 = "A@";
  local_58 = param_1 + 0x13b0;
  local_50 = "compact.blocks_moved";
  local_48 = "A@";
  uVar6 = 0;
  do {
    local_2c0 = (QArrayData *)QString::fromAscii_helper("%1%2%3",6);
    pcVar1 = *ppcVar7;
    iVar5 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar3 = _strlen(pcVar1);
      iVar5 = (int)sVar3;
    }
    local_2c8 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar5);
    QString::arg(&local_2b8,&local_2c0,&local_2c8,0,0x20);
    QString::arg(&local_2b0,&local_2b8,param_2,0,0x20);
    pcVar1 = ppcVar7[-1];
    iVar5 = -1;
    if (pcVar1 != (char *)0x0) {
      sVar3 = _strlen(pcVar1);
      iVar5 = (int)sVar3;
    }
    local_2d0 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar5);
    QString::arg(&local_2a8,&local_2b0,&local_2d0,0,0x20);
    if (*(int *)local_2d0 != -1) {
      if (*(int *)local_2d0 != 0) {
        LOCK();
        *(int *)local_2d0 = *(int *)local_2d0 + -1;
        local_299 = *(int *)local_2d0 != 0;
        UNLOCK();
        if ((bool)local_299) goto LAB_1005748cc;
      }
      QArrayData::deallocate(local_2d0,2,8);
    }
LAB_1005748cc:
    if (*(int *)local_2b0 != -1) {
      if (*(int *)local_2b0 != 0) {
        LOCK();
        *(int *)local_2b0 = *(int *)local_2b0 + -1;
        local_299 = *(int *)local_2b0 != 0;
        UNLOCK();
        if ((bool)local_299) goto LAB_10057490b;
      }
      QArrayData::deallocate(local_2b0,2,8);
    }
LAB_10057490b:
    if (*(int *)local_2b8 != -1) {
      if (*(int *)local_2b8 != 0) {
        LOCK();
        *(int *)local_2b8 = *(int *)local_2b8 + -1;
        local_299 = *(int *)local_2b8 != 0;
        UNLOCK();
        if ((bool)local_299) goto LAB_100574947;
      }
      QArrayData::deallocate(local_2b8,2,8);
    }
LAB_100574947:
    if (*(int *)local_2c8 != -1) {
      if (*(int *)local_2c8 != 0) {
        LOCK();
        *(int *)local_2c8 = *(int *)local_2c8 + -1;
        local_299 = *(int *)local_2c8 != 0;
        UNLOCK();
        if ((bool)local_299) goto LAB_100574983;
      }
      QArrayData::deallocate(local_2c8,2,8);
    }
LAB_100574983:
    if (*(int *)local_2c0 != -1) {
      if (*(int *)local_2c0 != 0) {
        LOCK();
        *(int *)local_2c0 = *(int *)local_2c0 + -1;
        local_299 = *(int *)local_2c0 != 0;
        UNLOCK();
        if ((bool)local_299) goto LAB_1005749bf;
      }
      QArrayData::deallocate(local_2c0,2,8);
    }
LAB_1005749bf:
    pQVar2 = local_2a8;
    if (1 < *(int *)local_2a8 + 1U) {
      LOCK();
      *(int *)local_2a8 = *(int *)local_2a8 + 1;
      local_299 = *(int *)local_2a8 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    uVar4 = FUN_10070e6f0(local_2d8 + *(long *)(local_2d8 + 0x10));
    *(undefined8 *)ppcVar7[-2] = uVar4;
    if (*(int *)local_2d8 != -1) {
      if (*(int *)local_2d8 != 0) {
        LOCK();
        *(int *)local_2d8 = *(int *)local_2d8 + -1;
        local_299 = *(int *)local_2d8 != 0;
        UNLOCK();
        if ((bool)local_299) goto LAB_100574a47;
      }
      QArrayData::deallocate(local_2d8,1,8);
    }
LAB_100574a47:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_299 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_299) goto LAB_100574a83;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
LAB_100574a83:
    if (*(int *)local_2a8 != -1) {
      if (*(int *)local_2a8 != 0) {
        LOCK();
        *(int *)local_2a8 = *(int *)local_2a8 + -1;
        local_299 = *(int *)local_2a8 != 0;
        UNLOCK();
        if ((bool)local_299) goto LAB_100574abf;
      }
      QArrayData::deallocate(local_2a8,2,8);
    }
LAB_100574abf:
    uVar6 = uVar6 + 1;
    ppcVar7 = ppcVar7 + 3;
    if (0x18 < uVar6) {
      if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return 0;
    }
  } while( true );
}

