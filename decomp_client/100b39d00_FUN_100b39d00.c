
long * FUN_100b39d00(long param_1,QString *param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *local_38;
  
  plVar9 = *(long **)(param_1 + 8);
  uVar8 = *(uint *)(plVar9 + 4);
  plVar6 = (long *)0x0;
  if (uVar8 != 0) {
    uVar5 = qHash(param_2,*(uint *)((long)plVar9 + 0x24));
    uVar2 = (ulong)uVar5 % (ulong)uVar8;
    plVar10 = *(long **)(plVar9[1] + uVar2 * 8);
    plVar6 = (long *)0x0;
    if (plVar10 != plVar9) {
      plVar6 = (long *)(plVar9[1] + uVar2 * 8);
      do {
        plVar7 = plVar9;
        if (*(uint *)(plVar10 + 1) == uVar5) {
          cVar4 = operator==(param_2,(QString *)(plVar10 + 2));
          plVar9 = (long *)*plVar6;
          plVar7 = *(long **)(param_1 + 8);
          plVar10 = plVar9;
          if (cVar4 != '\0') break;
        }
        plVar9 = plVar7;
        plVar6 = plVar10;
        plVar10 = (long *)*plVar6;
        plVar7 = plVar9;
      } while (plVar10 != plVar9);
      plVar6 = (long *)0x0;
      if (plVar9 != plVar7) {
        FUN_100b3b650(&local_38,(undefined8 *)(param_1 + 8),param_2);
        plVar9 = *(long **)(local_38[2] + 0x70);
        plVar6 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          plVar10 = *(long **)(local_38[2] + 0x78);
          plVar6 = (long *)0x0;
          if (plVar10 != (long *)0x0) {
            plVar7 = (long *)0x0;
            uVar8 = 0;
            do {
              plVar6 = plVar9;
              if (((param_3 == uVar8) || (plVar6 = plVar7, plVar9 == plVar10)) ||
                 (plVar9 = (long *)*plVar9, plVar9 == (long *)0x0)) break;
              bVar1 = uVar8 <= param_3;
              uVar8 = uVar8 + 1;
            } while (bVar1);
          }
        }
        if (local_38 != (long *)0x0) {
          LOCK();
          plVar9 = local_38 + 1;
          lVar3 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
      }
    }
  }
  return plVar6;
}

