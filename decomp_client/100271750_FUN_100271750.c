
void FUN_100271750(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [55];
  undefined1 local_29;
  
  FUN_1001cda40(local_80,DAT_102310918);
  uVar3 = FUN_100152280();
  pQVar4 = (QObject *)FUN_1001554a0(uVar3);
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x18);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar5;
    *(QObject **)(param_1 + 0x20) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_29 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar5);
    }
  }
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    uVar3 = FUN_100152280();
    iVar2 = FUN_100154d30(uVar3);
    if (iVar2 != 0) goto LAB_1002719d8;
    uVar3 = FUN_100152280();
    cVar1 = FUN_100154e60(uVar3,local_78,DAT_100e151d4);
    if (cVar1 == '\0') goto LAB_1002719d8;
  }
  uVar3 = FUN_100152280();
  local_88 = (QArrayData *)PTR_shared_null_1021e1288;
  local_90 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar4 = (QObject *)FUN_100152380(uVar3,local_78,local_70,local_68,local_60,&local_88,&local_90,1)
  ;
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x18);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar5;
    *(QObject **)(param_1 + 0x20) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_29 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100271937;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100271937:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100271967;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100271967:
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    FUN_100174630(*(long *)(param_1 + 0x20),1);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100173ff0(uVar3,0);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_1001747e0(uVar3,1);
    uVar3 = FUN_100152280();
    FUN_1001551f0(uVar3,local_78);
  }
LAB_1002719d8:
  FUN_1001091d0(local_80);
  return;
}

