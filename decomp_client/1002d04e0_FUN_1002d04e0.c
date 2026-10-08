
/* WARNING: Removing unreachable block (ram,0x0001002d087b) */
/* WARNING: Removing unreachable block (ram,0x0001002d0889) */
/* WARNING: Removing unreachable block (ram,0x0001002d0895) */

undefined8 FUN_1002d04e0(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  size_t sVar8;
  QVariant *pQVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint in_stack_fffffffffffffecc;
  Data_conflict local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  Data_conflict local_e0;
  undefined4 local_d8;
  QArrayData *local_d0;
  int *local_c8 [4];
  QVariant local_a8 [2];
  undefined1 local_90 [24];
  AnonymousUnion0 local_78;
  QArrayData *local_70;
  QVariant local_68;
  QVariant local_58;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar3 = PTR_s_Hardware_Video_UseHiResInGuest_102273170;
  iVar7 = -1;
  if (PTR_s_Hardware_Video_UseHiResInGuest_102273170 != (undefined *)0x0) {
    sVar8 = _strlen(PTR_s_Hardware_Video_UseHiResInGuest_102273170);
    iVar7 = (int)sVar8;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar3,iVar7);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x10);
  uVar13 = 0;
  if (uVar1 != 0) {
    do {
      while (uVar11 = uVar1, cVar4 = operator<((QString *)(uVar11 + 0x18),&local_40), cVar4 != '\0')
      {
        uVar1 = *(ulong *)(uVar11 + 0x10);
        if (*(ulong *)(uVar11 + 0x10) == 0) {
          uVar11 = uVar13;
          if (uVar13 == 0) {
            uVar13 = 0;
            goto LAB_1002d06cb;
          }
          goto LAB_1002d0576;
        }
      }
      uVar1 = *(ulong *)(uVar11 + 8);
      uVar13 = uVar11;
    } while (*(ulong *)(uVar11 + 8) != 0);
LAB_1002d0576:
    cVar4 = operator<(&local_40,(QString *)(uVar11 + 0x18));
    puVar3 = PTR_s_Hardware_Video_UseHiResInGuest_102273170;
    if (cVar4 == '\0') {
      iVar7 = -1;
      if (PTR_s_Hardware_Video_UseHiResInGuest_102273170 != (undefined *)0x0) {
        sVar8 = _strlen(PTR_s_Hardware_Video_UseHiResInGuest_102273170);
        iVar7 = (int)sVar8;
      }
      local_48 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
      pQVar9 = (QVariant *)FUN_10008c590((long *)(param_1 + 0x30),&local_48);
      uVar12 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar12 = *(undefined8 *)(param_1 + 0x20);
      }
      plVar10 = (long *)FUN_10018c2b0(uVar12);
      puVar3 = PTR_s_Hardware_Video_UseHiResInGuest_102273170;
      pcVar2 = *(code **)(*plVar10 + 0x80);
      iVar7 = -1;
      if (PTR_s_Hardware_Video_UseHiResInGuest_102273170 != (undefined *)0x0) {
        sVar8 = _strlen(PTR_s_Hardware_Video_UseHiResInGuest_102273170);
        iVar7 = (int)sVar8;
      }
      local_70 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
      (*pcVar2)(&local_68,plVar10,&local_70);
      bVar5 = (bool)QVariant::toBool();
      QVariant::QVariant(&local_58,bVar5);
      bVar6 = QVariant::cmp(pQVar9);
      QVariant::~QVariant(&local_58);
      QVariant::~QVariant(&local_68);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002d0697;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1002d0697:
      uVar13 = (ulong)(bVar6 ^ 1);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002d06cb;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
    else {
      uVar13 = 0;
    }
  }
LAB_1002d06cb:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d06fb;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002d06fb:
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar4 = FUN_1001223d0(uVar12,uVar13);
  if (cVar4 == '\0') {
    CAbstractTask::removeSubTask((int)param_1);
    return 0x3bfa;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  iVar7 = CMessageManager::instance();
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_78,uVar12);
  local_90._0_8_ = PTR_shared_null_1021e15e8;
  local_90._16_8_ = PTR_shared_null_1021e15e8;
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018f860(uVar12);
  EnumUtils::OsTypeToString((int)local_90 + 8);
  FUN_1000341d0(local_90 + 0x10,local_90 + 8);
  local_d0 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onGuestHiResOptionChangedQuestionClosed(PRL_RESULT, Messaging::ButtonID)",
                        0x49);
  local_d8 = 0x80000000;
  local_e0.field7 = 0;
  FUN_100a1c600(local_c8,param_1,&local_d0,&local_e0);
  local_f0 = 0x80000000;
  local_f8.field7 = 0;
  local_e8 = 1;
  CMessageManager::showMessageBox
            (iVar7,(QString *)0x3c7e,(QStringList *)&local_78.field0,
             (QStringList *)(local_90 + 0x10),(CSlotInfo *)local_90,SUB81(local_c8,0),
             (QWidget *)((ulong)in_stack_fffffffffffffecc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_f8);
  QVariant::~QVariant(local_a8);
  if (local_c8[0] != (int *)0x0) {
    LOCK();
    *local_c8[0] = *local_c8[0] + -1;
    local_31 = *local_c8[0] != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_c8[0] != (int *)0x0)) {
      operator_delete(local_c8[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d0913;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1002d0913:
  FUN_100039a80(local_90);
  if (*(int *)local_90._8_8_ != -1) {
    if (*(int *)local_90._8_8_ != 0) {
      LOCK();
      *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
      local_31 = *(int *)local_90._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d094f;
    }
    QArrayData::deallocate((QArrayData *)local_90._8_8_,2,8);
  }
LAB_1002d094f:
  FUN_100039a80(local_90 + 0x10);
  if (*(int *)local_78.field1 != -1) {
    if (*(int *)local_78.field1 != 0) {
      LOCK();
      *(int *)local_78.field1 = *(int *)local_78.field1 + -1;
      UNLOCK();
      if (*(int *)local_78.field1 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_78.field1,2,8);
  }
  return 0;
}

