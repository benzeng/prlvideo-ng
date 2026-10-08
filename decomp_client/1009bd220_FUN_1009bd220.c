
void FUN_1009bd220(QFutureInterfaceBase *param_1,undefined8 param_2,long *param_3,
                  QFutureInterfaceBase *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  QFutureInterfaceBase::QFutureInterfaceBase(param_1,0);
  *(undefined ***)param_1 = &PTR_FUN_10226d138;
  QFutureInterfaceBase::refT();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15e8;
  *(undefined ***)param_1 = &PTR_FUN_10227e228;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10227e258;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  piVar2 = (int *)*param_3;
  *(int **)(param_1 + 0x30) = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(param_1 + 0x30));
      lVar3 = *(long *)(param_1 + 0x30);
      iVar1 = *(int *)(lVar3 + 8);
      if (iVar1 != *(int *)(lVar3 + 0xc)) {
        puVar4 = (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 8) * 8);
        puVar5 = (undefined8 *)(lVar3 + 0x10 + (long)iVar1 * 8);
        lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar4;
          *puVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  param_1[0x38] = *param_4;
  return;
}

