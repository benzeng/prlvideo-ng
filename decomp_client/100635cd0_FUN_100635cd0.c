
void FUN_100635cd0(CBaseDialog *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  CBaseDialog::CBaseDialog(param_1,param_3,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102222420;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102222610;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102222660;
  pvVar3 = operator_new(0x50);
  *(void **)(param_1 + 0x60) = pvVar3;
  *(undefined **)(param_1 + 0x68) = PTR_shared_null_1021e1288;
  piVar2 = (int *)*param_2;
  *(int **)(param_1 + 0x70) = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(param_1 + 0x70));
      lVar4 = *(long *)(param_1 + 0x70);
      iVar1 = *(int *)(lVar4 + 8);
      if (iVar1 != *(int *)(lVar4 + 0xc)) {
        puVar5 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        puVar6 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
        lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar5;
          *puVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  FUN_100635ed0(param_1);
  FUN_1006368f0(param_1);
  return;
}

