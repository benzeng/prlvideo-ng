
void FUN_10057ac20(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  bool bVar12;
  char *in_stack_ffffffffffffff10;
  long in_stack_ffffffffffffff18;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar13;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined8 local_58;
  ulong local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(lVar1 + 0x12b8);
  uVar6 = *(uint *)(param_1 + 0x40);
  local_50 = 0xffffffffffffffff;
  local_58 = 0xffffffffffffffff;
  local_40 = 0;
  local_48 = 0;
  lVar2 = *(long *)(*(long *)(lVar1 + 0x1128) + *(long *)(param_1 + 0x28) * 8);
  if (3 < DAT_1011b55f8) {
    QString::toUtf8();
    iVar7 = *(int *)(param_1 + 0x30);
    if ((long)iVar7 == -1) {
      in_stack_ffffffffffffff10 = "Invalid";
    }
    else if (iVar7 == -2) {
      in_stack_ffffffffffffff10 = "Disabled";
    }
    else {
      in_stack_ffffffffffffff10 = (&PTR_s_None_100bc6390)[iVar7];
    }
    in_stack_ffffffffffffff18 = CONCAT44(uVar14,param_2);
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Invoked in state [%s] whith err = 0x%X",lVar1,
                  local_68 + *(long *)(local_68 + 0x10),*(undefined8 *)(param_1 + 0x28),
                  in_stack_ffffffffffffff10,in_stack_ffffffffffffff18);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        if (*(int *)local_68 != 0) goto LAB_10057ad52;
      }
      QArrayData::deallocate(local_68,1,8);
    }
  }
LAB_10057ad52:
  cVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + 0x1210) + 0x50))();
  uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  if (cVar5 == '\0') {
    FUN_100577fb0(param_1);
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar7 = *(int *)(param_1 + 0x30);
    if ((long)iVar7 == -1) {
      pcVar9 = "Invalid";
    }
    else if (iVar7 == -2) {
      pcVar9 = "Disabled";
    }
    else {
      pcVar9 = (&PTR_s_None_100bc6390)[iVar7];
    }
    FUN_1008e3970("Compact","vdisk",0,
                  "[%p]%s[%zu] Terminated by AsyncDev state changing in state [%s]",uVar13,
                  local_70 + *(long *)(local_70 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar9);
    if (*(int *)local_70 == -1) goto LAB_10057b2fa;
    local_a8 = local_70;
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      iVar7 = *(int *)local_70;
      UNLOCK();
joined_r0x00010057b553:
      if (iVar7 != 0) goto LAB_10057b2fa;
    }
  }
  else {
    if ((((param_2 < 0) || (*(long *)(lVar1 + 0x12b8) == 0)) ||
        (*(char *)(*(long *)(lVar1 + 0x12b8) + 0x28) == '\0')) || (*(int *)(param_1 + 0x60) != 0)) {
      QString::toUtf8();
      iVar7 = *(int *)(param_1 + 0x30);
      if ((long)iVar7 == -1) {
        pcVar9 = "Invalid";
      }
      else if (iVar7 == -2) {
        pcVar9 = "Disabled";
      }
      else {
        pcVar9 = (&PTR_s_None_100bc6390)[iVar7];
      }
      if (*(long *)(lVar1 + 0x12b8) == 0) {
        bVar12 = false;
      }
      else {
        bVar12 = *(char *)(*(long *)(lVar1 + 0x12b8) + 0x28) != '\0';
      }
      pcVar11 = "no";
      if (bVar12) {
        pcVar11 = "yes";
      }
      uVar13 = CONCAT44(uVar15,param_2);
      FUN_1008e3970("Compact","vdisk",0,
                    "[%p]%s[%zu] Cancelled in state [%s]. Reasons: err = 0x%X CanDropBlocks() -> %s"
                    ,lVar1,local_78 + *(long *)(local_78 + 0x10),*(undefined8 *)(param_1 + 0x28),
                    pcVar9,uVar13,pcVar11);
      uVar14 = (undefined4)((ulong)pcVar9 >> 0x20);
      uVar15 = (undefined4)((ulong)uVar13 >> 0x20);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          UNLOCK();
          if (*(int *)local_78 != 0) goto LAB_10057af1c;
        }
        QArrayData::deallocate(local_78,1,8);
      }
