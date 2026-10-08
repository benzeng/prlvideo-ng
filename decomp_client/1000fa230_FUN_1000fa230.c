
void FUN_1000fa230(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined4 param_5,uint param_6,int *param_7)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  Connection local_e8 [8];
  QKeySequence local_e0 [8];
  QArrayData *local_d8;
  QIcon local_d0 [8];
  QKeySequence local_c8 [8];
  QArrayData *local_c0;
  int local_b4;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  int local_80;
  Connection local_78 [8];
  QKeySequence local_70 [8];
  QArrayData *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  int local_4c;
  QVariant local_48;
  undefined1 local_31;
  
  QObject::property((char *)&local_48);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_48);
  if (cVar1 != '\0') {
    return;
  }
  lVar5 = QAction::menu();
  if (lVar5 == 0) {
    iVar3 = QAction::menuRole();
    if (2 < iVar3) {
      return;
    }
    local_b0 = 0x100000010;
    local_a8 = *param_4;
    *param_4 = local_a8 + 1;
    cVar1 = QAction::isSeparator();
    if ((*param_7 != 0) && (cVar1 == '\x01')) {
      *param_7 = 2;
      return;
    }
    iVar3 = FUN_1006947d0(param_2);
    if (iVar3 == 0) {
      return;
    }
    if (iVar3 == 0x7a) {
      return;
    }
    iVar4 = *param_4;
    local_b4 = iVar3;
    piVar6 = (int *)FUN_1000fdff0(&DAT_102312080,&local_b4);
    *piVar6 = iVar4 + -1;
    cVar1 = QAction::isVisible();
    if (cVar1 == '\0') goto LAB_1000fa5c2;
    iVar4 = QAction::menuRole();
    uVar9 = 0x900;
    if (iVar4 != 2) {
      uVar9 = param_6 & 0xfffffdff;
      if (iVar3 != 0x3e) {
        uVar9 = param_6;
      }
      if (*param_7 == 2) {
        local_a8 = 0;
        local_a4 = 0x10;
        local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
        QKeySequence::QKeySequence(local_c8);
        FUN_1000f9b40(param_3,&local_c0,&local_b0,1,uVar9 | 2,param_5,0,local_c8);
        QKeySequence::~QKeySequence(local_c8);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000fa4a2;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_1000fa4a2:
        local_a8 = *param_4 + -1;
      }
      *param_7 = 1;
    }
    local_a4 = iVar3;
    cVar1 = QAction::isChecked();
    uVar8 = uVar9 | 0x20;
    if (cVar1 == '\0') {
      uVar8 = uVar9;
    }
    cVar1 = QAction::isVisible();
    uVar9 = uVar8 | 0x400;
    if (cVar1 == '\0') {
      uVar9 = uVar8;
    }
    QAction::icon();
    QAction::text();
    uVar2 = QAction::isEnabled();
    QAction::shortcut();
    FUN_1000f9b40(param_3,&local_d8,&local_b0,uVar2,uVar9,param_5,local_d0,local_e0);
    QKeySequence::~QKeySequence(local_e0);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000fa5b6;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1000fa5b6:
    QIcon::~QIcon(local_d0);
LAB_1000fa5c2:
    cVar1 = QAction::isVisible();
    if (cVar1 == '\0') {
      if (4 < iVar3 - 0x44U) {
        return;
      }
      if (iVar3 - 0x44U == 3) {
        return;
      }
    }
    QObject::connect(local_e8,param_2,"2changed()",param_1,"1onClientMenuActionChanged()",0x80);
    QMetaObject::Connection::~Connection(local_e8);
    return;
  }
  iVar3 = FUN_1006947d0(param_2);
  local_4c = iVar3;
  iVar4 = QAction::menuRole();
  if (iVar4 != 1) {
    return;
  }
  cVar1 = QAction::isVisible();
  if ((cVar1 == '\0') && (iVar3 != 0xc)) {
    return;
  }
  local_60 = 0x100000010;
  if (iVar3 == 0xd) {
    local_58 = 0x1f00;
  }
  else if (iVar3 == 0xc) {
    local_58 = 0x3100;
  }
  else if (iVar3 == 10) {
    local_58 = 0x2000;
  }
  else {
    local_58 = *param_4;
  }
  iVar4 = local_58;
  piVar6 = (int *)FUN_1000fded0(param_1 + 0x38,&local_4c);
  *piVar6 = iVar4;
  local_54 = 0;
  cVar1 = QAction::isVisible();
  uVar9 = 0x110;
  if (cVar1 != '\0') {
    uVar9 = 0x510;
  }
  QAction::text();
  uVar2 = QAction::isEnabled();
  QKeySequence::QKeySequence(local_70);
  FUN_1000f9b40(param_3,&local_68,&local_60,uVar2,uVar9 | param_6,param_5,0,local_70);
  QKeySequence::~QKeySequence(local_70);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fa72e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000fa72e:
  if (iVar3 == 0xc) {
    QObject::connect(local_78,param_2,"2changed()",param_1,"1onClientMenuActionChanged()",0x80);
    QMetaObject::Connection::~Connection(local_78);
LAB_1000fa785:
    FUN_1000faad0(param_1,iVar3,iVar4,param_3);
    return;
  }
  if ((iVar3 == 10) || (iVar3 == 0xd)) goto LAB_1000fa785;
  iVar3 = *param_4;
  *param_4 = iVar3 + 1;
  *param_7 = 0;
  QAction::menu();
  QWidget::actions();
  local_98 = local_a0;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 == 0) {
      QListData::detach((int)&local_98);
      lVar5 = (long)*(int *)(local_98 + 8);
      if ((local_a0 + (long)*(int *)(local_a0 + 8) * 8 != local_98 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_98 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_98 + 0xc))
         ) {
        _memcpy(local_98 + lVar5 * 8 + 0x10,local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  local_80 = 1;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 == 0) {
LAB_1000fa8a8:
      QListData::dispose(local_a0);
    }
    else {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1000fa8a8;
    }
    if (local_80 == 0) goto LAB_1000fa90a;
  }
  if (local_90 != local_88) {
    do {
      FUN_1000fa230(param_1,*(undefined8 *)local_90,param_3,param_4,iVar3,param_6 & 0x200 | 0x100,
                    param_7);
      local_90 = local_90 + 8;
      local_80 = 1;
    } while (local_90 != local_88);
  }
LAB_1000fa90a:
  if (*(int *)local_98 == -1) {
    return;
  }
  if (*(int *)local_98 != 0) {
    LOCK();
    *(int *)local_98 = *(int *)local_98 + -1;
    UNLOCK();
    if (*(int *)local_98 != 0) {
      return;
    }
    local_31 = 0;
  }
  QListData::dispose(local_98);
  return;
}

