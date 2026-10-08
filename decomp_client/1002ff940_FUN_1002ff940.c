
undefined8 FUN_1002ff940(long param_1)

{
  int iVar1;
  Data *pDVar2;
  void *pvVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  QArrayData *local_58;
  QString local_50;
  undefined4 local_48 [2];
  QString local_40;
  Data *local_38;
  undefined1 local_29;
  
  local_48[0] = 0xffff;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0) {
    local_58 = (QArrayData *)QString::fromAscii_helper("%1/Contents/MacOS",0x11);
    QString::arg(&local_50,&local_58,param_1 + 0x20,0,0x20);
    QString::operator=(&local_40,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_29 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002ff9eb;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1002ff9eb:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002ffa1b;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_1002ffa1b:
  if (DAT_102310920 == (void *)0x0) {
    pvVar3 = operator_new(0x50);
    FUN_1001d1080(pvVar3);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar3;
  }
  FUN_1001d1570(DAT_102310920,local_48);
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ffae1;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar6 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_1002ffac0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_1002ffac0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1002ffae1:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return 0x80000013;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return 0x80000013;
}

