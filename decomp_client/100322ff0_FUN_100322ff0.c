
QObject * FUN_100322ff0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  QObject *pQVar4;
  long *plVar5;
  QObject *pQVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return (QObject *)0x0;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return (QObject *)0x0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return (QObject *)0x0;
  }
  local_50 = *param_3;
  local_48 = param_3[1];
  local_40 = *param_2;
  plVar1 = (long *)(param_1 + 0x20);
  local_38 = param_4;
  plVar5 = (long *)FUN_100327bf0(plVar1,&local_50,0);
  if (*plVar5 == *(long *)(param_1 + 0x20)) {
    pQVar6 = operator_new(0xa0);
    uVar10 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_100353d40(pQVar6,uVar10,param_2,param_3,param_4);
    local_70 = *param_3;
    local_68 = param_3[1];
    local_60 = *param_2;
    local_58 = param_4;
    puVar7 = (undefined8 *)FUN_100327a40(plVar1,&local_70);
    piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
    piVar9 = (int *)*puVar7;
    if (piVar9 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
        piVar9 = (int *)*puVar7;
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_31 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((void *)*puVar7 != (void *)0x0)) {
          operator_delete((void *)*puVar7);
        }
      }
      *puVar7 = piVar8;
      puVar7[1] = pQVar6;
    }
    if (piVar8 == (int *)0x0) {
      return pQVar6;
    }
    LOCK();
    *piVar8 = *piVar8 + -1;
    iVar2 = *piVar8;
    UNLOCK();
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x14) == 0) {
      return (QObject *)0x0;
    }
    plVar5 = (long *)FUN_100327bf0(plVar1,&local_50,0);
    lVar3 = *plVar5;
    if (lVar3 == *plVar1) {
      return (QObject *)0x0;
    }
    piVar8 = *(int **)(lVar3 + 0x28);
    if (piVar8 == (int *)0x0) {
      return (QObject *)0x0;
    }
    pQVar4 = *(QObject **)(lVar3 + 0x30);
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
    pQVar6 = (QObject *)0x0;
    if (piVar8[1] != 0) {
      pQVar6 = pQVar4;
    }
    LOCK();
    *piVar8 = *piVar8 + -1;
    iVar2 = *piVar8;
    UNLOCK();
  }
  if (iVar2 == 0) {
    local_31 = 0;
    operator_delete(piVar8);
  }
  return pQVar6;
}

