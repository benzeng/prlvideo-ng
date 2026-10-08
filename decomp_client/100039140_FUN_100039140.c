
bool FUN_100039140(long param_1,QString *param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  plVar7 = *(long **)(param_1 + 0x18);
  lVar10 = 0;
  if (*(int *)((long)plVar7 + 0x14) != 0) {
    uVar1 = *(uint *)(plVar7 + 4);
    lVar10 = 0;
    if (uVar1 != 0) {
      uVar6 = qHash(param_2,*(uint *)((long)plVar7 + 0x24));
      uVar4 = (ulong)uVar6 % (ulong)uVar1;
      plVar9 = *(long **)(plVar7[1] + uVar4 * 8);
      lVar10 = 0;
      if (plVar9 != plVar7) {
        plVar8 = (long *)(plVar7[1] + uVar4 * 8);
        do {
          plVar11 = plVar7;
          if (*(uint *)(plVar9 + 1) == uVar6) {
            cVar5 = operator==(param_2,(QString *)(plVar9 + 2));
            plVar7 = (long *)*plVar8;
            plVar9 = plVar7;
            plVar11 = *(long **)(param_1 + 0x18);
            if (cVar5 != '\0') break;
          }
          plVar7 = plVar11;
          plVar8 = plVar9;
          plVar9 = (long *)*plVar8;
          plVar11 = plVar7;
        } while (plVar9 != plVar7);
        lVar10 = 0;
        if (plVar7 != plVar11) {
          piVar2 = (int *)plVar7[3];
          lVar10 = 0;
          if (piVar2 != (int *)0x0) {
            lVar3 = plVar7[4];
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
            lVar10 = 0;
            if (piVar2[1] != 0) {
              lVar10 = lVar3;
            }
            LOCK();
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              operator_delete(piVar2);
            }
          }
        }
      }
    }
  }
  return lVar10 != 0;
}

