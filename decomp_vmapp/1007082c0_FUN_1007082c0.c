
void FUN_1007082c0(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int local_c8 [36];
  int local_38 [2];
  long *local_30;
  
  cVar7 = (**(code **)(*param_1 + 0x98))();
  if (cVar7 == '\0') {
    return;
  }
  iVar8 = _fstat_INODE64((int)param_1[1],local_c8);
  if (iVar8 < 0) {
    return;
  }
  QMutex::lock();
  puVar5 = PTR_nothrow_100ba21c8;
  if (DAT_1011bda88 == (undefined8 *)0x0) {
LAB_100708365:
    pvVar9 = operator_new(8,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar10 = operator_new(0x18,(nothrow_t *)puVar5);
    if (plVar10 == (long *)0x0) {
      bVar4 = true;
      plVar10 = (long *)0x0;
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
        plVar10 = (long *)0x0;
      }
    }
    else {
      *(undefined4 *)(plVar10 + 1) = 1;
      plVar10[2] = (long)pvVar9;
      *plVar10 = (long)&PTR_FUN_10116d9a8;
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      bVar4 = false;
    }
    plVar3 = (long *)param_1[6];
    param_1[6] = (long)plVar10;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    if (!bVar4) {
      LOCK();
      plVar3 = plVar10 + 1;
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    if ((param_1[6] == 0) || (*(long *)(param_1[6] + 0x10) == 0)) goto LAB_10070850f;
    uVar11 = FUN_1007dc310();
    plVar10 = (long *)param_1[6];
    *(undefined8 *)plVar10[2] = uVar11;
    if (plVar10 != (long *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_38[0] = local_c8[0];
    local_30 = plVar10;
    FUN_100708cd0(&DAT_1011bda80,local_38);
    if (plVar10 == (long *)0x0) goto LAB_10070850f;
    plVar3 = plVar10 + 1;
    LOCK();
    plVar2 = plVar10 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    LOCK();
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    LOCK();
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 != 1) goto LAB_10070850f;
    lVar12 = *plVar10;
  }
  else {
    puVar6 = DAT_1011bda88;
    puVar14 = &DAT_1011bda88;
    do {
      while (puVar13 = puVar6, *(int *)(puVar13 + 4) < local_c8[0]) {
        puVar1 = puVar13 + 1;
        puVar13 = puVar14;
        puVar6 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_100708350;
      }
      puVar6 = (undefined8 *)*puVar13;
      puVar14 = puVar13;
    } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
LAB_100708350:
    if (((undefined8 **)puVar13 == &DAT_1011bda88) || (local_c8[0] < *(int *)(puVar13 + 4)))
    goto LAB_100708365;
    lVar12 = puVar13[5];
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    plVar10 = (long *)param_1[6];
    param_1[6] = lVar12;
    if (plVar10 == (long *)0x0) goto LAB_10070850f;
    LOCK();
    plVar3 = plVar10 + 1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 != 1) goto LAB_10070850f;
    lVar12 = *plVar10;
  }
  (**(code **)(lVar12 + 0x10))(plVar10);
LAB_10070850f:
  QMutex::unlock();
  return;
}

