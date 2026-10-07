
void FUN_1005d6c90(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2;
  for (plVar5 = (long *)param_1[1]; (param_2 != param_3 && (lVar4 = param_2, plVar5 != param_1));
      plVar5 = (long *)plVar5[1]) {
    *(undefined4 *)(plVar5 + 2) = *(undefined4 *)(param_2 + 0x10);
    QString::operator=((QString *)(plVar5 + 3),(QString *)(param_2 + 0x18));
    QString::operator=((QString *)(plVar5 + 4),(QString *)(param_2 + 0x20));
    lVar4 = *(long *)(param_2 + 0x28);
    plVar5[6] = *(long *)(param_2 + 0x30);
    plVar5[5] = lVar4;
    lVar4 = *(long *)(param_2 + 0x38);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar2 = (long *)plVar5[7];
    plVar5[7] = lVar4;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    param_2 = *(long *)(param_2 + 8);
    lVar4 = param_3;
  }
  if (plVar5 != param_1) {
    lVar4 = *param_1;
    lVar3 = *plVar5;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = lVar3;
    do {
      plVar2 = (long *)plVar5[1];
      param_1[2] = param_1[2] + -1;
      FUN_10057e590(plVar5 + 2);
      operator_delete(plVar5);
      plVar5 = plVar2;
    } while (plVar2 != param_1);
    return;
  }
  FUN_1005d6dd0(param_1,param_1,lVar4,param_3,0);
  return;
}

