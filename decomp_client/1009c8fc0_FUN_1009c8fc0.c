
undefined1 FUN_1009c8fc0(long *param_1,undefined8 param_2,QString *param_3,QString *param_4)

{
  QArrayData *pQVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  bool bVar10;
  QArrayData *local_90;
  QCryptographicHash local_88 [8];
  QString local_80;
  QString local_78;
  undefined *local_70;
  undefined *local_68;
  QArrayData *local_60;
  undefined *local_58;
  QArrayData *local_50;
  undefined *local_48;
  QArrayData *local_40;
  bool local_31;
  
  puVar2 = PTR_shared_null_1021e1288;
  local_48 = PTR_shared_null_1021e1288;
  lVar3 = *(long *)(*param_1 + 0x10);
  lVar7 = 0;
  if (*(long *)(*param_1 + 0x10) == 0) {
LAB_1009c903e:
    lVar8 = 0;
  }
  else {
    do {
      while (lVar8 = lVar3, iVar6 = *(int *)(lVar8 + 0x18), iVar6 < 2) {
        lVar3 = *(long *)(lVar8 + 0x10);
        if (*(long *)(lVar8 + 0x10) == 0) {
          if (lVar7 == 0) goto LAB_1009c903e;
          iVar6 = *(int *)(lVar7 + 0x18);
          lVar8 = lVar7;
          goto LAB_1009c9039;
        }
      }
      lVar3 = *(long *)(lVar8 + 8);
      lVar7 = lVar8;
    } while (*(long *)(lVar8 + 8) != 0);
LAB_1009c9039:
    if (2 < iVar6) goto LAB_1009c903e;
  }
  ppuVar9 = &local_48;
  if (lVar8 != 0) {
    ppuVar9 = (undefined **)(lVar8 + 0x20);
  }
  local_40 = (QArrayData *)*ppuVar9;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    UNLOCK();
    local_31 = *(int *)local_40 != 0;
  }
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      local_31 = *(int *)puVar2 != 0;
      if (*(int *)puVar2 != 0) goto LAB_1009c9098;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,1,8);
  }
LAB_1009c9098:
  local_58 = puVar2;
  lVar3 = *(long *)(*param_1 + 0x10);
  lVar7 = 0;
  if (*(long *)(*param_1 + 0x10) == 0) {
LAB_1009c90ee:
    lVar8 = 0;
  }
  else {
    do {
      while (lVar8 = lVar3, iVar6 = *(int *)(lVar8 + 0x18), iVar6 < 3) {
        lVar3 = *(long *)(lVar8 + 0x10);
        if (*(long *)(lVar8 + 0x10) == 0) {
          if (lVar7 == 0) goto LAB_1009c90ee;
          iVar6 = *(int *)(lVar7 + 0x18);
          lVar8 = lVar7;
          goto LAB_1009c90e9;
        }
      }
      lVar3 = *(long *)(lVar8 + 8);
      lVar7 = lVar8;
    } while (*(long *)(lVar8 + 8) != 0);
LAB_1009c90e9:
    if (3 < iVar6) goto LAB_1009c90ee;
  }
  ppuVar9 = &local_58;
  if (lVar8 != 0) {
    ppuVar9 = (undefined **)(lVar8 + 0x20);
  }
  local_50 = (QArrayData *)*ppuVar9;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    UNLOCK();
    local_31 = *(int *)local_50 != 0;
  }
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      local_31 = *(int *)puVar2 != 0;
      if (*(int *)puVar2 != 0) goto LAB_1009c9148;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,1,8);
  }
