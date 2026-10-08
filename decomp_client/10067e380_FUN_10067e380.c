
void FUN_10067e380(long param_1,undefined8 param_2,uint *param_3)

{
  undefined4 uVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  AnonymousUnion0 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  long local_48;
  undefined *local_40;
  undefined1 local_31;
  
  CContentModel::setBusy(SUB81(param_1,0));
  if ((*param_3 & 1) == 0) {
    uVar1 = FUN_1006268d0();
    *(undefined4 *)(param_1 + 0x17c) = uVar1;
    *(undefined4 *)(param_1 + 0x150) = 1;
    FUN_10084a8e0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x14c) = 1;
  }
  local_40 = PTR_shared_null_1021e15e8;
  local_50 = (QArrayData *)QString::fromAscii_helper(";",1);
  QString::split(&local_48,param_2,&local_50,0,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067e43e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10067e43e:
  uVar8 = (ulong)*(uint *)(local_48 + 8);
  if ((int)*(uint *)(local_48 + 8) < *(int *)(local_48 + 0xc)) {
    lVar9 = 0;
    do {
      FUN_100109920(&local_58,local_48 + 0x10 + ((int)uVar8 + lVar9) * 8);
      FUN_1000341d0(&local_40,&local_58);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10067e4ae;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_10067e4ae:
      lVar9 = lVar9 + 1;
      uVar8 = (ulong)*(int *)(local_48 + 8);
    } while (lVar9 < (long)((long)*(int *)(local_48 + 0xc) - uVar8));
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper(";",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_60.field0,(QChar *)&local_40,
             (int)*(undefined8 *)(pQVar2 + 0x10) + (int)pQVar2);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067e51b;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10067e51b:
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  uVar3 = FUN_10016f500(uVar3);
  uVar7 = *param_3;
  if (*(char *)(param_1 + 0x160) != '\0') {
    uVar7 = uVar7 | 2;
  }
  pQVar4 = (QObject *)FUN_10068a400(*(undefined8 *)(param_1 + 0x20),uVar3,&local_60,uVar7);
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = *(int **)(param_1 + 0x48);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x48);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x48));
      }
    }
    *(int **)(param_1 + 0x48) = piVar5;
    *(QObject **)(param_1 + 0x50) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_31 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_31 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067e5fa;
    }
    QArrayData::deallocate((QArrayData *)local_60.field1,2,8);
  }
LAB_10067e5fa:
  FUN_100039a80(&local_48);
  FUN_100039a80(&local_40);
  return;
}

