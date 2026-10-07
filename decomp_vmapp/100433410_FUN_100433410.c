
void FUN_100433410(long param_1,QString *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  bool bVar19;
  long *plVar20;
  bool local_c9;
  QArrayData *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_81;
  undefined1 local_80 [4];
  ushort local_7c;
  ushort local_7a;
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar13;
  lVar11 = QThread::currentThread();
  if (lVar11 != param_1 + 0x28) goto LAB_10043386d;
  QMutex::lock();
  bVar19 = true;
  plVar12 = *(long **)(param_1 + 0x20);
  uVar10 = *(uint *)(plVar12 + 4);
  if (uVar10 != 0) {
    uVar9 = qHash(param_2,*(uint *)((long)plVar12 + 0x24));
    uVar6 = (ulong)uVar9 % (ulong)uVar10;
    plVar15 = *(long **)(plVar12[1] + uVar6 * 8);
    if (plVar15 != plVar12) {
      plVar20 = (long *)(plVar12[1] + uVar6 * 8);
      do {
        plVar16 = plVar15;
        plVar17 = plVar12;
        if (*(uint *)(plVar15 + 1) == uVar9) {
          cVar8 = operator==(param_2,(QString *)(plVar15 + 2));
          plVar12 = (long *)*plVar20;
          plVar17 = *(long **)(param_1 + 0x20);
          plVar16 = plVar12;
          if (cVar8 != '\0') break;
        }
        plVar12 = plVar17;
        plVar15 = (long *)*plVar16;
        plVar17 = plVar12;
        plVar20 = plVar16;
      } while (plVar15 != plVar12);
      if (plVar12 != plVar17) {
        lVar13 = FUN_100436170((undefined8 *)(param_1 + 0x20),param_2);
        cVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 200))
                          (*(long **)(param_1 + 0x10),param_2,local_80);
        uVar10 = 0;
        if ((cVar8 != '\0') &&
           ((6 < local_7c || ((uVar10 = 0, local_7c == 6 && (uVar10 = 0, 6 < local_7a)))))) {
          uVar10 = 0x20000;
        }
        uVar1 = *(undefined4 *)(lVar13 + 0x10);
        lVar11 = (ulong)param_3 * 0x38;
        uVar18 = 0xffffffffffffffff;
        local_c9 = true;
        uVar14 = 0;
        if ((*(int *)(lVar13 + 0x40 + lVar11) <= *(int *)(lVar13 + 0x48 + lVar11)) &&
           (uVar14 = 0, *(int *)(lVar13 + 0x44 + lVar11) <= *(int *)(lVar13 + 0x4c + lVar11))) {
          iVar2 = *(int *)(lVar13 + 0x30 + lVar11);
          iVar3 = *(int *)(lVar13 + 0x38 + lVar11);
          uVar14 = 0;
          if (iVar2 <= iVar3) {
            iVar4 = *(int *)(lVar13 + 0x34 + lVar11);
            iVar5 = *(int *)(lVar13 + 0x3c + lVar11);
            uVar14 = 0;
            if (iVar4 <= iVar5) {
              if (uVar10 == 0) {
                uVar9 = (1 - iVar4) + iVar5;
              }
              else {
                uVar10 = uVar10 / (uint)((1 - iVar2) + iVar3);
                uVar9 = (1 - iVar4) + iVar5;
                if (((int)uVar10 <= (int)uVar9) && (uVar9 = 1, uVar10 != 0)) {
                  uVar9 = uVar10;
                }
              }
              *(int *)(lVar13 + 0x30 + lVar11) = iVar2;
              *(uint *)(lVar13 + 0x34 + lVar11) = uVar9 + iVar4;
              local_c9 = iVar5 < (int)(uVar9 + iVar4);
              uVar14 = CONCAT44(iVar4,iVar2);
              uVar18 = CONCAT44((uVar9 - 1) + iVar4,iVar3);
            }
          }
        }
        bVar19 = false;
        local_98 = uVar14;
        local_90 = uVar18;
        QMutex::unlock();
        if (((int)uVar14 <= (int)uVar18) &&
           ((int)((ulong)uVar14 >> 0x20) <= (int)((ulong)uVar18 >> 0x20))) {
          FUN_100434b30(&local_a0,param_1,param_2,param_3,uVar1,&local_98,local_c9,&DAT_1011ccb98,
                        0x30d42);
          cVar8 = FUN_100433100(param_1,param_2,param_3,&local_a0);
          bVar7 = false;
          if (cVar8 != '\0') {
            bVar7 = false;
            uVar10 = FUN_100433970(param_1,param_2,&local_a0,0);
            if ((uVar10 | 2) != 2) {
              FUN_1008e3970("","IODesktopServer",0,
                            "Error: sending of encoded display package has been failed, res=%d");
              bVar7 = true;
              FUN_100432fc0(param_1,param_2,param_3);
            }
          }
          if (local_a0 != (long *)0x0) {
            LOCK();
            plVar12 = local_a0 + 1;
            lVar13 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)(*local_a0 + 0x10))();
            }
          }
          if (bVar7) goto LAB_100433850;
        }
        if ((local_c9 == false) || (cVar8 = FUN_100432e30(param_1,param_2,param_3), cVar8 != '\0'))
        {
          local_a8 = (QArrayData *)param_2->field0_0x0;
          if (1 < *(int *)local_a8 + 1U) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + 1;
            local_81 = *(int *)local_a8 != 0;
            UNLOCK();
          }
          FUN_100439860(param_1,&local_a8,param_3);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_81 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_81) goto LAB_100433850;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
        }
      }
LAB_100433850:
      lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
  if (bVar19) {
    QMutex::unlock();
  }
LAB_10043386d:
  if (lVar13 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

