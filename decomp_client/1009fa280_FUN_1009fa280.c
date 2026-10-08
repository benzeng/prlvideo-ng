
undefined8 * FUN_1009fa280(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  QArrayData *pQVar13;
  QArrayData *pQVar14;
  QArrayData *pQVar15;
  QArrayData *pQVar16;
  QArrayData *pQVar17;
  QArrayData *pQVar18;
  QArrayData *pQVar19;
  QArrayData *pQVar20;
  QArrayData *pQVar21;
  QArrayData *pQVar22;
  QArrayData *pQVar23;
  QArrayData *pQVar24;
  QArrayData *pQVar25;
  QArrayData *pQVar26;
  QArrayData *pQVar27;
  QArrayData *pQVar28;
  uint *puVar29;
  long lVar30;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  QArrayData **local_48;
  QArrayData **local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  *param_1 = PTR_shared_null_1021e15e8;
  iVar3 = FUN_100d7e9e0();
  puVar2 = PTR_s_RemoteClient_1022809b0;
  puVar1 = PTR_s_prl_disp_service_102280968;
  if (iVar3 == 6) {
    iVar3 = -1;
    if (PTR_s_RemoteClient_1022809b0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_RemoteClient_1022809b0);
      iVar3 = (int)sVar4;
    }
    pQVar5 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar3);
    local_58 = pQVar5;
    FUN_1000341d0(param_1,&local_58);
    puVar1 = PTR_s_prl_deskctl_wizard_102280a28;
    iVar3 = -1;
    if (PTR_s_prl_deskctl_wizard_102280a28 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_deskctl_wizard_102280a28);
      iVar3 = (int)sVar4;
    }
    pQVar6 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_60 = pQVar6;
    FUN_1000341d0(param_1,&local_60);
    puVar1 = PTR_s_prl_deskctl_agent_102280a20;
    iVar3 = -1;
    if (PTR_s_prl_deskctl_agent_102280a20 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_deskctl_agent_102280a20);
      iVar3 = (int)sVar4;
    }
    pQVar7 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_68 = pQVar7;
    FUN_1000341d0(param_1,&local_68);
    puVar1 = PTR_s_prl_pm_service_102280970;
    iVar3 = -1;
    if (PTR_s_prl_pm_service_102280970 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_pm_service_102280970);
      iVar3 = (int)sVar4;
    }
    pQVar8 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_70 = pQVar8;
    FUN_1000341d0(param_1,&local_70);
    puVar1 = PTR_s_paxctl_1022809a0;
    iVar3 = -1;
    if (PTR_s_paxctl_1022809a0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_paxctl_1022809a0);
      iVar3 = (int)sVar4;
    }
    pQVar9 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_78 = pQVar9;
    FUN_1000341d0(param_1,&local_78);
    puVar1 = PTR_s_ParallelsIM_1022809b8;
    iVar3 = -1;
    if (PTR_s_ParallelsIM_1022809b8 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_ParallelsIM_1022809b8);
      iVar3 = (int)sVar4;
    }
    pQVar10 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_80 = pQVar10;
    FUN_1000341d0(param_1,&local_80);
    puVar1 = PTR_s_pax_updater_ctl_1022809e8;
    iVar3 = -1;
    if (PTR_s_pax_updater_ctl_1022809e8 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_pax_updater_ctl_1022809e8);
      iVar3 = (int)sVar4;
    }
    pQVar11 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_88 = pQVar11;
    FUN_1000341d0(param_1,&local_88);
    if (*(int *)pQVar11 != -1) {
      if (*(int *)pQVar11 != 0) {
        LOCK();
        *(int *)pQVar11 = *(int *)pQVar11 + -1;
        local_49 = *(int *)pQVar11 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fa490;
      }
      QArrayData::deallocate(pQVar11,2,8);
    }
LAB_1009fa490:
    if (*(int *)pQVar10 != -1) {
      if (*(int *)pQVar10 != 0) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_49 = *(int *)pQVar10 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fa4c2;
      }
      QArrayData::deallocate(pQVar10,2,8);
    }
LAB_1009fa4c2:
    if (*(int *)pQVar9 != -1) {
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_49 = *(int *)pQVar9 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fa4f8;
      }
      QArrayData::deallocate(pQVar9,2,8);
    }
