
void FUN_1005d6340(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  pvVar4 = operator_new(0x78);
  uVar2 = *param_3;
  *(undefined8 *)((long)pvVar4 + 0x28) = param_3[1];
  *(undefined8 *)((long)pvVar4 + 0x20) = uVar2;
  uVar2 = param_3[2];
  *(undefined8 *)((long)pvVar4 + 0x38) = param_3[3];
  *(undefined8 *)((long)pvVar4 + 0x30) = uVar2;
  piVar3 = (int *)param_3[4];
  *(int **)((long)pvVar4 + 0x40) = piVar3;
  if (*piVar3 != -1) {
    if (*piVar3 == 0) {
      QListData::detach((int)(long *)((long)pvVar4 + 0x40));
      lVar5 = *(long *)((long)pvVar4 + 0x40);
      iVar1 = *(int *)(lVar5 + 8);
      if (iVar1 != *(int *)(lVar5 + 0xc)) {
        puVar6 = (undefined8 *)(param_3[4] + 0x10 + (long)*(int *)(param_3[4] + 8) * 8);
        puVar7 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
        lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar3 = (int *)*puVar6;
          *puVar7 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
  }
  uVar2 = param_3[5];
  *(undefined8 *)((long)pvVar4 + 0x50) = param_3[6];
  *(undefined8 *)((long)pvVar4 + 0x48) = uVar2;
  QDateTime::QDateTime((QDateTime *)((long)pvVar4 + 0x58),(QDateTime *)(param_3 + 7));
  lVar5 = (long)pvVar4 + 0x60;
  *(long *)((long)pvVar4 + 0x60) = lVar5;
  *(long *)((long)pvVar4 + 0x68) = lVar5;
  *(undefined8 *)((long)pvVar4 + 0x70) = 0;
  for (puVar6 = (undefined8 *)param_3[9]; puVar6 != param_3 + 8; puVar6 = (undefined8 *)puVar6[1]) {
    FUN_1005d52c0(lVar5,puVar6 + 2);
  }
  uVar2 = *param_3;
  *(undefined8 *)((long)pvVar4 + 0x28) = param_3[1];
  *(undefined8 *)((long)pvVar4 + 0x20) = uVar2;
  *param_1 = pvVar4;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

