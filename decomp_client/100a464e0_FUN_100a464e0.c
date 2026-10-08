
undefined8 FUN_100a464e0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_R12;
  QArrayData *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a4655b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a4655b:
  uVar2 = FUN_100152280();
  FUN_100154b10(&local_50,uVar2);
  local_70 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_70);
      lVar3 = (long)*(int *)(local_70 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_70 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_70 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar3 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  iVar1 = 2;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      uVar2 = *(undefined8 *)local_68;
      FUN_10018d860(&local_78,uVar2);
      iVar1 = QString::compare(&local_78,&local_48,1);
      if (iVar1 == 0) {
        unaff_R12 = uVar2;
      }
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a46668;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100a46668:
      if (iVar1 == 0) {
        iVar1 = 1;
        goto LAB_100a46692;
      }
      local_68 = local_68 + 8;
      local_58 = 1;
    } while (local_68 != local_60);
    iVar1 = 2;
  }
LAB_100a46692:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a466b8;
    }
    QListData::dispose(local_70);
  }
LAB_100a466b8:
  if (iVar1 == 2) {
    unaff_R12 = 0;
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a466e7;
    }
    QListData::dispose(local_50);
  }
LAB_100a466e7:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return unaff_R12;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return unaff_R12;
}