LAB_1009fa4f8:
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_49 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fa527;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
LAB_1009fa527:
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_49 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fa556;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
LAB_1009fa556:
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_49 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fa585;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_1009fa585:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_49 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fb04b;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
  else {
    iVar3 = -1;
    if (PTR_s_prl_disp_service_102280968 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_disp_service_102280968);
      iVar3 = (int)sVar4;
    }
    pQVar5 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_90 = pQVar5;
    FUN_1000341d0(param_1,&local_90);
    puVar1 = PTR_s_prl_naptd_102280988;
    iVar3 = -1;
    if (PTR_s_prl_naptd_102280988 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_naptd_102280988);
      iVar3 = (int)sVar4;
    }
    pQVar6 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_98 = pQVar6;
    FUN_1000341d0(param_1,&local_98);
    puVar1 = PTR_s_prl_net_start_102280990;
    iVar3 = -1;
    if (PTR_s_prl_net_start_102280990 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_net_start_102280990);
      iVar3 = (int)sVar4;
    }
    pQVar7 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_a0 = pQVar7;
    FUN_1000341d0(param_1,&local_a0);
    puVar1 = PTR_s_prl_vm_starter_102280958;
    iVar3 = -1;
    if (PTR_s_prl_vm_starter_102280958 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_vm_starter_102280958);
      iVar3 = (int)sVar4;
    }
    pQVar8 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_a8 = pQVar8;
    FUN_1000341d0(param_1,&local_a8);
    puVar1 = PTR_s_prl_vm_app_102280960;
    iVar3 = -1;
    if (PTR_s_prl_vm_app_102280960 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_vm_app_102280960);
      iVar3 = (int)sVar4;
    }
    pQVar9 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_b0 = pQVar9;
    FUN_1000341d0(param_1,&local_b0);
    puVar1 = PTR_s_prl_client_app_102280978;
    iVar3 = -1;
    if (PTR_s_prl_client_app_102280978 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_client_app_102280978);
      iVar3 = (int)sVar4;
    }
    pQVar10 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_b8 = pQVar10;
    FUN_1000341d0(param_1,&local_b8);
    puVar1 = PTR_s_prl_disk_tool_1022809c0;
    iVar3 = -1;
    if (PTR_s_prl_disk_tool_1022809c0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_disk_tool_1022809c0);
      iVar3 = (int)sVar4;
    }
    pQVar11 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_c0 = pQVar11;
    FUN_1000341d0(param_1,&local_c0);
    puVar1 = PTR_s_prl_mkiso_1022809c8;
    iVar3 = -1;
    if (PTR_s_prl_mkiso_1022809c8 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_mkiso_1022809c8);
      iVar3 = (int)sVar4;
    }
    pQVar12 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_c8 = pQVar12;
    FUN_1000341d0(param_1,&local_c8);
    puVar1 = PTR_s_prl_updater_app_1022809d8;
    iVar3 = -1;
    if (PTR_s_prl_updater_app_1022809d8 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_updater_app_1022809d8);
      iVar3 = (int)sVar4;
    }
    pQVar13 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_d0 = pQVar13;
    FUN_1000341d0(param_1,&local_d0);
    puVar1 = PTR_s_prl_convert_1022809f0;
    iVar3 = -1;
    if (PTR_s_prl_convert_1022809f0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_convert_1022809f0);
      iVar3 = (int)sVar4;
    }
    pQVar14 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_d8 = pQVar14;
    FUN_1000341d0(param_1,&local_d8);
    puVar1 = PTR_s_prl_perf_ctl_1022809f8;
    iVar3 = -1;
    if (PTR_s_prl_perf_ctl_1022809f8 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_perf_ctl_1022809f8);
      iVar3 = (int)sVar4;
    }
    pQVar15 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_e0 = pQVar15;
    FUN_1000341d0(param_1,&local_e0);
    puVar1 = PTR_s_prlauth_102280a00;
    iVar3 = -1;
    if (PTR_s_prlauth_102280a00 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prlauth_102280a00);
      iVar3 = (int)sVar4;
    }
    pQVar16 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_e8 = pQVar16;
    FUN_1000341d0(param_1,&local_e8);
    puVar1 = PTR_s_WinAppHelper_102280a30;
    iVar3 = -1;
    if (PTR_s_WinAppHelper_102280a30 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_WinAppHelper_102280a30);
      iVar3 = (int)sVar4;
    }
    pQVar17 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_f0 = pQVar17;
    FUN_1000341d0(param_1,&local_f0);
    puVar1 = PTR_s_prlctl_102280998;
    iVar3 = -1;
    if (PTR_s_prlctl_102280998 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prlctl_102280998);
      iVar3 = (int)sVar4;
    }
    pQVar18 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_f8 = pQVar18;
    FUN_1000341d0(param_1,&local_f8);
    puVar1 = PTR_s_prlsrvctl_1022809a8;
    iVar3 = -1;
    if (PTR_s_prlsrvctl_1022809a8 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prlsrvctl_1022809a8);
      iVar3 = (int)sVar4;
    }
    pQVar19 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_100 = pQVar19;
    FUN_1000341d0(param_1,&local_100);
    puVar1 = PTR_s_prl_event_tap_102280980;
    iVar3 = -1;
    if (PTR_s_prl_event_tap_102280980 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_event_tap_102280980);
      iVar3 = (int)sVar4;
    }
    pQVar20 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_108 = pQVar20;
    FUN_1000341d0(param_1,&local_108);
    puVar1 = PTR_s_prl_deactivation_id_1022809d0;
    iVar3 = -1;
    if (PTR_s_prl_deactivation_id_1022809d0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_deactivation_id_1022809d0);
      iVar3 = (int)sVar4;
    }
    pQVar21 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_110 = pQVar21;
    FUN_1000341d0(param_1,&local_110);
    puVar1 = PTR_s_prl_shappgroup_bridge_102280a18;
    iVar3 = -1;
    if (PTR_s_prl_shappgroup_bridge_102280a18 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_shappgroup_bridge_102280a18);
      iVar3 = (int)sVar4;
    }
    pQVar22 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_118 = pQVar22;
    FUN_1000341d0(param_1,&local_118);
    puVar1 = PTR_s_prl_updater_ctl_1022809e0;
    iVar3 = -1;
    if (PTR_s_prl_updater_ctl_1022809e0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_updater_ctl_1022809e0);
      iVar3 = (int)sVar4;
    }
    pQVar23 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_120 = pQVar23;
    FUN_1000341d0(param_1,&local_120);
    puVar1 = PTR_s_Parallels_Mounter_102280a38;
    iVar3 = -1;
    if (PTR_s_Parallels_Mounter_102280a38 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_Parallels_Mounter_102280a38);
      iVar3 = (int)sVar4;
    }
    pQVar24 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_128 = pQVar24;
    FUN_1000341d0(param_1,&local_128);
    puVar1 = PTR_s_PEFSUtil_102280a40;
    iVar3 = -1;
    if (PTR_s_PEFSUtil_102280a40 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_PEFSUtil_102280a40);
      iVar3 = (int)sVar4;
    }
    pQVar25 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_130 = pQVar25;
    FUN_1000341d0(param_1,&local_130);
    puVar1 = PTR_s_Parallels_Explorer_102280a48;
    iVar3 = -1;
    if (PTR_s_Parallels_Explorer_102280a48 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_Parallels_Explorer_102280a48);
      iVar3 = (int)sVar4;
    }
    pQVar26 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_138 = pQVar26;
    FUN_1000341d0(param_1,&local_138);
    puVar1 = PTR_s_prl_sharedapp_link_102280a08;
    iVar3 = -1;
    if (PTR_s_prl_sharedapp_link_102280a08 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_sharedapp_link_102280a08);
      iVar3 = (int)sVar4;
    }
    pQVar27 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_140 = pQVar27;
    FUN_1000341d0(param_1,&local_140);
    puVar1 = PTR_s_prl_applescript_runner_102280a10;
    iVar3 = -1;
    if (PTR_s_prl_applescript_runner_102280a10 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_prl_applescript_runner_102280a10);
      iVar3 = (int)sVar4;
    }
    pQVar28 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    local_148 = pQVar28;
    FUN_1000341d0(param_1,&local_148);
    if (*(int *)pQVar28 != -1) {
      if (*(int *)pQVar28 != 0) {
        LOCK();
        *(int *)pQVar28 = *(int *)pQVar28 + -1;
        local_49 = *(int *)pQVar28 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fac08;
      }
      QArrayData::deallocate(pQVar28,2,8);
    }
