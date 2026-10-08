
void FUN_1001ac700(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  QObject *pQVar5;
  int *piVar6;
  long lVar7;
  Data_conflict *pDVar8;
  undefined8 uVar9;
  long lVar10;
  QArrayData *local_a8;
  QArrayData *local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  QString local_88;
  QVariant local_80;
  QArrayData *local_70;
  Data_conflict local_68;
  undefined4 local_60;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  QMapNodeBase *local_38;
  undefined1 local_29;
  
  if (param_3 != 1) {
    return;
  }
  QVariant::toMap();
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("vmId",4);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  if (*(long *)(local_38 + 0x10) == 0) {
LAB_1001ac7b7:
    lVar7 = 0;
  }
  else {
    lVar3 = *(long *)(local_38 + 0x10);
    lVar10 = 0;
    do {
      while (lVar7 = lVar3, cVar1 = operator<((QString *)(lVar7 + 0x18),&local_58), cVar1 == '\0') {
        lVar3 = *(long *)(lVar7 + 8);
        lVar10 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_1001ac7a6;
      }
      lVar3 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar10;
    if (lVar10 == 0) goto LAB_1001ac7b7;
LAB_1001ac7a6:
    cVar1 = operator<(&local_58,(QString *)(lVar7 + 0x18));
    if (cVar1 != '\0') goto LAB_1001ac7b7;
  }
  pDVar8 = &local_68;
  if (lVar7 != 0) {
    pDVar8 = (Data_conflict *)(lVar7 + 0x20);
  }
  QVariant::QVariant(&local_50,(QVariant *)pDVar8);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ac820;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1001ac820:
  local_88.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("usbDeviceId",0xb);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  if (*(long *)(local_38 + 0x10) == 0) {
LAB_1001ac8b7:
    lVar7 = 0;
  }
  else {
    lVar3 = *(long *)(local_38 + 0x10);
    lVar10 = 0;
    do {
      while (lVar7 = lVar3, cVar1 = operator<((QString *)(lVar7 + 0x18),&local_88), cVar1 == '\0') {
        lVar3 = *(long *)(lVar7 + 8);
        lVar10 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_1001ac8a6;
      }
      lVar3 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar10;
    if (lVar10 == 0) goto LAB_1001ac8b7;
LAB_1001ac8a6:
    cVar1 = operator<(&local_88,(QString *)(lVar7 + 0x18));
    if (cVar1 != '\0') goto LAB_1001ac8b7;
  }
  pDVar8 = &local_98;
  if (lVar7 != 0) {
    pDVar8 = (Data_conflict *)(lVar7 + 0x20);
  }
  QVariant::QVariant(&local_80,(QVariant *)pDVar8);
  QVariant::toString();
  QVariant::~QVariant(&local_80);
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001ac926;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1001ac926:
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar3 = FUN_10015cb20(uVar9,&local_40);
  if ((((lVar3 != 0) && (iVar2 = FUN_10018a9d0(lVar3), iVar2 == 0x30000004)) &&
      (plVar4 = (long *)FUN_1001a9960(param_1,&local_70), plVar4 != (long *)0x0)) &&
     ((pQVar5 = (QObject *)FUN_10018f120(lVar3,0xf,0), pQVar5 != (QObject *)0x0 &&
      (piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5),
      piVar6 != (int *)0x0)))) {
    if (piVar6[1] != 0) {
      (**(code **)(*plVar4 + 0xb8))(&local_a0,plVar4);
      (**(code **)(*plVar4 + 0xa8))(&local_a8,plVar4);
      FUN_100147a20(pQVar5,&local_a0,&local_a8,0,0,0,0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_29 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001aca40;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1001aca40:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          UNLOCK();
          if (*(int *)local_a0 != 0) goto LAB_1001aca76;
          local_29 = 0;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
    }
LAB_1001aca76:
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_29 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar6);
    }
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001acabd;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001acabd:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001acaed;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001acaed:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_38,(int)*(undefined8 *)(local_38 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_38);
  }
  return;
}

