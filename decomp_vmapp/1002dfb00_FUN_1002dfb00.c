
void FUN_1002dfb00(long param_1)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(char *)(*(long *)(lVar4 + 0x10) + 4) != '\0') {
    uVar6 = 0;
    lVar5 = 8;
    bVar7 = false;
    do {
      piVar2 = *(int **)(*(long *)(param_1 + 0x18) + lVar5);
      if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
        FUN_1002de560(param_1);
        lVar4 = *(long *)(param_1 + 0x28);
        bVar7 = true;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar6 < *(byte *)(*(long *)(lVar4 + 0x10) + 4));
    if (bVar7) {
      plVar3 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x28) + 0x70))();
      lVar4 = FUN_100257d80(plVar3);
      uVar6 = *(uint *)(lVar4 + 0x2030);
      do {
        LOCK();
        uVar1 = *(uint *)(lVar4 + 0x2030);
        bVar7 = uVar6 == uVar1;
        if (bVar7) {
          *(uint *)(lVar4 + 0x2030) = uVar6 | 8;
          uVar1 = uVar6;
        }
        uVar6 = uVar1;
        UNLOCK();
      } while (!bVar7);
                    /* WARNING: Could not recover jumptable at 0x0001002dfbb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}