LAB_1009fac08:
    if (*(int *)pQVar27 != -1) {
      if (*(int *)pQVar27 != 0) {
        LOCK();
        *(int *)pQVar27 = *(int *)pQVar27 + -1;
        local_49 = *(int *)pQVar27 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fac3a;
      }
      QArrayData::deallocate(pQVar27,2,8);
    }
LAB_1009fac3a:
    if (*(int *)pQVar26 != -1) {
      if (*(int *)pQVar26 != 0) {
        LOCK();
        *(int *)pQVar26 = *(int *)pQVar26 + -1;
        local_49 = *(int *)pQVar26 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fac70;
      }
      QArrayData::deallocate(pQVar26,2,8);
    }
LAB_1009fac70:
    if (*(int *)pQVar25 != -1) {
      if (*(int *)pQVar25 != 0) {
        LOCK();
        *(int *)pQVar25 = *(int *)pQVar25 + -1;
        local_49 = *(int *)pQVar25 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fac9f;
      }
      QArrayData::deallocate(pQVar25,2,8);
    }
LAB_1009fac9f:
    if (*(int *)pQVar24 != -1) {
      if (*(int *)pQVar24 != 0) {
        LOCK();
        *(int *)pQVar24 = *(int *)pQVar24 + -1;
        local_49 = *(int *)pQVar24 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009facce;
      }
      QArrayData::deallocate(pQVar24,2,8);
    }
