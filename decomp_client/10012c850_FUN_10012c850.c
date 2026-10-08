
undefined8 * FUN_10012c850(undefined8 *param_1,long param_2,int param_3,long param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  CVmHardware *pCVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  CVmHardware local_270 [520];
  QArrayData *local_68;
  long *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  plVar1 = *(long **)(param_2 + 0x198);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar4 = *plVar1;
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      plVar1 = *(long **)local_50;
      local_60 = plVar1;
      iVar2 = CHwGenericPciDevice::getType();
      if (iVar2 == param_3) {
        if (param_4 != 0 && param_5 != 0) {
          (**(code **)(*plVar1 + 0xb8))(&local_68,plVar1);
          pCVar3 = (CVmHardware *)CVmConfiguration::getVmHardwareList();
          CVmHardware::CVmHardware(local_270,pCVar3);
          lVar4 = FUN_10012cb20(&local_68,local_270,0,0);
          CVmHardware::~CVmHardware(local_270);
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10012c9d6;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_10012c9d6:
          if ((lVar4 != 0) && (lVar4 != param_5)) goto LAB_10012ca00;
        }
        FUN_10012ef30(param_1,&local_60);
      }
LAB_10012ca00:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return param_1;
}

