
int FUN_10068d710(long *param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  QArrayData *local_1058;
  undefined4 local_1050;
  undefined4 local_104c;
  undefined4 local_1048;
  undefined4 local_1044;
  QArrayData *local_1040;
  undefined1 local_1038 [4096];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    uVar14 = (ulong)*(uint *)(lVar3 + 0x10);
    uVar17 = (ulong)*(uint *)(lVar3 + 0x6c);
    uVar8 = FUN_100697940(lVar3);
    local_1044 = 0;
    local_1048 = 0;
    local_104c = 0;
    local_1050 = 0;
    cVar7 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                      ((long)param_1 + *(long *)(*param_1 + -0x18));
    lVar11 = *(long *)(*param_1 + -0x18);
    if (cVar7 == '\0') {
      QString::toUtf8();
      FUN_1008e3970("ChangeCapacity","dimg",0,
                    "Image \"%s\" is not opened, decrease capacity failed. [%p]",
                    local_1058 + *(long *)(local_1058 + 0x10),
                    *(undefined8 *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1));
      iVar10 = 0;
      if (*(int *)local_1058 != -1) {
        iVar10 = 0;
        if (*(int *)local_1058 != 0) {
          LOCK();
          *(int *)local_1058 = *(int *)local_1058 + -1;
          local_1038[0] = *(int *)local_1058 != 0;
          UNLOCK();
          if ((bool)local_1038[0]) goto LAB_10068dac9;
        }
        QArrayData::deallocate(local_1058,1,8);
      }
    }
    else if ((*(byte *)(lVar11 + 0x18 + (long)param_1) & 3) == 0) {
      FUN_1008e3970("ChangeCapacity","dimg",0,"Image must be opened for read/write");
      iVar10 = -0x7ffffffd;
    }
    else {
      lVar4 = *(long *)((long)param_1 + lVar11 + 0x58);
      lVar11 = (**(code **)(*(long *)((long)param_1 + lVar11) + 0x160))((long)param_1 + lVar11);
      if (lVar4 == lVar11) {
        if (~param_2 < uVar14 - 1) {
          FUN_1008e3970("ChangeCapacity","dimg",0,"Requested capacity (%llu) sect is too big",
                        param_2);
          iVar10 = -0x7ffdefef;
        }
        else {
          uVar12 = FUN_1006978d0(lVar3);
          uVar1 = *(uint *)(lVar3 + 0x10);
          lVar11 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x160))
                             ((long)param_1 + *(long *)(*param_1 + -0x18));
          if ((lVar11 - ((uVar12 & 0xffffffff) % (ulong)uVar1) *
                        *(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x38)) %
              (ulong)uVar8 == 0) {
            uVar16 = (param_2 - 1) + uVar14;
            uVar14 = (((uVar14 - 1) + uVar16) - uVar16 % uVar14) / uVar14;
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("ChangeCapacity","dimg",2,
                            "[DecreaseCapacity] Decrease from %llu blocks to %llu blocks",uVar17,
                            uVar14);
            }
            if (uVar17 <= uVar14) {
              pcVar15 = "New size (%llu blocks) must be smaller than current size (%llu blocks)";
              goto LAB_10068da23;
            }
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("ChangeCapacity","dimg",2,
                            "[DecreaseCapacity] Change image params: BAT size = %llu blocks, data offset = %u sect"
                            ,uVar14,uVar12);
            }
            iVar10 = FUN_10068d520(lVar3,uVar14,uVar12);
            if (iVar10 < 0) {
              FUN_1008e3970("ChangeCapacity","dimg",0,"Updating image header failed, err = 0x%X",
                            iVar10);
            }
            else {
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("ChangeCapacity","dimg",2,"[DecreaseCapacity] Check consistency");
              }
              iVar10 = (**(code **)(*param_1 + 0x198))
                                 (param_1,2,&local_1044,&local_1048,&local_104c,&local_1050,param_3)
              ;
              if (iVar10 < 0) {
                FUN_1008e3970("ChangeCapacity","dimg",0,
                              "Error at checking disk consistency, butcapacity was changed and we continue"
                             );
                iVar10 = 0;
              }
              else {
                if (((((1 < DAT_1011b55f8) &&
                      (FUN_1008e3970("ChangeCapacity","dimg",2,
                                     "[DecreaseCapacity] Check consistency finished"),
                      1 < DAT_1011b55f8)) &&
                     (FUN_1008e3970("ChangeCapacity","dimg",2,
                                    "[DecreaseCapacity]\tDupBlocksCnt:\t\t%u",local_1044),
                     1 < DAT_1011b55f8)) &&
                    ((FUN_1008e3970("ChangeCapacity","dimg",2,
                                    "[DecreaseCapacity]\tCorruptBlocksCnt:\t%u",local_1048),
                     1 < DAT_1011b55f8 &&
                     (FUN_1008e3970("ChangeCapacity","dimg",2,
                                    "[DecreaseCapacity]\tUnrefBlocksCnt:\t%u",local_104c),
                     1 < DAT_1011b55f8)))) &&
                   (FUN_1008e3970("ChangeCapacity","dimg",2,
                                  "[DecreaseCapacity]\tOutOfDiskBlocksCnt:\t%u",local_1050),
                   1 < DAT_1011b55f8)) {
                  uVar13 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) +
                                       0x160))((long)param_1 + *(long *)(*param_1 + -0x18));
                  FUN_1008e3970("ChangeCapacity","dimg",2,"[DecreaseCapacity]\tFileSize: %llu bytes"
                                ,uVar13);
                }
                uVar17 = *(ulong *)(param_1[4] + 0x20);
                uVar14 = *(ulong *)(param_1[4] + 0x40);
                uVar12 = uVar17 & 0xffffffff;
                if (uVar14 < uVar12) {
                  ___bzero(local_1038,0x1000);
                  uVar17 = (uVar17 & 0xffffffff) - uVar14;
                  do {
                    plVar6 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                    uVar16 = uVar17 & 0xffffffff;
                    if (0x1000 < uVar17) {
                      uVar16 = 0x1000;
                    }
                    (**(code **)(*plVar6 + 0x48))(plVar6,local_1038,uVar16,0,uVar14);
                    uVar14 = uVar14 + 0x1000;
                    uVar17 = uVar17 - 0x1000;
                  } while (uVar14 < uVar12);
                }
              }
            }
          }
          else {
            uVar13 = (**(code **)(*(long *)(*(long *)(*param_1 + -0x18) + (long)param_1) + 0x160))()
            ;
            FUN_1008e3970("ChangeCapacity","dimg",0,
                          "Current file size [%llu bytes] is not alligned to block size [%u bytes]",
                          uVar13,uVar8);
            iVar10 = -0x7ffdefef;
          }
        }
      }
      else {
        lVar3 = *(long *)(*param_1 + -0x18);
        uVar17 = *(ulong *)((long)param_1 + lVar3 + 0x58);
        uVar14 = (**(code **)(*(long *)((long)param_1 + lVar3) + 0x160))((long)param_1 + lVar3);
        pcVar15 = "Data area end [%llu bytes] is not equal to file size [%llu bytes]";
LAB_10068da23:
        FUN_1008e3970("ChangeCapacity","dimg",0,pcVar15,uVar17,uVar14);
        iVar10 = -0x7ffdefef;
      }
    }
