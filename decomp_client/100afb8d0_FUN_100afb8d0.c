
void FUN_100afb8d0(long param_1)

{
  long lVar1;
  CHwGenericDevice *pCVar2;
  CHwGenericDevice *pCVar3;
  undefined8 *puVar4;
  uint *puVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  uint *local_40;
  undefined1 local_31;
  
  lVar1 = **(long **)(*(long *)(param_1 + 0x18) + 0x148);
  if (*(int *)(lVar1 + 0xc) == *(int *)(lVar1 + 8)) {
    local_40 = (uint *)PTR_shared_null_1021e15e8;
    FUN_100afa690(&local_40);
    FUN_100afade0(&local_40);
    if (1 < *local_40) {
      FUN_1001c4bd0(&local_40,local_40[1]);
    }
    puVar5 = local_40 + (long)(int)local_40[2] * 2 + 4;
    while( true ) {
      if (1 < *local_40) {
        FUN_1001c4bd0(&local_40,local_40[1]);
      }
      if (puVar5 == local_40 + (long)(int)local_40[3] * 2 + 4) break;
      pCVar2 = *(CHwGenericDevice **)(param_1 + 0x18);
      pCVar3 = operator_new(0xb8);
      puVar4 = *(undefined8 **)puVar5;
      local_48 = (QArrayData *)*puVar4;
      if (1 < *(int *)local_48 + 1U) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        puVar4 = *(undefined8 **)puVar5;
      }
      local_50 = (QArrayData *)puVar4[1];
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      CHwGenericDevice::CHwGenericDevice(pCVar3,5,&local_48,&local_50);
      CHostHardwareInfo::addOpticalDisk(pCVar2);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100afba0f;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100afba0f:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100afb940;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100afb940:
      puVar5 = puVar5 + 2;
    }
    if (*local_40 != 0xffffffff) {
      if (*local_40 != 0) {
        LOCK();
        *local_40 = *local_40 - 1;
        UNLOCK();
        if (*local_40 != 0) {
          return;
        }
        local_31 = 0;
      }
      FUN_1001c45d0(&local_40,local_40);
    }
  }
  return;
}

