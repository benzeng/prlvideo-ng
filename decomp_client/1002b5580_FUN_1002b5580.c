
void FUN_1002b5580(long *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  QArrayData *pQVar4;
  long lVar5;
  undefined1 local_1d0 [104];
  QArrayData *local_168;
  undefined4 local_160;
  undefined1 local_158 [104];
  QArrayData *local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [104];
  QArrayData *local_78;
  undefined4 local_70;
  QArrayData *local_68;
  undefined4 local_60;
  QArrayData *local_58;
  undefined4 local_50;
  QArrayData *local_48;
  QString local_40 [2];
  undefined1 local_29;
  
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206250);
  FUN_100094da0(param_1 + 6);
  if (param_2 == -0x7fffffec) {
    local_58 = *(QArrayData **)(lVar3 + 0x80);
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
    }
    local_50 = *(undefined4 *)(lVar3 + 0x88);
    QSettings::QSettings((QSettings *)local_40,(QObject *)0x0);
    local_48 = (QArrayData *)QString::fromAscii_helper("Guest OS Sources",0x10);
    QSettings::beginGroup(local_40);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002b564d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1002b564d:
    QSettings::remove(local_40);
    QSettings::endGroup();
    QSettings::~QSettings((QSettings *)local_40);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002b569c;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1002b569c:
    local_68 = *(QArrayData **)(lVar3 + 0x80);
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
    }
    local_60 = *(undefined4 *)(lVar3 + 0x88);
    FUN_100821790(param_1,&local_68);
    if (*(int *)local_68 == -1) goto LAB_1002b58b4;
    pQVar4 = local_68;
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      iVar1 = *(int *)local_68;
      UNLOCK();
joined_r0x0001002b589c:
      local_29 = iVar1 != 0;
      if ((bool)local_29) goto LAB_1002b58b4;
    }
  }
  else {
    local_78 = *(QArrayData **)(lVar3 + 0x80);
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
    }
    local_70 = *(undefined4 *)(lVar3 + 0x88);
    lVar5 = lVar3 + 0x18;
    FUN_100260700(local_e0,lVar5);
    FUN_1002b5b50(param_1 + 3,&local_78,local_e0);
    FUN_10005e410(local_e0);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002b578d;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1002b578d:
    local_f0 = *(QArrayData **)(lVar3 + 0x80);
    if (1 < *(int *)local_f0 + 1U) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + 1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
    }
    local_e8 = *(undefined4 *)(lVar3 + 0x88);
    FUN_100260700(local_158,lVar5);
    FUN_100821740(param_1,&local_f0,local_158);
    FUN_10005e410(local_158);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_29 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002b5822;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1002b5822:
    local_168 = *(QArrayData **)(lVar3 + 0x80);
    if (1 < *(int *)local_168 + 1U) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + 1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
    }
    local_160 = *(undefined4 *)(lVar3 + 0x88);
    FUN_100260700(local_1d0,lVar5);
    FUN_1002b1ac0(&local_168,local_1d0);
    FUN_10005e410(local_1d0);
    if (*(int *)local_168 == -1) goto LAB_1002b58b4;
    pQVar4 = local_168;
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      iVar1 = *(int *)local_168;
      UNLOCK();
      goto joined_r0x0001002b589c;
    }
  }
  QArrayData::deallocate(pQVar4,2,8);
LAB_1002b58b4:
  cVar2 = FUN_1002b5450(param_1);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

