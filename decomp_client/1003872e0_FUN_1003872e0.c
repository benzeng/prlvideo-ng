
void FUN_1003872e0(long param_1,QObject *param_2)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  int *local_48;
  long *local_40;
  long *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  FUN_1003895f0(&local_48,param_1 + 0x40);
  local_40 = (long *)(local_48 + (long)local_48[2] * 2 + 4);
  local_38 = (long *)(local_48 + (long)local_48[3] * 2 + 4);
  if (local_48[2] != local_48[3]) {
    do {
      local_30 = 1;
      lVar1 = *(long *)*local_40;
      if ((((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
          (pQVar2 = (QObject *)((long *)*local_40)[1], pQVar2 != (QObject *)0x0)) &&
         (pQVar2 != param_2)) {
        QGraphicsItem::setOpacity(DAT_100e11138);
      }
      local_40 = local_40 + 1;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  if (*local_48 != -1) {
    if (*local_48 != 0) {
      LOCK();
      *local_48 = *local_48 + -1;
      local_21 = *local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003873af;
    }
    FUN_100389550(&local_48,local_48);
  }
LAB_1003873af:
  piVar3 = (int *)0x0;
  if (param_2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  piVar4 = *(int **)(param_1 + 0x58);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x58);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x58));
      }
    }
    *(int **)(param_1 + 0x58) = piVar3;
    *(QObject **)(param_1 + 0x60) = param_2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  return;
}

