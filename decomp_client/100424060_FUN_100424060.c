
undefined8 FUN_100424060(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QString local_40;
  undefined1 local_31;
  
  iVar3 = CPrlFileDevSelectorWidget::getCurrentItemType();
  uVar7 = 0;
  if (iVar3 == 1) {
    return 0;
  }
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  if (((*(long *)(param_1 + 0x90) != 0) && (*(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) &&
     (*(long *)(param_1 + 0x98) != 0)) {
    lVar4 = FUN_10015a340();
    plVar1 = *(long **)(lVar4 + 0x150);
    local_60 = (Data *)*plVar1;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_60);
        lVar5 = (long)*(int *)(local_60 + 8);
        lVar4 = *plVar1;
        if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_60 + lVar5 * 8) &&
           (lVar6 = *(int *)(local_60 + 0xc) - lVar5,
           lVar6 != 0 && lVar5 <= *(int *)(local_60 + 0xc))) {
          _memcpy(local_60 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
    local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
    if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
      iVar3 = 1;
      do {
        local_48 = 1;
        uVar7 = *(undefined8 *)local_58;
        CHwHardDisk::getDeviceId();
        cVar2 = operator==(&local_40,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004241bb;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_1004241bb:
        if (cVar2 != '\0') goto LAB_1004241de;
        local_58 = local_58 + 8;
      } while (local_58 != local_50);
    }
    local_48 = 1;
    iVar3 = 2;
LAB_1004241de:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100424204;
      }
      QListData::dispose(local_60);
    }
LAB_100424204:
    if (iVar3 != 2) goto LAB_10042420d;
  }
  uVar7 = 0;
LAB_10042420d:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar7;
}

