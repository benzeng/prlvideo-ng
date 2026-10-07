
undefined8 FUN_10048eee0(long *param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 unaff_R13;
  bool bVar9;
  QString local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QString local_40;
  undefined1 local_31;
  
  CVmDevice::getSystemName();
  iVar4 = CVmDevice::getIndex();
  local_60 = (Data *)*param_1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar6 = (long)*(int *)(local_60 + 8);
      lVar1 = *param_1;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_60 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_60 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar6 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar7 * 8);
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
    iVar8 = 1;
    do {
      local_48 = 1;
      unaff_R13 = *(undefined8 *)local_58;
      if (*(int *)(local_40.field0_0x0 + 4) == 0) {
        bVar2 = false;
LAB_10048efe2:
        iVar5 = CVmDevice::getIndex();
        bVar9 = iVar4 == iVar5;
        if (bVar2) goto LAB_10048eff6;
      }
      else {
        CVmDevice::getSystemName();
        cVar3 = operator==(&local_40,&local_68);
        bVar9 = true;
        bVar2 = true;
        if (cVar3 == '\0') goto LAB_10048efe2;
LAB_10048eff6:
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048f026;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
      }
LAB_10048f026:
      if (bVar9) goto LAB_10048f04d;
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  iVar8 = 2;
LAB_10048f04d:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048f073;
    }
    QListData::dispose(local_60);
  }
LAB_10048f073:
  if (iVar8 == 2) {
    unaff_R13 = 0;
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return unaff_R13;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return unaff_R13;
}

