
undefined8 FUN_100192870(long param_1,CVmConfiguration *param_2,QObject *param_3)

{
  QObject *pQVar1;
  int iVar2;
  uint uVar3;
  CVmConfiguration *pCVar4;
  undefined8 uVar5;
  Data_conflict *pDVar6;
  int *local_88;
  QObject *pQStack_80;
  Data_conflict local_70;
  uint uStack_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  bool local_31;
  
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  CBaseNode::toString(SUB81(&local_58,0),(bool)((char)param_2 + '\x10'));
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  iVar2 = _PrlVm_FromString(uVar5,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if (local_31) goto LAB_100192918;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100192918:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if (local_31) goto LAB_100192948;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100192948:
  if (iVar2 != 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlVm_FromString failed. RC = %.8X",iVar2);
    return 0;
  }
  pCVar4 = (CVmConfiguration *)FUN_10018c2b0(param_1);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("diff",4);
  CXmlModelHelper::printConfigDiff(param_2,pCVar4,1,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if (local_31) goto LAB_1001929d9;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1001929d9:
  uStack_68 = 0x80000000;
  local_70.field7 = 0;
  if (param_3 != (QObject *)0x0) {
    local_88 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
    pQStack_80 = param_3;
    if (DAT_10226dd98 == 0) {
      DAT_10226dd98 = FUN_10019a9a0("QPointer<QWidget>",0xffffffffffffffff,1);
    }
    uVar3 = uStack_68 & 0x40000000;
    if (((uVar3 == 0) || (*(int *)(local_70.field7 + 8) == 1)) &&
       ((DAT_10226dd98 == (uStack_68 & 0x3fffffff) || ((uStack_68 & 0x3fffffff | DAT_10226dd98) < 8)
        ))) {
      uStack_68 = DAT_10226dd98 & 0x3fffffff | uVar3;
      if (uVar3 == 0) {
        pDVar6 = &local_70;
      }
      else {
        pDVar6 = *(Data_conflict **)local_70.field15;
      }
      pQVar1 = pDVar6->field15;
      if (pQVar1 != (QObject *)0x0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        local_31 = *(int *)pQVar1 != 0;
        if ((*(int *)pQVar1 == 0) && (pDVar6->field16 != (void *)0x0)) {
          operator_delete(pDVar6->field16);
        }
      }
      pDVar6->field16 = local_88;
      pDVar6[1].field15 = pQStack_80;
      if (local_88 != (int *)0x0) {
        LOCK();
        *local_88 = *local_88 + 1;
        local_31 = *local_88 != 0;
        UNLOCK();
      }
    }
    else {
      QVariant::QVariant(&local_48,DAT_10226dd98,&local_88,0);
      QVariant::operator=((QVariant *)&local_70,&local_48);
      QVariant::~QVariant(&local_48);
    }
    if (local_88 != (int *)0x0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_31 = *local_88 != 0;
      UNLOCK();
      if ((!local_31) && (local_88 != (int *)0x0)) {
        operator_delete(local_88);
      }
    }
  }
  uVar5 = _PrlVm_CommitEx(*(undefined8 *)(param_1 + 0x40),8);
  uVar5 = FUN_100191960(param_1,uVar5,0x7eb,&local_70);
  QVariant::~QVariant((QVariant *)&local_70);
  return uVar5;
}

