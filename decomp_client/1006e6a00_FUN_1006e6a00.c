
QMenu * FUN_1006e6a00(undefined8 param_1,undefined8 param_2,QWidget *param_3)

{
  Data *pDVar1;
  int iVar2;
  long lVar3;
  QMenu *this;
  QMenu *this_00;
  QMenu *pQVar4;
  long lVar5;
  long lVar6;
  Data *pDVar7;
  QString local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  Data *local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  Data *local_d0;
  QString local_c8;
  QVariant local_c0;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  int local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_44 = 0x15;
  FUN_100071ff0(&local_40,&local_44);
  local_48 = 0x10;
  FUN_100071ff0(&local_40,&local_48);
  local_4c = 99;
  FUN_100071ff0(&local_40,&local_4c);
  local_50 = 0x10;
  FUN_100071ff0(&local_40,&local_50);
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar3 != 0) {
    local_54 = 0x2f;
    FUN_100071ff0(&local_40,&local_54);
    local_58 = 0x30;
    FUN_100071ff0(&local_40,&local_58);
    local_5c = 0x31;
    FUN_100071ff0(&local_40,&local_5c);
    local_60 = 0x3e;
    FUN_100071ff0(&local_40,&local_60);
    local_64 = 5;
    FUN_100071ff0(&local_40,&local_64);
    local_68 = 10;
    FUN_100071ff0(&local_40,&local_68);
    local_6c = 0x10;
    FUN_100071ff0(&local_40,&local_6c);
  }
  local_70 = 0xd;
  FUN_100071ff0(&local_40,&local_70);
  local_74 = 0xf;
  FUN_100071ff0(&local_40,&local_74);
  local_78 = 0x10;
  FUN_100071ff0(&local_40,&local_78);
  local_7c = 0x13;
  FUN_100071ff0(&local_40,&local_7c);
  local_80 = 0x10;
  FUN_100071ff0(&local_40,&local_80);
  local_84 = 0x14;
  FUN_100071ff0(&local_40,&local_84);
  this = operator_new(0x30);
  QMenu::QMenu(this,param_3);
  FUN_1006e54d0(param_1,this,&local_40,param_2,1,1);
  QWidget::actions();
  local_a8 = local_b0;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 == 0) {
      QListData::detach((int)&local_a8);
      lVar5 = (long)*(int *)(local_a8 + 8);
      if ((local_b0 + (long)*(int *)(local_b0 + 8) * 8 != local_a8 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_a8 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_a8 + 0xc))
         ) {
        _memcpy(local_a8 + lVar5 * 8 + 0x10,local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + 1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
  local_98 = local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10;
  local_90 = 1;
  if (*(int *)local_b0 == -1) {
LAB_1006e6d00:
    if (local_a0 != local_98) {
      do {
        if (lVar3 != 0) {
          pQVar4 = *(QMenu **)local_a0;
          QObject::property((char *)&local_c0);
          iVar2 = QVariant::toInt((bool *)&local_c0);
          QVariant::~QVariant(&local_c0);
          if (iVar2 == 5) {
            this_00 = operator_new(0x30);
            QMetaObject::tr((char *)&local_c8,PTR_staticMetaObject_1021e1520,0x1df5b8d);
            QMenu::QMenu(this_00,&local_c8,(QWidget *)this);
            if (*(int *)local_c8.field0_0x0 != -1) {
              if (*(int *)local_c8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
                local_31 = *(int *)local_c8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006e6dea;
              }
              QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
            }
LAB_1006e6dea:
            local_d0 = (Data *)PTR_shared_null_1021e15e8;
            local_d4 = 0x37;
            FUN_100071ff0(&local_d0,&local_d4);
            local_d8 = 0x38;
            FUN_100071ff0(&local_d0,&local_d8);
            local_dc = 0x39;
            FUN_100071ff0(&local_d0,&local_dc);
            FUN_1006e54d0(param_1,this_00,&local_d0,param_2,1,1);
            pDVar1 = local_d0;
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006e6ef6;
              }
              iVar2 = *(int *)(local_d0 + 0xc);
              if (iVar2 != *(int *)(local_d0 + 8)) {
                lVar5 = (long)*(int *)(local_d0 + 8) * 8 + (long)iVar2 * -8;
                pDVar7 = local_d0 + (long)iVar2 * 8 + 8;
                do {
                  if (*(void **)pDVar7 != (void *)0x0) {
                    operator_delete(*(void **)pDVar7);
                  }
                  pDVar7 = pDVar7 + -8;
                  lVar5 = lVar5 + 8;
                } while (lVar5 != 0);
              }
              QListData::dispose(pDVar1);
            }
LAB_1006e6ef6:
            QMenu::insertMenu((QAction *)this,pQVar4);
            local_e8 = (Data *)PTR_shared_null_1021e15e8;
            local_ec = 0x32;
            FUN_100071ff0(&local_e8,&local_ec);
            local_f0 = 0x33;
            FUN_100071ff0(&local_e8,&local_f0);
            local_f4 = 0x34;
            FUN_100071ff0(&local_e8,&local_f4);
            local_f8 = 0x35;
            FUN_100071ff0(&local_e8,&local_f8);
            local_fc = 0x36;
            FUN_100071ff0(&local_e8,&local_fc);
            local_100 = 0x10;
            FUN_100071ff0(&local_e8,&local_100);
            local_104 = 0x1e;
            FUN_100071ff0(&local_e8,&local_104);
            local_108 = 0x1f;
            FUN_100071ff0(&local_e8,&local_108);
            local_10c = 0x20;
            FUN_100071ff0(&local_e8,&local_10c);
            local_110 = 0x22;
            FUN_100071ff0(&local_e8,&local_110);
            local_114 = 0x10;
            FUN_100071ff0(&local_e8,&local_114);
            local_118 = 0x3a;
            FUN_100071ff0(&local_e8,&local_118);
            local_11c = 0x3b;
            FUN_100071ff0(&local_e8,&local_11c);
            local_120 = 0x5e;
            FUN_100071ff0(&local_e8,&local_120);
            local_124 = 0x10;
            FUN_100071ff0(&local_e8,&local_124);
            local_128 = 0x1d;
            FUN_100071ff0(&local_e8,&local_128);
            pQVar4 = operator_new(0x30);
            QMetaObject::tr((char *)&local_130,PTR_staticMetaObject_1021e1520,0x1e1140e);
            QMenu::QMenu(pQVar4,&local_130,(QWidget *)this);
            if (*(int *)local_130.field0_0x0 != -1) {
              if (*(int *)local_130.field0_0x0 != 0) {
                LOCK();
                *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
                local_31 = *(int *)local_130.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006e713b;
              }
              QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
            }
LAB_1006e713b:
            FUN_1006e54d0(param_1,pQVar4,&local_e8,param_2,1,1);
            pQVar4 = (QMenu *)QMenu::menuAction();
            QMenu::insertMenu((QAction *)this,pQVar4);
            pDVar1 = local_e8;
            if (*(int *)local_e8 != -1) {
              if (*(int *)local_e8 != 0) {
                LOCK();
                *(int *)local_e8 = *(int *)local_e8 + -1;
                local_31 = *(int *)local_e8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006e71e0;
              }
              iVar2 = *(int *)(local_e8 + 0xc);
              if (iVar2 != *(int *)(local_e8 + 8)) {
                lVar5 = (long)*(int *)(local_e8 + 8) * 8 + (long)iVar2 * -8;
                pDVar7 = local_e8 + (long)iVar2 * 8 + 8;
                do {
                  if (*(void **)pDVar7 != (void *)0x0) {
                    operator_delete(*(void **)pDVar7);
                  }
                  pDVar7 = pDVar7 + -8;
                  lVar5 = lVar5 + 8;
                } while (lVar5 != 0);
              }
              QListData::dispose(pDVar1);
            }
          }
        }
LAB_1006e71e0:
        local_a0 = local_a0 + 8;
        local_90 = 1;
      } while (local_a0 != local_98);
    }
  }
  else {
    if (*(int *)local_b0 == 0) {
LAB_1006e6ce0:
      QListData::dispose(local_b0);
    }
    else {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1006e6ce0;
    }
    if (local_90 != 0) goto LAB_1006e6d00;
  }
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e7243;
    }
    QListData::dispose(local_a8);
  }
LAB_1006e7243:
  pDVar1 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return this;
      }
      local_31 = 0;
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != *(int *)(local_40 + 8)) {
      lVar3 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar2 * -8;
      pDVar7 = local_40 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar1);
  }
  return this;
}

