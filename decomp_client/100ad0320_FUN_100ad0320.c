
void FUN_100ad0320(long *param_1,long param_2,char param_3)

{
  Node *pNVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  char *pcVar17;
  long *plVar18;
  uint *puVar19;
  undefined8 *puVar20;
  Node *pNVar21;
  Node *pNVar22;
  bool bVar23;
  uint *puVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  Data *pDVar28;
  uint *puVar29;
  long lVar30;
  byte bVar31;
  undefined4 *puVar32;
  bool bVar33;
  bool bVar34;
  undefined1 local_108;
  Data *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QString local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  Node *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_80 = (Node *)PTR_shared_null_1021e15d0;
  if ((*(int *)(param_2 + 4) == 0) || (*(int *)(param_2 + 0x24) == 0)) {
    local_108 = 0;
    bVar8 = 0;
  }
  else {
    lVar27 = 0;
    bVar8 = 0;
    local_108 = 0;
    do {
      uVar3 = *(undefined4 *)(param_2 + 0x30 + lVar27 * 4);
      plVar14 = (long *)FUN_100adb590(param_1 + 0x20,uVar3);
      lVar30 = *plVar14;
      if (lVar30 != 0) {
        if ((*(int *)(lVar30 + 0x44) != 0) || (*(int *)(lVar30 + 0x40) != 0)) {
          uVar15 = FUN_100ad9510(&local_80);
          FUN_100ad1790(uVar15,param_2,uVar3);
        }
        if ((int)param_1[0x122] == *(int *)(lVar30 + 8)) {
          uVar26 = *(uint *)(lVar30 + 0x18);
          bVar31 = 1;
          if ((uVar26 & 0x10) != 0) {
            bVar31 = bVar8;
          }
          if ((uVar26 & 0x1000) != 0) {
            *(undefined1 *)((long)param_1 + 0xaa7) = 1;
            uVar26 = *(uint *)(lVar30 + 0x18);
          }
          bVar8 = bVar31;
          if ((uVar26 & 0x20000) != 0) {
            *(undefined1 *)((long)param_1 + 0xaa9) = 1;
          }
        }
        FUN_100ace7a0(param_1[0x1f],uVar3);
        uVar15 = FUN_100ad9510(&local_80,lVar30 + 0x38);
        FUN_100ad1790(uVar15,param_2,uVar3);
        FUN_100adb760(param_1 + 0x20,uVar3);
        local_108 = 1;
        (**(code **)(*param_1 + 0x128))(param_1,uVar3);
      }
      lVar27 = lVar27 + 1;
    } while ((uint)lVar27 < *(uint *)(param_2 + 0x24));
  }
  if (*(int *)(param_2 + 8) == 0) {
    bVar9 = false;
  }
  else {
    uVar16 = (ulong)*(uint *)(param_2 + 4);
    uVar26 = 0;
    bVar9 = false;
    if (*(int *)(uVar16 + 0x24 + param_2) != 0) {
      puVar32 = (undefined4 *)(uVar16 + param_2 + 0x30);
      do {
        iVar12 = puVar32[1];
        lVar27 = (long)iVar12;
        uVar4 = puVar32[10];
        uVar5 = puVar32[0xb];
        lVar30 = 0;
        if (lVar27 != 0) {
          lVar30 = (ulong)uVar4 * 0x10 + 0x44 + (ulong)uVar5 * 2 + (long)puVar32;
        }
        if ((*(byte *)((long)puVar32 + 0x25) & 0x40) == 0) {
          QString::fromUtf16((ushort *)&local_90,(int)lVar30);
          QString::normalized(&local_88,&local_90,1,0);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_49 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_100ad05e2;
            }
            QArrayData::deallocate(local_90,2,8);
          }
        }
        else {
          local_88 = (QArrayData *)QString::fromAscii_helper("",0);
        }
LAB_100ad05e2:
        local_98 = (QArrayData *)PTR_shared_null_1021e1288;
        if ((*(ushort *)(puVar32 + 9) & 0x4010) == 0) {
          if ((int)(puVar32[0xf] - puVar32[0xd]) < 0x10) {
            bVar9 = false;
          }
          else {
            bVar9 = 0xf < (int)(puVar32[0x10] - puVar32[0xe]);
          }
        }
        else {
          bVar9 = false;
        }
        local_a0 = FUN_100ace650(param_1[0x1f],puVar32[5],bVar9,&local_88,&local_98);
        if (*(int *)(local_98 + 4) != 0) {
          lVar30 = QString::utf16();
          iVar12 = *(int *)(local_98 + 4);
        }
        lVar30 = FUN_100adb510(param_1 + 0x20,puVar32 + 5,lVar30,iVar12,&local_a0,*puVar32,
                               *(undefined4 *)(param_2 + 0x18));
        cVar10 = (**(code **)(*param_1 + 0x88))();
        if (cVar10 != '\0') {
          *(byte *)(puVar32 + 4) = *(byte *)(puVar32 + 4) | 1;
        }
        pcVar17 = (char *)FUN_100ad9510(&local_80,lVar30 + 0x38);
        puVar32[3] = *(undefined4 *)(param_2 + 0x18);
        puVar29 = *(uint **)pcVar17;
        if (puVar29[1] == 0) {
          FUN_100ad94b0(pcVar17,param_2);
          puVar29 = *(uint **)pcVar17;
        }
        if ((1 < *puVar29) || (*(long *)(puVar29 + 4) != 0x18)) {
          QByteArray::reallocData(pcVar17,puVar29[1] + 1,puVar29[2] >> 0x1f);
          puVar29 = *(uint **)pcVar17;
        }
        lVar30 = *(long *)(puVar29 + 4);
        if (*(int *)(lVar30 + 8 + (long)puVar29) == 0) {
          uStack_70 = 0;
          local_78 = 0x10;
          *(int *)((long)puVar29 + lVar30) = *(int *)((long)puVar29 + lVar30) + 0x10;
          piVar2 = (int *)((long)puVar29 + lVar30 + 8);
          *piVar2 = *piVar2 + 0x10;
          QByteArray::append(pcVar17,(int)&local_78);
        }
        QByteArray::append(pcVar17,(int)puVar32);
        puVar29 = *(uint **)pcVar17;
        if ((1 < *puVar29) || (*(long *)(puVar29 + 4) != 0x18)) {
          QByteArray::reallocData(pcVar17,puVar29[1] + 1,puVar29[2] >> 0x1f);
          puVar29 = *(uint **)pcVar17;
        }
        lVar30 = *(long *)(puVar29 + 4);
        iVar12 = puVar32[2];
        *(int *)((long)puVar29 + lVar30) = *(int *)((long)puVar29 + lVar30) + iVar12;
        piVar2 = (int *)((long)puVar29 + lVar30 + 8);
        *piVar2 = *piVar2 + iVar12;
        lVar30 = (ulong)*(uint *)((long)puVar29 + lVar30 + 4) + lVar30;
        piVar2 = (int *)((long)puVar29 + lVar30 + 0x20);
        *piVar2 = *piVar2 + iVar12;
        piVar2 = (int *)((long)puVar29 + lVar30 + 0x24);
        *piVar2 = *piVar2 + 1;
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_49 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100ad07ea;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_100ad07ea:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_49 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100ad081a;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100ad081a:
        puVar32 = (undefined4 *)
                  ((long)puVar32 + (ulong)uVar4 * 0x10 + (ulong)uVar5 * 2 + 0x44 + lVar27 * 2);
        uVar26 = uVar26 + 1;
        bVar9 = true;
      } while (uVar26 < *(uint *)(param_2 + 0x24 + uVar16));
    }
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    bVar23 = false;
    bVar31 = 0;
    bVar6 = 0;
    bVar34 = false;
  }
  else {
    lVar27 = (ulong)*(uint *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 4);
    uVar26 = 0;
    bVar23 = false;
    bVar31 = 0;
    bVar6 = 0;
    bVar34 = false;
    if (*(int *)(param_2 + 0x24 + lVar27) != 0) {
      puVar29 = (uint *)(lVar27 + param_2 + 0x30);
      plVar14 = param_1 + 0x20;
      bVar34 = false;
      bVar6 = 0;
      bVar31 = 0;
      bVar23 = false;
      do {
        uVar4 = *puVar29;
        plVar18 = (long *)FUN_100adb590(plVar14,puVar29[5]);
        lVar30 = *plVar18;
        if (lVar30 != 0) {
          puVar19 = puVar29 + 5;
          uVar5 = *(uint *)(lVar30 + 0x18);
          FUN_100adb7f0(plVar14,*puVar19,puVar19);
          if (((*(uint *)(lVar30 + 0x18) ^ uVar5) & 0x40) == 0) {
            if (*(char *)(lVar30 + 0x54) != '\0') {
              bVar23 = true;
            }
          }
          else {
            bVar34 = true;
          }
          bVar7 = bVar6;
          if ((((*(uint *)(lVar30 + 0x18) & 1) != (uVar5 & 1)) &&
              (*(int *)(lVar30 + 8) == (int)param_1[0x122])) && (bVar7 = 1, (uVar5 & 1) != 0)) {
            bVar31 = 1;
            bVar7 = bVar6;
          }
          bVar6 = bVar7;
          uVar11 = puVar29[1];
          if ((uVar11 & 2) != 0) {
            puVar24 = (uint *)0x0;
            if (puVar29[2] != 0) {
              puVar24 = puVar29 + 0x11;
            }
            FUN_100adb8e0(plVar14,*puVar19,puVar24);
            uVar11 = puVar29[1];
          }
          if ((uVar11 & 4) != 0) {
            puVar24 = (uint *)0x0;
            if (puVar29[3] != 0) {
              puVar24 = puVar29 + (ulong)puVar29[2] * 4 + 0x11;
            }
            FUN_100adba00(plVar14,*puVar19,puVar24);
            uVar11 = puVar29[1];
          }
          if ((uVar11 & 0x10) != 0) {
            FUN_100adc0e0(plVar14,*puVar19);
          }
          piVar2 = (int *)(lVar30 + 0x38);
          if (((((*(int *)(lVar30 + 0x3c) == (int)param_1[0x156]) &&
                (*piVar2 == *(int *)((long)param_1 + 0xaac))) ||
               ((*(int *)(lVar30 + 0x3c) == (int)param_1[0x157] &&
                (*piVar2 == *(int *)((long)param_1 + 0xab4))))) &&
              (((uVar5 & 0x20) != 0 && ((puVar29[9] & 0x4000) == 0)))) &&
             ((*(uint *)(lVar30 + 0x18) >> 5 & 1) != (uVar5 & 0x20) >> 5)) {
            local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
            if ((*(long *)(lVar30 + 0x88) != 0) && (*(int *)(lVar30 + 0x90) != 0)) {
              QString::fromUtf16((ushort *)&local_c0,(int)*(long *)(lVar30 + 0x88));
              QString::normalized(&local_b8,&local_c0,1,0);
              QString::operator=(&local_b0,&local_b8);
              if (*(int *)local_b8.field0_0x0 != -1) {
                if (*(int *)local_b8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                  local_49 = *(int *)local_b8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_49) goto LAB_100ad0b5d;
                }
                QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
              }
LAB_100ad0b5d:
              if (*(int *)local_c0 != -1) {
                if (*(int *)local_c0 != 0) {
                  LOCK();
                  *(int *)local_c0 = *(int *)local_c0 + -1;
                  local_49 = *(int *)local_c0 != 0;
                  UNLOCK();
                  if ((bool)local_49) goto LAB_100ad0b93;
                }
                QArrayData::deallocate(local_c0,2,8);
              }
            }
LAB_100ad0b93:
            if ((puVar29[9] & 0x4010) == 0) {
              if ((int)(puVar29[0xf] - puVar29[0xd]) < 0x10) {
                bVar33 = false;
              }
              else {
                bVar33 = 0xf < (int)(puVar29[0x10] - puVar29[0xe]);
              }
            }
            else {
              bVar33 = false;
            }
            uVar15 = FUN_100ace6b0(param_1[0x1f],puVar29[5],bVar33,&local_b0);
            iVar13 = (int)((ulong)uVar15 >> 0x20);
            iVar12 = (int)uVar15;
            if (iVar13 == 0 && iVar12 == 0) {
              bVar33 = false;
            }
            else {
              if ((iVar13 != (int)param_1[0x156]) ||
                 (bVar33 = true, iVar12 != *(int *)((long)param_1 + 0xaac))) {
                if (iVar13 == (int)param_1[0x157]) {
                  bVar33 = iVar12 == *(int *)((long)param_1 + 0xab4);
                }
                else {
                  bVar33 = false;
                }
              }
              bVar33 = (bool)(bVar33 ^ 1);
            }
            local_a8 = uVar15;
            if (*(int *)local_b0.field0_0x0 != -1) {
              if (*(int *)local_b0.field0_0x0 != 0) {
                LOCK();
                *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
                local_49 = *(int *)local_b0.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_49) goto LAB_100ad0c7d;
              }
              QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
            }
LAB_100ad0c7d:
            if (bVar33) {
              *(undefined8 *)(lVar30 + 0x40) = *(undefined8 *)(lVar30 + 0x38);
              *(undefined8 *)(lVar30 + 0x38) = uVar15;
              FUN_100ad1890(param_1,lVar30,&local_a8);
              goto LAB_100ad0d6d;
            }
          }
          pcVar17 = (char *)FUN_100ad9510(&local_80,piVar2);
          puVar19 = *(uint **)pcVar17;
          if (puVar19[1] == 0) {
            FUN_100ad94b0(pcVar17,param_2);
            puVar19 = *(uint **)pcVar17;
          }
          if ((1 < *puVar19) || (*(long *)(puVar19 + 4) != 0x18)) {
            QByteArray::reallocData(pcVar17,puVar19[1] + 1,puVar19[2] >> 0x1f);
            puVar19 = *(uint **)pcVar17;
          }
          lVar30 = *(long *)(puVar19 + 4);
          if (*(int *)(lVar30 + 0xc + (long)puVar19) == 0) {
            uStack_60 = 0;
            local_68 = 0x10;
            *(int *)((long)puVar19 + lVar30) = *(int *)((long)puVar19 + lVar30) + 0x10;
            piVar2 = (int *)((long)puVar19 + lVar30 + 0xc);
            *piVar2 = *piVar2 + 0x10;
            QByteArray::append(pcVar17,(int)&local_68);
          }
          QByteArray::append(pcVar17,(int)puVar29);
          puVar19 = *(uint **)pcVar17;
          if ((1 < *puVar19) || (*(long *)(puVar19 + 4) != 0x18)) {
            QByteArray::reallocData(pcVar17,puVar19[1] + 1,puVar19[2] >> 0x1f);
            puVar19 = *(uint **)pcVar17;
          }
          lVar30 = *(long *)(puVar19 + 4);
          lVar25 = (ulong)*(uint *)((long)puVar19 + lVar30 + 8) +
                   (ulong)*(uint *)((long)puVar19 + lVar30 + 4);
          uVar5 = *puVar29;
          *(int *)((long)puVar19 + lVar30) = *(int *)((long)puVar19 + lVar30) + uVar5;
          piVar2 = (int *)((long)puVar19 + lVar30 + 0xc);
          *piVar2 = *piVar2 + uVar5;
          piVar2 = (int *)((long)puVar19 + lVar30 + 0x20 + lVar25);
          *piVar2 = *piVar2 + uVar5;
          piVar2 = (int *)((long)puVar19 + lVar30 + 0x24 + lVar25);
          *piVar2 = *piVar2 + 1;
        }
LAB_100ad0d6d:
        puVar29 = (uint *)((long)puVar29 + (ulong)uVar4);
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(uint *)(param_2 + 0x24 + lVar27));
    }
  }
  if (((bool)(bVar6 | bVar8)) && (!bVar34 && !bVar9)) {
    *(undefined1 *)(param_1 + 0x155) = 1;
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    if ((int)param_1[0x122] != 0) goto LAB_100ad0f77;
    bVar34 = false;
  }
  else {
    plVar14 = param_1 + 0x20;
    if (*(int *)(param_2 + 0x14) == (int)param_1[0x122]) {
LAB_100ad0f77:
      plVar14 = (long *)FUN_100adb590(param_1 + 0x20);
      if (*plVar14 == 0) {
        bVar34 = false;
        FUN_100adbaf0(param_1 + 0x20,0,0);
      }
      else {
        bVar34 = false;
      }
    }
    else {
      FUN_100add420(param_1[0x137]);
      FUN_100adbaf0(plVar14,*(undefined4 *)(param_2 + 0x14),0);
      plVar18 = (long *)FUN_100adb590(plVar14,(int)param_1[0x122]);
      lVar27 = *plVar18;
      (**(code **)(*param_1 + 0x120))(param_1);
      FUN_100adbc50(&local_c8,plVar14);
      if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
        pDVar28 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
        do {
          puVar20 = (undefined8 *)FUN_100ad9510(&local_80,*(undefined8 *)pDVar28);
          uVar3 = *(undefined4 *)(param_2 + 0x14);
          puVar29 = (uint *)*puVar20;
          if (puVar29[1] == 0) {
            FUN_100ad94b0(puVar20,param_2);
            puVar29 = (uint *)*puVar20;
          }
          if ((1 < *puVar29) || (*(long *)(puVar29 + 4) != 0x18)) {
            QByteArray::reallocData(puVar20,puVar29[1] + 1,puVar29[2] >> 0x1f);
            puVar29 = (uint *)*puVar20;
          }
          *(undefined4 *)(*(long *)(puVar29 + 4) + 0x14 + (long)puVar29) = uVar3;
          pDVar28 = pDVar28 + 8;
        } while (pDVar28 != local_c8 + (long)*(int *)(local_c8 + 0xc) * 8 + 0x10);
      }
      bVar34 = bVar31 == 0;
      bVar31 = 1;
      if (bVar34) {
        if (lVar27 == 0) {
          bVar31 = 0;
        }
        else {
          bVar31 = *(byte *)(lVar27 + 0x55);
        }
      }
      cVar10 = (**(code **)(*param_1 + 0xd8))
                         (param_1,lVar27,*(int *)(param_2 + 0x10) != 0,local_108);
      if (cVar10 != '\0') {
        *(undefined1 *)((long)param_1 + 0xaaa) = 1;
      }
      if ((lVar27 != 0) &&
         (((*(char *)(param_1[0x146] + 0x10) != '\0' || (*(char *)((long)param_1 + 0xaa6) != '\0'))
          || ((*(byte *)(lVar27 + 0x19) & 0x10) != 0)))) {
        if (*(char *)((long)param_1 + 0xaaa) == '\0') {
          if ((*(ushort *)(lVar27 + 0x18) & 0x4010) == 0) {
            if (*(int *)(lVar27 + 0x30) - *(int *)(lVar27 + 0x28) < 0x10) {
              bVar34 = false;
            }
            else {
              bVar34 = 0xf < *(int *)(lVar27 + 0x34) - *(int *)(lVar27 + 0x2c);
            }
          }
          else {
            bVar34 = false;
          }
          FUN_100ae31d0(param_1,*(undefined4 *)(lVar27 + 8),*(undefined4 *)(lVar27 + 0x10),bVar34);
        }
        *(undefined4 *)((long)param_1 + 0xaa7) = 0;
      }
      if (*(int *)local_c8 == -1) {
LAB_100ad10ff:
        bVar34 = true;
      }
      else {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_49 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100ad10ff;
        }
        bVar34 = true;
        iVar12 = *(int *)(local_c8 + 0xc);
        if (iVar12 != *(int *)(local_c8 + 8)) {
          lVar27 = (long)*(int *)(local_c8 + 8) * 8 + (long)iVar12 * -8;
          pDVar28 = local_c8 + (long)iVar12 * 8 + 8;
          do {
            if (*(void **)pDVar28 != (void *)0x0) {
              operator_delete(*(void **)pDVar28);
            }
            pDVar28 = pDVar28 + -8;
            lVar27 = lVar27 + 8;
          } while (lVar27 != 0);
        }
        QListData::dispose(local_c8);
      }
    }
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    lVar27 = (ulong)*(uint *)(param_2 + 0xc) +
             (ulong)*(uint *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 4);
    if (*(int *)(param_2 + 0x24 + lVar27) == 0) {
      puVar32 = (undefined4 *)0x0;
    }
    else {
      puVar32 = (undefined4 *)(param_2 + 0x30 + lVar27);
    }
    if (puVar32 != (undefined4 *)0x0) {
      plVar14 = (long *)FUN_100adb590(param_1 + 0x20,*puVar32);
      lVar30 = *plVar14;
      if (((lVar30 != 0) && ((*(byte *)(lVar30 + 0x18) & 8) != 0)) &&
         ((*(char *)(lVar30 + 0x56) != '\0' || (*(char *)(lVar30 + 0x54) != '\0')))) {
        FUN_100add400(param_1[0x137],*puVar32);
      }
    }
    if (param_3 != (char)param_1[0x15a]) {
      if (param_3 == '\0') {
        FUN_100ade440(param_1 + 0x147,0);
      }
      *(char *)(param_1 + 0x15a) = param_3;
    }
    FUN_100adbb20(param_1 + 0x20,puVar32,*(undefined4 *)(param_2 + 0x24 + lVar27));
    pNVar21 = local_80;
    if (1 < *(uint *)(local_80 + 0x10)) {
      pNVar21 = (Node *)QHashData::detach_helper
                                  ((_func_void_Node_ptr_void_ptr *)local_80,FUN_100ad9aa0,0xad9960,
                                   0x20);
      if (*(int *)(local_80 + 0x10) != -1) {
        if (*(int *)(local_80 + 0x10) != 0) {
          LOCK();
          pNVar22 = local_80 + 0x10;
          *(int *)pNVar22 = *(int *)pNVar22 + -1;
          local_49 = *(int *)pNVar22 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100ad1290;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_80);
      }
    }
