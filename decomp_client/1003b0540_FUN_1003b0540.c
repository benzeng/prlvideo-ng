
void FUN_1003b0540(QObject *param_1)

{
  undefined8 uVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  void *pvVar6;
  CWidgetIniter *pCVar7;
  CWidgetMapper *this;
  undefined8 uVar8;
  QArrayData *local_30;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  uVar1 = FUN_100152280();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1001884b0(&local_30,uVar8);
  pQVar2 = (QObject *)FUN_100152a20(uVar1,&local_30);
  piVar3 = (int *)0x0;
  if (pQVar2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  piVar4 = *(int **)(param_1 + 0x28);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_24 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x28);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_23 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_23) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x28));
      }
    }
    *(int **)(param_1 + 0x28) = piVar3;
    *(QObject **)(param_1 + 0x30) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_22 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_22) {
      operator_delete(piVar3);
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003b064e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003b064e:
  pvVar5 = operator_new(0x20);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1003e4e40(pvVar5,*(undefined8 *)(param_1 + 0x10),uVar8,param_1);
  *(void **)(param_1 + 0x40) = pvVar5;
  pvVar5 = operator_new(0x18);
  FUN_1003ad840(pvVar5,*(undefined8 *)(param_1 + 0x10),param_1);
  *(void **)(param_1 + 0x48) = pvVar5;
  pvVar6 = operator_new(0x20);
  FUN_1003e1ad0(pvVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40),pvVar5,
                param_1);
  *(void **)(param_1 + 0x50) = pvVar6;
  pvVar5 = operator_new(0x20);
  FUN_1003dc2b0(pvVar5,*(undefined8 *)(param_1 + 0x10));
  *(void **)(param_1 + 0x58) = pvVar5;
  pCVar7 = operator_new(0x18);
  FUN_100418320(pCVar7,*(undefined8 *)(param_1 + 0x10));
  *(CWidgetIniter **)(param_1 + 0x60) = pCVar7;
  this = operator_new(0x48);
  CWidgetMapper::CWidgetMapper
            (this,*(CMappingController **)(param_1 + 0x50),*(CDataProvider **)(param_1 + 0x58),
             pCVar7,param_1);
  *(CWidgetMapper **)(param_1 + 0x68) = this;
  pvVar5 = operator_new(0x18);
  FUN_1003be780(pvVar5,*(undefined8 *)(param_1 + 0x10));
  *(void **)(param_1 + 0x70) = pvVar5;
  FUN_1003e4e50(*(undefined8 *)(param_1 + 0x40));
  return;
}

