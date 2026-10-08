
void FUN_100a19a30(long *param_1,int param_2)

{
  QMapNodeBase *pQVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  QMapNodeBase *pQVar7;
  ulong *puVar8;
  long lVar9;
  Data_conflict *pDVar10;
  long lVar11;
  Data_conflict local_a0;
  undefined4 local_98;
  QString local_90;
  QVariant local_88;
  QString local_78;
  Data_conflict local_70;
  undefined4 local_68;
  QString local_60;
  QVariant local_58;
  QString local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  if (param_2 < 0) goto LAB_100a19eea;
  iVar4 = QVariant::type();
  if (iVar4 != 8) {
    FUN_100df99c0("","WebPortalCommunication",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "data.type() == QVariant::Map","Tasks/CTaskPaxAuthorize.cpp",0xc2,
                  "onRequestAccountTokenCompleted");
  }
  QVariant::toMap();
  puVar2 = PTR_s_token_102280aa0;
  iVar4 = -1;
  if (PTR_s_token_102280aa0 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_token_102280aa0);
    iVar4 = (int)sVar5;
  }
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar2,iVar4);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  if (*(long *)(local_40 + 0x10) == 0) {
LAB_100a19b57:
    lVar9 = 0;
  }
  else {
    lVar6 = *(long *)(local_40 + 0x10);
    lVar11 = 0;
    do {
      while (lVar9 = lVar6, cVar3 = operator<((QString *)(lVar9 + 0x18),&local_60), cVar3 != '\0') {
        lVar6 = *(long *)(lVar9 + 0x10);
        if (*(long *)(lVar9 + 0x10) == 0) {
          lVar9 = lVar11;
          if (lVar11 == 0) goto LAB_100a19b57;
          goto LAB_100a19b46;
        }
      }
      lVar6 = *(long *)(lVar9 + 8);
      lVar11 = lVar9;
    } while (*(long *)(lVar9 + 8) != 0);
LAB_100a19b46:
    cVar3 = operator<(&local_60,(QString *)(lVar9 + 0x18));
    if (cVar3 != '\0') goto LAB_100a19b57;
  }
  pDVar10 = &local_70;
  if (lVar9 != 0) {
    pDVar10 = (Data_conflict *)(lVar9 + 0x20);
  }
  QVariant::QVariant(&local_58,(QVariant *)pDVar10);
  QVariant::toString();
  QString::operator=((QString *)(param_1 + 7),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a19bbb;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100a19bbb:
  QVariant::~QVariant(&local_58);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a19bfd;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a19bfd:
  puVar2 = PTR_s_lepc_102280af0;
  iVar4 = -1;
  if (PTR_s_lepc_102280af0 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_lepc_102280af0);
    iVar4 = (int)sVar5;
  }
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar2,iVar4);
  if (*(long *)(local_40 + 0x10) == 0) {
LAB_100a19c87:
    lVar9 = 0;
  }
  else {
    lVar6 = *(long *)(local_40 + 0x10);
    lVar11 = 0;
    do {
      while (lVar9 = lVar6, cVar3 = operator<((QString *)(lVar9 + 0x18),&local_78), cVar3 != '\0') {
        lVar6 = *(long *)(lVar9 + 0x10);
        if (*(long *)(lVar9 + 0x10) == 0) {
          lVar9 = lVar11;
          if (lVar11 == 0) goto LAB_100a19c87;
          goto LAB_100a19c76;
        }
      }
      lVar6 = *(long *)(lVar9 + 8);
      lVar11 = lVar9;
    } while (*(long *)(lVar9 + 8) != 0);
LAB_100a19c76:
    cVar3 = operator<(&local_78,(QString *)(lVar9 + 0x18));
    if (cVar3 != '\0') goto LAB_100a19c87;
  }
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a19cb9;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100a19cb9:
  puVar2 = PTR_s_lepc_102280af0;
  if (lVar9 != 0) {
    iVar4 = -1;
    if (PTR_s_lepc_102280af0 != (undefined *)0x0) {
      sVar5 = _strlen(PTR_s_lepc_102280af0);
      iVar4 = (int)sVar5;
    }
    local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar2,iVar4)
    ;
    local_98 = 0x80000000;
    local_a0.field7 = 0;
    if (*(long *)(local_40 + 0x10) == 0) {
LAB_100a19d6a:
      lVar9 = 0;
    }
    else {
      lVar6 = *(long *)(local_40 + 0x10);
      lVar11 = 0;
      do {
        while (lVar9 = lVar6, cVar3 = operator<((QString *)(lVar9 + 0x18),&local_90), cVar3 != '\0')
        {
          lVar6 = *(long *)(lVar9 + 0x10);
          if (*(long *)(lVar9 + 0x10) == 0) {
            lVar9 = lVar11;
            if (lVar11 == 0) goto LAB_100a19d6a;
            goto LAB_100a19d56;
          }
        }
        lVar6 = *(long *)(lVar9 + 8);
        lVar11 = lVar9;
      } while (*(long *)(lVar9 + 8) != 0);
LAB_100a19d56:
      cVar3 = operator<(&local_90,(QString *)(lVar9 + 0x18));
      if (cVar3 != '\0') goto LAB_100a19d6a;
    }
    pDVar10 = &local_a0;
    if (lVar9 != 0) {
      pDVar10 = (Data_conflict *)(lVar9 + 0x20);
    }
    QVariant::QVariant(&local_88,(QVariant *)pDVar10);
    lVar6 = QVariant::toLongLong((bool *)&local_88);
    param_1[0xb] = lVar6 * 1000;
    QVariant::~QVariant(&local_88);
    QVariant::~QVariant((QVariant *)&local_a0);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a19de8;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
  }
LAB_100a19de8:
  if ((QMapNodeBase *)param_1[0xc] != local_40) {
    if (*(int *)local_40 == 0) {
      pQVar7 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(local_40 + 0x10) != 0) {
        puVar8 = (ulong *)FUN_10008d330(*(long *)(local_40 + 0x10),pQVar7);
        *(ulong **)(pQVar7 + 0x10) = puVar8;
        *puVar8 = *puVar8 & 3 | (ulong)(pQVar7 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      pQVar7 = local_40;
      if (*(int *)local_40 != -1) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    pQVar1 = (QMapNodeBase *)param_1[0xc];
    param_1[0xc] = (long)pQVar7;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a19e9a;
      }
      if (*(long *)(pQVar1 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar1);
    }
  }
LAB_100a19e9a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a19eea;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
LAB_100a19eea:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