LAB_1009c9148:
  local_68 = puVar2;
  lVar3 = *(long *)(*param_1 + 0x10);
  lVar7 = 0;
  if (*(long *)(*param_1 + 0x10) == 0) {
LAB_1009c919e:
    lVar8 = 0;
  }
  else {
    do {
      while (lVar8 = lVar3, iVar6 = *(int *)(lVar8 + 0x18), iVar6 < 4) {
        lVar3 = *(long *)(lVar8 + 0x10);
        if (*(long *)(lVar8 + 0x10) == 0) {
          if (lVar7 == 0) goto LAB_1009c919e;
          iVar6 = *(int *)(lVar7 + 0x18);
          lVar8 = lVar7;
          goto LAB_1009c9199;
        }
      }
      lVar3 = *(long *)(lVar8 + 8);
      lVar7 = lVar8;
    } while (*(long *)(lVar8 + 8) != 0);
LAB_1009c9199:
    if (4 < iVar6) goto LAB_1009c919e;
  }
  ppuVar9 = &local_68;
  if (lVar8 != 0) {
    ppuVar9 = (undefined **)(lVar8 + 0x20);
  }
  local_60 = (QArrayData *)*ppuVar9;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    UNLOCK();
    local_31 = *(int *)local_60 != 0;
  }
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      local_31 = *(int *)puVar2 != 0;
      if (*(int *)puVar2 != 0) goto LAB_1009c91f8;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,1,8);
  }
LAB_1009c91f8:
  local_70 = puVar2;
  lVar3 = *(long *)(*param_1 + 0x10);
  lVar7 = 0;
  if (*(long *)(*param_1 + 0x10) == 0) {
LAB_1009c925e:
    lVar8 = 0;
  }
  else {
    do {
      while (lVar8 = lVar3, iVar6 = *(int *)(lVar8 + 0x18), iVar6 < 5) {
        lVar3 = *(long *)(lVar8 + 0x10);
        if (*(long *)(lVar8 + 0x10) == 0) {
          if (lVar7 == 0) goto LAB_1009c925e;
          iVar6 = *(int *)(lVar7 + 0x18);
          lVar8 = lVar7;
          goto LAB_1009c9259;
        }
      }
      lVar3 = *(long *)(lVar8 + 8);
      lVar7 = lVar8;
    } while (*(long *)(lVar8 + 8) != 0);
LAB_1009c9259:
    if (5 < iVar6) goto LAB_1009c925e;
  }
  ppuVar9 = &local_70;
  if (lVar8 != 0) {
    ppuVar9 = (undefined **)(lVar8 + 0x20);
  }
  pQVar1 = (QArrayData *)*ppuVar9;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if (local_31) goto LAB_1009c92b8;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,1,8);
  }
LAB_1009c92b8:
  FUN_1009c8300(&local_78,&local_40);
  FUN_1009c8300(&local_80,&local_50);
  QCryptographicHash::QCryptographicHash(local_88,2);
  QCryptographicHash::addData((QByteArray *)local_88);
  QCryptographicHash::addData((QByteArray *)local_88);
  QCryptographicHash::addData((QByteArray *)local_88);
  QCryptographicHash::result();
  bVar10 = true;
  if (*(int *)(pQVar1 + 4) == *(int *)(local_90 + 4)) {
    iVar6 = _memcmp(pQVar1 + *(long *)(pQVar1 + 0x10),local_90 + *(long *)(local_90 + 0x10),
                    (long)*(int *)(pQVar1 + 4));
    bVar10 = iVar6 != 0;
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if (local_31) goto LAB_1009c9374;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1009c9374:
  if (bVar10) {
    uVar5 = 0;
  }
  else {
    cVar4 = operator==(&local_78,param_3);
    if (cVar4 == '\0') {
      uVar5 = 0;
    }
    else {
      uVar5 = operator==(&local_80,param_4);
    }
  }
  QCryptographicHash::~QCryptographicHash(local_88);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1009c93f0;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1009c93f0:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1009c9420;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1009c9420:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if (local_31) goto LAB_1009c944f;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1009c944f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (local_31) goto LAB_1009c947f;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1009c947f:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_31) goto LAB_1009c94af;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1009c94af:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar5;
      }
      local_31 = false;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar5;
}

