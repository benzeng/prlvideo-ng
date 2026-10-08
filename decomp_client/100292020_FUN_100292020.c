
undefined8 FUN_100292020(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  int *piVar3;
  CWindowShading *this;
  undefined8 uVar4;
  undefined8 uVar5;
  QWidget *pQVar6;
  bool bVar7;
  QArrayData *local_b8;
  CTaskGenericId local_b0 [24];
  Data_conflict local_98;
  undefined4 local_90;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  long local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  pQVar1 = operator_new(0x50);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10058d0e0(pQVar1,uVar5,uVar4,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                param_1 + 0x50);
  piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  piVar3 = *(int **)(param_1 + 0x38);
  if (piVar3 != piVar2) {
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      piVar3 = *(int **)(param_1 + 0x38);
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x38) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x38));
      }
    }
    *(int **)(param_1 + 0x38) = piVar2;
    *(QObject **)(param_1 + 0x40) = pQVar1;
  }
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar2);
    }
  }
  FUN_10015a350(&local_38);
  if (local_38 != 0) {
    FUN_10015aa50(&local_40);
    bVar7 = true;
    if (local_40 != 0) {
      FUN_10015aa80(&local_48);
      bVar7 = local_48 == 0;
      if (!bVar7) {
        _PrlHandle_Free();
      }
      if (local_40 != 0) {
        _PrlHandle_Free();
      }
    }
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
    if (!bVar7) goto LAB_10029231c;
  }
  this = operator_new(0x40);
  pQVar6 = (QWidget *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar6 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar6 = *(QWidget **)(param_1 + 0x40);
  }
  CWindowShading::CWindowShading(this,pQVar6);
  uVar4 = CTaskManager::instance();
  local_88 = (QArrayData *)QString::fromAscii_helper("deleteLater",0xb);
  local_90 = 0x80000000;
  local_98.field7 = 0;
  FUN_100a1c6b0(local_80,&local_88,this,&local_98);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10015aab0(&local_b8,uVar5);
  FUN_100228380(local_b0,&local_b8);
  CTaskManager::addTaskWatcher(uVar4,local_80,local_b0,4);
  CTaskGenericId::~CTaskGenericId(local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002922b2;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1002922b2:
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    local_29 = *local_80[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10029231c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10029231c:
  QWidget::show();
  QWidget::raise();
  QWidget::activateWindow();
  return 0;
}

