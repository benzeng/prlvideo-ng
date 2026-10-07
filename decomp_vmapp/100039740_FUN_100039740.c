
void FUN_100039740(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  char *pcVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  bool bVar24;
  bool bVar25;
  undefined1 local_160 [8];
  undefined1 local_158 [16];
  QString local_148;
  Data *local_140;
  Data *local_138;
  Data *local_130;
  undefined1 local_128 [4];
  undefined4 local_124;
  long *local_120;
  undefined1 local_118 [32];
  undefined4 local_f8 [2];
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  QString local_a8;
  QString local_a0;
  QString local_98;
  undefined1 local_90 [4];
  uint local_8c;
  long *local_88;
  undefined1 local_80 [39];
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar18 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar2 = (long *)*param_3;
  local_38 = lVar18;
  switch(*(undefined4 *)(plVar2[2] + 0x40)) {
  case 0x30dc7:
    FUN_1007d6870(&local_58);
    local_158._8_4_ = (int)PTR_shared_null_100ba20d0;
    local_158._0_8_ = PTR_shared_null_100ba20d0;
    local_158._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
    local_148.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    param_3 = (long *)*param_3;
    if (param_3 != (long *)0x0) {
      LOCK();
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      UNLOCK();
    }
    lVar17 = 0;
    local_88 = (long *)0x0;
    if (param_3 != (long *)0x0) {
      lVar17 = param_3[2];
    }
    FUN_100790630(lVar17,0,local_90,&local_88,&local_8c);
    if (local_8c < 0x40) {
      bVar20 = false;
    }
    else {
      lVar17 = 0;
      if (local_88 != (long *)0x0) {
        lVar17 = local_88[2];
      }
      FUN_1007d6c60(&local_48,lVar17);
      local_50 = local_40;
      local_58 = local_48;
      lVar17 = 0;
      if (local_88 != (long *)0x0) {
        lVar17 = local_88[2];
      }
      iVar7 = FUN_10078cf30(local_80,lVar17,local_8c,0x40);
      bVar5 = 0;
      bVar4 = 0;
      bVar3 = 0;
      bVar20 = false;
      while (iVar7 == 0) {
        uVar9 = FUN_10078d0d0(local_80);
        switch(uVar9) {
        case 0x200a:
          pcVar12 = (char *)FUN_10078d0a0(local_80);
          iVar7 = FUN_10078d0c0(local_80);
          if ((pcVar12 != (char *)0x0) && (iVar7 == -1)) {
            _strlen(pcVar12);
          }
          QString::fromUtf8_helper((char *)&local_98,(int)pcVar12);
          QString::operator=((QString *)local_158,&local_98);
          bVar4 = 1;
          if (*(int *)local_98.field0_0x0 != -1) {
            bVar4 = 1;
            if (*(int *)local_98.field0_0x0 != 0) {
              LOCK();
              *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
              local_59 = *(int *)local_98.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_59) break;
            }
            QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
          }
          break;
        case 0x200b:
          pcVar12 = (char *)FUN_10078d0a0(local_80);
          iVar7 = FUN_10078d0c0(local_80);
          if ((pcVar12 != (char *)0x0) && (iVar7 == -1)) {
            _strlen(pcVar12);
          }
          QString::fromUtf8_helper((char *)&local_a0,(int)pcVar12);
          QString::operator=((QString *)(local_158 + 8),&local_a0);
          bVar3 = 1;
          if (*(int *)local_a0.field0_0x0 != -1) {
            bVar3 = 1;
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_59 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_59) break;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
          break;
        case 0x200c:
          pcVar12 = (char *)FUN_10078d0a0(local_80);
          iVar7 = FUN_10078d0c0(local_80);
          if ((pcVar12 != (char *)0x0) && (iVar7 == -1)) {
            _strlen(pcVar12);
          }
          QString::fromUtf8_helper((char *)&local_a8,(int)pcVar12);
          QString::operator=(&local_148,&local_a8);
          bVar20 = true;
          if (*(int *)local_a8.field0_0x0 != -1) {
            if (*(int *)local_a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
              local_59 = *(int *)local_a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_59) break;
            }
            QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
          }
          break;
        case 0x200d:
          uVar8 = FUN_10078d0c0(local_80);
          if (3 < uVar8) {
            piVar11 = (int *)FUN_10078d0a0(local_80);
            local_160[0] = *piVar11 != 0;
            bVar5 = 1;
          }
          break;
        default:
          if (1 < DAT_1011b55f8) {
            uVar9 = FUN_10078d0d0(local_80);
            uVar10 = FUN_10078d0c0(local_80);
            FUN_1008e3970("SSO_TOOL","vm",2,"Unsupported data skipped, type = %u, size = %u",uVar9,
                          uVar10);
          }
        }
        iVar7 = FUN_10078d020(local_80);
      }
      if (!(bool)(bVar5 & bVar4 & bVar3)) {
        bVar20 = false;
      }
    }
    if (local_88 != (long *)0x0) {
      LOCK();
      plVar2 = local_88 + 1;
      lVar17 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (param_3 != (long *)0x0) {
      LOCK();
      plVar2 = param_3 + 1;
      lVar17 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)(*param_3 + 0x10))(param_3);
      }
    }
    if (bVar20) {
      QMutex::lock();
      lVar17 = *(long *)(param_1 + 0x40);
      uVar15 = (ulong)*(uint *)(lVar17 + 8);
      lVar14 = 0;
      if ((int)*(uint *)(lVar17 + 8) < *(int *)(lVar17 + 0xc)) {
        plVar2 = (long *)(param_1 + 0x40);
        lVar23 = 0;
        lVar14 = 0;
        do {
          iVar7 = FUN_1007ea6f0(*(long *)(lVar17 + 0x10 + ((int)uVar15 + lVar23) * 8) + 8,&local_58)
          ;
          if (iVar7 == 0) {
            puVar13 = (uint *)*plVar2;
            uVar8 = puVar13[2];
            lVar14 = **(long **)(puVar13 + (lVar23 + (int)uVar8) * 2 + 4);
            if (lVar23 < (long)(int)puVar13[3] - (long)(int)uVar8) {
              if (1 < *puVar13) {
                FUN_10003b450(plVar2,puVar13[1]);
                puVar13 = (uint *)*plVar2;
                uVar8 = puVar13[2];
              }
              if (*(void **)(puVar13 + ((int)uVar8 + lVar23) * 2 + 4) != (void *)0x0) {
                operator_delete(*(void **)(puVar13 + ((int)uVar8 + lVar23) * 2 + 4));
              }
              QListData::remove((int)plVar2);
            }
          }
          lVar23 = lVar23 + 1;
          lVar17 = *plVar2;
          uVar15 = (ulong)*(int *)(lVar17 + 8);
        } while (lVar23 < (long)((long)*(int *)(lVar17 + 0xc) - uVar15));
      }
      QMutex::unlock();
      if (lVar14 != 0) {
        cVar6 = FUN_1000393f0();
        uVar16 = 0xf000001c;
        if (cVar6 != '\0') {
          uVar16 = 0;
        }
        FUN_1004c07d0(param_1 + 0x10,lVar14,uVar16);
      }
    }
    FUN_10003b330(local_160);
    break;
  case 0x30dc8:
    local_138 = (Data *)PTR_shared_null_100ba2188;
    local_140 = (Data *)PTR_shared_null_100ba2188;
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    lVar18 = 0;
    local_120 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      lVar18 = plVar2[2];
    }
    FUN_100790630(lVar18,0,local_128,&local_120,&local_124);
    lVar18 = 0;
    if (local_120 != (long *)0x0) {
      lVar18 = local_120[2];
    }
    iVar7 = FUN_10078cf30(local_118,lVar18,local_124,0x40);
    bVar24 = false;
    bVar25 = false;
    bVar20 = false;
    bVar19 = false;
    while (iVar7 == 0) {
      iVar7 = FUN_10078d0d0(local_118);
      if (iVar7 == 0x200d) {
        uVar8 = FUN_10078d0c0(local_118);
        if (3 < uVar8) {
          piVar11 = (int *)FUN_10078d0a0(local_118);
          bVar24 = *piVar11 != 0;
          bVar19 = true;
        }
      }
      else if (iVar7 == 0x200e) {
        uVar8 = FUN_10078d0c0(local_118);
        if (3 < uVar8) {
          piVar11 = (int *)FUN_10078d0a0(local_118);
          bVar25 = *piVar11 != 0;
          bVar20 = true;
        }
      }
      else if (1 < DAT_1011b55f8) {
        uVar9 = FUN_10078d0d0(local_118);
        uVar10 = FUN_10078d0c0(local_118);
        FUN_1008e3970("SSO_TOOL","vm",2,"Unsupported data skipped, type = %u, size = %u",uVar9,
                      uVar10);
      }
      iVar7 = FUN_10078d020(local_118);
    }
    if (!bVar19) {
      bVar20 = false;
    }
    if (local_120 != (long *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar18 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)(*local_120 + 0x10))();
      }
    }
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar18 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (bVar20) {
      if (bVar24) {
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("SSO_TOOL","vm",3,"Enabled Single Sign On feature in guest");
        }
        QMutex::lock();
        lVar18 = DAT_1011cc7e0;
        if (DAT_1011cc7e0 == 0) {
          QMutex::unlock();
          FUN_1008e3970("SSO_TOOL","vm",0,"Can\'t find CToolsCenterHost");
        }
        else {
          DAT_1011cc7e8 = DAT_1011cc7e8 + 1;
          QMutex::unlock();
          FUN_100493a30(lVar18);
          FUN_10003b2b0(&DAT_1011cc7d0);
        }
      }
      QMutex::lock();
      bVar20 = false;
      if (((bVar25 != false) && (*(char *)(param_1 + 0x58) == '\0')) &&
         (bVar20 = true, *(int *)(param_1 + 0x5c) == 1)) {
        FUN_1000373c0(&local_140,param_1 + 0x50);
        FUN_100036f60(param_1 + 0x50);
        bVar20 = false;
      }
      *(bool *)(param_1 + 0x58) = bVar25;
      iVar7 = *(int *)(param_1 + 0x60) + 1;
      *(int *)(param_1 + 0x60) = iVar7;
      FUN_1000373c0(&local_138,param_1 + 0x48);
      FUN_100036f60(param_1 + 0x48);
      QMutex::unlock();
      if (bVar20) {
        FUN_10003a660();
      }
      iVar21 = *(int *)(local_140 + 8);
      iVar22 = *(int *)(local_140 + 0xc) - iVar21;
      if (iVar21 < *(int *)(local_140 + 0xc)) {
        lVar18 = 0;
        while( true ) {
          FUN_1004c07d0(param_1 + 0x10,*(undefined8 *)(local_140 + (iVar21 + lVar18) * 8 + 0x10),0);
          lVar18 = lVar18 + 1;
          if (iVar22 == (int)lVar18) break;
          iVar21 = *(int *)(local_140 + 8);
        }
      }
      uVar15 = (ulong)*(int *)(local_138 + 8);
      lVar18 = (long)*(int *)(local_138 + 0xc) - uVar15;
      if (0 < (int)lVar18) {
        lVar17 = 0;
        while( true ) {
          local_f8[0] = 1;
          local_ec = 0;
          local_e8 = 0;
          local_f0 = iVar7;
          lVar14 = FUN_1002a6120(*(undefined8 *)(local_138 + ((int)uVar15 + lVar17) * 8 + 0x10),1,1)
          ;
          iVar21 = FUN_1002a5a50(lVar14,0,local_f8,0x50);
          uVar16 = 0xf000001c;
          if (iVar21 == 0x50) {
            *(undefined4 *)(lVar14 + 0x10) = 0x50;
            uVar16 = 0;
          }
          FUN_1004c07d0(param_1 + 0x10,
                        *(undefined8 *)(local_138 + (*(int *)(local_138 + 8) + lVar17) * 8 + 0x10),
                        uVar16);
          lVar17 = lVar17 + 1;
          if (lVar18 <= lVar17) break;
          uVar15 = (ulong)*(uint *)(local_138 + 8);
        }
      }
    }
    lVar18 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_59 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_59) goto LAB_10003a333;
      }
      QListData::dispose(local_140);
    }
