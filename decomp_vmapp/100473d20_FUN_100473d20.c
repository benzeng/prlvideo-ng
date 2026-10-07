
undefined8 *
FUN_100473d20(undefined8 *param_1,long param_2,long param_3,ulong param_4,ulong *param_5)

{
  QString *pQVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  QArrayData *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  QMutex::lock();
  if (param_4 != 0) {
    plVar8 = *(long **)(param_2 + 0x18);
    plVar11 = (long *)(param_2 + 0x18);
    uVar10 = 0;
    do {
      uVar2 = *(uint *)(plVar8 + 4);
      plVar12 = plVar11;
      if (uVar2 != 0) {
        pQVar1 = (QString *)(param_3 + uVar10 * 8);
        uVar7 = qHash(pQVar1,*(uint *)((long)plVar8 + 0x24));
        uVar4 = (ulong)uVar7 % (ulong)uVar2;
        plVar5 = *(long **)(plVar8[1] + uVar4 * 8);
        plVar12 = (long *)(plVar8[1] + uVar4 * 8);
        while (plVar9 = plVar5, plVar9 != plVar8) {
          if (*(uint *)(plVar9 + 1) == uVar7) {
            cVar6 = operator==(pQVar1,(QString *)(plVar9 + 2));
            if (cVar6 != '\0') {
              plVar8 = (long *)*plVar11;
              break;
            }
            plVar9 = (long *)*plVar12;
            plVar8 = (long *)*plVar11;
          }
          plVar12 = plVar9;
          plVar5 = (long *)*plVar9;
        }
      }
      plVar12 = (long *)*plVar12;
      if (plVar8 != plVar12) {
        if (param_5 != (ulong *)0x0) {
          *param_5 = uVar10;
        }
        piVar3 = (int *)plVar12[3];
        *param_1 = piVar3;
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          local_33 = *piVar3 != 0;
          UNLOCK();
        }
        goto LAB_100473e8b;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_4);
  }
  if (param_5 != (ulong *)0x0) {
    *param_5 = param_4;
  }
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_100473c40(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_100473e8b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100473e8b:
  QMutex::unlock();
  return param_1;
}

