
byte FUN_10011a4a0(undefined8 param_1,int param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_2 < 8) {
    if (param_2 == 6) {
      uVar6 = FUN_100152280();
      CVmConfiguration::getVmIdentification();
      CVmIdentification::getVmUuid();
      lVar7 = FUN_1001547d0(uVar6,&local_38);
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          local_29 = *(int *)local_38 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10011a524;
        }
        QArrayData::deallocate(local_38,2,8);
      }
LAB_10011a524:
      if (lVar7 == 0) {
        bVar4 = 0;
      }
      else {
        cVar3 = FUN_1001754c0(lVar7,1);
        if (cVar3 == '\0') {
          bVar4 = 0;
        }
        else {
          bVar4 = FUN_10011a340(param_1,param_3);
        }
      }
      goto LAB_10011a699;
    }
  }
  else {
    bVar4 = 0;
    if (param_2 - 0x11U < 2) goto LAB_10011a699;
    if (param_2 != 8) {
      if (param_2 == 0x14) goto LAB_10011a699;
      goto LAB_10011a697;
    }
    lVar7 = CVmConfiguration::getVmHardwareList();
    local_58 = *(Data **)(lVar7 + 0x1d0);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 == 0) {
        QListData::detach((int)&local_58);
        lVar8 = (long)*(int *)(local_58 + 8);
        lVar1 = *(long *)(lVar7 + 0x1d0);
        lVar7 = (long)*(int *)(lVar1 + 8);
        if (((Data *)(lVar1 + lVar7 * 8) != local_58 + lVar8 * 8) &&
           (lVar9 = *(int *)(local_58 + 0xc) - lVar8,
           lVar9 != 0 && lVar8 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar8 * 8 + 0x10,(void *)(lVar1 + 0x10 + lVar7 * 8),lVar9 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
      }
    }
    bVar4 = (byte)lVar7;
    local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
    local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
    local_40 = 1;
    bVar2 = true;
    if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
      do {
        local_40 = 1;
        bVar4 = (byte)*(undefined8 *)local_50;
        iVar5 = CVmDevice::getIndex();
        if (iVar5 == param_3) {
          iVar5 = CVmDevice::getEmulatedType();
          bVar4 = iVar5 != 4;
          bVar2 = false;
          break;
        }
        local_50 = local_50 + 8;
        local_40 = 1;
      } while (local_50 != local_48);
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) goto LAB_10011a692;
        local_29 = 0;
      }
      QListData::dispose(local_58);
    }
LAB_10011a692:
    if (!bVar2) goto LAB_10011a699;
  }
LAB_10011a697:
  bVar4 = 1;
LAB_10011a699:
  return bVar4 & 1;
}

