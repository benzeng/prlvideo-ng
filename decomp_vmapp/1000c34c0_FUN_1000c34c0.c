
uint FUN_1000c34c0(long *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  void *pvVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  
  if ((uint)*(byte *)(param_2 + 9) != *(uint *)((long)param_1 + 0x34)) {
    return (uint)*(byte *)(param_2 + 9);
  }
  cVar5 = *(char *)(param_2 + 8);
  bVar6 = *(byte *)(param_2 + 10);
  lVar9 = FUN_1000e99d0(*(undefined8 *)(param_1[5] + 0x1158),0x211,0);
  uVar8 = *(uint *)((long)param_1 + 0x34);
  lVar10 = FUN_1000e99d0(*(undefined8 *)(param_1[5] + 0x1158),0x211,0);
  uVar7 = *(uint *)((long)param_1 + 0x34);
  pvVar11 = _malloc(0x4a0);
  if (pvVar11 == (void *)0x0) {
    return 0;
  }
  ___bzero(pvVar11,0x4a0);
  *(undefined4 *)((long)pvVar11 + 8) = 0x12;
  lVar14 = (ulong)uVar8 * 0x940;
  piVar1 = (int *)(lVar9 + 4 + lVar14);
  piVar2 = (int *)(lVar9 + 4 + lVar14);
  LOCK();
  iVar12 = *piVar2;
  if (iVar12 == 0) {
    *piVar2 = 1;
    iVar12 = 0;
  }
  UNLOCK();
  while (iVar12 == 1) {
    QThread::msleep(0x14);
    LOCK();
    iVar12 = *piVar1;
    if (iVar12 == 0) {
      *piVar1 = 1;
      iVar12 = 0;
    }
    UNLOCK();
  }
  if (*(int *)(lVar9 + lVar14) != 0) {
    _memcpy((undefined4 *)((long)pvVar11 + 8),(void *)(lVar9 + 8 + lVar14),0x498);
    *(undefined4 *)(lVar9 + lVar14) = 0;
  }
  LOCK();
  if (*piVar1 == 1) {
    *piVar1 = 0;
  }
  UNLOCK();
  if (cVar5 != '\x01') {
switchD_1000c35fc_caseD_f:
    _free(pvVar11);
    goto LAB_1000c3651;
  }
  switch(*(undefined4 *)((long)pvVar11 + 8)) {
  case 0:
    (**(code **)(*param_1 + 0x18))(param_1,1);
    if (*(int *)((long)param_1 + 0x34) == 0) {
      FUN_1000b4150(param_1[5],3,0xffffffff);
    }
    (**(code **)(*(long *)param_1[4] + 0x90))((long *)param_1[4],pvVar11);
    break;
  case 1:
    (**(code **)(*(long *)param_1[4] + 0x80))((long *)param_1[4],pvVar11);
    break;
  case 2:
    (**(code **)(*(long *)param_1[4] + 0x98))((long *)param_1[4],pvVar11);
    break;
  case 3:
    (**(code **)(*(long *)param_1[4] + 0xa0))((long *)param_1[4],pvVar11);
    break;
  case 4:
    (**(code **)(*(long *)param_1[4] + 0xa8))((long *)param_1[4],pvVar11);
    break;
  case 5:
    (**(code **)(*(long *)param_1[4] + 0xb0))((long *)param_1[4],pvVar11);
    break;
  case 6:
    (**(code **)(*(long *)param_1[4] + 0xb8))((long *)param_1[4],pvVar11);
    break;
  case 7:
    (**(code **)(*(long *)param_1[4] + 0xc0))((long *)param_1[4],pvVar11);
    break;
  case 8:
    (**(code **)(*(long *)param_1[4] + 200))((long *)param_1[4],pvVar11);
    break;
  case 9:
    (**(code **)(*(long *)param_1[4] + 0xd0))((long *)param_1[4],pvVar11);
    break;
  case 10:
    (**(code **)(*(long *)param_1[4] + 0xf8))((long *)param_1[4],pvVar11);
    break;
  case 0xb:
    (**(code **)(*(long *)param_1[4] + 0x88))((long *)param_1[4],pvVar11);
    FUN_1000c22b0(param_1);
    if (*(int *)((long)param_1 + 0x34) != 0) break;
    lVar9 = param_1[5];
    uVar13 = 1;
    goto LAB_1000c38f3;
  case 0xc:
    (**(code **)(*(long *)param_1[4] + 0xd8))((long *)param_1[4],pvVar11);
    (**(code **)(*param_1 + 0x18))(param_1,1);
    if (*(int *)((long)param_1 + 0x34) != 0) break;
    lVar9 = param_1[5];
    uVar13 = 3;
LAB_1000c38f3:
    FUN_1000b4150(lVar9,uVar13,0xffffffff);
    break;
  case 0xd:
    (**(code **)(*(long *)param_1[4] + 0xf0))((long *)param_1[4],pvVar11);
    break;
  case 0xe:
    (**(code **)(*(long *)param_1[4] + 0xe0))((long *)param_1[4],pvVar11);
    break;
  default:
    goto switchD_1000c35fc_caseD_f;
  case 0x10:
    (**(code **)(*(long *)param_1[4] + 0x100))((long *)param_1[4],pvVar11);
    break;
  case 0x11:
    (**(code **)(*(long *)param_1[4] + 0xe8))((long *)param_1[4],pvVar11);
  }
LAB_1000c3651:
  lVar9 = 0;
  if ((bVar6 & 1) != 0) {
    if ((bVar6 & 2) == 0) {
LAB_1000c3690:
      lVar9 = FUN_1000c29e0(param_1);
    }
    else {
      iVar12 = -0x32;
      do {
        iVar12 = iVar12 + 1;
        if (iVar12 == 0) goto LAB_1000c3690;
        QThread::msleep(100);
        lVar9 = FUN_1000c29e0(param_1);
      } while (lVar9 == 0);
    }
  }
  lVar14 = (ulong)uVar7 * 0x940;
  puVar3 = (uint *)(lVar10 + 0x4a4 + lVar14);
  piVar1 = (int *)(lVar10 + 0x4a0 + lVar14);
  while( true ) {
    LOCK();
    uVar8 = *puVar3;
    if (uVar8 == 0) {
      *puVar3 = 1;
      uVar8 = 0;
    }
    UNLOCK();
    while (uVar8 == 1) {
      QThread::msleep(0x14);
      LOCK();
      uVar8 = *puVar3;
      if (uVar8 == 0) {
        *puVar3 = 1;
        uVar8 = 0;
      }
      UNLOCK();
    }
    if (*piVar1 == 0) break;
    LOCK();
    if (*puVar3 == 1) {
      *puVar3 = 0;
    }
    UNLOCK();
    QThread::msleep(0x14);
  }
  puVar4 = (undefined4 *)(lVar10 + 0x4a8 + lVar14);
  if (lVar9 == 0) {
    ___bzero(puVar4,0x498);
    *puVar4 = 0x12;
  }
  else {
    _memcpy(puVar4,(void *)(lVar9 + 8),0x498);
  }
  *piVar1 = 1;
  LOCK();
  uVar8 = *puVar3;
  if (uVar8 == 1) {
    *puVar3 = 0;
    uVar8 = 1;
  }
  UNLOCK();
  return uVar8;
}

