
int FUN_10017de70(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  QString *pQVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  int *local_60;
  int *local_58;
  QString *local_50;
  QString *local_48;
  int local_40;
  undefined1 local_31;
  
  plVar8 = (long *)(param_1 + 0x10);
  FUN_10017f1a0(&local_60,plVar8);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar12 = local_58[2];
      if (iVar12 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar11 = local_58 + (long)iVar12 * 2 + 4;
        lVar9 = (long)local_58[3] * 8 + (long)iVar12 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar11 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
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
  iVar12 = 0;
  if (local_40 != 0) {
    iVar12 = 0;
    if (local_50 == local_48) {
      iVar12 = 0;
    }
    else {
      do {
        pQVar4 = local_50;
        plVar10 = (long *)*plVar8;
        iVar7 = 0;
        if (*(int *)((long)plVar10 + 0x14) != 0) {
          uVar1 = *(uint *)(plVar10 + 4);
          iVar7 = 0;
          if (uVar1 != 0) {
            uVar6 = qHash(local_50,*(uint *)((long)plVar10 + 0x24));
            uVar3 = (ulong)uVar6 % (ulong)uVar1;
            plVar14 = *(long **)(plVar10[1] + uVar3 * 8);
            iVar7 = 0;
            if (plVar14 != plVar10) {
              plVar16 = (long *)(plVar10[1] + uVar3 * 8);
              do {
                plVar13 = plVar10;
                plVar15 = plVar14;
                if (*(uint *)(plVar14 + 1) == uVar6) {
                  cVar5 = operator==(pQVar4,(QString *)(plVar14 + 2));
                  plVar10 = (long *)*plVar16;
                  plVar13 = (long *)*plVar8;
                  plVar15 = plVar10;
                  if (cVar5 != '\0') break;
                }
                plVar10 = plVar13;
                plVar14 = (long *)*plVar15;
                plVar13 = plVar10;
                plVar16 = plVar15;
              } while (plVar14 != plVar10);
              iVar7 = 0;
              if (plVar10 != plVar13) {
                iVar7 = (int)plVar10[3];
              }
            }
          }
        }
        iVar12 = (uint)(iVar7 == param_2) + iVar12;
        local_50 = local_50 + 1;
        local_40 = 1;
      } while (local_50 != local_48);
    }
  }
  FUN_100039a80(&local_58);
  return iVar12;
}

