
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10058c600(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  ulong uVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  char extraout_DL;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  bool bVar16;
  undefined8 in_stack_ffffffffffffff38;
  int local_84;
  long *local_78;
  long local_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  uVar4 = (undefined4)((ulong)in_stack_ffffffffffffff38 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar10 = *(long **)(param_2 + 8);
  local_70 = -1;
  QMutex::lock();
  puVar1 = (undefined8 *)(param_1 + 0xf8);
  plVar2 = (long *)(param_1 + 0x100);
  bVar16 = true;
  plVar15 = (long *)0x0;
  plVar8 = plVar2;
  if (plVar10 == *(long **)(param_1 + 0xb8)) {
    uVar5 = *(ulong *)(param_2 + 0x18) / (ulong)*(uint *)(param_1 + 0x18);
    plVar15 = (long *)0x0;
    plVar7 = *(long **)(param_1 + 0x100);
    plVar12 = plVar2;
    if (*(long **)(param_1 + 0x100) == (long *)0x0) goto LAB_10058c738;
    do {
      while (plVar11 = plVar7, uVar5 <= (ulong)plVar11[4]) {
        plVar7 = (long *)*plVar11;
        plVar12 = plVar11;
        if ((long *)*plVar11 == (long *)0x0) goto LAB_10058c6f0;
      }
      plVar15 = plVar11 + 1;
      plVar11 = plVar12;
      plVar7 = (long *)*plVar15;
    } while ((long *)*plVar15 != (long *)0x0);
LAB_10058c6f0:
    plVar15 = (long *)0x0;
    if (((plVar11 == plVar2) || (plVar15 = (long *)0x0, uVar5 < (ulong)plVar11[4])) ||
       (plVar15 = (long *)plVar11[5], plVar15 == (long *)0x0)) goto LAB_10058c738;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar16 = false;
    local_78 = plVar15;
    if (plVar15[2] == 0) goto LAB_10058c73e;
  }
  else {
LAB_10058c738:
    local_78 = (long *)0x0;
LAB_10058c73e:
    puVar14 = (undefined8 *)0x0;
    if (plVar10 == *(long **)(param_1 + 0xb8)) {
      if (*(int *)(param_1 + 200) == -1) {
        uVar9 = CONCAT44(uVar4,0x4d3);
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "m_Merge.DelInfo.SnapID != IDIB_INVALID_ID","Storage.cpp",uVar9,
                      "MakeMergeRequest");
        uVar4 = (undefined4)((ulong)uVar9 >> 0x20);
      }
      puVar14 = puVar1;
      if (*(int *)(param_2 + 0x10) == -1) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "WrInfo.SnapID != IDIB_INVALID_ID","Storage.cpp",CONCAT44(uVar4,0x4d4),
                      "MakeMergeRequest");
      }
    }
    pvVar6 = operator_new(0x1178);
    lVar13 = 0;
    if (*(char *)(param_1 + 0xb0) != '\0') {
      plVar7 = *(long **)(param_2 + 0x30);
      lVar13 = 0;
      if (plVar7 != (long *)0x0) {
        lVar13 = (long)plVar7 + *(long *)(*plVar7 + -0x18);
      }
    }
    FUN_1005934f0(pvVar6,puVar14,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
                  0xffffffffffffffff,param_1,lVar13,plVar10,*(undefined4 *)(param_1 + 200),
                  *(undefined4 *)(param_2 + 0x10));
    uVar4 = (undefined4)((ulong)lVar13 >> 0x20);
    plVar7 = (long *)FUN_10059a1c0(pvVar6,0);
    if (plVar7 != (long *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if (!bVar16) {
      LOCK();
      plVar15 = plVar15 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar15 = plVar7 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    local_78 = plVar7;
    if (plVar10 == *(long **)(param_1 + 0xb8)) {
      local_68 = _DAT_000010e0;
      if (plVar7 != (long *)0x0) {
        local_68 = *(undefined8 *)(&DAT_000010e0 + plVar7[2]);
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_60 = plVar7;
      plVar8 = (long *)FUN_10059a310(puVar1,&local_68);
      bVar16 = true;
      if (plVar7 != (long *)0x0) {
        plVar12 = plVar7 + 1;
        LOCK();
        plVar15 = plVar7 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        LOCK();
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        LOCK();
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        LOCK();
        lVar13 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (extraout_DL == '\0') {
        uVar9 = CONCAT44(uVar4,0x4ef);
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","ins.second","Storage.cpp",
                      uVar9,"MakeMergeRequest");
        uVar4 = (undefined4)((ulong)uVar9 >> 0x20);
      }
      if (plVar8 == plVar2) {
        uVar9 = CONCAT44(uVar4,0x4f0);
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "ins.first != m_AsyncBlockReqs.end()","Storage.cpp",uVar9,"MakeMergeRequest");
        uVar4 = (undefined4)((ulong)uVar9 >> 0x20);
      }
    }
    else {
      bVar16 = true;
    }
  }
  QMutex::unlock();
  if (bVar16) {
    if ((plVar10 == *(long **)(param_1 + 0xb8)) ||
       ((*(char *)(param_1 + 0xb0) == '\0' && (*(int *)(param_2 + 0x10) != -1)))) {
      local_50 = 0xffffffffffffffff;
      local_58 = -1;
      local_40 = 0;
      local_48 = 0;
      uVar9 = (**(code **)(**(long **)(param_1 + 0x70) + 0x350))();
      local_84 = FUN_1005abe90(uVar9,0xffffffff,*(undefined8 *)(param_2 + 0x18),&local_58);
      if ((local_84 == -0x7ffddffd) || (local_84 == 0)) {
        if ((local_84 < 0) || ((int)local_50 != *(int *)(param_2 + 0x10))) goto LAB_10058cb81;
        local_70 = local_58;
        bVar16 = true;
        goto LAB_10058cbe1;
      }
      FUN_1008e3970("","vdisk",0,"Error: can\'t get groups element by LBA=%llu",
                    *(undefined8 *)(param_2 + 0x18));
    }
    else {
LAB_10058cb81:
      local_70 = (**(code **)(*plVar10 + 0x78))(plVar10,*(undefined8 *)(param_2 + 0x20));
      bVar16 = local_70 != -1 && *(char *)(param_1 + 0xb0) == '\0';
      if ((local_70 != -1) ||
         (local_84 = (**(code **)(*plVar10 + 0xb0))(plVar10,&local_70), -1 < local_84)) {
LAB_10058cbe1:
        lVar13 = local_78[2];
        *(long *)(lVar13 + 0x10f0) = local_70;
        *(long *)(lVar13 + 0x880) = local_70;
        if (bVar16) {
          if (plVar10 == *(long **)(param_1 + 0xb8)) {
            QMutex::lock();
            if (plVar8 == plVar2) {
              FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                            "new_it != m_AsyncBlockReqs.end()","Storage.cpp",CONCAT44(uVar4,0x540),
                            "MakeMergeRequest");
            }
            *(undefined8 *)local_78[2] = 0;
            plVar15 = plVar8;
            plVar2 = (long *)plVar8[1];
            if ((long *)plVar8[1] == (long *)0x0) {
              do {
                plVar10 = (long *)plVar15[2];
                bVar16 = (long *)*plVar10 != plVar15;
                plVar15 = plVar10;
              } while (bVar16);
            }
            else {
              do {
                plVar10 = plVar2;
                plVar2 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
            if ((long *)*puVar1 == plVar8) {
              *puVar1 = plVar10;
            }
            *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + -1;
            FUN_1000e86c0(*(undefined8 *)(param_1 + 0x100),plVar8);
            plVar15 = (long *)plVar8[5];
            if (plVar15 != (long *)0x0) {
              LOCK();
              plVar2 = plVar15 + 1;
              lVar13 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)(*plVar15 + 0x10))();
              }
            }
            operator_delete(plVar8);
            QMutex::unlock();
          }
        }
        else {
          if (local_78 == (long *)0x0) {
            lVar13 = 0;
          }
          FUN_10058d020(lVar13);
          if (local_78 != (long *)0x0) {
            LOCK();
            *(int *)(local_78 + 1) = (int)local_78[1] + 1;
            UNLOCK();
          }
          plVar15 = *(long **)(param_2 + 0x38);
          *(long **)(param_2 + 0x38) = local_78;
          if (plVar15 != (long *)0x0) {
            LOCK();
            plVar2 = plVar15 + 1;
            lVar13 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)(*plVar15 + 0x10))();
            }
          }
        }
        goto LAB_10058ce11;
      }
      uVar4 = FUN_100768f60();
      FUN_1008e3970("","vdisk",0,"Error: EnlargeOnOneBlock failed: err=0x%x, sys_err=%u",local_84,
                    uVar4);
    }
    QMutex::lock();
    if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar14 = (undefined8 *)local_78[2];
    *puVar14 = 0;
    FUN_10059a420(puVar1,puVar14 + 0x21c);
    QMutex::unlock();
  }
  else {
LAB_10058ce11:
    local_84 = 0;
    if (local_78 == (long *)0x0) goto LAB_10058ce31;
  }
  LOCK();
  plVar15 = local_78 + 1;
  lVar13 = *plVar15;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)lVar13 == 1) {
    (**(code **)(*local_78 + 0x10))();
  }
LAB_10058ce31:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return local_84;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

