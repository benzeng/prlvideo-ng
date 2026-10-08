
void FUN_1004da460(long *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  uint local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  lVar8 = (**(code **)(*param_1 + 0x228))();
  if (lVar8 != 0) {
    bVar3 = (bool)(**(code **)(*param_1 + 0x228))(param_1);
    QObject::blockSignals(bVar3);
  }
  FUN_1004dac60(&local_40,param_1);
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar8 = (long)*(int *)(local_60 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_60 + lVar8 * 8) &&
         (lVar10 = *(int *)(local_60 + 0xc) - lVar8,
         lVar10 != 0 && lVar8 <= *(int *)(local_60 + 0xc))) {
        _memcpy(local_60 + lVar8 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      lVar8 = *(long *)local_58;
      if ((lVar8 != 0) &&
         (cVar4 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined4 *)(lVar8 + 0x3c)),
         cVar4 != '\0')) {
        uVar9 = FUN_1003b0ad0(param_1[8]);
        lVar10 = FUN_1003e5be0(uVar9,*(undefined4 *)(lVar8 + 0x3c),*(undefined4 *)(lVar8 + 0x40));
        if (lVar10 == 0) {
          FUN_1004dad50(param_1,*(undefined4 *)(lVar8 + 0x3c),*(undefined4 *)(lVar8 + 0x40));
        }
      }
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004da5cf;
    }
    QListData::dispose(local_60);
  }
LAB_1004da5cf:
  uVar9 = FUN_1003b0ad0(param_1[8]);
  FUN_1003e5bc0(&local_88,uVar9);
  FUN_1003e71c0(&local_80,&local_88);
  local_78 = local_80 + (long)local_80[2] * 2 + 4;
  local_70 = local_80 + (long)local_80[3] * 2 + 4;
  local_68 = 1;
  if (*local_88 == -1) {
LAB_1004da660:
    do {
      if (local_78 == local_70) break;
      piVar1 = (int *)**(undefined8 **)local_78;
      lVar8 = (*(undefined8 **)local_78)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_31 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_68 != 0) {
        if (((piVar1 != (int *)0x0) && (lVar8 != 0)) && (piVar1[1] != 0)) {
          pcVar2 = *(code **)(*param_1 + 0x1b8);
          uVar5 = FUN_1003a4d50(lVar8);
          cVar4 = (*pcVar2)(param_1,uVar5);
          if (cVar4 != '\0') {
            lVar10 = 0;
            if (piVar1[1] != 0) {
              lVar10 = lVar8;
            }
            uVar5 = FUN_1003a4d50(lVar10);
            lVar10 = 0;
            if (piVar1[1] != 0) {
              lVar10 = lVar8;
            }
            uVar6 = FUN_1003a4db0(lVar10);
            lVar10 = FUN_1004dae30(param_1,uVar5,uVar6);
            if (lVar10 == 0) {
              lVar10 = 0;
              if (piVar1[1] != 0) {
                lVar10 = lVar8;
              }
              uVar5 = FUN_1003a4d50(lVar10);
              lVar10 = 0;
              if (piVar1[1] != 0) {
                lVar10 = lVar8;
              }
              uVar6 = FUN_1003a4db0(lVar10);
              FUN_1004dafd0(param_1,uVar5,uVar6);
            }
          }
        }
        local_68 = 0;
      }
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar1);
        }
      }
      local_78 = local_78 + 2;
      uVar7 = local_68 ^ 1;
      bVar3 = local_68 != 1;
      local_68 = uVar7;
    } while (bVar3);
  }
  else {
    if (*local_88 == 0) {
LAB_1004da63c:
      FUN_1003e63d0(&local_88,local_88);
    }
    else {
      LOCK();
      *local_88 = *local_88 + -1;
      local_31 = *local_88 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1004da63c;
    }
    if (local_68 != 0) goto LAB_1004da660;
  }
  if (*local_80 != -1) {
    if (*local_80 != 0) {
      LOCK();
      *local_80 = *local_80 + -1;
      local_31 = *local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004da7ac;
    }
    FUN_1003e63d0(&local_80,local_80);
  }
LAB_1004da7ac:
  lVar8 = (**(code **)(*param_1 + 0x228))(param_1);
  if (lVar8 != 0) {
    bVar3 = (bool)(**(code **)(*param_1 + 0x228))(param_1);
    QObject::blockSignals(bVar3);
    (**(code **)(*param_1 + 0x228))(param_1);
    uVar5 = QListWidget::currentRow();
    FUN_1004da970(param_1,uVar5);
    uVar9 = (**(code **)(*param_1 + 0x228))(param_1);
    QWidget::setFocus(uVar9,7);
    (**(code **)(*param_1 + 0x228))(param_1);
    QWidget::hide();
    (**(code **)(*param_1 + 0x228))(param_1);
    QWidget::show();
  }
  FUN_1004db730(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return;
}

