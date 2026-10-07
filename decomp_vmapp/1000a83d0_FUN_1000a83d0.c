
undefined1 FUN_1000a83d0(long param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_58 [31];
  undefined1 local_39;
  ulong local_38;
  
  QMutex::lock();
  if (*(char *)(param_1 + 0x1ab8) != '\0') {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","false == m_bVMInited",
                  "VirtualPC.cpp",0x56c,"InitAllPrepare");
  }
  uVar3 = FUN_1007da300("vm.debug_wait",0);
  QTime::start();
  QTime::start();
  CDispCommonPreferences::getDebug();
  cVar1 = CDspDebug::isVerboseLogEnabled();
  if (cVar1 != '\0') {
    FUN_10006a060(local_58);
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmName();
    local_68 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
    FUN_10006a690(local_58,&local_60,&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_39 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_1000a8500;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1000a8500:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_39 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_39) goto LAB_1000a8530;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1000a8530:
    local_88 = (void *)0x0;
    pvStack_80 = (void *)0x0;
    local_78 = 0;
    FUN_1000648b0(DAT_1011c3650,0x1ef,&local_88,local_58);
    if (local_88 != (void *)0x0) {
      if (pvStack_80 != local_88) {
        pvStack_80 = (void *)((~((long)pvStack_80 + (-4 - (long)local_88)) & 0xfffffffffffffffcU) +
                             (long)pvStack_80);
      }
      operator_delete(local_88);
    }
    FUN_10006a680(local_58);
  }
  if (uVar3 != 0) {
    uVar3 = ~uVar3;
    while (uVar3 = uVar3 + 1, uVar3 != 0) {
      QThread::sleep(1);
    }
  }
  FUN_100078e20(*(undefined8 *)(param_1 + 0xf8));
  lVar6 = (**(code **)(**(long **)(param_1 + 0x1950) + 0x110))();
  *(long *)(param_1 + 0x1158) = lVar6;
  if (lVar6 == 0) {
    FUN_1008e3970("","vm",0,"mmsh base addr is NULL");
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_100408ff0(param_1 + 0x10b0,0xffffffff,&local_a8);
    puVar10 = &local_a8;
  }
  else {
    FUN_100258580();
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] driver open time is %u msecs",uVar4);
    QTime::start();
    iVar5 = FUN_10008e830(param_1);
    if (iVar5 == 0) {
      uVar2 = 0;
      goto LAB_1000a879c;
    }
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] VM validation time is %u msecs",uVar4);
    QTime::start();
    FUN_1000991b0(param_1 + 0x1a70);
    FUN_1000a3bf0(param_1);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    iVar5 = CVmRunTimeOptions::getOptimizePowerConsumptionMode();
    uVar3 = (uint)(iVar5 == 0);
    if (*(uint *)(param_1 + 0x1ac4) != uVar3) {
      FUN_1008e3970("","vm",0,"LW: enabled %d",uVar3);
      *(uint *)(param_1 + 0x1ac4) = (uint)(iVar5 == 0);
      FUN_1000ad0b0(param_1);
    }
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmRuntimeOptions();
    uVar2 = CVmRunTimeOptions::isEnableAdaptiveHypervisor();
    *(undefined1 *)(param_1 + 0x109ed) = uVar2;
    uVar7 = FUN_100097210(param_1);
    FUN_100095760(param_1,uVar7);
    lVar6 = param_1 + 0x10b0;
    cVar1 = FUN_100409070(lVar6);
    if (cVar1 != '\0') {
      FUN_100096710(param_1);
      uVar2 = 0;
      goto LAB_1000a879c;
    }
    uVar9 = *(ulong *)(param_1 + 0x1ab0);
    *(ulong *)(param_1 + 0x1ab0) = uVar9 | 1;
    if (*(int *)(param_1 + 0xb90) != 0) {
      *(ulong *)(param_1 + 0x1ab0) = uVar9 | 0x8001;
    }
    if (*(int *)(param_1 + 0xb60) == 0) {
      local_38 = 0x200;
      FUN_1002592b0(FUN_1000b4b40,&local_38);
      if (0x200 < local_38) {
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        FUN_100408ff0(lVar6,0x80000589,&local_c8);
        puVar10 = &local_c8;
        goto LAB_1000a8791;
      }
    }
    lVar8 = *(long *)(param_1 + 0x1938);
    if (lVar8 == 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",
                    0xbcb,"GetActiveVcpusMask");
      lVar8 = *(long *)(param_1 + 0x1938);
    }
    if (*(int *)(lVar8 + 0x3eb70) != 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","0 == GetActiveVcpusMask()",
                    "VirtualPC.cpp",0x5c5,"InitAllPrepare");
      lVar8 = *(long *)(param_1 + 0x1938);
    }
    if (lVar8 == 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",
                    0xbdd,"GetPausedVcpusMask");
      lVar8 = *(long *)(param_1 + 0x1938);
    }
    if (*(int *)(lVar8 + 0x3eb74) != 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","0 == GetPausedVcpusMask()",
                    "VirtualPC.cpp",0x5c6,"InitAllPrepare");
      lVar8 = *(long *)(param_1 + 0x1938);
    }
    if (lVar8 == 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pAsyncMem","VirtualPC.cpp",
                    0xbed,"GetFrozenVcpusMask");
      lVar8 = *(long *)(param_1 + 0x1938);
    }
    if (*(int *)(lVar8 + 0x3eb78) != 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","0 == GetFrozenVcpusMask()",
                    "VirtualPC.cpp",0x5c7,"InitAllPrepare");
    }
    FUN_1000c0170(param_1);
    uVar4 = QTime::elapsed();
    FUN_1008e3970("","vm",0,"[Profile] VM devices initialization time is %u msecs",uVar4);
    QTime::start();
    iVar5 = (**(code **)(**(long **)(param_1 + 0x1950) + 0x20))
                      (*(long **)(param_1 + 0x1950),param_1 + 0x140);
    if (iVar5 < 0) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      FUN_100408ff0(lVar6,iVar5,&local_e8);
      puVar10 = &local_e8;
    }
    else {
      *(byte *)(param_1 + 0x1ab1) = *(byte *)(param_1 + 0x1ab1) | 1;
      uVar4 = QTime::elapsed();
      FUN_1008e3970("","vm",0,"[Profile] Monitor loading time is %u msecs",uVar4);
      QTime::start();
      iVar5 = FUN_1000a6730(param_1);
      if (iVar5 == 0) {
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        FUN_100408ff0(lVar6,0x80000196,&local_108);
        puVar10 = &local_108;
      }
      else {
        uVar4 = QTime::elapsed();
        FUN_1008e3970("","vm",0,"[Profile] Buffers allocation time is %u msecs",uVar4);
        QTime::start();
        iVar5 = (**(code **)(**(long **)(param_1 + 0x1950) + 0x28))
                          (*(long **)(param_1 + 0x1950),param_2);
        if (iVar5 < 0) {
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          FUN_100408ff0(lVar6,iVar5,&local_128);
          puVar10 = &local_128;
        }
        else {
          uVar4 = QTime::elapsed();
          FUN_1008e3970("","vm",0,"[Profile] Monitor initialization time is %u msecs",uVar4);
          QTime::start();
          cVar1 = FUN_10008bdd0(*(undefined8 *)(param_1 + 0x1940),param_1);
          if (cVar1 != '\0') {
            if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 10) != 0) {
              uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x109c8) + 0x338);
              iVar5 = FUN_1007da300("vm.mem_prelock_all",0);
              if (iVar5 == 0) {
                _memcpy(*(void **)(param_1 + 0x1928),
                        *(void **)(*(long *)(param_1 + 0x109c8) + 0x348),uVar9);
              }
              else {
                _memset(*(void **)(param_1 + 0x1928),0xff,uVar9);
              }
            }
            uVar4 = QTime::elapsed();
            FUN_1008e3970("","vm",0,"[Profile] Memory initialization time is %u msecs",uVar4);
            CVmConfiguration::getVmSettings();
            CVmSettings::getVmRuntimeOptions();
            uVar4 = CVmRunTimeOptions::getResourceQuota();
            FUN_1000a9090(param_1,uVar4);
            uVar2 = 1;
            FUN_1000a7fb0(param_1);
            goto LAB_1000a879c;
          }
          local_148 = 0;
          uStack_140 = 0;
          local_138 = 0;
          FUN_100408ff0(lVar6,0x80000392,&local_148);
          puVar10 = &local_148;
        }
      }
    }
  }
LAB_1000a8791:
  FUN_10002d9d0(puVar10);
  uVar2 = 0;
LAB_1000a879c:
  QMutex::unlock();
  return uVar2;
}

