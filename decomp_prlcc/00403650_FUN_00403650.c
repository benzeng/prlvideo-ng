
void FUN_00403650(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (param_2 != 0) {
    uVar8 = 0;
    do {
      puVar1 = (undefined8 *)(uVar8 * 0x30 + param_1);
      memset((void *)puVar1[2],0,(ulong)*(uint *)(puVar1 + 3) << 3);
      puVar2 = PTR___log_level_0061bd30;
      plVar5 = (long *)puVar1[5];
      lVar3 = *plVar5;
      if (lVar3 == 0) {
        if (puVar1[4] == 0) goto LAB_00403816;
LAB_00403707:
        uVar6 = 0;
        if (*(int *)(puVar1 + 3) != 0) {
          do {
            lVar3 = puVar1[2];
            uVar4 = dlsym(puVar1[4]);
            *(undefined8 *)(uVar6 * 8 + lVar3) = uVar4;
            if (*(long *)((long)puVar1[2] + uVar6 * 8) == 0) {
              memset((void *)puVar1[2],0,(ulong)*(uint *)(puVar1 + 3) << 3);
              dlclose(puVar1[4]);
              puVar2 = PTR___log_level_0061bd30;
              puVar1[4] = 0;
              if (*(int *)puVar2 < 1) goto LAB_004037e8;
              FUN_0040fffa(&DAT_0041913e,"prlcc",1,"Warning: Could not load %s function %s",*puVar1,
                           *(undefined8 *)(puVar1[1] + uVar6 * 8));
              break;
            }
            uVar7 = (int)uVar6 + 1;
            uVar6 = (ulong)uVar7;
          } while (uVar7 < *(uint *)(puVar1 + 3));
        }
        if ((puVar1[4] != 0) && (1 < *(int *)PTR___log_level_0061bd30)) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,"%s functions were loaded successfully",*puVar1);
        }
      }
      else {
        do {
          if (1 < *(int *)puVar2) {
            FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Try %s for %s library...",lVar3,*puVar1);
          }
          lVar3 = dlopen(*plVar5);
          puVar1[4] = lVar3;
          if (lVar3 != 0) goto LAB_00403707;
          lVar3 = plVar5[1];
          plVar5 = plVar5 + 1;
        } while (lVar3 != 0);
LAB_00403816:
        if (0 < *(int *)puVar2) {
          FUN_0040fffa(&DAT_0041913e,"prlcc",1,"Warning: Could not load %s library",*puVar1);
        }
      }
LAB_004037e8:
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar7;
    } while (uVar7 != param_2);
  }
  return;
}

