
undefined8 FUN_100198c90(undefined8 param_1,int param_2,QObject *param_3,undefined4 param_4)

{
  QObject *pQVar1;
  uint uVar2;
  undefined8 uVar3;
  Data_conflict *pDVar4;
  long local_78;
  long local_70;
  int *local_68;
  QObject *pQStack_60;
  Data_conflict local_50;
  uint uStack_48;
  QVariant local_40;
  bool local_29;
  
  uStack_48 = 0x80000000;
  local_50.field7 = 0;
  if (param_3 != (QObject *)0x0) {
    local_68 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
    pQStack_60 = param_3;
    if (DAT_10226dd98 == 0) {
      DAT_10226dd98 = FUN_10019a9a0("QPointer<QWidget>",0xffffffffffffffff,1);
    }
    uVar2 = uStack_48 & 0x40000000;
    if (((uVar2 == 0) || (*(int *)(local_50.field7 + 8) == 1)) &&
       ((DAT_10226dd98 == (uStack_48 & 0x3fffffff) || ((uStack_48 & 0x3fffffff | DAT_10226dd98) < 8)
        ))) {
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
  }
  if (param_2 == 0x800) {
    FUN_10018c250(&local_70,param_1);
    uVar3 = _PrlVm_Start(local_70);
    uVar3 = FUN_100191960(param_1,uVar3,0x3e9,&local_50);
    if (local_70 != 0) {
      _PrlHandle_Free();
    }
  }
  else {
    FUN_10018c250(&local_78,param_1);
    uVar3 = _PrlVm_StartEx(local_78,param_2,param_4);
    uVar3 = FUN_100191960(param_1,uVar3,0x40c,&local_50);
    if (local_78 != 0) {
      _PrlHandle_Free();
    }
  }
  QVariant::~QVariant((QVariant *)&local_50);
  return uVar3;
}

