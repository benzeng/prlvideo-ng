
void FUN_1007653c0(QObject *param_1,int param_2)

{
  long lVar1;
  void *pvVar2;
  QObject *pQVar3;
  bool *pbVar4;
  long lVar5;
  undefined8 uVar6;
  QArrayData *local_70;
  QMapNodeBase *local_68;
  QVariant local_60;
  long local_50;
  void *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (DAT_1023109d8 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_100785b00(pvVar2);
    DAT_10226c7e0 = 1;
    DAT_1023109d8 = pvVar2;
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  pQVar3 = (QObject *)FUN_100785c90(DAT_1023109d8,uVar6,9);
  lVar5 = 0;
  QObject::disconnect(pQVar3,(char *)0x0,param_1,(char *)0x0);
  if (param_2 != 0) goto LAB_10076551e;
  FUN_1007864c0(&local_60,pQVar3);
  QVariant::toMap();
  FUN_1007868d0(&local_70,2);
  pbVar4 = (bool *)FUN_10008c590(&local_68,&local_70);
  lVar5 = QVariant::toLongLong(pbVar4);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_70 != 0);
      if (*(int *)local_70 != 0) goto LAB_1007654cb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007654cb:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_68 != 0);
      if (*(int *)local_68 != 0) goto LAB_100765515;
    }
    if (*(long *)(local_68 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_68,(int)*(undefined8 *)(local_68 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_68);
  }
LAB_100765515:
  QVariant::~QVariant(&local_60);
LAB_10076551e:
  if (*(long *)(param_1 + 0x20) != lVar5) {
    *(long *)(param_1 + 0x20) = lVar5;
    local_48 = (void *)0x0;
    local_40 = &local_50;
    local_50 = lVar5;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6700,0,&local_48);
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

