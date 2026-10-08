
void FUN_10018b760(undefined8 param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  uVar7 = 0;
  do {
    lVar4 = CVmConfiguration::getVmHardwareList();
    plVar1 = *(long **)(lVar4 + 0xa8 + uVar7 * 8);
    if (plVar1 != (long *)0x0) {
      local_58 = (Data *)*plVar1;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 == 0) {
          QListData::detach((int)&local_58);
          lVar5 = (long)*(int *)(local_58 + 8);
          lVar4 = *plVar1;
          if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_58 + lVar5 * 8) &&
             (lVar6 = *(int *)(local_58 + 0xc) - lVar5,
             lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))) {
            _memcpy(local_58 + lVar5 * 8 + 0x10,
                    (void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),lVar6 * 8);
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
          uVar2 = (**(code **)(**(long **)local_50 + 0x68))(*(long **)local_50);
          uVar3 = CVmDevice::getIndex();
          FUN_10018ef80(param_1,uVar2,uVar3);
          local_50 = local_50 + 8;
        } while (local_50 != local_48);
      }
      local_40 = 1;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10018b896;
        }
        QListData::dispose(local_58);
      }
    }
LAB_10018b896:
    uVar7 = uVar7 + 1;
    if (0x16 < uVar7) {
      return;
    }
  } while( true );
}

