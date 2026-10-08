
void FUN_1002b17f0(long *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  QString *pQVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int *local_60;
  int *local_58;
  QString *local_50;
  QString *local_48;
  int local_40;
  undefined1 local_31;
  
  FUN_1002b5da0(&local_60,param_1);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar12 = local_58 + (long)iVar1 * 2 + 4;
        lVar10 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar3 = *(int **)local_60;
          *(int **)piVar12 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar12 = piVar12 + 2;
          local_60 = local_60 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = (QString *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (QString *)(local_58 + (long)local_58[3] * 2 + 4);
  local_40 = 1;
  FUN_100039a80(&local_60);
  puVar6 = PTR_shared_null_1021e15e8;
  puVar5 = PTR_shared_null_1021e1288;
  if ((local_40 != 0) && (local_50 != local_48)) {
    auVar17._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar17._0_8_ = PTR_shared_null_1021e1288;
    auVar17._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    auVar18._8_4_ = (int)PTR_shared_null_1021e15e8;
    auVar18._0_8_ = PTR_shared_null_1021e15e8;
    auVar18._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    do {
      pQVar7 = local_50;
      plVar11 = (long *)*param_1;
      if ((*(int *)((long)plVar11 + 0x14) == 0) || (uVar2 = *(uint *)(plVar11 + 4), uVar2 == 0)) {
LAB_1002b19b0:
        local_c8 = 0xff;
        local_c4 = 0;
        local_c0 = 0;
        uStack_e0 = auVar17._8_8_;
        local_b8 = puVar5;
        uStack_b0 = uStack_e0;
        uStack_f0 = auVar18._8_8_;
        local_a8 = puVar6;
        uStack_a0 = uStack_f0;
        local_98 = 0;
        local_90 = PTR_shared_null_1021e1288;
        local_88 = 0;
        local_84 = 0;
        local_80 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
      }
      else {
        uVar9 = qHash(local_50,*(uint *)((long)plVar11 + 0x24));
        uVar4 = (ulong)uVar9 % (ulong)uVar2;
        plVar13 = *(long **)(plVar11[1] + uVar4 * 8);
        if (plVar13 == plVar11) goto LAB_1002b19b0;
        plVar15 = (long *)(plVar11[1] + uVar4 * 8);
        do {
          plVar14 = plVar13;
          plVar16 = plVar11;
          if (*(uint *)(plVar13 + 1) == uVar9) {
            cVar8 = operator==(pQVar7,(QString *)(plVar13 + 2));
            plVar11 = (long *)*plVar15;
            plVar14 = plVar11;
            plVar16 = (long *)*param_1;
            if (cVar8 != '\0') break;
          }
          plVar11 = plVar16;
          plVar13 = (long *)*plVar14;
          plVar15 = plVar14;
          plVar16 = plVar11;
        } while (plVar13 != plVar11);
        if (plVar11 == plVar16) goto LAB_1002b19b0;
        FUN_100260700(&local_c8,plVar11 + 3);
      }
      FUN_1002b1ac0(pQVar7,&local_c8);
      FUN_10005e410(&local_c8);
      local_50 = local_50 + 1;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  FUN_100039a80(&local_58);
  return;
}

