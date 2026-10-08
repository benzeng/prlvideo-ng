
undefined8
FUN_100197520(long param_1,undefined8 param_2,char param_3,undefined8 param_4,QObject *param_5)

{
  QObject *pQVar1;
  uint uVar2;
  QArrayData *pQVar3;
  undefined8 uVar4;
  Data_conflict *pDVar5;
  undefined4 uVar6;
  QArrayData *local_80;
  int *local_78;
  QObject *pQStack_70;
  Data_conflict local_60;
  uint uStack_58;
  QArrayData *local_50;
  QVariant local_48;
  bool local_31;
  
  uVar6 = 8;
  if (param_3 != '\0') {
    uVar6 = 0x808;
  }
  QString::toUtf8();
  pQVar3 = (QArrayData *)0x0;
  if (*(int *)(local_50 + 4) != 0) {
    pQVar3 = local_50 + *(long *)(local_50 + 0x10);
  }
  uStack_58 = 0x80000000;
  local_60.field7 = 0;
  local_78 = (int *)0x0;
  if (param_5 != (QObject *)0x0) {
    local_78 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  pQStack_70 = param_5;
  if (DAT_10226dd98 == 0) {
    DAT_10226dd98 = FUN_10019a9a0("QPointer<QWidget>",0xffffffffffffffff,1);
  }
  uVar2 = uStack_58 & 0x40000000;
  if (((uVar2 == 0) || (*(int *)(local_60.field7 + 8) == 1)) &&
     ((DAT_10226dd98 == (uStack_58 & 0x3fffffff) || ((uStack_58 & 0x3fffffff | DAT_10226dd98) < 8)))
     ) {
    uStack_58 = DAT_10226dd98 & 0x3fffffff | uVar2;
    if (uVar2 == 0) {
      pDVar5 = &local_60;
    }
    else {
      pDVar5 = *(Data_conflict **)local_60.field15;
    }
    pQVar1 = pDVar5->field15;
    if (pQVar1 != (QObject *)0x0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      local_31 = *(int *)pQVar1 != 0;
      if ((*(int *)pQVar1 == 0) && (pDVar5->field16 != (void *)0x0)) {
        operator_delete(pDVar5->field16);
      }
    }
    pDVar5->field16 = local_78;
    pDVar5[1].field15 = pQStack_70;
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + 1;
      local_31 = *local_78 != 0;
      UNLOCK();
    }
  }
  else {
    QVariant::QVariant(&local_48,DAT_10226dd98,&local_78,0);
    QVariant::operator=((QVariant *)&local_60,&local_48);
    QVariant::~QVariant(&local_48);
  }
  if (local_78 != (int *)0x0) {
    LOCK();
    *local_78 = *local_78 + -1;
    local_31 = *local_78 != 0;
    UNLOCK();
    if ((!local_31) && (local_78 != (int *)0x0)) {
      operator_delete(local_78);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  QString::toUtf8();
  uVar4 = _PrlVm_Encrypt(uVar4,local_80 + *(long *)(local_80 + 0x10),pQVar3,uVar6);
  uVar4 = FUN_100191960(param_1,uVar4,0x861,&local_60);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if (local_31) goto LAB_1001976fb;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1001976fb:
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar4;
      }
      local_31 = false;
    }
    QArrayData::deallocate(local_50,1,8);
  }
  return uVar4;
}

