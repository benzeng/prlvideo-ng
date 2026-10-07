
int FUN_10069a6d0(long *param_1,long *param_2,uint *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong in_stack_ffffffffffffff58;
  int local_74;
  long local_58 [2];
  QArrayData *local_48;
  undefined1 local_31;
  
  lVar11 = *(long *)(*param_1 + -0x18);
  uVar7 = *(ulong *)(lVar11 + 0x58 + (long)param_1) / *(ulong *)(lVar11 + 0x38 + (long)param_1);
  uVar9 = *(ulong *)(param_1[4] + 0x20);
  plVar21 = *(long **)(param_1[4] + 0x38);
  uVar14 = *(ulong *)(*(long *)(*plVar21 + -0x18) + 0x38 + (long)plVar21);
  uVar8 = uVar9 / uVar14;
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar11 = *(long *)(*param_1 + -0x18);
  cVar4 = (**(code **)(*(long *)((long)param_1 + lVar11) + 0x150))
                    ((long)param_1 + lVar11,plVar21,uVar9 % uVar14);
  local_74 = -0x7ffdefdf;
  plVar21 = (long *)0x0;
  if (cVar4 != '\0') {
    if (uVar7 < uVar8) {
      local_74 = -0x7ffdefaa;
      plVar21 = (long *)0x0;
      FUN_1008e3970("","dimg",0,"Error: invalid data offset %llu, must be <= %llu (file size)",uVar8
                    ,uVar7);
    }
    else {
      iVar5 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x38))
                        ((long)param_1 + *(long *)(*param_1 + -0x18),local_58);
      if (iVar5 < 0) {
        FUN_1008e3970("","dimg",0,"Error: getting params failed 0x%x",iVar5);
        local_74 = -0x7ffdefdb;
        plVar21 = (long *)0x0;
        (**(code **)(*param_1 + 0xf0))(param_1);
      }
      else {
        uVar14 = (ulong)*(uint *)(param_1[4] + 0x10);
        plVar21 = (long *)0x0;
        uVar9 = (local_58[0] + -1 + uVar14) / uVar14;
        uVar6 = (uint)((((uVar7 - 1) - uVar8) + uVar14) / uVar14);
        *param_3 = uVar6;
        local_74 = 0;
        if (uVar6 != 0) {
          puVar10 = operator_new__(0x20000,(nothrow_t *)PTR_nothrow_100ba21c8);
          local_74 = -0x7ffffffe;
          plVar21 = (long *)0x0;
          if (puVar10 != (undefined8 *)0x0) {
            lVar11 = 0xec;
            puVar16 = puVar10;
            do {
              puVar16[1] = 0xffffffffffffffff;
              *puVar16 = 0xffffffffffffffff;
              puVar16[3] = 0;
              puVar16[2] = 0;
              puVar16[5] = 0xffffffffffffffff;
              puVar16[4] = 0xffffffffffffffff;
              puVar16[7] = 0;
              puVar16[6] = 0;
              puVar16[9] = 0xffffffffffffffff;
              puVar16[8] = 0xffffffffffffffff;
              puVar16[0xb] = 0;
              puVar16[10] = 0;
              puVar16[0xd] = 0xffffffffffffffff;
              puVar16[0xc] = 0xffffffffffffffff;
              puVar16[0xf] = 0;
              puVar16[0xe] = 0;
              puVar16[0x11] = 0xffffffffffffffff;
              puVar16[0x10] = 0xffffffffffffffff;
              puVar16[0x13] = 0;
              puVar16[0x12] = 0;
              puVar16[0x15] = 0xffffffffffffffff;
              puVar16[0x14] = 0xffffffffffffffff;
              puVar16[0x17] = 0;
              puVar16[0x16] = 0;
              puVar16[0x19] = 0xffffffffffffffff;
              puVar16[0x18] = 0xffffffffffffffff;
              puVar16[0x1b] = 0;
              puVar16[0x1a] = 0;
              puVar16[0x1d] = 0xffffffffffffffff;
              puVar16[0x1c] = 0xffffffffffffffff;
              puVar16[0x1f] = 0;
              puVar16[0x1e] = 0;
              puVar16 = puVar16 + 0x20;
            } while (puVar16 != puVar10 + 0x4000);
            do {
              *(undefined4 *)((long)puVar10 + lVar11 + -0xe0) = 0;
              *(undefined4 *)((long)puVar10 + lVar11 + -0xc0) = 0;
              *(undefined4 *)((long)puVar10 + lVar11 + -0xa0) = 0;
              *(undefined4 *)((long)puVar10 + lVar11 + -0x80) = 0;
              *(undefined4 *)((long)puVar10 + lVar11 + -0x60) = 0;
              *(undefined4 *)((long)puVar10 + lVar11 + -0x40) = 0;
              *(undefined4 *)((long)puVar10 + lVar11 + -0x20) = 0;
              *(undefined4 *)((long)puVar10 + lVar11) = 0;
              lVar11 = lVar11 + 0x100;
            } while (lVar11 != 0x200ec);
            pvVar12 = _malloc((ulong)*param_3 << 3);
            plVar21 = operator_new(0x20);
            *(undefined4 *)(plVar21 + 1) = 1;
            plVar21[2] = (long)pvVar12;
            *plVar21 = (long)&PTR_FUN_10116d380;
            plVar21[3] = (long)PTR__free_100ba2378;
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            LOCK();
            plVar3 = plVar21 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
            if ((void *)plVar21[2] == (void *)0x0) {
              local_74 = -0x7ffffffe;
LAB_10069ad3e:
              operator_delete__(puVar10);
            }
            else {
              _memset((void *)plVar21[2],0xff,(ulong)*param_3 << 3);
              local_74 = iVar5;
              if (uVar9 != 0) {
                uVar14 = 0x1000;
                uVar20 = 0;
                do {
                  if (uVar9 < uVar14 + uVar20) {
                    uVar14 = (ulong)(uint)((int)uVar9 - (int)uVar20);
                  }
                  in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffff00000000;
                  local_74 = FUN_100698bd0(param_1,*(uint *)(param_1[4] + 0x10) * uVar20,0,uVar14,
                                           (ulong)*(uint *)(param_1[4] + 0x10),0,
                                           in_stack_ffffffffffffff58,puVar10);
                  if (local_74 < 0) {
                    FUN_1008e3970("","dimg",0,"Error: fill table failed with err 0x%x");
                    (**(code **)(*param_1 + 0xf0))(param_1);
                    goto LAB_10069ad3e;
                  }
                  uVar17 = 0;
                  piVar18 = (int *)(puVar10 + 1);
                  if ((int)uVar14 != 0) {
                    do {
                      if (*piVar18 != -1) {
                        uVar2 = *(ulong *)(piVar18 + -2);
                        uVar19 = (ulong)*(uint *)(param_1[4] + 0x10);
                        if ((uVar2 < uVar8) || (uVar7 < uVar19 + uVar2)) {
                          FUN_1008e3970("","dimg",0,
                                        "Error: invalid block offset. Must be in range: %llu <= %llu <= %llu"
                                        ,uVar8,uVar19 + uVar2,uVar7);
                          local_74 = -0x7ffdefaa;
                          goto LAB_10069ad3e;
                        }
                        if ((uVar2 - uVar8) % uVar19 != 0) {
                          FUN_1008e3970("","dimg",0,
                                        "Error: not aligned BAT entry found %llu (DataOff=%llu, BlockSize=%u)"
                                        ,uVar2,uVar8,*(uint *)(param_1[4] + 0x10));
                          local_74 = -0x7ffdefaa;
                          goto LAB_10069ad3e;
                        }
                        uVar13 = (uVar2 - uVar8) / uVar19;
                        uVar15 = uVar13 & 0xffffffff;
                        lVar11 = *(long *)(plVar21[2] + uVar15 * 8);
                        if (lVar11 != -1) {
                          FUN_1008e3970("","dimg",0,
                                        "Error: duplicate BAT found on block #%u off %llu -> LBA#1 %llu, LBA#2 %llu"
                                        ,uVar13,uVar2,lVar11,uVar19 * (uVar17 + uVar20));
                          local_74 = -0x7ffde000;
                          goto LAB_10069ad3e;
                        }
                        *(ulong *)(plVar21[2] + uVar15 * 8) = uVar19 * (uVar20 + uVar17);
                        *piVar18 = -1;
                        piVar18[-2] = -1;
                        piVar18[-1] = -1;
                      }
                      uVar17 = uVar17 + 1;
                      piVar18 = piVar18 + 8;
                    } while (uVar17 < uVar14);
                  }
                  uVar20 = uVar20 + uVar14;
                } while (uVar20 < uVar9);
              }
              operator_delete__(puVar10);
              if (-1 < local_74) {
                LOCK();
                *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                UNLOCK();
                plVar3 = (long *)*param_2;
                *param_2 = (long)plVar21;
                if (plVar3 != (long *)0x0) {
                  LOCK();
                  plVar1 = plVar3 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)(*plVar3 + 0x10))();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10069ad7b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10069ad7b:
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar3 = plVar21 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
  }
  return local_74;
}

