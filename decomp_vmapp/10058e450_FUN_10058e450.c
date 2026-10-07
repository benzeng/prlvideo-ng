
int FUN_10058e450(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  bool bVar16;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  undefined1 local_70 [12];
  undefined4 local_64;
  QString local_60 [2];
  int local_50;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_50 = 0;
  local_60[0].field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_38 = lVar15;
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
LAB_10058e685:
    FUN_1007d6a70(&local_88,param_2);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error finding information about deleting file of state %s",
                  local_80 + *(long *)(local_80 + 0x10));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10058e6f4;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_10058e6f4:
    iVar3 = -0x7ffe6fec;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10058ea89;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
  else {
    plVar8 = *(long **)(param_1 + 0x28);
    plVar9 = (long *)(param_1 + 0x28);
    do {
      while (plVar12 = plVar8, iVar3 = FUN_1007ea6f0(plVar12 + 4,param_2), iVar3 < 0) {
        plVar8 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) goto LAB_10058e4e0;
      }
      plVar9 = plVar12;
      plVar8 = (long *)*plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
LAB_10058e4e0:
    lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
    if ((plVar9 == (long *)(param_1 + 0x28)) ||
       (iVar3 = FUN_1007ea6f0(param_2,plVar9 + 4), iVar3 < 0)) goto LAB_10058e685;
    FUN_100585d90(&local_90,param_1,plVar9 + 7);
    QString::operator=(&local_78,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_49 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10058e561;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_10058e561:
    lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 8);
    plVar8 = (long *)0x0;
    if (lVar1 != 0) {
      plVar8 = *(long **)(lVar1 + 0x10);
    }
    (**(code **)(*plVar8 + 0xa0))(local_48);
    iVar3 = FUN_1007ea6f0(param_2,local_48);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      FUN_100584e90(param_1);
      plVar8 = (long *)FUN_100684400(&local_78,1,(int)plVar9[6],&local_50,param_1);
      if (local_50 < 0) {
        FUN_1008e3970("","vdisk",0,"DeleteStateFile: open image failed with 0x%x");
        iVar3 = local_50;
      }
      else {
        (**(code **)(*plVar8 + 0x38))(plVar8,local_70);
        (**(code **)(*plVar8 + 0x28))(plVar8);
        (**(code **)(*plVar8 + 0x20))(plVar8);
        cVar2 = QFile::remove(&local_78);
        QString::toUtf8();
        pcVar14 = "FAILURE";
        if (cVar2 != '\0') {
          pcVar14 = "SUCCESS";
        }
        FUN_1008e3970("","vdisk",0,"Info: image was removed #3 \'%s\': %s",
                      local_a0 + *(long *)(local_a0 + 0x10),pcVar14);
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_49 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_10058e826;
          }
          QArrayData::deallocate(local_a0,1,8);
        }
LAB_10058e826:
        QString::operator=(local_60,&local_78);
        local_64 = (undefined4)plVar9[6];
        uVar5 = (**(code **)(**(long **)(param_1 + 0x70) + 0x2f8))();
        plVar9 = (long *)FUN_1006848d0(local_70,uVar5,&DAT_1011bc648,&local_50,param_1);
        if (local_50 < 0) {
          FUN_1008e3970("","vdisk",0,"DeleteStateFile: create image failed with 0x%x");
          iVar3 = local_50;
        }
        else {
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,"Info: empty image was created #1 %s",
                        local_a8 + *(long *)(local_a8 + 0x10));
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_49 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_10058e8e3;
            }
            QArrayData::deallocate(local_a8,1,8);
          }
