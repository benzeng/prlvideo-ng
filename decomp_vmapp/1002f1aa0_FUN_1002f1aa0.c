
void FUN_1002f1aa0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  CVmGenericNetworkAdapter *pCVar8;
  CVmGenericNetworkAdapter local_210 [408];
  undefined1 local_78 [16];
  undefined *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined *local_58;
  undefined2 local_50;
  undefined1 local_48;
  char local_47;
  undefined *local_38;
  
  QMutex::lock();
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  QMutex::unlock();
  pCVar8 = (CVmGenericNetworkAdapter *)0x0;
  if (plVar2 != (long *)0x0) {
    pCVar8 = (CVmGenericNetworkAdapter *)0x0;
    if (plVar2[2] != 0) {
      pCVar8 = (CVmGenericNetworkAdapter *)
               ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
    }
  }
  uVar6 = CVmDevice::getEmulatedType();
  if (uVar6 < 2) {
    local_38 = PTR_shared_null_100ba2188;
    iVar7 = FUN_1006b3450(&local_38,0,0);
    if (iVar7 < 0) {
      FUN_1008e3970("","LocalDevices",0,
                    "[VMNET(%d) NetConfigChanged] Failed to create list of host network adapters: 0x%08x"
                    ,*(undefined4 *)(param_1 + 0x150),iVar7);
    }
    else {
      local_78._8_4_ = (int)PTR_shared_null_100ba20d0;
      local_78._0_8_ = PTR_shared_null_100ba20d0;
      local_78._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      local_68 = PTR_shared_null_100ba20d0;
      local_58 = PTR_shared_null_100ba20d0;
      local_60 = 0xffffffff;
      local_5c = 0;
      local_50 = 0xffff;
      local_48 = 0;
      local_47 = '\0';
      uVar3 = *(undefined8 *)(DAT_1011c3698 + 0x120);
      CVmGenericNetworkAdapter::CVmGenericNetworkAdapter(local_210,pCVar8);
      FUN_1006b9350(&local_38,uVar3,local_210,local_78);
      CVmGenericNetworkAdapter::~CVmGenericNetworkAdapter(local_210);
      if (*(char *)(param_1 + 0x1c3) != local_47) {
        FUN_1008e3970("","LocalDevices",0,"[VMNET(%d) NetConfigChanged] Reconnecting device",
                      *(undefined4 *)(param_1 + 0x150));
        cVar5 = FUN_100276c50(param_1,pCVar8,0);
        if (cVar5 == '\0') {
          FUN_100276ba0(param_1,0);
          FUN_10025b310(param_1 + 0x68,0);
        }
        else {
          cVar5 = FUN_100276c00(param_1);
          if (cVar5 != '\0') {
            FUN_100272c10();
          }
        }
      }
      FUN_10027a4b0(local_78);
    }
    FUN_10027a3f0(&local_38);
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  QMutex::unlock();
  return;
}

