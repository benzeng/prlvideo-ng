
bool FUN_100433100(long param_1,QString *param_2,uint param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  bool bVar11;
  
  if (*param_4 == 0) {
    return false;
  }
  if (*(long *)(*param_4 + 0x10) == 0) {
    return false;
  }
  QMutex::lock();
  plVar5 = *(long **)(param_1 + 0x20);
  uVar1 = *(uint *)(plVar5 + 4);
  if (uVar1 == 0) {
    bVar11 = false;
  }
  else {
    uVar4 = qHash(param_2,*(uint *)((long)plVar5 + 0x24));
    uVar2 = (ulong)uVar4 % (ulong)uVar1;
    plVar7 = *(long **)(plVar5[1] + uVar2 * 8);
    if (plVar7 != plVar5) {
      plVar9 = (long *)(plVar5[1] + uVar2 * 8);
      do {
        plVar8 = plVar7;
        plVar10 = plVar5;
        if (*(uint *)(plVar7 + 1) == uVar4) {
          cVar3 = operator==(param_2,(QString *)(plVar7 + 2));
          plVar5 = (long *)*plVar9;
          plVar10 = *(long **)(param_1 + 0x20);
          plVar8 = plVar5;
          if (cVar3 != '\0') break;
        }
        plVar5 = plVar10;
        plVar7 = (long *)*plVar8;
        plVar9 = plVar8;
        plVar10 = plVar5;
      } while (plVar7 != plVar5);
      if (plVar5 != plVar10) {
        lVar6 = FUN_100436170((undefined8 *)(param_1 + 0x20),param_2);
        plVar5 = (long *)(lVar6 + 0x18 + (ulong)param_3 * 0x38);
        FUN_100436810(plVar5,param_4);
        bVar11 = *(int *)(*plVar5 + 4) == 1;
        goto LAB_100433208;
      }
    }
    bVar11 = false;
  }
LAB_100433208:
  QMutex::unlock();
  return bVar11;
}