LAB_10058e8e3:
          (**(code **)(*plVar9 + 0x28))(plVar9);
          (**(code **)(*plVar9 + 0x20))(plVar9);
          FUN_10056b070(&local_78);
          iVar3 = 0;
        }
      }
    }
    else {
      uVar4 = FUN_10058ae30(param_1,&local_78);
      if (uVar4 != 0xffffffff) {
        uVar7 = (ulong)uVar4;
        uVar6 = *(long *)(param_1 + 0x58) + uVar7;
        (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar6 >> 9) * 8) +
                                (uVar6 & 0x1ff) * 8) + 0x28))();
        uVar6 = *(long *)(param_1 + 0x58) + uVar7;
        (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar6 >> 9) * 8) +
                                (uVar6 & 0x1ff) * 8) + 0x20))();
        lVar1 = *(long *)(param_1 + 0x40);
        uVar6 = *(ulong *)(param_1 + 0x58) >> 9;
        plVar8 = (long *)(lVar1 + uVar6 * 8);
        lVar13 = 0;
        if (*(long *)(param_1 + 0x48) != lVar1) {
          lVar13 = (*(ulong *)(param_1 + 0x58) & 0x1ff) * 8 + *plVar8;
        }
        if (uVar4 != 0) {
          lVar11 = lVar13 - *plVar8 >> 3;
          lVar13 = lVar11 + uVar7;
          if (lVar13 == 0 || SCARRY8(lVar11,uVar7) != lVar13 < 0) {
            lVar13 = 0x1ff - lVar13;
            uVar7 = ((ulong)(lVar13 >> 0x3f) >> 0x37) + lVar13;
            lVar11 = uVar6 - ((long)uVar7 >> 9);
            plVar8 = (long *)(lVar1 + lVar11 * 8);
            lVar13 = (0x1ff - (lVar13 - (uVar7 & 0x1ffffffffffffe00))) * 8 +
                     *(long *)(lVar1 + lVar11 * 8);
          }
          else {
            uVar7 = ((ulong)(lVar13 >> 0x3f) >> 0x37) + lVar13;
            lVar11 = ((long)uVar7 >> 9) + uVar6;
            plVar8 = (long *)(lVar1 + lVar11 * 8);
            lVar13 = (lVar13 - (uVar7 & 0x1ffffffffffffe00)) * 8 + *(long *)(lVar1 + lVar11 * 8);
          }
        }
        FUN_100598920(param_1 + 0x38,plVar8,lVar13);
      }
      cVar2 = QFile::remove(&local_78);
      QString::toUtf8();
      pcVar14 = "FAILURE";
      if (cVar2 != '\0') {
        pcVar14 = "SUCCESS";
      }
      FUN_1008e3970("","vdisk",0,"Info: image was removed #2 \'%s\': %s",
                    local_98 + *(long *)(local_98 + 0x10),pcVar14);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_49 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_10058ea0a;
        }
        QArrayData::deallocate(local_98,1,8);
      }
LAB_10058ea0a:
      lVar1 = *(long *)(*(long *)(param_1 + 0x70) + 8);
      plVar8 = (long *)0x0;
      if (lVar1 != 0) {
        plVar8 = *(long **)(lVar1 + 0x10);
      }
      (**(code **)(*plVar8 + 0x110))(plVar8,param_1 + 0x68,plVar9 + 0xb);
      plVar8 = plVar9;
      plVar12 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar8[2];
          bVar16 = (long *)*plVar10 != plVar8;
          plVar8 = plVar10;
        } while (bVar16);
      }
      else {
        do {
          plVar10 = plVar12;
          plVar12 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x20) == plVar9) {
        *(long **)(param_1 + 0x20) = plVar10;
      }
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      FUN_1000e86c0(*(undefined8 *)(param_1 + 0x28),plVar9);
      FUN_10057e590(plVar9 + 6);
      operator_delete(plVar9);
      iVar3 = 0;
    }
  }
LAB_10058ea89:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_49 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10058eab9;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10058eab9:
  if (*(int *)local_60[0].field0_0x0 != -1) {
    if (*(int *)local_60[0].field0_0x0 != 0) {
      LOCK();
      *(int *)local_60[0].field0_0x0 = *(int *)local_60[0].field0_0x0 + -1;
      local_49 = *(int *)local_60[0].field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10058eae9;
    }
    QArrayData::deallocate((QArrayData *)local_60[0].field0_0x0,2,8);
  }
LAB_10058eae9:
  if (lVar15 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

