
undefined8 * FUN_10017e450(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  Data *pDVar4;
  QString *pQVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  int *piVar12;
  Data *pDVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  bool bVar18;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  uint local_68;
  int *local_60;
  int *local_58;
  QString *local_50;
  QString *local_48;
  int local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  FUN_10017f260(&local_60);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar12 = local_58 + (long)iVar1 * 2 + 4;
        lVar9 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar12 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar12 = piVar12 + 2;
          local_60 = local_60 + 2;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
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
  if (local_40 != 0) {
    for (; pQVar5 = local_50, local_50 != local_48; local_50 = local_50 + 1) {
      FUN_10017f5e0(&local_80,param_3);
      local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
      local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
      local_68 = 1;
      if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
        do {
          if (local_68 == 0) {
LAB_10017e6b7:
            local_78 = local_78 + 8;
            local_68 = 1;
          }
          else {
            iVar1 = **(int **)local_78;
            plVar11 = *(long **)(param_2 + 0x18);
            iVar7 = 0;
            if (*(int *)((long)plVar11 + 0x14) != 0) {
              uVar10 = *(uint *)(plVar11 + 4);
              iVar7 = 0;
              if (uVar10 != 0) {
                uVar8 = qHash(pQVar5,*(uint *)((long)plVar11 + 0x24));
                uVar3 = (ulong)uVar8 % (ulong)uVar10;
                plVar14 = *(long **)(plVar11[1] + uVar3 * 8);
                iVar7 = 0;
                if (plVar14 != plVar11) {
                  plVar16 = (long *)(plVar11[1] + uVar3 * 8);
                  do {
                    plVar15 = plVar14;
                    plVar17 = plVar11;
                    if (*(uint *)(plVar14 + 1) == uVar8) {
                      cVar6 = operator==(pQVar5,(QString *)(plVar14 + 2));
                      plVar11 = (long *)*plVar16;
                      plVar17 = *(long **)(param_2 + 0x18);
                      plVar15 = plVar11;
                      if (cVar6 != '\0') break;
                    }
                    plVar11 = plVar17;
                    plVar14 = (long *)*plVar15;
                    plVar16 = plVar15;
                    plVar17 = plVar11;
                  } while (plVar14 != plVar11);
                  iVar7 = 0;
                  if (plVar11 != plVar17) {
                    iVar7 = (int)plVar11[3];
                  }
                }
              }
            }
            if (iVar7 != iVar1) goto LAB_10017e6b7;
            FUN_1000341d0(param_1,pQVar5);
            local_78 = local_78 + 8;
            uVar10 = local_68 ^ 1;
            bVar18 = local_68 == 1;
            local_68 = uVar10;
            if (bVar18) break;
          }
        } while (local_78 != local_70);
      }
      pDVar4 = local_80;
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10017e550;
        }
        iVar1 = *(int *)(local_80 + 0xc);
        if (iVar1 != *(int *)(local_80 + 8)) {
          lVar9 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
          pDVar13 = local_80 + (long)iVar1 * 8 + 8;
          do {
            if (*(void **)pDVar13 != (void *)0x0) {
              operator_delete(*(void **)pDVar13);
            }
            pDVar13 = pDVar13 + -8;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        QListData::dispose(pDVar4);
      }
LAB_10017e550:
      local_40 = 1;
    }
  }
  FUN_100039a80(&local_58);
  return param_1;
}

