
undefined8 * FUN_100b39fa0(undefined8 *param_1,long param_2,QString *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_40 [2];
  
  *param_1 = PTR_shared_null_1021e12f0;
  plVar6 = *(long **)(param_2 + 8);
  uVar1 = *(uint *)(plVar6 + 4);
  if (uVar1 != 0) {
    uVar5 = qHash(param_3,*(uint *)((long)plVar6 + 0x24));
    uVar2 = (ulong)uVar5 % (ulong)uVar1;
    plVar9 = *(long **)(plVar6[1] + uVar2 * 8);
    if (plVar9 != plVar6) {
      plVar11 = (long *)(plVar6[1] + uVar2 * 8);
      do {
        plVar8 = plVar6;
        plVar10 = plVar9;
        if (*(uint *)(plVar9 + 1) == uVar5) {
          cVar4 = operator==(param_3,(QString *)(plVar9 + 2));
          plVar6 = (long *)*plVar11;
          plVar8 = *(long **)(param_2 + 8);
          plVar10 = plVar6;
          if (cVar4 != '\0') break;
        }
        plVar6 = plVar8;
        plVar9 = (long *)*plVar10;
        plVar8 = plVar6;
        plVar11 = plVar10;
      } while (plVar9 != plVar6);
      if (plVar6 != plVar8) {
        FUN_100b3b650(local_40,(undefined8 *)(param_2 + 8),param_3);
        plVar6 = *(long **)(local_40[0][2] + 0x70);
        if (((plVar6 == (long *)0x0) || (*(long *)(local_40[0][2] + 0x78) == 0)) ||
           (plVar9 = (long *)*plVar6, plVar9 == plVar6)) {
          if (local_40[0] == (long *)0x0) {
            return param_1;
          }
        }
        else {
          do {
            uVar7 = FUN_100b3b7c0(param_1,plVar9 + 3);
            FUN_1000e5fc0(uVar7,plVar9 + 4);
            if (plVar9 == *(long **)(local_40[0][2] + 0x78)) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)*(long *)(local_40[0][2] + 0x70));
        }
        LOCK();
        plVar6 = local_40[0] + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_40[0] + 0x10))(local_40[0]);
        }
      }
    }
  }
  return param_1;
}

