
void FUN_100a14e00(long param_1,int param_2,QVariant *param_3,long *param_4)

{
  QMapNodeBase *pQVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  ulong *puVar6;
  Data_conflict *pDVar7;
  long lVar8;
  long lVar9;
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
    goto LAB_100a15050;
  }
  QVariant::toMap();
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("msg",3);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  if (*(long *)(local_58 + 0x10) == 0) {
LAB_100a14ed7:
    lVar8 = 0;
  }
  else {
    lVar2 = *(long *)(local_58 + 0x10);
    lVar9 = 0;
    do {
      while (lVar8 = lVar2, cVar3 = operator<((QString *)(lVar8 + 0x18),&local_60), cVar3 == '\0') {
        lVar2 = *(long *)(lVar8 + 8);
        lVar9 = lVar8;
        if (*(long *)(lVar8 + 8) == 0) goto LAB_100a14ec6;
      }
      lVar2 = *(long *)(lVar8 + 0x10);
    } while (*(long *)(lVar8 + 0x10) != 0);
    lVar8 = lVar9;
    if (lVar9 == 0) goto LAB_100a14ed7;
LAB_100a14ec6:
    cVar3 = operator<(&local_60,(QString *)(lVar8 + 0x18));
    if (cVar3 != '\0') goto LAB_100a14ed7;
  }
  pDVar7 = &local_70;
  if (lVar8 != 0) {
    pDVar7 = (Data_conflict *)(lVar8 + 0x20);
  }
  QVariant::QVariant(&local_50,(QVariant *)pDVar7);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a14f4c;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a14f4c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a14f94;
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_58,(int)*(undefined8 *)(local_58 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_58);
  }
LAB_100a14f94:
  if (param_2 == 0x199) {
    local_78 = (QArrayData *)QString::fromAscii_helper("account already confirmed",0x19);
    iVar4 = QString::indexOf(&local_40,&local_78,0,1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a14ff8;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100a14ff8:
    if (iVar4 != -1) {
      *(undefined4 *)(param_1 + 0x58) = 0xb7ba;
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a15035;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a15035:
  if (*(int *)(param_1 + 0x58) == -0x7fffffff) {
    FUN_100a0fe60(param_1,param_2,param_3,param_4);
  }
LAB_100a15050:
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

