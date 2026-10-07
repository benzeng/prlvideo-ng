
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10051f580(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 local_99;
  long local_98;
  string local_90;
  undefined1 local_8f [15];
  undefined1 *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  
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
  local_68 = 0;
  lStack_60 = 0;
  FUN_100522ad0(&local_58);
  uVar4 = FUN_1002a6120(param_2,0,1);
  FUN_1002a5990(uVar4,0,&local_68,0x30);
  FUN_1007eb1f0(&local_70);
  local_68 = local_70;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getTimeSync();
  cVar2 = CVmToolsTimeSync::isSyncTimezoneDisabled();
  if (cVar2 == '\0') {
    FUN_100520ea0(&local_78);
    plVar7 = local_78;
    if (local_78 != (long *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      if (local_78 != (long *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
      plVar1 = (long *)local_78[2];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,&local_68);
        goto LAB_10051f6d8;
      }
    }
    local_58 = (undefined4)DAT_100b5a890;
    uStack_54 = DAT_100b5a890._4_4_;
    uStack_50 = _UNK_100b5a898;
    uStack_4c = _UNK_100b5a89c;
    local_44 = 0;
    local_48 = 0;
  }
  else {
    local_58 = (undefined4)DAT_100b5a890;
    uStack_54 = DAT_100b5a890._4_4_;
    uStack_50 = _UNK_100b5a898;
    uStack_4c = _UNK_100b5a89c;
    plVar7 = (long *)0x0;
  }
LAB_10051f6d8:
  if (((*param_1 != 0) && (lVar3 = FUN_10051f490(), lVar3 != 0)) &&
     (lStack_60 = lStack_60 - lVar3, 1 < DAT_1011b55f8)) {
    local_98 = lStack_60;
    FUN_100522eb0(&local_90,&local_98);
    if (((byte)local_90 & 1) == 0) {
      local_80 = local_8f;
    }
    FUN_1008e3970("[TIMESYNC-HOST]","TimeSynchronizationHost",2,"Full shift %s",local_80);
    std::string::~string(&local_90);
  }
  uVar4 = FUN_1002a6120(param_2,0,1);
  FUN_1002a5a50(uVar4,0,&local_68,0x30);
  local_99 = 0;
  uVar8 = 0;
  if (plVar7 != (long *)0x0) {
    uVar8 = 0;
    if ((long *)plVar7[2] != (long *)0x0) {
      pbVar5 = (byte *)(**(code **)(*(long *)plVar7[2] + 0x10))();
      if ((*pbVar5 & 1) == 0) {
        uVar6 = (ulong)(*pbVar5 >> 1);
      }
      else {
        uVar6 = *(ulong *)(pbVar5 + 8);
      }
      uVar8 = 0x1ff;
      if (uVar6 < 0x200) {
        uVar8 = uVar6;
      }
      uVar4 = FUN_1002a6120(param_2,1,1);
      pbVar5 = (byte *)(**(code **)(*(long *)plVar7[2] + 0x10))();
      if ((*pbVar5 & 1) == 0) {
        pbVar5 = pbVar5 + 1;
      }
      else {
        pbVar5 = *(byte **)(pbVar5 + 0x10);
      }
      FUN_1002a5a50(uVar4,0,pbVar5,uVar8 & 0xffffffff);
    }
  }
  uVar4 = FUN_1002a6120(param_2,1,1);
  FUN_1002a5a50(uVar4,uVar8,&local_99,1);
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  return 0;
}

