
void FUN_10041f350(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  param_3 = (long *)*param_3;
  plVar1 = (long *)*param_2;
  puVar3 = operator_new(0x20);
  *(undefined4 *)(puVar3 + 2) = 1;
  *(undefined4 *)((long)puVar3 + 0x14) = *(undefined4 *)((long)plVar1 + 0x14);
  *(undefined1 *)(puVar3 + 3) = 0xff;
  plVar7 = (long *)*plVar1;
  plVar6 = plVar1;
  puVar4 = puVar3;
  puVar5 = puVar3;
  if (plVar7 != param_3) {
    do {
      puVar4 = operator_new(0x18);
      piVar2 = (int *)plVar7[2];
      puVar4[2] = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *puVar5 = puVar4;
      puVar4[1] = puVar5;
      plVar7 = (long *)*plVar7;
      puVar5 = puVar4;
    } while (plVar7 != param_3);
    plVar6 = (long *)*param_2;
  }
  *param_1 = puVar4;
  puVar5 = puVar4;
  plVar7 = param_3;
  puVar9 = puVar4;
  if (param_3 != plVar6) {
    do {
      puVar5 = operator_new(0x18);
      piVar2 = (int *)plVar7[2];
      puVar5[2] = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *puVar9 = puVar5;
      puVar5[1] = puVar9;
      plVar7 = (long *)*plVar7;
      puVar9 = puVar5;
    } while (plVar7 != (long *)*param_2);
  }
  *puVar5 = puVar3;
  puVar3[1] = puVar5;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != -1) {
    if (*(int *)(lVar8 + 0x10) != 0) {
      LOCK();
      piVar2 = (int *)(lVar8 + 0x10);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_10041f481;
      lVar8 = *param_2;
    }
    FUN_10041f220(param_2,lVar8);
  }
LAB_10041f481:
  *param_2 = (long)puVar3;
  if (param_3 != plVar1) {
    *param_1 = *puVar4;
  }
  return;
}

