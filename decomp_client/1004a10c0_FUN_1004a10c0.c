
void FUN_1004a10c0(long param_1)

{
  QObject *pQVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *local_98;
  int *local_90;
  QObject *local_88;
  int *local_80;
  QObject *local_78;
  int *local_70;
  QObject *local_68;
  int *local_60;
  QObject *local_58;
  int *local_50;
  QObject *local_48;
  int *local_40;
  undefined1 local_31;
  
  lVar5 = FUN_10044e580();
  if (lVar5 != 0) {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x30);
    iVar3 = FUN_10044b4d0(param_1);
    uVar6 = FUN_10044e580(param_1);
    iVar4 = FUN_10015aae0(uVar6);
    WidgetUtils::Adjuster::adjustWidgetText(pQVar1,iVar3,iVar4);
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x60);
    iVar3 = FUN_10044b4d0(param_1);
    uVar6 = FUN_10044e580(param_1);
    iVar4 = FUN_10015aae0(uVar6);
    WidgetUtils::Adjuster::adjustWidgetText(pQVar1,iVar3,iVar4);
  }
  FontUtils::setSmallFont(*(QWidget **)(*(long *)(param_1 + 0x38) + 0x38),false);
  local_40 = (int *)PTR_shared_null_1021e15e8;
  uVar6 = FUN_10044e660(param_1);
  cVar2 = FUN_1003bf280(uVar6);
  if (cVar2 == '\0') {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x30);
    piVar7 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_50 = piVar7;
    local_48 = pQVar1;
    FUN_10007b8d0(&local_40,&local_50);
    local_58 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x60);
    piVar8 = (int *)0x0;
    if (local_58 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_58);
    }
    local_60 = piVar8;
    FUN_10007b8d0(&local_40,&local_60);
    local_68 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x40);
    piVar9 = (int *)0x0;
    if (local_68 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_68);
    }
    local_70 = piVar9;
    FUN_10007b8d0(&local_40,&local_70);
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
  }
  uVar6 = FUN_10044e660(param_1);
  cVar2 = FUN_1003bf250(uVar6);
  if (cVar2 == '\0') {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x50);
    piVar7 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_80 = piVar7;
    local_78 = pQVar1;
    FUN_10007b8d0(&local_40,&local_80);
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
  }
  uVar6 = FUN_10044e660(param_1);
  cVar2 = FUN_1003bf3b0(uVar6);
  if (cVar2 == '\0') {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x48);
    piVar7 = (int *)0x0;
    if (pQVar1 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    }
    local_90 = piVar7;
    local_88 = pQVar1;
    FUN_10007b8d0(&local_40,&local_90);
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
  }
  FUN_10006b440(&local_98,&local_40);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(param_1,&local_98);
  if (*local_98 != -1) {
    if (*local_98 != 0) {
      LOCK();
      *local_98 = *local_98 + -1;
      local_31 = *local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a1369;
    }
    FUN_10006b5d0(&local_98,local_98);
  }
LAB_1004a1369:
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_10006b5d0(&local_40,local_40);
  }
  return;
}

