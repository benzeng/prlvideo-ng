
void FUN_10098f480(long param_1,undefined8 param_2,undefined8 param_3)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  Connection local_80 [8];
  Connection local_78 [8];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  code *local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (((lVar5 == 0) || (*(int *)(lVar5 + 4) == 0)) || (*(long *)(param_1 + 0x38) == 0)) {
    pQVar1 = operator_new(0x38);
    FUN_1009b95a0(pQVar1,*(undefined8 *)(param_1 + 0x20));
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    piVar3 = *(int **)(param_1 + 0x30);
    if (piVar3 != piVar2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        local_40 = (code *)CONCAT71(local_40._1_7_,*piVar2 != 0);
        piVar3 = *(int **)(param_1 + 0x30);
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        local_40 = (code *)CONCAT71(local_40._1_7_,*piVar3 != 0);
        if ((*piVar3 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x30));
        }
      }
      *(int **)(param_1 + 0x30) = piVar2;
      *(QObject **)(param_1 + 0x38) = pQVar1;
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      local_40 = (code *)CONCAT71(local_40._1_7_,*piVar2 != 0);
      if (*piVar2 == 0) {
        operator_delete(piVar2);
      }
    }
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
    }
    FUN_1009b9740(uVar6,param_2,param_3);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
    }
    QMetaObject::tr((char *)&local_58,(char *)&PTR_staticMetaObject_1022339b0,0x1e35aab);
    FUN_1009b9880(uVar6,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        local_40 = (code *)CONCAT71(local_40._1_7_,*(int *)local_58 != 0);
        if (*(int *)local_58 != 0) goto LAB_10098f5d8;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10098f5d8:
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
    }
    QMetaObject::tr((char *)&local_60,(char *)&PTR_staticMetaObject_1022339b0,0x1e356cf);
    QMetaObject::tr((char *)&local_68,(char *)&PTR_staticMetaObject_1022339b0,0x1dc154b);
    local_70 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1009b9900(uVar6,&local_60,&local_68,&local_70);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        local_40 = (code *)CONCAT71(local_40._1_7_,*(int *)local_70 != 0);
        if (*(int *)local_70 != 0) goto LAB_10098f67d;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10098f67d:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        local_40 = (code *)CONCAT71(local_40._1_7_,*(int *)local_68 != 0);
        if (*(int *)local_68 != 0) goto LAB_10098f6ad;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10098f6ad:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        local_40 = (code *)CONCAT71(local_40._1_7_,*(int *)local_60 != 0);
        if (*(int *)local_60 != 0) goto LAB_10098f6dd;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10098f6dd:
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
    }
    local_40 = FUN_1009c13b0;
    local_38 = 0;
    local_50 = FUN_10098f950;
    local_48 = 0;
    puVar4 = operator_new(0x20);
    *puVar4 = 1;
    *(code **)(puVar4 + 2) = FUN_10098fae0;
    *(code **)(puVar4 + 4) = FUN_10098f950;
    *(undefined8 *)(puVar4 + 6) = 0;
    QObject::connectImpl
              (local_78,uVar6,&local_40,param_1,&local_50,puVar4,0,0,&PTR_staticMetaObject_102235e50
              );
    QMetaObject::Connection::~Connection(local_78);
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
    }
    local_40 = FUN_1009c13d0;
    local_38 = 0;
    local_50 = FUN_10098f960;
    local_48 = 0;
    puVar4 = operator_new(0x20);
    *puVar4 = 1;
    *(code **)(puVar4 + 2) = FUN_10098fae0;
    *(code **)(puVar4 + 4) = FUN_10098f960;
    *(undefined8 *)(puVar4 + 6) = 0;
    QObject::connectImpl
              (local_80,uVar6,&local_40,param_1,&local_50,puVar4,0,0,&PTR_staticMetaObject_102235e50
              );
    QMetaObject::Connection::~Connection(local_80);
    lVar5 = *(long *)(param_1 + 0x30);
    plVar7 = (long *)0x0;
    if (lVar5 == 0) goto LAB_10098f836;
  }
  plVar7 = (long *)0x0;
  if (*(int *)(lVar5 + 4) != 0) {
    plVar7 = *(long **)(param_1 + 0x38);
  }
LAB_10098f836:
  (**(code **)(*plVar7 + 0x1a0))();
  return;
}

