
void FUN_10073b490(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *local_80;
  uint *local_78;
  uint *local_70;
  uint *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  long local_40;
  undefined1 local_31;
  ulong uVar19;
  
  local_70 = (uint *)PTR_shared_null_1021e15e8;
  uVar7 = FUN_10073d800();
  plVar8 = (long *)FUN_10073dab0(uVar7);
  (**(code **)(*plVar8 + 0x70))(&local_78,plVar8);
  if (local_70 != local_78) {
    FUN_10073c620(&local_68,&local_78);
    puVar4 = local_68;
    puVar9 = local_70;
    local_68 = local_70;
    local_70 = puVar4;
    if (*puVar9 != 0xffffffff) {
      if (*puVar9 != 0) {
        LOCK();
        *puVar9 = *puVar9 - 1;
        local_31 = *puVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10073b51c;
      }
      FUN_10073c360(&local_68,puVar9);
    }
  }
LAB_10073b51c:
  if (*local_78 != 0xffffffff) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 - 1;
      local_31 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073b546;
    }
    FUN_10073c360(&local_78,local_78);
  }
LAB_10073b546:
  puVar1 = (undefined8 *)(param_1 + 0x20);
  puVar9 = *(uint **)(param_1 + 0x20);
  if ((int)(puVar9[3] - puVar9[2]) < 1) {
LAB_10073b7d4:
    if (0 < (int)(local_70[3] - local_70[2])) {
      lVar13 = (long)(int)(local_70[3] - local_70[2]) + 1;
      do {
        if (1 < *local_70) {
          FUN_10073c7b0(&local_70,local_70[1]);
        }
        uVar7 = *(undefined8 *)(local_70 + ((int)local_70[2] + lVar13) * 2);
        uVar10 = FUN_10073b300(param_1 + 0x10);
        uVar11 = FUN_10073d800();
        uVar11 = FUN_10073dab0(uVar11);
        pvVar12 = operator_new(0x60);
        FUN_10018c250(&local_40,uVar10);
        FUN_100d78510(pvVar12,uVar11,uVar7,&local_40);
        plVar8 = (long *)FUN_10073c260(pvVar12,0);
        local_80 = plVar8;
        if (local_40 != 0) {
          _PrlHandle_Free();
        }
        lVar14 = 0;
        if (plVar8 != (long *)0x0) {
          lVar14 = plVar8[2];
        }
        iVar6 = FUN_10018a9d0(uVar10);
        FUN_100d786b0(lVar14,iVar6 == 0x30000004);
        FUN_10073c180(puVar1,&local_80);
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar16 = plVar8 + 1;
          lVar14 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        lVar13 = lVar13 + -1;
      } while (1 < lVar13);
    }
    if (*local_70 != 0xffffffff) {
      if (*local_70 != 0) {
        LOCK();
        *local_70 = *local_70 - 1;
        UNLOCK();
        if (*local_70 != 0) {
          return;
        }
        local_31 = 0;
      }
      FUN_10073c360(&local_70,local_70);
    }
    return;
  }
  uVar17 = (long)(int)(puVar9[3] - puVar9[2]);
  do {
    if (1 < *puVar9) {
      FUN_10073c480(puVar1,puVar9[1]);
      puVar9 = (uint *)*puVar1;
    }
    uVar2 = uVar17 - 1;
    uVar7 = 0;
    if (**(long **)(puVar9 + ((long)(int)puVar9[2] + uVar2) * 2 + 4) != 0) {
      uVar7 = *(undefined8 *)(**(long **)(puVar9 + ((long)(int)puVar9[2] + uVar2) * 2 + 4) + 0x10);
    }
    plVar8 = (long *)FUN_100d786a0(uVar7);
    if (0 < (int)(local_70[3] - local_70[2])) {
      uVar19 = (long)(int)(local_70[3] - local_70[2]);
      do {
        uVar18 = uVar19 - 1;
        if (1 < *local_70) {
          FUN_10073c7b0(&local_70,local_70[1]);
        }
        plVar16 = *(long **)(local_70 + ((long)(int)local_70[2] + uVar18) * 2 + 4);
        (**(code **)(**(long **)(*plVar8 + 0x10) + 0x10))(&local_48);
        lVar13 = *plVar16;
        plVar15 = (long *)0x0;
        if (lVar13 != 0) {
          plVar15 = *(long **)(lVar13 + 0x10);
        }
        (**(code **)(*plVar15 + 0x10))(&local_50);
        cVar5 = operator==(&local_48,&local_50);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10073b698;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_10073b698:
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10073b6c8;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_10073b6c8:
        if (cVar5 != '\0') {
          (**(code **)(**(long **)(*plVar8 + 0x10) + 0x18))(&local_58);
          lVar13 = *plVar16;
          plVar16 = (long *)0x0;
          if (lVar13 != 0) {
            plVar16 = *(long **)(lVar13 + 0x10);
          }
          (**(code **)(*plVar16 + 0x18))(&local_60);
          cVar5 = operator==(&local_58,&local_60);
          if (*(int *)local_60.field0_0x0 != -1) {
            if (*(int *)local_60.field0_0x0 != 0) {
              LOCK();
              *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
              local_31 = *(int *)local_60.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10073b742;
            }
            QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          }
LAB_10073b742:
          if (*(int *)local_58.field0_0x0 != -1) {
            if (*(int *)local_58.field0_0x0 != 0) {
              LOCK();
              *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
              local_31 = *(int *)local_58.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10073b772;
            }
            QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
          }
LAB_10073b772:
          if (cVar5 != '\0') {
            FUN_10073c020(&local_70,uVar18 & 0xffffffff);
            goto LAB_10073b7ca;
          }
        }
        bVar3 = 1 < (long)uVar19;
        uVar19 = uVar18;
      } while (bVar3);
    }
    FUN_10073c0d0(puVar1,uVar2 & 0xffffffff);
LAB_10073b7ca:
    if ((long)uVar17 < 2) goto LAB_10073b7d4;
    puVar9 = (uint *)*puVar1;
    uVar17 = uVar2;
  } while( true );
}