LAB_10057af1c:
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    }
    else {
      if (3 < DAT_1011b55f8) {
        QString::toUtf8();
        in_stack_ffffffffffffff10 = (char *)CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x40));
        FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Starting bat idx %u",lVar1,
                      local_80 + *(long *)(local_80 + 0x10),*(undefined8 *)(param_1 + 0x28),
                      in_stack_ffffffffffffff10);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            UNLOCK();
            if (*(int *)local_80 != 0) goto LAB_10057b0fd;
          }
          QArrayData::deallocate(local_80,1,8);
        }
      }
LAB_10057b0fd:
      cVar5 = FUN_1005f4600(uVar13,uVar6);
      if (cVar5 != '\0') goto LAB_10057b152;
      if (3 < DAT_1011b55f8) {
        FUN_1008e3970("Compact","vdisk",4,"bat idx %u was changed between calls",uVar6);
      }
      while( true ) {
        uVar6 = FUN_1005f4590(uVar13,uVar6);
        uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 0x20);
        uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 0x20);
        if (uVar6 == 0xffffffff) break;
LAB_10057b152:
        lVar10 = 0;
        if (uVar6 != 0) {
          lVar10 = (ulong)*(uint *)(lVar1 + 0x1120) * (ulong)uVar6 -
                   (ulong)*(uint *)(lVar1 + 0x1158);
        }
        iVar7 = FUN_1005abe90(lVar1 + 0x10,0xffffffff,lVar10,&local_58);
        uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 0x20);
        uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 0x20);
        if (iVar7 != 0) {
          *(uint *)(param_1 + 0x40) = uVar6;
          FUN_100577e90(param_1);
          if (DAT_1011b55f8 < 4) goto LAB_10057b2fa;
          uVar13 = *(undefined8 *)(param_1 + 0x20);
          QString::toUtf8();
          FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Will continue Drop for bat idx %u",uVar13,
                        local_90 + *(long *)(local_90 + 0x10),*(undefined8 *)(param_1 + 0x28),
                        CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x40)));
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              UNLOCK();
              if (*(int *)local_90 != 0) goto LAB_10057b242;
            }
            QArrayData::deallocate(local_90,1,8);
          }
