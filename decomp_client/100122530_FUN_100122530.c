
void FUN_100122530(undefined8 param_1,uint param_2,int param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  int local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_10018c2b0();
  lVar4 = CVmConfiguration::getVmHardwareList();
  plVar1 = *(long **)(lVar4 + 0xa8 + (ulong)param_2 * 8);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      lVar4 = *plVar1;
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_58 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar7 * 8);
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
  lVar4 = 0;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    lVar4 = 0;
    do {
      local_40 = 1;
      lVar6 = *(long *)local_50;
      iVar2 = CVmClusteredDevice::getInterfaceType();
      if ((iVar2 == param_3) && (iVar2 = CVmClusteredDevice::getStackIndex(), iVar2 == param_4)) {
        lVar4 = lVar6;
      }
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
      if ((bool)local_31) goto LAB_10012265e;
    }
    QListData::dispose(local_58);
  }
LAB_10012265e:
  if (lVar4 == 0) {
    return;
  }
  uVar5 = FUN_10018f4e0(param_1);
  uVar3 = CVmDevice::getIndex();
  lVar4 = FUN_1007c65b0(uVar5,param_2,uVar3);
  if (lVar4 == 0) {
    return;
  }
  QWidget::actions();
  local_78 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_78);
      lVar4 = (long)*(int *)(local_78 + 8);
      if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_78 + lVar4 * 8) &&
         (lVar6 = *(int *)(local_78 + 0xc) - lVar4, lVar6 != 0 && lVar4 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar4 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
LAB_100122744:
      QListData::dispose(local_80);
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_100122744;
    }
    if (local_60 == 0) goto LAB_1001227a5;
  }
  if (local_70 != local_68) {
    do {
      lVar4 = QMetaObject::cast((QObject *)&PTR_PTR_10222d7a0);
      if ((lVar4 != 0) && (iVar2 = FUN_1007b57b0(lVar4), iVar2 == 5)) {
        QAction::activate(lVar4,0);
        break;
      }
      local_70 = local_70 + 8;
      local_60 = 1;
    } while (local_70 != local_68);
  }
LAB_1001227a5:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_78);
  }
  return;
}

