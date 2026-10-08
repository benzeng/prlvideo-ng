
long * FUN_1002b42d0(long *param_1)

{
  int *piVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  if ((DAT_1023121d0 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_1023121d0), iVar2 != 0)) {
    DAT_1023121c8 = (int *)PTR_shared_null_1021e15e8;
    ___cxa_atexit(FUN_1002b5b40,&DAT_1023121c8,0x100000000);
    ___cxa_guard_release(&DAT_1023121d0);
  }
  if (DAT_1023121c8[3] != DAT_1023121c8[2]) goto LAB_1002b44c0;
  local_40 = PTR_shared_null_1021e15e8;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("*.iso",5);
  local_48 = pQVar3;
  FUN_1000341d0(&local_40,&local_48);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("*.cdr",5);
  local_50 = pQVar4;
  FUN_1000341d0(&local_40,&local_50);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("*.img",5);
  local_58 = pQVar5;
  FUN_1000341d0(&local_40,&local_58);
  pQVar6 = (QArrayData *)QString::fromAscii_helper("*.app",5);
  local_60 = pQVar6;
  FUN_1000341d0(&local_40,&local_60);
  FUN_1000e5fc0(&DAT_1023121c8,&local_40);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b4425;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1002b4425:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b4454;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1002b4454:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b4483;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002b4483:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b44b0;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002b44b0:
  FUN_100039a80(&local_40);
LAB_1002b44c0:
  piVar8 = DAT_1023121c8;
  *param_1 = (long)DAT_1023121c8;
  if (*piVar8 != -1) {
    if (*piVar8 == 0) {
      QListData::detach((int)param_1);
      lVar7 = *param_1;
      iVar2 = *(int *)(lVar7 + 8);
      if (iVar2 != *(int *)(lVar7 + 0xc)) {
        piVar8 = DAT_1023121c8 + (long)DAT_1023121c8[2] * 2 + 4;
        puVar9 = (undefined8 *)(lVar7 + 0x10 + (long)iVar2 * 8);
        lVar7 = (long)*(int *)(lVar7 + 0xc) * 8 + (long)iVar2 * -8;
        do {
          piVar1 = *(int **)piVar8;
          *puVar9 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          puVar9 = puVar9 + 1;
          piVar8 = piVar8 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

