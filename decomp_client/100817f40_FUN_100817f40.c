
void FUN_100817f40(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  
  *param_1 = *param_2;
  piVar1 = *(int **)(param_2 + 2);
  *(int **)(param_1 + 2) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[4] = param_2[4];
  piVar1 = *(int **)(param_2 + 6);
  *(int **)(param_1 + 6) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 8);
  *(int **)(param_1 + 8) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 10);
  *(int **)(param_1 + 10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0xc] = param_2[0xc];
  lVar2 = *(long *)(param_2 + 0xe);
  *(long *)(param_1 + 0xe) = lVar2;
  if (lVar2 != 0) {
    _PrlHandle_AddRef();
  }
  piVar1 = *(int **)(param_2 + 0x10);
  if (*piVar1 == 0) {
    uVar3 = QMapDataBase::createData();
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    if (*(long *)(*(long *)(param_2 + 0x10) + 0x10) != 0) {
      puVar4 = (ulong *)FUN_10023a060(*(long *)(*(long *)(param_2 + 0x10) + 0x10),uVar3);
      lVar2 = *(long *)(param_1 + 0x10);
      *(ulong **)(lVar2 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | lVar2 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*piVar1 == -1) {
    *(int **)(param_1 + 0x10) = piVar1;
  }
  else {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  piVar1 = *(int **)(param_2 + 0x12);
  *(int **)(param_1 + 0x12) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_2 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  *(int **)(param_1 + 0x14) = piVar1;
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  QVariant::QVariant((QVariant *)(param_1 + 0x1c),(QVariant *)(param_2 + 0x1c));
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  param_1[0x24] = param_2[0x24];
  piVar1 = *(int **)(param_2 + 0x26);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(int **)(param_1 + 0x26) = piVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  return;
}