LAB_1009facce:
    if (*(int *)pQVar23 != -1) {
      if (*(int *)pQVar23 != 0) {
        LOCK();
        *(int *)pQVar23 = *(int *)pQVar23 + -1;
        local_49 = *(int *)pQVar23 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009facfd;
      }
      QArrayData::deallocate(pQVar23,2,8);
    }
LAB_1009facfd:
    if (*(int *)pQVar22 != -1) {
      if (*(int *)pQVar22 != 0) {
        LOCK();
        *(int *)pQVar22 = *(int *)pQVar22 + -1;
        local_49 = *(int *)pQVar22 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fad2c;
      }
      QArrayData::deallocate(pQVar22,2,8);
    }
LAB_1009fad2c:
    if (*(int *)pQVar21 != -1) {
      if (*(int *)pQVar21 != 0) {
        LOCK();
        *(int *)pQVar21 = *(int *)pQVar21 + -1;
        local_49 = *(int *)pQVar21 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fad5b;
      }
      QArrayData::deallocate(pQVar21,2,8);
    }
LAB_1009fad5b:
    if (*(int *)pQVar20 != -1) {
      if (*(int *)pQVar20 != 0) {
        LOCK();
        *(int *)pQVar20 = *(int *)pQVar20 + -1;
        local_49 = *(int *)pQVar20 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fad8a;
      }
      QArrayData::deallocate(pQVar20,2,8);
    }
LAB_1009fad8a:
    if (*(int *)pQVar19 != -1) {
      if (*(int *)pQVar19 != 0) {
        LOCK();
        *(int *)pQVar19 = *(int *)pQVar19 + -1;
        local_49 = *(int *)pQVar19 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fadb9;
      }
      QArrayData::deallocate(pQVar19,2,8);
    }
LAB_1009fadb9:
    if (*(int *)pQVar18 != -1) {
      if (*(int *)pQVar18 != 0) {
        LOCK();
        *(int *)pQVar18 = *(int *)pQVar18 + -1;
        local_49 = *(int *)pQVar18 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fade8;
      }
      QArrayData::deallocate(pQVar18,2,8);
    }
LAB_1009fade8:
    if (*(int *)pQVar17 != -1) {
      if (*(int *)pQVar17 != 0) {
        LOCK();
        *(int *)pQVar17 = *(int *)pQVar17 + -1;
        local_49 = *(int *)pQVar17 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fae17;
      }
      QArrayData::deallocate(pQVar17,2,8);
    }
