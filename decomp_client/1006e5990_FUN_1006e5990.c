
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_1006e5990(undefined8 param_1,QMenu *param_2,undefined8 param_3,char param_4)

{
  Data *pDVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  QAction *this;
  QObject *this_00;
  void *pvVar10;
  undefined8 uVar11;
  Data *pDVar12;
  long lVar13;
  undefined1 uVar14;
  bool bVar15;
  QArrayData *local_120;
  QArrayData *local_118;
  long local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8 [18];
  long local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QIcon local_60 [12];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  Data *local_40;
  undefined1 local_31;
  
  if (param_4 != '\0') {
    WidgetUtils::clearMenuRecursively(param_2,true);
  }
  FUN_100060bb0();
  iVar5 = FUN_100060e10(param_3);
  if (iVar5 != 3) {
    FUN_100060bb0();
    FUN_100060bb0();
    uVar8 = FUN_100060e10(param_3);
    FUN_100062330(&local_120,uVar8);
    QString::toUtf8();
    FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"(!)Error: Unsupported context menu context - %s",
                  local_118 + *(long *)(local_118 + 0x10));
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e5ac3;
      }
      QArrayData::deallocate(local_118,1,8);
    }
LAB_1006e5ac3:
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        UNLOCK();
        if (*(int *)local_120 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_120,2,8);
    }
    return 0;
  }
  uVar9 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  uVar6 = FUN_10018bce0(uVar9);
  uVar7 = FUN_10018a9d0(uVar9);
  iVar5 = FUN_10018d470(uVar9);
  if (uVar6 == 1) {
    local_44 = 0x1d;
    FUN_100071ff0(&local_40);
    bVar15 = false;
  }
  else if ((uVar6 & 0xfffffffe) == 2) {
    local_48 = 0x55;
    FUN_100071ff0(&local_40,&local_48);
    local_4c = 0x10;
    FUN_100071ff0(&local_40,&local_4c);
    local_50 = 0x1d;
    FUN_100071ff0(&local_40,&local_50);
    local_54 = 0x56;
    bVar15 = true;
    FUN_100071ff0(&local_40);
  }
  else {
    cVar2 = FUN_1001b7c80(uVar9);
    if (cVar2 == '\0') {
      cVar2 = FUN_10018ffc0(uVar9);
      if (cVar2 == '\0') {
        cVar2 = FUN_10018c770(uVar9);
        if (cVar2 == '\0') {
          uVar14 = 0;
          if ((8 < uVar7 + 0xcfffffff) ||
             (uVar14 = 0, (0x119U >> (uVar7 + 0xcfffffff & 0x1f) & 1) == 0)) goto LAB_1006e5fe3;
          if ((uVar7 & 0xfffffffb) == 0x30000001) {
            local_c8[4] = 0x2f;
            FUN_100071ff0(&local_40,local_c8 + 4);
          }
          else if (uVar7 == 0x30000009) {
            bVar3 = FUN_10018f900(uVar9);
            local_c8[0] = (uint)bVar3 * 4 + 0x2f;
            FUN_100071ff0(&local_40,local_c8);
          }
          else if (uVar7 == 0x30000004) {
            local_c8[3] = 0x30;
            FUN_100071ff0(&local_40,local_c8 + 3);
            local_c8[2] = 0x31;
            FUN_100071ff0(&local_40,local_c8 + 2);
            local_c8[1] = 0x35;
            FUN_100071ff0(&local_40,local_c8 + 1);
          }
          cVar2 = FUN_10018ed10(uVar9);
          if (cVar2 == '\0') {
            local_cc = 0x10;
            FUN_100071ff0(&local_40,&local_cc);
            local_d0 = 0x39;
            FUN_100071ff0(&local_40,&local_d0);
          }
          uVar11 = FUN_10018c2b0(uVar9);
          cVar2 = FUN_100112cc0(uVar11);
          if ((((uVar7 == 0x30000001) || (uVar7 == 0x30000004)) && (cVar2 == '\0')) &&
             (cVar4 = FUN_10018ed10(uVar9), cVar4 == '\0')) {
            local_d4 = 0x3a;
            FUN_100071ff0(&local_40,&local_d4);
          }
          local_d8 = 0x3e;
          FUN_100071ff0(&local_40,&local_d8);
          local_dc = 0x10;
          FUN_100071ff0(&local_40,&local_dc);
          cVar4 = FUN_100124e20(uVar9);
          if ((cVar4 != '\0') && (cVar4 = FUN_10018ed10(uVar9), cVar4 == '\0')) {
            local_e0 = 0x85;
            FUN_100071ff0(&local_40,&local_e0);
            local_e4 = 0x10;
            FUN_100071ff0(&local_40,&local_e4);
          }
          if ((uVar7 == 0x30000001) && (cVar4 = FUN_10018ed10(uVar9), cVar4 == '\0')) {
            if (cVar2 == '\0') {
              local_ec = 0x1f;
              FUN_100071ff0(&local_40,&local_ec);
              local_f0 = 0x1e;
              FUN_100071ff0(&local_40,&local_f0);
            }
            else {
              local_e8 = 0x1a;
              FUN_100071ff0(&local_40,&local_e8);
            }
          }
          local_f4 = 0x8f;
          FUN_100071ff0(&local_40,&local_f4);
          if ((uVar7 & 0xfffffff7) == 0x30000001) {
            local_f8 = 0x1d;
            FUN_100071ff0(&local_40,&local_f8);
          }
          if (1 < *(uint *)local_40) {
            FUN_100086d00(&local_40,*(uint *)(local_40 + 4));
          }
          if (**(int **)(local_40 + (long)(int)*(uint *)(local_40 + 0xc) * 8 + 8) != 0x10) {
            local_fc = 0x10;
            FUN_100071ff0(&local_40,&local_fc);
          }
          uVar11 = FUN_1006915d0();
          lVar13 = FUN_100691620(uVar11,10,uVar9);
          if ((lVar13 != 0) && (cVar2 = QAction::isVisible(), cVar2 != '\0')) {
            local_100 = 0xc;
            FUN_100071ff0(&local_40,&local_100);
            local_104 = 0x10;
            FUN_100071ff0(&local_40,&local_104);
          }
          local_108 = 0x56;
          FUN_100071ff0(&local_40);
          bVar15 = iVar5 == 1;
        }
        else {
          local_c8[0xb] = 0x21;
          FUN_100071ff0(&local_40,local_c8 + 0xb);
          local_c8[10] = 0x23;
          FUN_100071ff0(&local_40,local_c8 + 10);
          local_c8[9] = 0x10;
          FUN_100071ff0(&local_40,local_c8 + 9);
          local_c8[8] = 0x3e;
          FUN_100071ff0(&local_40,local_c8 + 8);
          local_c8[7] = 0x10;
          FUN_100071ff0(&local_40,local_c8 + 7);
          local_c8[6] = 0x1d;
          FUN_100071ff0(&local_40,local_c8 + 6);
          local_c8[5] = 0x56;
          bVar15 = true;
          FUN_100071ff0(&local_40);
        }
      }
      else {
        if ((uVar7 == 0x30000004) || (uVar7 == 0x30000009)) {
          local_c8[0xf] = 0x3f;
          FUN_100071ff0(&local_40,local_c8 + 0xf);
        }
        local_c8[0xe] = 0x40;
        FUN_100071ff0(&local_40,local_c8 + 0xe);
        local_c8[0xd] = 0x10;
        FUN_100071ff0(&local_40,local_c8 + 0xd);
        local_c8[0xc] = 0x41;
        FUN_100071ff0(&local_40);
        bVar15 = false;
      }
    }
    else {
      pvVar10 = operator_new(0x48);
      FUN_1001ee780(pvVar10,param_2);
      FUN_1001ee7c0(pvVar10,uVar9);
      this = operator_new(0x10);
      bVar15 = *(int *)((long)pvVar10 + 0x10) != 1;
      if (bVar15) {
        local_70.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)
             QString::fromAscii_helper(":/pixmaps/MenuIcons/actionStartVmResume.png",0x2b);
        QIcon::QIcon(local_60,&local_70);
      }
      else {
        local_68.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)
             QString::fromAscii_helper(":/pixmaps/MenuIcons/actionPauseVm.png",0x25);
        QIcon::QIcon(local_60,&local_68);
      }
      if (*(int *)((long)pvVar10 + 0x10) == 1) {
        QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,0x1dc5159);
      }
      else {
        QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,0x1dc5141);
      }
      QAction::QAction(this,local_60,&local_78,(QObject *)param_2);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006e5e04;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_1006e5e04:
      QIcon::~QIcon(local_60);
      if ((bVar15) && (*(int *)local_70.field0_0x0 != -1)) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006e5e41;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1006e5e41:
      if ((!bVar15) && (*(int *)local_68.field0_0x0 != -1)) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006e5e7b;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1006e5e7b:
      QObject::connect(&local_80,this,"2triggered()",pvVar10,"1toggleStartPause()",0);
      if (local_80 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_80);
      QWidget::addAction((QAction *)param_2);
      local_c8[0x11] = 0x10;
      FUN_100071ff0(&local_40,local_c8 + 0x11);
      local_c8[0x10] = 0x1d;
      FUN_100071ff0(&local_40);
      bVar15 = false;
    }
  }
  if (DAT_102310988 == (QObject *)0x0) {
    this_00 = operator_new(0x10);
    QObject::QObject(this_00,(QObject *)0x0);
    *(undefined ***)this_00 = &PTR_FUN_1022257d0;
    DAT_102310988 = this_00;
  }
  FUN_1006e54d0(DAT_102310988,param_2,&local_40,uVar9,0,4);
  uVar14 = 1;
  if (bVar15) {
    pvVar10 = operator_new(0x40);
    FUN_1001433a0(pvVar10,param_2,param_2);
    FUN_100143650(pvVar10,1);
    uVar8 = FUN_1001902a0(uVar9);
    FUN_100143620(pvVar10,uVar8);
    QObject::connect(&local_110,pvVar10,"2colorClicked(PRL_VM_COLOR)",uVar9,
                     "1setVmColor(PRL_VM_COLOR)",0);
    if (local_110 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_110);
    QMenu::addSeparator();
    QWidget::addAction((QAction *)param_2);
  }
LAB_1006e5fe3:
  pDVar1 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar14;
      }
      local_31 = 0;
    }
    iVar5 = *(int *)(local_40 + 0xc);
    if (iVar5 != *(int *)(local_40 + 8)) {
      lVar13 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar5 * -8;
      pDVar12 = local_40 + (long)iVar5 * 8 + 8;
      do {
        if (*(void **)pDVar12 != (void *)0x0) {
          operator_delete(*(void **)pDVar12);
        }
        pDVar12 = pDVar12 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(pDVar1);
  }
  return uVar14;
}

