
void FUN_10025d6e0(long param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  QWidget *pQVar13;
  bool bVar14;
  QArrayData *local_78;
  int *local_70;
  undefined8 local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  uint local_40;
  undefined1 local_31;
  
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_100df99c0("","prl_client_app",0,"New Vm assistans content loaded. Content window: %p",uVar9);
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  QWidget::show();
  uVar9 = FUN_100152280();
  FUN_100154b10(&local_60,uVar9);
  local_58 = local_60;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_58);
      lVar11 = (long)*(int *)(local_58 + 8);
      if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar11 * 8) &&
         (lVar12 = *(int *)(local_58 + 0xc) - lVar11,
         lVar12 != 0 && lVar11 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar11 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                lVar12 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  uVar3 = DAT_100e152b8;
  if (*(int *)local_60 == -1) {
LAB_10025d840:
    do {
      if (local_50 == local_48) break;
      if (local_40 == 0) goto LAB_10025d9a7;
      lVar11 = *(long *)local_50;
      if ((lVar11 == 0) || (cVar4 = FUN_100356c70(lVar11,0), cVar4 == '\0')) {
LAB_10025d9a0:
        local_40 = 0;
      }
      else {
        plVar10 = (long *)CHostDesktopWorkspacesController::instance();
        pcVar1 = *(code **)(*plVar10 + 0x70);
        uVar9 = FUN_100370280();
        FUN_100370d00(&local_70,uVar9,lVar11,uVar3);
        uVar9 = 0;
        if ((local_70 != (int *)0x0) && (uVar9 = 0, local_70[1] != 0)) {
          uVar9 = local_68;
        }
        iVar5 = (*pcVar1)(plVar10,uVar9);
        iVar6 = (**(code **)(*plVar10 + 0x70))(plVar10);
        if (local_70 != (int *)0x0) {
          LOCK();
          *local_70 = *local_70 + -1;
          local_31 = *local_70 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (local_70 != (int *)0x0)) {
            operator_delete(local_70);
          }
        }
        if (iVar5 != iVar6) goto LAB_10025d9a0;
        pcVar1 = *(code **)(*plVar10 + 0x88);
        uVar9 = 0;
        if ((*(long *)(param_1 + 0x38) != 0) &&
           (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
          uVar9 = *(undefined8 *)(param_1 + 0x40);
        }
        pcVar2 = *(code **)(*plVar10 + 0xb8);
        local_78 = (QArrayData *)QString::fromAscii_helper("",0);
        uVar7 = (*pcVar2)(plVar10,&local_78);
        (*pcVar1)(plVar10,uVar9,uVar7);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10025d9a7;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
LAB_10025d9a7:
      local_50 = local_50 + 8;
      uVar8 = local_40 ^ 1;
      bVar14 = local_40 != 1;
      local_40 = uVar8;
    } while (bVar14);
  }
  else {
    if (*(int *)local_60 == 0) {
LAB_10025d812:
      QListData::dispose(local_60);
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10025d812;
    }
    uVar3 = DAT_100e152b8;
    if (local_40 != 0) goto LAB_10025d840;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025d9ed;
    }
    QListData::dispose(local_58);
  }
LAB_10025d9ed:
  QWidget::raise();
  QWidget::activateWindow();
  pQVar13 = (QWidget *)0x0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar13 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar13 = *(QWidget **)(param_1 + 0x40);
  }
  WidgetUtils::cascadeWindow(pQVar13);
  return;
}

