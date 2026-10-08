
void FUN_100038de0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  QObject *pQVar3;
  undefined4 *puVar4;
  int *piVar5;
  long lVar6;
  int *local_80;
  QObject *local_78;
  QArrayData *local_70;
  Connection local_68 [8];
  int *local_60;
  long local_58;
  code *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_1000393a0(&local_60,param_1 + 0x18,param_2);
  if (local_60 != (int *)0x0) {
    lVar6 = 0;
    if (local_60[1] != 0) {
      lVar6 = local_58;
    }
    LOCK();
    *local_60 = *local_60 + -1;
    UNLOCK();
    local_40 = (undefined *)CONCAT71(local_40._1_7_,*local_60 != 0);
    if (*local_60 == 0) {
      operator_delete(local_60);
    }
    if (lVar6 != 0) {
      return;
    }
  }
  pQVar3 = operator_new(0x30);
  FUN_100037f30(pQVar3,lVar2);
  local_40 = PTR_destroyed_1021e1528;
  local_38 = 0;
  local_50 = FUN_100039020;
  local_48 = 0;
  puVar4 = operator_new(0x20);
  *puVar4 = 1;
  *(code **)(puVar4 + 2) = FUN_100039cd0;
  *(code **)(puVar4 + 4) = FUN_100039020;
  *(undefined8 *)(puVar4 + 6) = 0;
  QObject::connectImpl
            (local_68,pQVar3,&local_40,param_1,&local_50,puVar4,0,0,PTR_staticMetaObject_1021e1520);
  QMetaObject::Connection::~Connection(local_68);
  local_70 = *(QArrayData **)(pQVar3 + 0x20);
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    UNLOCK();
    local_40 = (undefined *)CONCAT71(local_40._1_7_,*(int *)local_70 != 0);
  }
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  local_80 = piVar5;
  local_78 = pQVar3;
  FUN_100039490(param_1 + 0x18,&local_70,&local_80);
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    local_40 = (undefined *)CONCAT71(local_40._1_7_,*piVar5 != 0);
    if (*piVar5 == 0) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      local_40 = (undefined *)CONCAT71(local_40._1_7_,*(int *)local_70 != 0);
      if (*(int *)local_70 != 0) goto LAB_100038f85;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100038f85:
  FUN_100866890(*(undefined8 *)(param_1 + 0x10),param_2,1);
  return;
}

