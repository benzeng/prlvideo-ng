
void FUN_1000fbfb0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  QKeySequence local_b0 [8];
  QArrayData *local_a8;
  QIcon local_a0 [8];
  QKeySequence local_98 [8];
  QArrayData *local_90;
  QKeySequence local_88 [8];
  QArrayData *local_80;
  uint local_74;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  undefined1 local_31;
  
  local_48 = 0x100000010;
  QWidget::actions();
  local_68 = local_70;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_68);
      lVar12 = (long)*(int *)(local_68 + 8);
      if ((local_70 + (long)*(int *)(local_70 + 8) * 8 != local_68 + lVar12 * 8) &&
         (lVar13 = *(int *)(local_68 + 0xc) - lVar12,
         lVar13 != 0 && lVar12 <= *(int *)(local_68 + 0xc))) {
        _memcpy(local_68 + lVar12 * 8 + 0x10,local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10,
                lVar13 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  local_50 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
LAB_1000fc09a:
      QListData::dispose(local_70);
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1000fc09a;
    }
    if (local_50 == 0) goto LAB_1000fc500;
  }
  if (local_60 != local_58) {
    iVar14 = 0;
    do {
      uVar10 = *(undefined8 *)local_60;
      bVar4 = QAction::isSeparator();
      iVar3 = 2;
      if ((((bVar4 & iVar14 != 0) == 0) &&
          (uVar7 = FUN_1006947d0(uVar10), iVar3 = iVar14, local_74 = uVar7, uVar7 != 0)) &&
         (cVar5 = QAction::isVisible(), cVar5 != '\0')) {
        lVar12 = QAction::menu();
        if (lVar12 == 0) {
          if (*(uint *)(DAT_102312080 + 4) != 0) {
            uVar11 = *(uint *)((long)DAT_102312080 + 0x24) ^ uVar7;
            for (puVar2 = *(undefined8 **)
                           (DAT_102312080[1] +
                           ((ulong)uVar11 % (ulong)*(uint *)(DAT_102312080 + 4)) * 8);
                puVar2 != DAT_102312080; puVar2 = (undefined8 *)*puVar2) {
              if ((*(uint *)(puVar2 + 1) == uVar11) && (uVar7 == *(uint *)((long)puVar2 + 0xc))) {
                if (puVar2 != DAT_102312080) {
                  uVar11 = param_5;
                  if (uVar7 == 0x3e) {
                    uVar11 = param_5 & 0xfffffdff;
                  }
                  if (iVar14 == 2) {
                    local_3c = 0x10;
                    local_40 = 0;
                    local_90 = (QArrayData *)PTR_shared_null_1021e1288;
                    QKeySequence::QKeySequence(local_98);
                    FUN_1000f9b40(param_3,&local_90,&local_48,1,uVar11 | 0x402,param_4,0,local_98);
                    QKeySequence::~QKeySequence(local_98);
                    if (*(int *)local_90 != -1) {
                      if (*(int *)local_90 != 0) {
                        LOCK();
                        *(int *)local_90 = *(int *)local_90 + -1;
                        local_31 = *(int *)local_90 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000fc3e8;
                      }
                      QArrayData::deallocate(local_90,2,8);
                    }
                  }
LAB_1000fc3e8:
                  puVar9 = (undefined4 *)FUN_1000fdff0(&DAT_102312080,&local_74);
                  local_40 = *puVar9;
                  local_3c = uVar7;
                  cVar5 = QAction::isChecked();
                  uVar7 = uVar11 | 0x420;
                  if (cVar5 == '\0') {
                    uVar7 = uVar11 | 0x400;
                  }
                  QAction::icon();
                  QAction::text();
                  uVar6 = QAction::isEnabled();
                  QAction::shortcut();
                  FUN_1000f9b40(param_3,&local_a8,&local_48,uVar6,uVar7,param_4,local_a0,local_b0);
                  QKeySequence::~QKeySequence(local_b0);
                  if (*(int *)local_a8 != -1) {
                    if (*(int *)local_a8 != 0) {
                      LOCK();
                      *(int *)local_a8 = *(int *)local_a8 + -1;
                      local_31 = *(int *)local_a8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000fc4c6;
                    }
                    QArrayData::deallocate(local_a8,2,8);
                  }
LAB_1000fc4c6:
                  QIcon::~QIcon(local_a0);
                  iVar3 = 1;
                }
                break;
              }
            }
          }
        }
        else {
          iVar14 = QAction::menuRole();
          if (iVar14 == 1) {
            lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
            lVar13 = 0;
            if (lVar12 != 0) {
              do {
                while (lVar8 = lVar12, iVar14 = *(int *)(lVar8 + 0x18), (int)uVar7 <= iVar14) {
                  lVar12 = *(long *)(lVar8 + 8);
                  lVar13 = lVar8;
                  if (*(long *)(lVar8 + 8) == 0) goto LAB_1000fc20f;
                }
                lVar12 = *(long *)(lVar8 + 0x10);
              } while (*(long *)(lVar8 + 0x10) != 0);
              if (lVar13 != 0) {
                iVar14 = *(int *)(lVar13 + 0x18);
LAB_1000fc20f:
                if (iVar14 <= (int)uVar7) {
                  puVar9 = (undefined4 *)FUN_1000fded0((long *)(param_1 + 0x38),&local_74);
                  uVar1 = *puVar9;
                  local_3c = 0;
                  local_40 = uVar1;
                  QAction::text();
                  uVar6 = QAction::isEnabled();
                  QKeySequence::QKeySequence(local_88);
                  FUN_1000f9b40(param_3,&local_80,&local_48,uVar6,param_5 | 0x10,param_4,0,local_88)
                  ;
                  QKeySequence::~QKeySequence(local_88);
                  if (*(int *)local_80 != -1) {
                    if (*(int *)local_80 != 0) {
                      LOCK();
                      *(int *)local_80 = *(int *)local_80 + -1;
                      local_31 = *(int *)local_80 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000fc2f1;
                    }
                    QArrayData::deallocate(local_80,2,8);
                  }
LAB_1000fc2f1:
                  uVar10 = QAction::menu();
                  FUN_1000fbfb0(param_1,uVar10,param_3,uVar1,param_5);
                }
              }
            }
          }
        }
      }
      iVar14 = iVar3;
      local_60 = local_60 + 8;
      local_50 = 1;
    } while (local_60 != local_58);
  }
LAB_1000fc500:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_68);
  }
  return;
}

