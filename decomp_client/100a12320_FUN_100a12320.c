
void FUN_100a12320(long param_1,int param_2,QVariant *param_3,long *param_4)

{
  QMapNodeBase *pQVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  ulong *puVar6;
  long lVar7;
  Data_conflict *pDVar8;
  long lVar9;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  QString local_98;
  QMapNodeBase *local_90;
  QVariant local_88;
  QArrayData *local_78;
  Data_conflict local_70;
  undefined4 local_68;
  QString local_60;
  QMapNodeBase *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  *(undefined4 *)(param_1 + 0x58) = 0x80000001;
  if (param_2 - 200U < 100) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    goto LAB_100a128bb;
  }
  QVariant::toMap();
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("msg",3);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  if (*(long *)(local_58 + 0x10) == 0) {
LAB_100a12407:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(local_58 + 0x10);
    lVar9 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_60), cVar3 == '\0') {
        lVar2 = *(long *)(lVar7 + 8);
        lVar9 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100a123f6;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar9;
    if (lVar9 == 0) goto LAB_100a12407;
LAB_100a123f6:
    cVar3 = operator<(&local_60,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100a12407;
  }
  pDVar8 = &local_70;
  if (lVar7 != 0) {
    pDVar8 = (Data_conflict *)(lVar7 + 0x20);
  }
  QVariant::QVariant(&local_50,(QVariant *)pDVar8);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a12471;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a12471:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a124b9;
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_58,(int)*(undefined8 *)(local_58 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_58);
  }
LAB_100a124b9:
  QVariant::toMap();
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("details",7);
  local_a0 = 0x80000000;
  local_a8.field7 = 0;
  if (*(long *)(local_90 + 0x10) == 0) {
LAB_100a1256a:
    lVar7 = 0;
  }
  else {
    lVar2 = *(long *)(local_90 + 0x10);
    lVar9 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_98), cVar3 == '\0') {
        lVar2 = *(long *)(lVar7 + 8);
        lVar9 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100a12556;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar9;
    if (lVar9 == 0) goto LAB_100a1256a;
LAB_100a12556:
    cVar3 = operator<(&local_98,(QString *)(lVar7 + 0x18));
    if (cVar3 != '\0') goto LAB_100a1256a;
  }
  pDVar8 = &local_a8;
  if (lVar7 != 0) {
    pDVar8 = (Data_conflict *)(lVar7 + 0x20);
  }
  QVariant::QVariant(&local_88,(QVariant *)pDVar8);
  QVariant::toString();
  QVariant::~QVariant(&local_88);
  QVariant::~QVariant((QVariant *)&local_a8);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a125df;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100a125df:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a1262d;
    }
    if (*(long *)(local_90 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_90,(int)*(undefined8 *)(local_90 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_90);
  }
LAB_100a1262d:
  if (param_2 == 0x199) {
    local_b0 = (QArrayData *)QString::fromAscii_helper("invalid license key",0x13);
    iVar4 = QString::indexOf(&local_40,&local_b0,0,1);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a126a4;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100a126a4:
    if (iVar4 == -1) {
      local_b8 = (QArrayData *)QString::fromAscii_helper("blacklisted license key",0x17);
      iVar4 = QString::indexOf(&local_40,&local_b8,0,1);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a12737;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100a12737:
      if (iVar4 == -1) {
        local_c0 = (QArrayData *)QString::fromAscii_helper("invalid activation code",0x17);
        iVar4 = QString::indexOf(&local_40,&local_c0,0,1);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a127b0;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100a127b0:
        if (iVar4 == -1) {
          local_c8 = (QArrayData *)QString::fromAscii_helper("activation limit reached",0x18);
          iVar4 = QString::indexOf(&local_40,&local_c8,0,1);
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a12826;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_100a12826:
          if (iVar4 != -1) {
            *(undefined4 *)(param_1 + 0x58) = 0x80011710;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x58) = 0x80011707;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x58) = 0x80011709;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0x80011708;
    }
  }
  else if (param_2 == 0x191) {
    *(undefined4 *)(param_1 + 0x58) = 0x80047004;
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a12863;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100a12863:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a12893;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a12893:
  if (*(int *)(param_1 + 0x58) == -0x7fffffff) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0x80047025;
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0x80047026;
    }
  }
LAB_100a128bb:
  QVariant::operator=((QVariant *)(param_1 + 0x60),param_3);
  piVar5 = (int *)*param_4;
  if (*(int **)(param_1 + 0x70) != piVar5) {
    if (*piVar5 == 0) {
      piVar5 = (int *)QMapDataBase::createData();
      if (*(long *)(*param_4 + 0x10) != 0) {
        puVar6 = (ulong *)FUN_10008d330(*(long *)(*param_4 + 0x10),piVar5);
        *(ulong **)(piVar5 + 4) = puVar6;
        *puVar6 = *puVar6 & 3 | (ulong)(piVar5 + 2);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else if (*piVar5 != -1) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      piVar5 = (int *)*param_4;
    }
    pQVar1 = *(QMapNodeBase **)(param_1 + 0x70);
    *(int **)(param_1 + 0x70) = piVar5;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) {
          return;
        }
      }
      if (*(long *)(pQVar1 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
    }
  }
  return;
}

