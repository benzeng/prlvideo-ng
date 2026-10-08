
undefined8 FUN_10031c280(long param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  bool bVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  Connection local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  FUN_10031c7c0(param_1,1);
  lVar6 = *(long *)(param_1 + 0x168);
  if (((lVar6 == 0) || (*(int *)(lVar6 + 4) == 0)) || (*(long *)(param_1 + 0x170) == 0)) {
    pQVar3 = operator_new(0x40);
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_10018c650(&local_48,uVar7);
    FUN_100729e60(pQVar3,&local_48);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    piVar5 = *(int **)(param_1 + 0x168);
    if (piVar5 != piVar4) {
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_31 = *piVar4 != 0;
        UNLOCK();
        piVar5 = *(int **)(param_1 + 0x168);
      }
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        local_31 = *piVar5 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (*(void **)(param_1 + 0x168) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x168));
        }
      }
      *(int **)(param_1 + 0x168) = piVar4;
      *(QObject **)(param_1 + 0x170) = pQVar3;
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar4);
      }
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10031c3de;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10031c3de:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10031c40e;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10031c40e:
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x168) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x168) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x170);
    }
    uVar8 = 0;
    QObject::connect(local_50,uVar7,"2startFinished(bool)",param_1,"1onSilentOperationHidden(bool)",
                     0);
    QMetaObject::Connection::~Connection(local_50);
    lVar6 = *(long *)(param_1 + 0x168);
    if (lVar6 != 0) goto LAB_10031c464;
  }
  else {
LAB_10031c464:
    uVar8 = 0;
    if (*(int *)(lVar6 + 4) != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x170);
    }
  }
  FUN_10072a420(uVar8);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x168) != 0) &&
     (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x168) + 4) != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x170);
  }
  pQVar1 = (QArrayData *)*param_2;
  if (*(int *)(pQVar1 + 4) == 0) {
    QMetaObject::tr((char *)&local_60,(char *)&PTR_staticMetaObject_10220b820,0x1de855a);
    if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
       (*(long *)(param_1 + 0x18) == 0)) {
      local_68 = (QArrayData *)PTR_shared_null_1021e1288;
    }
    else {
      FUN_10018d830(&local_68);
    }
    bVar2 = true;
    QString::arg(&local_58,&local_60,&local_68,0,0x20);
  }
  else {
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    bVar2 = false;
    local_58 = pQVar1;
  }
  FUN_10072a200(uVar7,&local_58,0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031c567;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10031c567:
  if (!bVar2) goto LAB_10031c5cb;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10031c59b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10031c59b:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) goto LAB_10031c5cb;
      local_31 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10031c5cb:
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x168) != 0) &&
     (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x168) + 4) != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x170);
  }
  return uVar7;
}