LAB_1009fae17:
    if (*(int *)pQVar16 != -1) {
      if (*(int *)pQVar16 != 0) {
        LOCK();
        *(int *)pQVar16 = *(int *)pQVar16 + -1;
        local_49 = *(int *)pQVar16 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fae46;
      }
      QArrayData::deallocate(pQVar16,2,8);
    }
LAB_1009fae46:
    if (*(int *)pQVar15 != -1) {
      if (*(int *)pQVar15 != 0) {
        LOCK();
        *(int *)pQVar15 = *(int *)pQVar15 + -1;
        local_49 = *(int *)pQVar15 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fae75;
      }
      QArrayData::deallocate(pQVar15,2,8);
    }
LAB_1009fae75:
    if (*(int *)pQVar14 != -1) {
      if (*(int *)pQVar14 != 0) {
        LOCK();
        *(int *)pQVar14 = *(int *)pQVar14 + -1;
        local_49 = *(int *)pQVar14 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009faea4;
      }
      QArrayData::deallocate(pQVar14,2,8);
    }
LAB_1009faea4:
    if (*(int *)pQVar13 != -1) {
      if (*(int *)pQVar13 != 0) {
        LOCK();
        *(int *)pQVar13 = *(int *)pQVar13 + -1;
        local_49 = *(int *)pQVar13 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009faed3;
      }
      QArrayData::deallocate(pQVar13,2,8);
    }
LAB_1009faed3:
    if (*(int *)pQVar12 != -1) {
      if (*(int *)pQVar12 != 0) {
        LOCK();
        *(int *)pQVar12 = *(int *)pQVar12 + -1;
        local_49 = *(int *)pQVar12 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009faf02;
      }
      QArrayData::deallocate(pQVar12,2,8);
    }
LAB_1009faf02:
    if (*(int *)pQVar11 != -1) {
      if (*(int *)pQVar11 != 0) {
        LOCK();
        *(int *)pQVar11 = *(int *)pQVar11 + -1;
        local_49 = *(int *)pQVar11 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009faf31;
      }
      QArrayData::deallocate(pQVar11,2,8);
    }
LAB_1009faf31:
    if (*(int *)pQVar10 != -1) {
      if (*(int *)pQVar10 != 0) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_49 = *(int *)pQVar10 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009faf60;
      }
      QArrayData::deallocate(pQVar10,2,8);
    }
LAB_1009faf60:
    if (*(int *)pQVar9 != -1) {
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_49 = *(int *)pQVar9 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009faf8f;
      }
      QArrayData::deallocate(pQVar9,2,8);
    }
LAB_1009faf8f:
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_49 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fafbe;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
LAB_1009fafbe:
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_49 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fafed;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
LAB_1009fafed:
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_49 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fb01c;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
LAB_1009fb01c:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_49 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009fb04b;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_1009fb04b:
  puVar29 = (uint *)*param_1;
  lVar30 = 0;
  if ((int)puVar29[2] < (int)puVar29[3]) {
    do {
      if (1 < *puVar29) {
        FUN_100036c40(param_1,puVar29[1]);
        puVar29 = (uint *)*param_1;
      }
      QString::append((QString *)(puVar29 + ((int)puVar29[2] + lVar30) * 2 + 4));
      lVar30 = lVar30 + 1;
      puVar29 = (uint *)*param_1;
    } while (lVar30 < (long)(int)puVar29[3] - (long)(int)puVar29[2]);
  }
  if (param_3 == '\0') goto LAB_1009fb21c;
  local_158 = (QArrayData *)QString::fromAscii_helper("%1%2",4);
  puVar1 = PTR_s_LowMemory_102280a50;
  iVar3 = -1;
  if (PTR_s_LowMemory_102280a50 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_LowMemory_102280a50);
    iVar3 = (int)sVar4;
  }
  local_160 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
  local_168 = (QArrayData *)QString::fromAscii_helper("*.log",5);
  local_48 = &local_160;
  local_40 = &local_168;
  QString::multiArg((int)&local_150,(QString **)&local_158);
  FUN_1000341d0(param_1,&local_150);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_49 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1009fb17a;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_1009fb17a:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_49 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1009fb1b0;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1009fb1b0:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_49 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1009fb1e6;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1009fb1e6:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_49 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1009fb21c;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1009fb21c:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

