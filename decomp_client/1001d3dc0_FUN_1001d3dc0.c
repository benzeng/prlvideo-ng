
void FUN_1001d3dc0(long param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  uVar3 = FUN_1001d4340();
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((uVar3 == uVar1) && (param_2 != '\x01')) {
    return;
  }
  uVar9 = uVar3 & 2;
  if (uVar9 != 0) {
    QApplication::topLevelWidgets();
    local_58 = local_60;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_58);
        lVar6 = (long)*(int *)(local_58 + 8);
        if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar6 * 8) &&
           (lVar7 = *(int *)(local_58 + 0xc) - lVar6,
           lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar6 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                  lVar7 * 8);
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
    if (*(int *)local_60 == -1) {
LAB_1001d3ec0:
      if (local_50 != local_48) {
        do {
          lVar6 = (**(code **)(**(long **)local_50 + 8))(*(long **)local_50,"CSplashScreen");
          if (lVar6 != 0) {
            QWidget::hide();
          }
          local_50 = local_50 + 8;
          local_40 = 1;
        } while (local_50 != local_48);
      }
    }
    else {
      if (*(int *)local_60 == 0) {
LAB_1001d3eb5:
        QListData::dispose(local_60);
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1001d3eb5;
      }
      if (local_40 != 0) goto LAB_1001d3ec0;
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001d3f41;
      }
      QListData::dispose(local_58);
    }
  }
LAB_1001d3f41:
  uVar3 = uVar3 & 1;
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"Current UI mode: hideApplication=%d, showTrayIcon=%d",
                  uVar9 >> 1,uVar3);
  }
  if ((param_2 == '\0') &&
     (uVar8 = *(uint *)(param_1 + 0x18), (uint)(uVar9 != 0) == (uVar8 & 2) >> 1)) {
LAB_1001d3fff:
    if ((uint)(uVar3 != 0) == (uVar8 & 1)) goto LAB_1001d4063;
  }
  else {
    uVar4 = FUN_1001d50a0();
    cVar2 = FUN_1001d5140(uVar4,0);
    if (cVar2 == '\0') {
      FUN_100df99c0("","prl_client_app",0,"Set application visibility to %d",uVar9 == 0);
      cVar2 = MacUtils::setApplicationVisibility(uVar9 == 0);
      if (cVar2 != '\0') goto LAB_1001d3fe2;
    }
    else {
LAB_1001d3fe2:
      if (uVar9 == 0) {
        uVar9 = *(uint *)(param_1 + 0x18) & 0xfffffffd;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x18) | 2;
      }
      *(uint *)(param_1 + 0x18) = uVar9;
    }
    if (param_2 == '\0') {
      uVar8 = *(uint *)(param_1 + 0x18);
      goto LAB_1001d3fff;
    }
  }
  if (DAT_1023109b8 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_100759600(pvVar5);
    DAT_102271308 = 1;
    DAT_1023109b8 = pvVar5;
  }
  cVar2 = FUN_1007596a0(DAT_1023109b8,uVar3);
  uVar8 = *(uint *)(param_1 + 0x18);
  if (cVar2 != '\0') {
    if (uVar3 == 0) {
      uVar8 = uVar8 & 0xfffffffe;
    }
    else {
      uVar8 = uVar8 | 1;
    }
    *(uint *)(param_1 + 0x18) = uVar8;
  }
LAB_1001d4063:
  if (uVar8 != uVar1) {
    FUN_100809e70(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}