LAB_10003a333:
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_59 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_59) break;
      }
      QListData::dispose(local_138);
    }
    break;
  case 0x30dc9:
    QMutex::lock();
    *(undefined4 *)(param_1 + 0x5c) = 0;
    cVar6 = *(char *)(param_1 + 0x58);
    QMutex::unlock();
    if (cVar6 != '\0') {
      FUN_10003a660();
    }
    goto LAB_100039a21;
  case 0x30dca:
LAB_100039a21:
    local_130 = (Data *)PTR_shared_null_100ba2188;
    QMutex::lock();
    *(undefined4 *)(param_1 + 0x5c) = 1;
    if (*(char *)(param_1 + 0x58) != '\0') {
      FUN_1000373c0(&local_130,param_1 + 0x50);
      FUN_100036f60(param_1 + 0x50);
    }
    QMutex::unlock();
    iVar7 = *(int *)(local_130 + 8);
    iVar21 = *(int *)(local_130 + 0xc) - iVar7;
    if (iVar7 < *(int *)(local_130 + 0xc)) {
      lVar17 = 0;
      while( true ) {
        FUN_1004c07d0(param_1 + 0x10,*(undefined8 *)(local_130 + (iVar7 + lVar17) * 8 + 0x10),0);
        lVar17 = lVar17 + 1;
        if (iVar21 == (int)lVar17) break;
        iVar7 = *(int *)(local_130 + 8);
      }
    }
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_59 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_59) break;
      }
      QListData::dispose(local_130);
    }
  }
  if (lVar18 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

