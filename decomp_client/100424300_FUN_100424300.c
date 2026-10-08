
CVmHardDisk * FUN_100424300(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  CVmHardDisk *this;
  int *piVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  QString QVar10;
  CVmHardDisk *pCVar11;
  uint uVar12;
  undefined8 *puVar13;
  int *piVar14;
  CVmHardDisk *local_98;
  QArrayData *local_80;
  QArrayData *local_78;
  Data *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  local_4c = param_2;
  local_68 = 0;
  uStack_60 = 0;
  lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10);
  lVar8 = 0;
  if (lVar4 == 0) {
LAB_10042437e:
    lVar6 = 0;
  }
  else {
    do {
      while (lVar6 = lVar4, iVar9 = *(int *)(lVar6 + 0x18), iVar9 < param_2) {
        lVar4 = *(long *)(lVar6 + 0x10);
        if (*(long *)(lVar6 + 0x10) == 0) {
          if (lVar8 == 0) goto LAB_10042437e;
          iVar9 = *(int *)(lVar8 + 0x18);
          lVar6 = lVar8;
          goto LAB_100424379;
        }
      }
      lVar4 = *(long *)(lVar6 + 8);
      lVar8 = lVar6;
    } while (*(long *)(lVar6 + 8) != 0);
LAB_100424379:
    if (param_2 < iVar9) goto LAB_10042437e;
  }
  puVar13 = &local_68;
  if (lVar6 != 0) {
    puVar13 = (undefined8 *)(lVar6 + 0x20);
  }
  piVar7 = (int *)*puVar13;
  local_98 = (CVmHardDisk *)puVar13[1];
  piVar14 = piVar7;
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if ((local_98 != (CVmHardDisk *)0x0) && (piVar7[1] != 0)) goto LAB_1004247da;
  }
  this = operator_new(0x158);
  pCVar11 = (CVmHardDisk *)0x0;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (pCVar11 = (CVmHardDisk *)0x0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
    pCVar11 = *(CVmHardDisk **)(param_1 + 0x70);
  }
  CVmHardDisk::CVmHardDisk(this,pCVar11);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  if (piVar7 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_31 = *piVar3 != 0;
      UNLOCK();
    }
    piVar14 = piVar3;
    local_98 = this;
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  uVar1 = (uint)local_98;
  uVar12 = 0;
  if ((piVar14 != (int *)0x0) && (uVar12 = 0, piVar14[1] != 0)) {
    uVar12 = uVar1;
  }
  CVmDevice::setEnabled(uVar12);
  if (param_2 == 2) {
    uVar12 = 0;
    if ((piVar14 != (int *)0x0) && (uVar12 = 0, piVar14[1] != 0)) {
      uVar12 = uVar1;
    }
    CVmDevice::setEmulatedType(uVar12);
    puVar2 = PTR_shared_null_1021e1288;
    QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((piVar14 != (int *)0x0) &&
       (QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0, piVar14[1] != 0)) {
      QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
    }
    CVmDevice::setSystemName(QVar10);
    if (*(int *)puVar2 != -1) {
      if (*(int *)puVar2 != 0) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + -1;
        local_31 = *(int *)puVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004244f2;
      }
      QArrayData::deallocate((QArrayData *)puVar2,2,8);
    }
LAB_1004244f2:
    QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    if ((piVar14 != (int *)0x0) &&
       (QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0, piVar14[1] != 0)) {
      QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
    }
    CVmDevice::setUserFriendlyName(QVar10);
    if (*(int *)puVar2 != -1) {
      if (*(int *)puVar2 != 0) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + -1;
        local_31 = *(int *)puVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004246fd;
      }
      QArrayData::deallocate((QArrayData *)puVar2,2,8);
    }
  }
  else if (param_2 == 3) {
    uVar12 = 0;
    if ((piVar14 != (int *)0x0) && (uVar12 = 0, piVar14[1] != 0)) {
      uVar12 = uVar1;
    }
    CVmDevice::setEmulatedType(uVar12);
    lVar4 = CPrlFileDevSelectorWidget::getFileDevSelector();
    local_70 = *(Data **)(lVar4 + 0x30);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 == 0) {
        QListData::detach((int)&local_70);
        lVar8 = (long)*(int *)(local_70 + 8);
        lVar4 = *(long *)(lVar4 + 0x30);
        if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_70 + lVar8 * 8) &&
           (lVar6 = *(int *)(local_70 + 0xc) - lVar8,
           lVar6 != 0 && lVar8 <= *(int *)(local_70 + 0xc))) {
          _memcpy(local_70 + lVar8 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8)
                  ,lVar6 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
      }
    }
    if (*(int *)(local_70 + 0xc) != *(int *)(local_70 + 8)) {
      QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
      if ((piVar14 != (int *)0x0) &&
         (QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0, piVar14[1] != 0)) {
        QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
      }
      CPrlFileDevSelectorItem::getSystemName();
      CVmDevice::setSystemName(QVar10);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10042466e;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10042466e:
      QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
      if ((piVar14 != (int *)0x0) &&
         (QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0, piVar14[1] != 0)) {
        QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_98;
      }
      CPrlFileDevSelectorItem::getUserFriendlyName();
      CVmDevice::setUserFriendlyName(QVar10);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004246d7;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    }
LAB_1004246d7:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004246fd;
      }
      QListData::dispose(local_70);
    }
  }
LAB_1004246fd:
  puVar13 = (undefined8 *)(param_1 + 0xa8);
  puVar5 = (uint *)*puVar13;
  if (1 < *puVar5) {
    FUN_100429950(puVar13);
    puVar5 = (uint *)*puVar13;
  }
  lVar4 = *(long *)(puVar5 + 4);
  lVar8 = 0;
  if (*(long *)(puVar5 + 4) == 0) {
LAB_10042476e:
    local_48 = 0;
    uStack_40 = 0;
    lVar6 = FUN_100429830(puVar13,&local_4c,&local_48);
  }
  else {
    do {
      while (lVar6 = lVar4, iVar9 = *(int *)(lVar6 + 0x18), iVar9 < param_2) {
        lVar4 = *(long *)(lVar6 + 0x10);
        if (*(long *)(lVar6 + 0x10) == 0) {
          if (lVar8 == 0) goto LAB_10042476e;
          iVar9 = *(int *)(lVar8 + 0x18);
          lVar6 = lVar8;
          goto LAB_100424769;
        }
      }
      lVar4 = *(long *)(lVar6 + 8);
      lVar8 = lVar6;
    } while (*(long *)(lVar6 + 8) != 0);
LAB_100424769:
    if (param_2 < iVar9) goto LAB_10042476e;
  }
  piVar7 = *(int **)(lVar6 + 0x20);
  if (piVar7 != piVar14) {
    if (piVar14 != (int *)0x0) {
      LOCK();
      *piVar14 = *piVar14 + 1;
      UNLOCK();
      piVar7 = *(int **)(lVar6 + 0x20);
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(lVar6 + 0x20) != (void *)0x0)) {
        operator_delete(*(void **)(lVar6 + 0x20));
      }
    }
    *(int **)(lVar6 + 0x20) = piVar14;
    *(CVmHardDisk **)(lVar6 + 0x28) = local_98;
  }
  if (piVar14 == (int *)0x0) {
    return (CVmHardDisk *)0x0;
  }
LAB_1004247da:
  pCVar11 = (CVmHardDisk *)0x0;
  if (piVar14[1] != 0) {
    pCVar11 = local_98;
  }
  LOCK();
  *piVar14 = *piVar14 + -1;
  local_31 = *piVar14 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    operator_delete(piVar14);
  }
  return pCVar11;
}

