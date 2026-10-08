
void FUN_100421cd0(CBaseDialog *param_1)

{
  CBaseDialog *pCVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  QMapNodeBase *pQVar5;
  QArrayData *pQVar6;
  bool bVar7;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  int *local_38;
  undefined1 local_29;
  
  *(undefined ***)param_1 = &PTR_FUN_102210f50;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102211140;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102211190;
  pCVar1 = param_1 + 0xa8;
  FUN_100426980(&local_38,pCVar1);
  FUN_1004296d0(&local_58,&local_38);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (local_58[2] != local_58[3]) {
    do {
      piVar2 = (int *)**(undefined8 **)local_50;
      plVar3 = (long *)(*(undefined8 **)local_50)[1];
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_29 = *piVar2 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        if (((piVar2 != (int *)0x0) && (plVar3 != (long *)0x0)) && (piVar2[1] != 0)) {
          (**(code **)(*plVar3 + 0x20))();
        }
        local_40 = 0;
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
      local_50 = local_50 + 2;
      uVar4 = local_40 ^ 1;
      bVar7 = local_40 != 1;
      local_40 = uVar4;
    } while ((bVar7) && (local_50 != local_48));
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_29 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100421e06;
    }
    FUN_10020b6d0(&local_58,local_58);
  }
LAB_100421e06:
  FUN_100426a40(pCVar1);
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if (*local_38 != -1) {
    if (*local_38 != 0) {
      LOCK();
      *local_38 = *local_38 + -1;
      local_29 = *local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100421e47;
    }
    FUN_10020b6d0(&local_38,local_38);
  }
LAB_100421e47:
  piVar2 = *(int **)(param_1 + 200);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 200) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 200));
    }
  }
  pQVar6 = *(QArrayData **)(param_1 + 0xb0);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_29 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100421eac;
      pQVar6 = *(QArrayData **)(param_1 + 0xb0);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100421eac:
  pQVar5 = *(QMapNodeBase **)pCVar1;
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100421ef2;
      pQVar5 = *(QMapNodeBase **)pCVar1;
    }
    if (*(long *)(pQVar5 + 0x10) != 0) {
      FUN_100429670();
      QMapDataBase::freeTree(pQVar5,(int)*(undefined8 *)(pQVar5 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
LAB_100421ef2:
  piVar2 = *(int **)(param_1 + 0x90);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x90) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x90));
    }
  }
  piVar2 = *(int **)(param_1 + 0x78);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x78) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x78));
    }
  }
  piVar2 = *(int **)(param_1 + 0x68);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_29 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x68));
    }
  }
  CBaseDialog::~CBaseDialog(param_1);
  return;
}

