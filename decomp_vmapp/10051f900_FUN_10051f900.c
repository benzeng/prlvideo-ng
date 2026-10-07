
undefined8 FUN_10051f900(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  CVmEventParameter *pCVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  char *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  long *local_158;
  string local_150;
  undefined1 local_14f [15];
  undefined1 *local_140;
  string local_138;
  undefined1 local_137 [15];
  undefined1 *local_128;
  string local_120;
  undefined1 local_11f [15];
  undefined1 *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  CVmEventParameter *local_f8;
  undefined8 local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  CVmEventParameter *local_d8;
  string local_d0 [24];
  long *local_b8;
  undefined1 local_b0 [16];
  int local_a0;
  long *local_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  undefined8 *local_78;
  long local_70;
  long local_68 [2];
  undefined1 local_58 [16];
  int local_48;
  undefined1 local_31;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getTimeSync();
  cVar2 = CVmToolsTimeSync::isEnabled();
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = CVmToolsTimeSync::isSyncHostToGuest();
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = CVmToolsTimeSync::isKeepTimeDiff();
  if (cVar2 != '\0') {
    return 0;
  }
  if (*(short *)(param_2 + 0x16) == 0) {
    return 0xf0000003;
  }
  lVar3 = FUN_1002a6120(param_2,0,1);
  if (lVar3 == 0) {
    return 0xf0000003;
  }
  if (*(uint *)(lVar3 + 8) < 0x30) {
    return 0xf0000009;
  }
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_100522ad0(local_58);
  uVar4 = FUN_1002a6120(param_2,0,0);
  FUN_1002a5990(uVar4,0,local_68);
  FUN_1007eb1f0(&local_70);
  local_88 = (undefined8 *)0x0;
  puStack_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  cVar2 = CVmToolsTimeSync::isSyncTimezoneDisabled();
  if ((cVar2 == '\0') && (cVar2 = FUN_100522c50(local_58), cVar2 != '\0')) {
    FUN_100520ea0(&local_90);
    FUN_100522ad0();
    plVar7 = (long *)0x0;
    if (local_90 != (long *)0x0) {
      plVar7 = (long *)local_90[2];
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,local_b0,local_68);
    if ((local_a0 != local_48) && (1 < *(ushort *)(param_2 + 0x16))) {
      lVar3 = FUN_1002a6120(param_2,1,0);
      uVar4 = FUN_1007eaf60();
      uVar9 = *(uint *)(lVar3 + 8);
      uVar10 = (ulong)uVar9;
      iVar8 = 0;
      pcVar12 = (char *)0x0;
      if (uVar10 != 0) {
        pcVar12 = operator_new(uVar10);
        ___bzero(pcVar12,uVar10);
        iVar8 = (int)pcVar12 + uVar9;
      }
      FUN_1002a5990(lVar3,0,pcVar12,iVar8 - (int)pcVar12);
      _strlen(pcVar12);
      std::string::__init((char *)local_d0,(ulong)pcVar12);
      FUN_100521a50(&local_b8,local_68,local_58,local_d0);
      plVar7 = local_90;
      if (local_b8 != (long *)0x0) {
        LOCK();
        *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
        UNLOCK();
      }
      local_90 = local_b8;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      if (local_b8 != (long *)0x0) {
        LOCK();
        plVar7 = local_b8 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      std::string::~string(local_d0);
      if ((local_90 == (long *)0x0) || (local_90[2] == 0)) {
        FUN_1008e3970("[TIMESYNC-HOST]","TimeSynchronizationHost",0,
                      "Can\'t determine timezone for %i bias (%s)",local_48,pcVar12);
      }
      else {
        if (1 < DAT_1011b55f8) {
          pbVar5 = (byte *)FUN_100521390();
          if ((*pbVar5 & 1) == 0) {
            pbVar5 = pbVar5 + 1;
          }
          else {
            pbVar5 = *(byte **)(pbVar5 + 0x10);
          }
          FUN_1008e3970("[TIMESYNC-HOST]","TimeSynchronizationHost",2,"Best fit for %s: \'%s\'",
                        pcVar12,pbVar5);
        }
        pCVar6 = operator_new(0xd0);
        lVar3 = 0;
        if (local_90 != (long *)0x0) {
          lVar3 = local_90[2];
        }
        pbVar5 = (byte *)FUN_100521390(lVar3);
        if ((*pbVar5 & 1) == 0) {
          pbVar11 = pbVar5 + 1;
          uVar9 = (uint)(*pbVar5 >> 1);
        }
        else {
          uVar9 = (uint)*(undefined8 *)(pbVar5 + 8);
          pbVar11 = *(byte **)(pbVar5 + 0x10);
        }
        if ((pbVar11 != (byte *)0x0) && (uVar9 == 0xffffffff)) {
          _strlen((char *)pbVar11);
        }
        QString::fromUtf8_helper((char *)&local_e0,(int)pbVar11);
        local_e8 = (QArrayData *)QString::fromAscii_helper("vm_settime_timezone",0x13);
        CVmEventParameter::CVmEventParameter(pCVar6,1,&local_e0);
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10051fcc6;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_10051fcc6:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10051fcfc;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_10051fcfc:
        local_d8 = pCVar6;
        if (puStack_80 == local_78) {
          FUN_10002da50(&local_88,&local_d8);
        }
        else {
          *puStack_80 = pCVar6;
          puStack_80 = puStack_80 + 1;
        }
      }
      local_f0 = FUN_1007eaf60();
      lVar3 = FUN_1007eaf70(&local_f0,uVar4);
      local_68[0] = local_68[0] + lVar3;
      if (pcVar12 != (char *)0x0) {
        operator_delete(pcVar12);
      }
    }
    if (local_90 != (long *)0x0) {
      LOCK();
      plVar7 = local_90 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
  }
  lVar3 = local_68[0];
  lVar13 = local_70 - local_68[0];
  if (lVar13 + 1000U < 0x7d1) goto LAB_10051ff80;
  pCVar6 = operator_new(0xd0);
  QString::number((longlong)&local_100,(int)lVar3);
  local_108 = (QArrayData *)QString::fromAscii_helper("vm_settime_date_time",0x14);
  CVmEventParameter::CVmEventParameter(pCVar6,0x10,&local_100);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10051fe24;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10051fe24:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10051fe5a;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10051fe5a:
  local_f8 = pCVar6;
  if (puStack_80 == local_78) {
    FUN_10002da50(&local_88,&local_f8);
  }
  else {
    *puStack_80 = pCVar6;
    puStack_80 = puStack_80 + 1;
  }
  if (1 < DAT_1011b55f8) {
    FUN_100522d60(&local_120,&local_70,1);
    puVar14 = local_110;
    if (((byte)local_120 & 1) == 0) {
      puVar14 = local_11f;
    }
    FUN_100522d60(&local_138,local_68,1);
    if (((byte)local_138 & 1) == 0) {
      local_128 = local_137;
    }
    FUN_100522d60(&local_150,local_68,1);
    if (((byte)local_150 & 1) == 0) {
      local_140 = local_14f;
    }
    FUN_1008e3970("[TIMESYNC-HOST]","TimeSynchronizationHost",2,
                  "Host time %s, guest time %s diff %lli ms applied, time set to %s",puVar14,
                  local_128,lVar13,local_140);
    std::string::~string(&local_150);
    std::string::~string(&local_138);
    std::string::~string(&local_120);
  }
LAB_10051ff80:
  uVar4 = DAT_1011c3650;
  if (local_88 != puStack_80) {
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_158 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_100bef0d0;
      local_158 = plVar7;
    }
    FUN_100063770(uVar4,0x186e8,0,&local_88,0xbbb,&local_158);
    if (local_158 != (long *)0x0) {
      LOCK();
      plVar7 = local_158 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_158 + 0x10))();
      }
    }
  }
  if (local_88 != (undefined8 *)0x0) {
    if (puStack_80 != local_88) {
      puStack_80 = (undefined8 *)
                   ((~((long)puStack_80 + (-8 - (long)local_88)) & 0xfffffffffffffff8U) +
                   (long)puStack_80);
    }
    operator_delete(local_88);
  }
  return 0;
}

