
void FUN_100a16960(long param_1,int param_2,QVariant *param_3,long *param_4)

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
  Data_conflict local_b8;
  undefined4 local_b0;
  QString local_a8;
  QMapNodeBase *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
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
    goto LAB_100a16f0f;
  }
  if (param_2 < 0x193) {
    if (param_2 == 400) {
      *(undefined4 *)(param_1 + 0x58) = 0x80047014;
      goto LAB_100a16f0f;
    }
    if (param_2 != 0x191) goto LAB_100a16f0f;
    QVariant::toMap();
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("msg",3);
    local_68 = 0x80000000;
    local_70.field7 = 0;
    if (*(long *)(local_58 + 0x10) == 0) {
LAB_100a16d12:
      lVar7 = 0;
    }
    else {
      lVar2 = *(long *)(local_58 + 0x10);
      lVar9 = 0;
      do {
        while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_60), cVar3 != '\0')
        {
          lVar2 = *(long *)(lVar7 + 0x10);
          if (*(long *)(lVar7 + 0x10) == 0) {
            lVar7 = lVar9;
            if (lVar9 == 0) goto LAB_100a16d12;
            goto LAB_100a16d01;
          }
        }
        lVar2 = *(long *)(lVar7 + 8);
        lVar9 = lVar7;
      } while (*(long *)(lVar7 + 8) != 0);
LAB_100a16d01:
      cVar3 = operator<(&local_60,(QString *)(lVar7 + 0x18));
      if (cVar3 != '\0') goto LAB_100a16d12;
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
        if ((bool)local_31) goto LAB_100a16d7b;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100a16d7b:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a16dc3;
      }
      if (*(long *)(local_58 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(local_58,(int)*(undefined8 *)(local_58 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_58);
    }
LAB_100a16dc3:
    local_78 = (QArrayData *)QString::fromAscii_helper("token is expired",0x10);
    iVar4 = QString::indexOf(&local_40,&local_78,0,1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a16e1e;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100a16e1e:
    if (iVar4 == -1) {
      local_80 = (QArrayData *)QString::fromAscii_helper("unconfirmed social account",0x1a);
      iVar4 = QString::indexOf(&local_40,&local_80,0,1);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a16e8c;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100a16e8c:
      if (iVar4 == -1) {
        *(undefined4 *)(param_1 + 0x58) = 0x80047011;
      }
      else {
        *(undefined4 *)(param_1 + 0x58) = 0x80047012;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0x80047004;
    }
    if (*(int *)local_40 == -1) goto LAB_100a16f0f;
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      iVar4 = *(int *)local_40;
      UNLOCK();
      goto joined_r0x000100a16ec7;
    }
  }
  else {
    if (param_2 != 0x193) {
      if (param_2 == 0x1ad) {
        *(undefined4 *)(param_1 + 0x58) = 0x80047015;
      }
      goto LAB_100a16f0f;
    }
    QVariant::toMap();
    local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("msg",3);
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    if (*(long *)(local_a0 + 0x10) == 0) {
LAB_100a16b35:
      lVar7 = 0;
    }
    else {
      lVar2 = *(long *)(local_a0 + 0x10);
      lVar9 = 0;
      do {
        while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_a8), cVar3 != '\0')
        {
          lVar2 = *(long *)(lVar7 + 0x10);
          if (*(long *)(lVar7 + 0x10) == 0) {
            lVar7 = lVar9;
            if (lVar9 == 0) goto LAB_100a16b35;
            goto LAB_100a16b21;
          }
        }
        lVar2 = *(long *)(lVar7 + 8);
        lVar9 = lVar7;
      } while (*(long *)(lVar7 + 8) != 0);
LAB_100a16b21:
      cVar3 = operator<(&local_a8,(QString *)(lVar7 + 0x18));
      if (cVar3 != '\0') goto LAB_100a16b35;
    }
    pDVar8 = &local_b8;
    if (lVar7 != 0) {
      pDVar8 = (Data_conflict *)(lVar7 + 0x20);
    }
    QVariant::QVariant(&local_98,(QVariant *)pDVar8);
    QVariant::toString();
    QVariant::~QVariant(&local_98);
    QVariant::~QVariant((QVariant *)&local_b8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a16bb3;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
LAB_100a16bb3:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a16c01;
      }
      if (*(long *)(local_a0 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(local_a0,(int)*(undefined8 *)(local_a0 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_a0);
    }
LAB_100a16c01:
    local_c0 = (QArrayData *)QString::fromAscii_helper("business account",0x10);
    iVar4 = QString::indexOf(&local_88,&local_c0,0,1);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a16c68;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100a16c68:
    if (iVar4 == -1) {
      local_c8 = (QArrayData *)QString::fromAscii_helper("email is not in profile",0x17);
      iVar4 = QString::indexOf(&local_88,&local_c8,0,1);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a16ce2;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100a16ce2:
      if (iVar4 == -1) {
        *(undefined4 *)(param_1 + 0x58) = 0x80047013;
      }
      else {
        *(undefined4 *)(param_1 + 0x58) = 0x80047027;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0x80047016;
    }
    if (*(int *)local_88 == -1) goto LAB_100a16f0f;
    local_40 = local_88;
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      iVar4 = *(int *)local_88;
      UNLOCK();
joined_r0x000100a16ec7:
      local_31 = iVar4 != 0;
      if ((bool)local_31) goto LAB_100a16f0f;
    }
  }
  QArrayData::deallocate(local_40,2,8);
LAB_100a16f0f:
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

