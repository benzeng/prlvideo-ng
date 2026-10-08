
void FUN_1007c8710(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  QString local_58;
  QString local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  lVar3 = CVmConfiguration::getVmHardwareList();
  local_40 = *(Data **)(lVar3 + 0x1d0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar4 = (long)*(int *)(local_40 + 8);
      lVar3 = *(long *)(lVar3 + 0x1d0);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_40 + lVar4 * 8) &&
         (lVar6 = *(int *)(local_40 + 0xc) - lVar4, lVar6 != 0 && lVar4 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  lVar3 = CVmConfiguration::getVmHardwareList();
  local_48 = *(Data **)(lVar3 + 0x1d0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar4 = (long)*(int *)(local_48 + 8);
      lVar3 = *(long *)(lVar3 + 0x1d0);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_48 + lVar4 * 8) &&
         (lVar6 = *(int *)(local_48 + 0xc) - lVar4, lVar6 != 0 && lVar4 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  uVar1 = *(uint *)(local_40 + 8);
  uVar5 = (ulong)uVar1;
  if (*(int *)(local_40 + 0xc) - uVar1 == *(int *)(local_48 + 0xc) - *(int *)(local_48 + 8)) {
    if ((int)uVar1 < *(int *)(local_40 + 0xc)) {
      lVar3 = 0;
      bVar7 = false;
      do {
        CBaseNode::toString(SUB81(&local_50,0),
                            (bool)((char)*(undefined8 *)(local_40 + ((int)uVar5 + lVar3) * 8 + 0x10)
                                  + '\x10'));
        cVar2 = '\0';
        if (lVar3 < (long)*(int *)(local_48 + 0xc) - (long)*(int *)(local_48 + 8)) {
          cVar2 = (char)*(undefined8 *)(local_48 + (*(int *)(local_48 + 8) + lVar3) * 8 + 0x10);
        }
        CBaseNode::toString(SUB81(&local_58,0),(bool)(cVar2 + '\x10'));
        cVar2 = operator==(&local_50,&local_58);
        if (cVar2 == '\0') {
          bVar7 = true;
        }
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c88e0;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_1007c88e0:
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c8910;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_1007c8910:
        if (cVar2 == '\0') break;
        lVar3 = lVar3 + 1;
        uVar5 = (ulong)*(int *)(local_40 + 8);
      } while (lVar3 < (long)((long)*(int *)(local_40 + 0xc) - uVar5));
      if (bVar7) goto LAB_1007c8939;
    }
  }
  else {
LAB_1007c8939:
    FUN_1007c84b0(param_1);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c8967;
    }
    QListData::dispose(local_48);
  }
LAB_1007c8967:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

