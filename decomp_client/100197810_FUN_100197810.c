
undefined8 FUN_100197810(long param_1,undefined8 param_2,char param_3,QObject *param_4)

{
  QObject *pQVar1;
  uint uVar2;
  undefined8 uVar3;
  Data_conflict *pDVar4;
  undefined4 uVar5;
  QArrayData *local_70;
  int *local_68;
  QObject *pQStack_60;
  Data_conflict local_50;
  uint uStack_48;
  QVariant local_40;
  bool local_29;
  
  uVar5 = 8;
  if (param_3 != '\0') {
    uVar5 = 0x808;
  }
  uStack_48 = 0x80000000;
  local_50.field7 = 0;
  local_68 = (int *)0x0;
  if (param_4 != (QObject *)0x0) {
    local_68 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  pQStack_60 = param_4;
  if (DAT_10226dd98 == 0) {
    DAT_10226dd98 = FUN_10019a9a0("QPointer<QWidget>",0xffffffffffffffff,1);
  }
  uVar2 = uStack_48 & 0x40000000;
  if (((uVar2 == 0) || (*(int *)(local_50.field7 + 8) == 1)) &&
     ((DAT_10226dd98 == (uStack_48 & 0x3fffffff) || ((uStack_48 & 0x3fffffff | DAT_10226dd98) < 8)))
     ) {
    uStack_48 = DAT_10226dd98 & 0x3fffffff | uVar2;
    if (uVar2 == 0) {
      pDVar4 = &local_50;
    }
    else {
      pDVar4 = *(Data_conflict **)local_50.field15;
    }
    pQVar1 = pDVar4->field15;
    if (pQVar1 != (QObject *)0x0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      local_29 = *(int *)pQVar1 != 0;
      if ((*(int *)pQVar1 == 0) && (pDVar4->field16 != (void *)0x0)) {
        operator_delete(pDVar4->field16);
      }
    }
    pDVar4->field16 = local_68;
    pDVar4[1].field15 = pQStack_60;
    if (local_68 != (int *)0x0) {
      LOCK();
      *local_68 = *local_68 + 1;
      local_29 = *local_68 != 0;
      UNLOCK();
    }
  }
  else {
    QVariant::QVariant(&local_40,DAT_10226dd98,&local_68,0);
    QVariant::operator=((QVariant *)&local_50,&local_40);
    QVariant::~QVariant(&local_40);
  }
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    local_29 = *local_68 != 0;
    UNLOCK();
    if ((!local_29) && (local_68 != (int *)0x0)) {
      operator_delete(local_68);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  QString::toUtf8();
  uVar3 = _PrlVm_Decrypt(uVar3,local_70 + *(long *)(local_70 + 0x10),uVar5);
  uVar3 = FUN_100191960(param_1,uVar3,0x862,&local_50);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if (local_29) goto LAB_1001979c6;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_1001979c6:
  QVariant::~QVariant((QVariant *)&local_50);
  return uVar3;
}