LAB_100ad1290:
    local_80 = pNVar21;
    iVar12 = *(int *)(local_80 + 0x20);
    pNVar21 = local_80;
    if (iVar12 != 0) {
      plVar14 = *(long **)(local_80 + 8);
      do {
        pNVar21 = (Node *)*plVar14;
        if ((Node *)*plVar14 != local_80) break;
        iVar12 = iVar12 + -1;
        plVar14 = plVar14 + 1;
        pNVar21 = local_80;
      } while (iVar12 != 0);
    }
    do {
      pNVar22 = local_80;
      if (1 < *(uint *)(local_80 + 0x10)) {
        pNVar22 = (Node *)QHashData::detach_helper
                                    ((_func_void_Node_ptr_void_ptr *)local_80,FUN_100ad9aa0,0xad9960
                                     ,0x20);
        if (*(int *)(local_80 + 0x10) != -1) {
          if (*(int *)(local_80 + 0x10) != 0) {
            LOCK();
            pNVar1 = local_80 + 0x10;
            *(int *)pNVar1 = *(int *)pNVar1 + -1;
            local_49 = *(int *)pNVar1 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100ad1322;
          }
          QHashData::free_helper((_func_void_Node_ptr *)local_80);
        }
      }
LAB_100ad1322:
      local_80 = pNVar22;
      if (pNVar21 == local_80) break;
      pNVar22 = pNVar21 + 0x18;
      lVar27 = param_1[0x121];
      lVar30 = param_1[0x120];
      if (*(int *)(*(long *)(pNVar21 + 0x18) + 4) == 0) {
        FUN_100ad94b0(pNVar22,param_2);
      }
      local_48 = 0;
      uStack_40 = 0;
      QByteArray::append((char *)pNVar22,(int)&local_48);
      QByteArray::append((char *)pNVar22,(int)lVar27);
      puVar29 = *(uint **)pNVar22;
      if ((1 < *puVar29) || (*(long *)(puVar29 + 4) != 0x18)) {
        QByteArray::reallocData(pNVar22,puVar29[1] + 1,puVar29[2] >> 0x1f);
        puVar29 = *(uint **)pNVar22;
      }
      lVar27 = *(long *)(puVar29 + 4);
      lVar25 = (ulong)*(uint *)((long)puVar29 + lVar27 + 0xc) +
               (ulong)*(uint *)((long)puVar29 + lVar27 + 8) +
               (ulong)*(uint *)((long)puVar29 + lVar27 + 4);
      iVar12 = (int)lVar30 * 4 + 0x10;
      *(int *)((long)puVar29 + lVar27) = *(int *)((long)puVar29 + lVar27) + iVar12;
      piVar2 = (int *)((long)puVar29 + lVar27 + 0x10);
      *piVar2 = *piVar2 + iVar12;
      *(int *)((long)puVar29 + lVar27 + 0x20 + lVar25) = iVar12;
      *(int *)((long)puVar29 + lVar27 + 0x24 + lVar25) = (int)lVar30;
      pNVar21 = (Node *)QHashData::nextNode(pNVar21);
    } while( true );
  }
  iVar12 = *(int *)(local_80 + 0x20);
  pNVar21 = local_80;
  if (iVar12 != 0) {
    plVar14 = *(long **)(local_80 + 8);
    do {
      pNVar21 = (Node *)*plVar14;
      if ((Node *)*plVar14 != local_80) break;
      iVar12 = iVar12 + -1;
      plVar14 = plVar14 + 1;
      pNVar21 = local_80;
    } while (iVar12 != 0);
  }
  if (pNVar21 != local_80) {
    do {
      FUN_100ace560(param_1[0x1f],*(undefined8 *)(pNVar21 + 0xc),pNVar21 + 0x18);
      pNVar21 = (Node *)QHashData::nextNode(pNVar21);
    } while (pNVar21 != local_80);
  }
  if ((*(int *)(param_2 + 0x10) == 0) &&
     ((!bVar34 || (cVar10 = FUN_100ad1b30(param_1), cVar10 == '\0')))) {
    if ((bVar31 & 1) == 0) {
      if (!bVar23) goto LAB_100ad1534;
    }
    else {
      plVar14 = param_1 + 0x20;
      plVar18 = (long *)FUN_100adb590(plVar14,(int)param_1[0x122]);
      lVar27 = *plVar18;
      plVar18 = (long *)FUN_100adb590(plVar14,*(undefined4 *)((long)param_1 + 0x914));
      if ((lVar27 != 0) && (lVar30 = *plVar18, lVar30 != 0)) {
        iVar12 = FUN_100adc6d0(plVar14,*(undefined4 *)(lVar27 + 8));
        iVar13 = FUN_100adc6d0(plVar14,*(undefined4 *)(lVar30 + 8));
        if ((!bVar23) && (iVar13 <= iVar12)) goto LAB_100ad1534;
      }
    }
  }
  cVar10 = FUN_100ad1c30(param_1);
  if (cVar10 == '\0') {
    FUN_100ade440(param_1 + 0x147,1);
  }
  else {
    *(undefined1 *)((long)param_1 + 0xaa6) = 0;
  }
LAB_100ad1534:
  if (bVar9) {
    FUN_100adc5e0(param_1 + 0x20);
  }
  if (*(int *)(local_80 + 0x10) != -1) {
    if (*(int *)(local_80 + 0x10) != 0) {
      LOCK();
      pNVar21 = local_80 + 0x10;
      *(int *)pNVar21 = *(int *)pNVar21 + -1;
      UNLOCK();
      if (*(int *)pNVar21 != 0) {
        return;
      }
      local_49 = 0;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_80);
  }
  return;
}