LAB_10068dac9:
    (**(code **)(*param_1 + 0x70))(param_1,1);
    (**(code **)(*param_1 + 0x28))(param_1);
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x180))
              ((long)param_1 + *(long *)(*param_1 + -0x18),*(undefined8 *)(param_1[4] + 0x20));
    lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar11 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18));
    pcVar5 = *(code **)(lVar11 + 0x188);
    uVar13 = (**(code **)(lVar11 + 0x160))(lVar3);
    (*pcVar5)(lVar3,uVar13);
    (**(code **)(*param_1 + 0x118))(param_1);
    if ((iVar10 < 0) && (iVar9 = iVar10, iVar10 != -0x7ffdefc8)) {
      while( true ) {
        pcVar5 = (code *)*param_3;
        if ((pcVar5 == (code *)0x0) && (param_3[4] == 0)) goto LAB_10068dba7;
        if ((-1 < iVar9) && (1 < *(uint *)(param_3 + 2))) {
          iVar2 = *(int *)((long)param_3 + 0x14);
          if (iVar9 < *(int *)((long)param_3 + 0x14)) {
            *(int *)((long)param_3 + 0x14) = iVar9;
            goto LAB_10068dba7;
          }
          *(int *)((long)param_3 + 0x14) = iVar9;
          iVar9 = (uint)(iVar9 - iVar2) / *(uint *)(param_3 + 2) + *(int *)(param_3 + 3);
          *(int *)(param_3 + 3) = iVar9;
        }
        if (pcVar5 != (code *)0x0) break;
        param_3 = (undefined8 *)param_3[4];
      }
      (*pcVar5)(iVar9,param_3[1]);
    }
LAB_10068dba7:
    (**(code **)(*param_1 + 0xf0))(param_1);
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("ChangeCapacity","dimg",2,"[DecreaseCapacity] Done with result = 0x%X",iVar10);
    }
    goto LAB_10068dbe3;
  }
  QString::toUtf8();
  FUN_1008e3970("ChangeCapacity","dimg",0,
                "Disk \"%s\" is not opened (struct info is absent), decrease capacity failed.",
                local_1040 + *(long *)(local_1040 + 0x10));
  iVar9 = 0;
  if (*(int *)local_1040 != -1) {
    iVar9 = 0;
    if (*(int *)local_1040 != 0) {
      LOCK();
      *(int *)local_1040 = *(int *)local_1040 + -1;
      local_1038[0] = *(int *)local_1040 != 0;
      UNLOCK();
      if ((bool)local_1038[0]) goto LAB_10068d8b5;
    }
    QArrayData::deallocate(local_1040,1,8);
  }
LAB_10068d8b5:
  while( true ) {
    pcVar5 = (code *)*param_3;
    if ((pcVar5 == (code *)0x0) && (iVar10 = -0x7ffdefdf, param_3[4] == 0)) goto LAB_10068dbe3;
    if ((-1 < iVar9) && (1 < *(uint *)(param_3 + 2))) {
      iVar10 = *(int *)((long)param_3 + 0x14);
      if (iVar9 < *(int *)((long)param_3 + 0x14)) {
        *(int *)((long)param_3 + 0x14) = iVar9;
        iVar10 = -0x7ffdefdf;
        goto LAB_10068dbe3;
      }
      *(int *)((long)param_3 + 0x14) = iVar9;
      iVar9 = (uint)(iVar9 - iVar10) / *(uint *)(param_3 + 2) + *(int *)(param_3 + 3);
      *(int *)(param_3 + 3) = iVar9;
    }
    if (pcVar5 != (code *)0x0) break;
    param_3 = (undefined8 *)param_3[4];
  }
  (*pcVar5)(iVar9,param_3[1]);
  iVar10 = -0x7ffdefdf;
LAB_10068dbe3:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar10;
}

