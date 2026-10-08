
void FUN_10071de90(long param_1)

{
  bool bVar1;
  bool bVar2;
  Data *pDVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  QKeySequence *pQVar17;
  long lVar18;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  int local_90;
  Data *local_88 [2];
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (DAT_102310998 == (void *)0x0) {
    pvVar13 = operator_new(0x18);
    FUN_1006faf60(pvVar13);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar13;
  }
  FUN_1006fb7b0(local_88,DAT_102310998,0);
  uVar14 = FUN_100708300(local_88);
  if ((uVar14 & 2) != 0) {
    FUN_100708240(&local_b0,local_88);
    FUN_1005607f0(&local_a8,&local_b0);
    local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
    local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
    local_90 = 1;
    if (*(int *)local_b0 == -1) {
LAB_10071dfca:
      bVar1 = true;
      if (local_a0 != local_98) {
        do {
          pDVar3 = local_a0;
          iVar4 = FUN_100722d60(local_a0,0);
          iVar5 = FUN_100722d80(pDVar3,0);
          local_78 = *(Data **)(param_1 + 0x38);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 == 0) {
              QListData::detach((int)&local_78);
              lVar15 = (long)*(int *)(local_78 + 8);
              lVar18 = *(long *)(param_1 + 0x38);
              if (((Data *)(lVar18 + (long)*(int *)(lVar18 + 8) * 8) != local_78 + lVar15 * 8) &&
                 (lVar16 = *(int *)(local_78 + 0xc) - lVar15,
                 lVar16 != 0 && lVar15 <= *(int *)(local_78 + 0xc))) {
                _memcpy(local_78 + lVar15 * 8 + 0x10,
                        (void *)(lVar18 + 0x10 + (long)*(int *)(lVar18 + 8) * 8),lVar16 * 8);
              }
            }
            else {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + 1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
            }
          }
          local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
          local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
          if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
            do {
              local_60 = 1;
              lVar18 = *(long *)local_70;
              if ((lVar18 != 0) && (iVar6 = FUN_100722b90(lVar18), iVar6 == iVar4)) {
                iVar6 = FUN_100722bb0(lVar18);
                bVar2 = true;
                if (iVar6 == iVar5) goto LAB_10071e0ef;
              }
              local_70 = local_70 + 8;
            } while (local_70 != local_68);
          }
          local_60 = 1;
          bVar2 = false;
LAB_10071e0ef:
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10071e115;
            }
            QListData::dispose(local_78);
          }
LAB_10071e115:
          if (!bVar2) {
            local_58 = *(Data **)(param_1 + 0x28);
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 == 0) {
                QListData::detach((int)&local_58);
                lVar15 = (long)*(int *)(local_58 + 8);
                lVar18 = *(long *)(param_1 + 0x28);
                if (((Data *)(lVar18 + (long)*(int *)(lVar18 + 8) * 8) != local_58 + lVar15 * 8) &&
                   (lVar16 = *(int *)(local_58 + 0xc) - lVar15,
                   lVar16 != 0 && lVar15 <= *(int *)(local_58 + 0xc))) {
                  _memcpy(local_58 + lVar15 * 8 + 0x10,
                          (void *)(lVar18 + 0x10 + (long)*(int *)(lVar18 + 8) * 8),lVar16 * 8);
                }
              }
              else {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + 1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
              }
            }
            local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
            local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
            if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
              do {
                local_40 = 1;
                lVar18 = *(long *)local_50;
                if ((lVar18 != 0) && (iVar6 = FUN_100722b90(lVar18), iVar6 == iVar4)) {
                  iVar6 = FUN_100722bb0(lVar18);
                  bVar2 = true;
                  if (iVar6 == iVar5) goto LAB_10071e1ff;
                }
                local_50 = local_50 + 8;
              } while (local_50 != local_48);
            }
            local_40 = 1;
            bVar2 = false;
LAB_10071e1ff:
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10071e225;
              }
              QListData::dispose(local_58);
            }
LAB_10071e225:
            if (!bVar2) {
              uVar7 = FUN_100722d60(pDVar3,0);
              uVar8 = FUN_100cdf3f0();
              uVar7 = FUN_100cdf7f0(uVar7,uVar8);
              uVar12 = (uint)pDVar3;
              uVar9 = QKeySequence::operator[](uVar12);
              uVar10 = QKeySequence::operator[](uVar12);
              uVar11 = QKeySequence::operator[](uVar12);
              uVar12 = QKeySequence::operator[](uVar12);
              FUN_1001c27b0(param_1 + 0x40,
                            uVar12 >> 0x12 & 0x100 |
                            uVar9 >> 0x10 & 0x200 | uVar10 >> 0x10 & 0x1000 | uVar11 >> 0x10 & 0x800
                            ,uVar7);
              bVar1 = false;
            }
          }
          local_a0 = local_a0 + 8;
          local_90 = 1;
        } while (local_a0 != local_98);
      }
    }
    else {
      if (*(int *)local_b0 == 0) {
LAB_10071df77:
        iVar4 = *(int *)(local_b0 + 0xc);
        if (iVar4 != *(int *)(local_b0 + 8)) {
          lVar18 = (long)*(int *)(local_b0 + 8) * 8 + (long)iVar4 * -8;
          pQVar17 = (QKeySequence *)(local_b0 + (long)iVar4 * 8 + 8);
          do {
            QKeySequence::~QKeySequence(pQVar17);
            pQVar17 = pQVar17 + -8;
            lVar18 = lVar18 + 8;
          } while (lVar18 != 0);
        }
        QListData::dispose(local_b0);
      }
      else {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_10071df77;
      }
      bVar1 = true;
      if (local_90 != 0) goto LAB_10071dfca;
    }
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10071e35a;
      }
      iVar4 = *(int *)(local_a8 + 0xc);
      if (iVar4 != *(int *)(local_a8 + 8)) {
        lVar18 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar4 * -8;
        pQVar17 = (QKeySequence *)(local_a8 + (long)iVar4 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar17);
          pQVar17 = pQVar17 + -8;
          lVar18 = lVar18 + 8;
        } while (lVar18 != 0);
      }
      QListData::dispose(local_a8);
    }
LAB_10071e35a:
    if (!bVar1) goto LAB_10071e370;
  }
  FUN_1001c26c0(param_1 + 0x40);
LAB_10071e370:
  if (*(int *)local_88[0] != -1) {
    if (*(int *)local_88[0] != 0) {
      LOCK();
      *(int *)local_88[0] = *(int *)local_88[0] + -1;
      UNLOCK();
      if (*(int *)local_88[0] != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar4 = *(int *)(local_88[0] + 0xc);
    if (iVar4 != *(int *)(local_88[0] + 8)) {
      lVar18 = (long)*(int *)(local_88[0] + 8) * 8 + (long)iVar4 * -8;
      pQVar17 = (QKeySequence *)(local_88[0] + (long)iVar4 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar17);
        pQVar17 = pQVar17 + -8;
        lVar18 = lVar18 + 8;
      } while (lVar18 != 0);
    }
    QListData::dispose(local_88[0]);
  }
  return;
}

