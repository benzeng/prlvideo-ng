
undefined8 FUN_10006b0d0(long param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar9;
  bool bVar10;
  undefined8 local_88;
  int local_7c;
  QEvent local_78 [24];
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return param_2;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return param_2;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return param_2;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_10006b440(&local_60,*(long *)(lVar1 + 0x18) + 0x40);
  FUN_10006b440(&local_58,&local_60);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  local_88 = extraout_RDX;
  if (*local_60 == -1) {
LAB_10006b1a0:
    do {
      if (local_50 == local_48) {
        local_7c = 2;
        iVar9 = local_7c;
        break;
      }
      local_7c = 2;
      piVar2 = (int *)**(undefined8 **)local_50;
      lVar3 = (*(undefined8 **)local_50)[1];
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_31 = *piVar2 != 0;
        UNLOCK();
      }
      iVar9 = 5;
      if (local_40 != 0) {
        if (((piVar2 != (int *)0x0) && (lVar3 != 0)) && (piVar2[1] != 0)) {
          lVar6 = QWidget::winId();
          uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_trackingArea_1022692a0);
          lVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_owner_1022697b0);
          if (lVar6 == lVar8) {
            lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_type_102269648);
            QEvent::QEvent(local_78,lVar6 != 8 | 10);
            lVar6 = 0;
            if (piVar2[1] != 0) {
              lVar6 = lVar3;
            }
            cVar4 = FUN_100365640(*(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x30),lVar6,local_78);
            local_88 = param_2;
            if (cVar4 != '\0') {
              local_88 = 0;
            }
            iVar9 = 1;
            QEvent::~QEvent(local_78);
            goto LAB_10006b227;
          }
        }
        local_40 = 0;
      }
LAB_10006b227:
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_31 = *piVar2 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar2);
        }
      }
      if (iVar9 != 5) break;
      local_50 = local_50 + 2;
      uVar5 = local_40 ^ 1;
      bVar10 = local_40 != 1;
      iVar9 = local_7c;
      local_40 = uVar5;
    } while (bVar10);
  }
  else {
    if (*local_60 == 0) {
LAB_10006b17c:
      FUN_10006b5d0(&local_60,local_60);
      local_88 = extraout_RDX_00;
    }
    else {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10006b17c;
    }
    if (local_40 != 0) goto LAB_10006b1a0;
    local_7c = 2;
    local_88 = 0;
    iVar9 = local_7c;
  }
  local_7c = iVar9;
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) goto LAB_10006b32e;
      local_31 = 0;
    }
    FUN_10006b5d0(&local_58,local_58);
  }
LAB_10006b32e:
  if (local_7c == 2) {
    local_88 = param_2;
  }
  return local_88;
}

