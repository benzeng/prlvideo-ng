
undefined8 * FUN_100796340(undefined8 *param_1,long param_2,QString *param_3)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  plVar8 = *(long **)(param_2 + 0x18);
  if ((*(int *)((long)plVar8 + 0x14) == 0) || (uVar1 = *(uint *)(plVar8 + 4), uVar1 == 0)) {
LAB_1007963f2:
    puVar4 = PTR_shared_null_1021e1288;
    *param_1 = PTR_shared_null_1021e1288;
    iVar7 = *(int *)puVar4;
    if (iVar7 + 1U < 2) goto LAB_10079641b;
    LOCK();
    *(int *)puVar4 = *(int *)puVar4 + 1;
    UNLOCK();
  }
  else {
    uVar6 = qHash(param_3,*(uint *)((long)plVar8 + 0x24));
    uVar3 = (ulong)uVar6 % (ulong)uVar1;
    plVar10 = *(long **)(plVar8[1] + uVar3 * 8);
    if (plVar10 == plVar8) goto LAB_1007963f2;
    plVar12 = (long *)(plVar8[1] + uVar3 * 8);
    do {
      plVar9 = plVar8;
      plVar11 = plVar10;
      if (*(uint *)(plVar10 + 1) == uVar6) {
        cVar5 = operator==(param_3,(QString *)(plVar10 + 2));
        plVar8 = (long *)*plVar12;
        plVar9 = *(long **)(param_2 + 0x18);
        plVar11 = plVar8;
        if (cVar5 != '\0') break;
      }
      plVar8 = plVar9;
      plVar10 = (long *)*plVar11;
      plVar9 = plVar8;
      plVar12 = plVar11;
    } while (plVar10 != plVar8);
    if (plVar8 == plVar9) goto LAB_1007963f2;
    piVar2 = (int *)plVar8[3];
    *param_1 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  iVar7 = *(int *)PTR_shared_null_1021e1288;
LAB_10079641b:
  puVar4 = PTR_shared_null_1021e1288;
  if (iVar7 != -1) {
    if (iVar7 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e1288 = *(int *)PTR_shared_null_1021e1288 + -1;
      UNLOCK();
      if (*(int *)puVar4 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return param_1;
}