LAB_10057b242:
          if (DAT_1011b55f8 < 4) goto LAB_10057b2fa;
          uVar13 = *(undefined8 *)(param_1 + 0x20);
          QString::toUtf8();
          iVar7 = *(int *)(param_1 + 0x30);
          if ((long)iVar7 == -1) {
            pcVar9 = "Invalid";
          }
          else if (iVar7 == -2) {
            pcVar9 = "Disabled";
          }
          else {
            pcVar9 = (&PTR_s_None_100bc6390)[iVar7];
          }
          FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar13,
                        local_98 + *(long *)(local_98 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar9
                       );
          if (*(int *)local_98 == -1) goto LAB_10057b2fa;
          local_a8 = local_98;
          if (*(int *)local_98 == 0) goto LAB_10057b2eb;
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          iVar7 = *(int *)local_98;
          UNLOCK();
          goto joined_r0x00010057b553;
        }
        if (local_50 >> 0x20 == 0xffffffff) {
          param_2 = 0;
          FUN_1008e3970("Compact","vdisk",0,"Wrong storage for bat idx %u",uVar6);
          *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
          goto LAB_10057af24;
        }
        if (lVar2 != *(long *)(*(long *)(lVar1 + 0x1128) + (local_50 >> 0x20) * 8)) {
          *(uint *)(param_1 + 0x40) = uVar6;
          param_2 = 0;
          goto LAB_10057af24;
        }
        uVar8 = *(long *)(lVar2 + 0x60) + 0xffffffff;
        param_2 = 0;
        iVar7 = (int)uVar8;
        if ((int)local_50 == iVar7) {
          plVar3 = *(long **)(*(long *)(*(long *)(lVar2 + 0x40) +
                                       ((uVar8 & 0xffffffff) + *(long *)(lVar2 + 0x58) >> 9) * 8) +
                             ((ulong)(uint)((int)*(long *)(lVar2 + 0x58) + iVar7) & 0x1ff) * 8);
          param_2 = (**(code **)(*plVar3 + 0xc0))(plVar3,lVar10 - *(long *)(lVar2 + 8),0);
          uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 0x20);
          uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 0x20);
          if (param_2 < 0) {
            FUN_1008e3970("Compact","vdisk",0,"Can\'t update BAT for %llu, err = 0x%X",lVar10,
                          param_2);
            *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
            goto LAB_10057af24;
          }
          if (3 < DAT_1011b55f8) {
            uVar4 = *(undefined8 *)(param_1 + 0x20);
            QString::toUtf8();
            in_stack_ffffffffffffff10 = (char *)CONCAT44(uVar14,uVar6);
            in_stack_ffffffffffffff18 = lVar10;
            FUN_1008e3970("Compact","vdisk",4,
                          "[%p]%s[%zu] bat idx %u, lba 0x%llX, file offset %llu sect",uVar4,
                          local_88 + *(long *)(local_88 + 0x10),*(undefined8 *)(param_1 + 0x28),
                          in_stack_ffffffffffffff10,lVar10,local_58);
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                UNLOCK();
                if (*(int *)local_88 != 0) goto LAB_10057b4a9;
              }
              QArrayData::deallocate(local_88,1,8);
            }
          }
LAB_10057b4a9:
          local_50 = CONCAT44(local_50._4_4_,0xffffffff);
          local_58 = 0xffffffffffffffff;
          local_48 = local_48 & 0xffffffffffffff00;
          FUN_1005ac760(lVar1 + 0x10,lVar10,&local_58);
          *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    }
LAB_10057af24:
    if (3 < DAT_1011b55f8) {
      uVar13 = *(undefined8 *)(param_1 + 0x20);
      QString::toUtf8();
      FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Drop Done for bat idx %u (0x%X)",uVar13,
                    local_a0 + *(long *)(local_a0 + 0x10),*(undefined8 *)(param_1 + 0x28),
                    CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x40)),
                    CONCAT44(uVar15,*(undefined4 *)(param_1 + 0x40)));
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          UNLOCK();
          if (*(int *)local_a0 != 0) goto LAB_10057afbe;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
    }
LAB_10057afbe:
    if (param_2 < 0) {
      FUN_10057aa00(param_1);
      goto LAB_10057b2fa;
    }
    FUN_100594b10(lVar2);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("Compact","vdisk",3,"[%p] # of dropped blocks %llu",
                    *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x70));
    }
    *(undefined4 *)(param_1 + 0x30) = 4;
    FUN_100577e90(param_1);
    if (DAT_1011b55f8 < 4) goto LAB_10057b2fa;
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    QString::toUtf8();
    iVar7 = *(int *)(param_1 + 0x30);
    if ((long)iVar7 == -1) {
      pcVar9 = "Invalid";
    }
    else if (iVar7 == -2) {
      pcVar9 = "Disabled";
    }
    else {
      pcVar9 = (&PTR_s_None_100bc6390)[iVar7];
    }
    FUN_1008e3970("Compact","vdisk",4,"[%p]%s[%zu] Done in state [%s]",uVar13,
                  local_a8 + *(long *)(local_a8 + 0x10),*(undefined8 *)(param_1 + 0x28),pcVar9);
    if (*(int *)local_a8 == -1) goto LAB_10057b2fa;
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      iVar7 = *(int *)local_a8;
      UNLOCK();
      goto joined_r0x00010057b553;
    }
  }
LAB_10057b2eb:
  QArrayData::deallocate(local_a8,1,8);
LAB_10057b2fa:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

