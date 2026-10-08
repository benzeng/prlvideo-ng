
void FUN_100a1a7d0(long *param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  Data_conflict *pDVar7;
  long lVar8;
  Data_conflict local_70;
  undefined4 local_68;
  QString local_60;
  QMapNodeBase *local_58;
  QVariant local_50;
  QString local_40;
  undefined1 local_31;
  
  if (param_2 < 0) goto LAB_100a1a9d5;
  iVar4 = QVariant::type();
  if (iVar4 != 8) {
    FUN_100df99c0("","WebPortalCommunication",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "data.type() == QVariant::Map","Tasks/CTaskPaxAuthorize.cpp",0xe0,
                  "onRequestPaxAuthTokenCompleted");
  }
  QVariant::toMap();
  puVar1 = PTR_s_token_102280aa0;
  iVar4 = -1;
  if (PTR_s_token_102280aa0 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_token_102280aa0);
    iVar4 = (int)sVar5;
  }
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar4);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  if (*(long *)(local_58 + 0x10) == 0) {
LAB_100a1a8e7:
    lVar6 = 0;
  }
  else {
    lVar2 = *(long *)(local_58 + 0x10);
    lVar8 = 0;
    do {
      while (lVar6 = lVar2, cVar3 = operator<((QString *)(lVar6 + 0x18),&local_60), cVar3 != '\0') {
        lVar2 = *(long *)(lVar6 + 0x10);
        if (*(long *)(lVar6 + 0x10) == 0) {
          lVar6 = lVar8;
          if (lVar8 == 0) goto LAB_100a1a8e7;
          goto LAB_100a1a8d6;
        }
      }
      lVar2 = *(long *)(lVar6 + 8);
      lVar8 = lVar6;
    } while (*(long *)(lVar6 + 8) != 0);
LAB_100a1a8d6:
    cVar3 = operator<(&local_60,(QString *)(lVar6 + 0x18));
    if (cVar3 != '\0') goto LAB_100a1a8e7;
  }
  pDVar7 = &local_70;
  if (lVar6 != 0) {
    pDVar7 = (Data_conflict *)(lVar6 + 0x20);
  }
  QVariant::QVariant(&local_50,(QVariant *)pDVar7);
  QVariant::toString();
  QString::operator=((QString *)(param_1 + 8),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a1a94b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100a1a94b:
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_70);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a1a98d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a1a98d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a1a9d5;
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_58,(int)*(undefined8 *)(local_58 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_58);
  }
LAB_100a1a9d5:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

