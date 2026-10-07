
void FUN_10036e390(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined4 uVar7;
  int *piVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  void *pvVar19;
  void *local_398;
  void *pvStack_390;
  undefined8 local_388;
  long local_378;
  long lStack_370;
  undefined8 local_368;
  long local_360;
  void **local_358;
  uint **local_350;
  undefined1 local_348 [160];
  int local_2a8;
  long *local_288;
  uint local_27c;
  uint *local_278;
  uint *puStack_270;
  uint *local_268;
  undefined1 local_260 [128];
  undefined1 local_1e0 [40];
  long local_1b8 [48];
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_378 = 0;
  lStack_370 = 0;
  local_368 = param_3;
  local_360 = param_2;
  local_38 = lVar13;
  ___bzero(&local_358,0xd8);
  cVar6 = FUN_10036eb70(param_1,&local_378);
  if (cVar6 == '\0') {
    if (*param_1 != 0) {
      (*DAT_1011c6ee0)(0);
      plVar3 = (long *)*param_1;
      if (plVar3 != (long *)0x0) {
        piVar8 = (int *)((long)plVar3 + 0xc);
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *param_1 = 0;
    }
    goto LAB_10036e9fa;
  }
  FUN_10036f1f0(param_1,&local_378);
  pvVar19 = (void *)*param_1;
  if (pvVar19 != (void *)0x0) {
    piVar8 = *(int **)((long)pvVar19 + 0xd0);
    piVar12 = (int *)param_1[0x226];
    if ((long)*(int **)((long)pvVar19 + 0xd8) - (long)piVar8 == param_1[0x227] - (long)piVar12) {
      for (; piVar8 != *(int **)((long)pvVar19 + 0xd8); piVar8 = piVar8 + 1) {
        if (*piVar8 != *piVar12) goto LAB_10036e4ef;
        piVar12 = piVar12 + 1;
      }
      piVar8 = *(int **)((long)pvVar19 + 0x10);
      piVar12 = (int *)param_1[0x20e];
      if ((long)*(int **)((long)pvVar19 + 0x18) - (long)piVar8 == param_1[0x20f] - (long)piVar12) {
        for (; piVar8 != *(int **)((long)pvVar19 + 0x18); piVar8 = piVar8 + 1) {
          if (*piVar8 != *piVar12) goto LAB_10036e4ef;
          piVar12 = piVar12 + 1;
        }
        goto LAB_10036e9fa;
      }
    }
  }
LAB_10036e4ef:
  plVar3 = param_1 + 0x20e;
  if ((long *)param_1[0x20c] == (long *)0x0) {
LAB_10036e575:
    ___bzero(local_1b8,0x180);
    local_398 = (void *)0x0;
    pvStack_390 = (void *)0x0;
    local_388 = 0;
    local_278 = (uint *)0x0;
    puStack_270 = (uint *)0x0;
    local_268 = (uint *)0x0;
    FUN_10038e870(local_1e0,local_260,0x80);
    if (local_2a8 == 0) {
      plVar18 = (long *)(local_378 + 0xd8);
      if (local_378 == 0) {
        plVar18 = param_1 + 0x12;
      }
      if (lStack_370 == 0) {
        lVar13 = FUN_100356fb0(param_1 + 0x18,param_2 + 0x8270,local_348);
      }
      else {
        lVar13 = lStack_370 + 0xc0;
      }
      FUN_10036c5a0(&local_398,plVar18,lVar13);
      uVar11 = ((long)pvStack_390 - (long)local_398) * -0x5555555555555555;
      local_358 = &local_398;
      if ((int)uVar11 != 0) {
        uVar17 = 0;
        lVar13 = 2;
        while( true ) {
          local_27c = (uint)CONCAT12(*(undefined1 *)((long)local_398 + lVar13 + -1),
                                     CONCAT11(*(undefined1 *)((long)local_398 + lVar13),
                                              *(undefined1 *)((long)local_398 + lVar13 + -2)));
          if (puStack_270 == local_268) {
            FUN_10027f110(&local_278,&local_27c);
          }
          else {
            *puStack_270 = local_27c;
            puStack_270 = puStack_270 + 1;
          }
          uVar17 = uVar17 + 1;
          if ((uVar11 & 0xffffffff) <= uVar17) break;
          lVar13 = lVar13 + 3;
        }
      }
    }
    local_350 = &local_278;
    local_288 = local_1b8;
    FUN_100370530(param_1,0,&local_378);
    FUN_100370530(param_1,1,&local_378);
    uVar7 = FUN_1003709d0();
    pvVar9 = operator_new(0x438);
    FUN_100376590(pvVar9,uVar7,param_1[0xa7],(int)param_1[0x259],plVar3,local_378,lStack_370,
                  local_348,local_288,local_350,param_1[0xa8]);
    puVar10 = (undefined8 *)FUN_1003733f0(param_1 + 0x20b,plVar3);
    *puVar10 = pvVar9;
    if ((local_378 == 0) || (lStack_370 == 0)) {
      puVar10 = operator_new(0x28);
      *puVar10 = &PTR_FUN_1011187b8;
      puVar10[2] = 0;
      puVar10[1] = 0;
      puVar10[4] = pvVar9;
      *(undefined8 **)((long)pvVar9 + 0x418) = puVar10;
      puVar10[3] = param_1 + 0x29b;
      lVar13 = param_1[0x29b];
      if (lVar13 == 0) {
        param_1[0x29c] = (long)puVar10;
      }
      else {
        puVar10[2] = lVar13;
        *(undefined8 **)(lVar13 + 8) = puVar10;
      }
      param_1[0x29b] = (long)puVar10;
      *(int *)(param_1 + 0x29d) = (int)param_1[0x29d] + 1;
      FUN_100370c00(param_1);
    }
    FUN_10038e8c0(local_1e0);
    if (local_278 != (uint *)0x0) {
      if (puStack_270 != local_278) {
        puStack_270 = (uint *)((~((long)puStack_270 + (-4 - (long)local_278)) & 0xfffffffffffffffcU)
                              + (long)puStack_270);
      }
      operator_delete(local_278);
    }
    lVar13 = 0x168;
    if (local_398 != (void *)0x0) {
      if (pvStack_390 != local_398) {
        pvStack_390 = (void *)(~((ulong)((long)pvStack_390 + (-3 - (long)local_398)) / 3) * 3 +
                              (long)pvStack_390);
      }
      operator_delete(local_398);
      lVar13 = 0x168;
    }
    do {
      pvVar19 = *(void **)((long)local_1b8 + lVar13);
      if (pvVar19 != (void *)0x0) {
        pvVar2 = *(void **)((long)local_1b8 + lVar13 + 8);
        if (pvVar2 != pvVar19) {
          *(ulong *)((long)local_1b8 + lVar13 + 8) =
               (~((long)pvVar2 + (-4 - (long)pvVar19)) & 0xfffffffffffffffcU) + (long)pvVar2;
        }
        operator_delete(pvVar19);
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x18);
    pvVar19 = (void *)*param_1;
  }
  else {
    plVar18 = (long *)param_1[0x20c];
    plVar16 = param_1 + 0x20c;
    do {
      while (plVar14 = plVar18, cVar6 = FUN_100373110(plVar14 + 4,plVar3), cVar6 == '\0') {
        plVar18 = (long *)*plVar14;
        plVar16 = plVar14;
        if ((long *)*plVar14 == (long *)0x0) goto LAB_10036e550;
      }
      plVar1 = plVar14 + 1;
      plVar14 = plVar16;
      plVar18 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10036e550:
    if (((plVar14 == param_1 + 0x20c) || (cVar6 = FUN_100373110(plVar3,plVar14 + 4), cVar6 != '\0'))
       || (pvVar9 = (void *)plVar14[0x49], pvVar9 == (void *)0x0)) goto LAB_10036e575;
  }
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (pvVar19 != pvVar9) {
    if (pvVar9 == (void *)0x0) {
      (*DAT_1011c6ee0)(0);
    }
    else {
      *(int *)((long)pvVar9 + 0xc) = *(int *)((long)pvVar9 + 0xc) + 1;
      FUN_10036d070(pvVar9);
    }
    plVar3 = (long *)*param_1;
    if (plVar3 != (long *)0x0) {
      piVar8 = (int *)((long)plVar3 + 0xc);
      *piVar8 = *piVar8 + -1;
      if (*piVar8 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    *param_1 = (long)pvVar9;
  }
  if ((pvVar9 != (void *)0x0) && (lVar4 = *(long *)((long)pvVar9 + 0x418), lVar4 != 0)) {
    plVar3 = *(long **)(lVar4 + 0x18);
    lVar5 = *plVar3;
    if (lVar5 != lVar4) {
      plVar18 = (long *)(lVar4 + 8);
      if (plVar3[1] == lVar4) {
        lVar15 = *plVar18;
        plVar3[1] = lVar15;
      }
      else {
        lVar15 = *plVar18;
      }
      if (lVar15 != 0) {
        *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar4 + 0x10);
      }
      if (*(long *)(lVar4 + 0x10) != 0) {
        *(long *)(*(long *)(lVar4 + 0x10) + 8) = lVar15;
      }
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *plVar18 = 0;
      lVar15 = plVar3[2];
      *(int *)(plVar3 + 2) = (int)lVar15 + -1;
      *(long **)(lVar4 + 0x18) = plVar3;
      if (lVar5 == 0) {
        plVar3[1] = lVar4;
      }
      else {
        *(long *)(lVar4 + 0x10) = lVar5;
        *(long *)(lVar5 + 8) = lVar4;
      }
      *plVar3 = lVar4;
      *(int *)(plVar3 + 2) = (int)lVar15;
    }
  }
LAB_10036e9fa:
  if (lVar13 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

