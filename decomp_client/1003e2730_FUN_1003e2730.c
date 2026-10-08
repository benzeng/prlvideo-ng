
void FUN_1003e2730(QObject *param_1)

{
  QObject *pQVar1;
  long *plVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  int *local_50;
  int *local_48;
  int *local_40;
  uint local_38;
  undefined1 local_29;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f2040;
  pQVar1 = param_1 + 0x28;
  FUN_1003e71c0(&local_50,pQVar1);
  local_48 = local_50 + (long)local_50[2] * 2 + 4;
  local_40 = local_50 + (long)local_50[3] * 2 + 4;
  local_38 = 1;
  if (local_50[2] != local_50[3]) {
    do {
      piVar4 = (int *)**(undefined8 **)local_48;
      plVar2 = (long *)(*(undefined8 **)local_48)[1];
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        local_29 = *piVar4 != 0;
        UNLOCK();
      }
      if (local_38 != 0) {
        if (((piVar4 != (int *)0x0) && (plVar2 != (long *)0x0)) && (piVar4[1] != 0)) {
          (**(code **)(*plVar2 + 0x20))();
        }
        local_38 = 0;
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          operator_delete(piVar4);
        }
      }
      local_48 = local_48 + 2;
      uVar3 = local_38 ^ 1;
      bVar5 = local_38 != 1;
      local_38 = uVar3;
    } while ((bVar5) && (local_48 != local_40));
  }
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_29 = *local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003e2836;
    }
    FUN_1003e63d0(&local_50,local_50);
  }
LAB_1003e2836:
  FUN_1003e6080(pQVar1);
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  FUN_1002a9c90(param_1 + 0x78);
  QVariant::~QVariant((QVariant *)(param_1 + 0x68));
  piVar4 = *(int **)pQVar1;
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003e288c;
      piVar4 = *(int **)pQVar1;
    }
    FUN_1003e63d0(pQVar1,piVar4);
  }
LAB_1003e288c:
  QObject::~QObject(param_1);
  return;
}

