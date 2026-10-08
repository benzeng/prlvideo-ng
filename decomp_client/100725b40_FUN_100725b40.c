
char FUN_100725b40(long param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  Data *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_29;
  
  FUN_100060bb0();
  uVar3 = FUN_100060bb0();
  uVar3 = FUN_1000609c0(uVar3);
  FUN_100061050(3,uVar3);
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    return '\0';
  }
  uVar3 = FUN_10018c280(lVar4);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  local_e0 = (Data *)PTR_shared_null_1021e15e8;
  uVar3 = FUN_100319c50(uVar3);
  cVar2 = FUN_100330a50(uVar3);
  if (cVar2 == '\0') {
    uVar3 = FUN_100319c50(*(undefined8 *)(param_1 + 0x10));
    cVar2 = FUN_100330b70(uVar3);
    if (cVar2 == '\0') goto LAB_100725c83;
  }
  local_e4 = 0x25;
  FUN_100071ff0(&local_e0,&local_e4);
  local_e8 = 0x14;
  FUN_100071ff0(&local_e0,&local_e8);
  local_ec = 0x5d;
  FUN_100071ff0(&local_e0,&local_ec);
  local_f0 = 0x5c;
  FUN_100071ff0(&local_e0,&local_f0);
  local_f4 = 0x5b;
  FUN_100071ff0(&local_e0,&local_f4);
  local_f8 = 0x58;
  FUN_100071ff0(&local_e0,&local_f8);
LAB_100725c83:
  iVar1 = *(int *)(local_e0 + 8);
  if (iVar1 == *(int *)(local_e0 + 0xc)) {
    cVar2 = '\0';
  }
  else {
    pDVar5 = local_e0 + (long)iVar1 * 8 + 0x10;
    lVar4 = (long)*(int *)(local_e0 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (**(int **)pDVar5 == param_2) {
        if (2 < DAT_10230ffd0) {
          FUN_1006946e0(&local_108,param_2);
          QString::toUtf8();
          FUN_100df99c0("","prl_client_app",3,"Process %s shortcut",
                        local_100 + *(long *)(local_100 + 0x10));
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_29 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100725d6c;
            }
            QArrayData::deallocate(local_100,1,8);
          }
LAB_100725d6c:
          if (*(int *)local_108 != -1) {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_29 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100725da2;
            }
            QArrayData::deallocate(local_108,2,8);
          }
        }
LAB_100725da2:
        local_118 = (QArrayData *)QString::fromAscii_helper("process%1Shortcut",0x11);
        FUN_1006946e0(&local_120,param_2);
        QString::arg(&local_110,&local_118,&local_120,0,0x20);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_29 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100725e20;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_100725e20:
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_29 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100725e56;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_100725e56:
        QString::toLatin1();
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_48 = 0;
        uStack_40 = 0;
        cVar2 = QMetaObject::invokeMethod(param_1,local_128 + *(long *)(local_128 + 0x10),1,0,0);
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_29 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100725fd6;
          }
          QArrayData::deallocate(local_128,1,8);
        }
LAB_100725fd6:
        if (cVar2 == '\0') {
          QObject::objectName();
          QString::toUtf8();
          lVar4 = *(long *)(local_130 + 0x10);
          QString::toLatin1();
          FUN_100df99c0("","prl_client_app",0,
                        "(!)Error: Failed to invoke method \'%s\' for object \'%s\'.",
                        local_130 + lVar4,local_140 + *(long *)(local_140 + 0x10));
          if (*(int *)local_140 != -1) {
            if (*(int *)local_140 != 0) {
              LOCK();
              *(int *)local_140 = *(int *)local_140 + -1;
              local_29 = *(int *)local_140 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100726087;
            }
            QArrayData::deallocate(local_140,1,8);
          }
LAB_100726087:
          if (*(int *)local_130 != -1) {
            if (*(int *)local_130 != 0) {
              LOCK();
              *(int *)local_130 = *(int *)local_130 + -1;
              local_29 = *(int *)local_130 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1007260bd;
            }
            QArrayData::deallocate(local_130,1,8);
          }
LAB_1007260bd:
          if (*(int *)local_138 != -1) {
            if (*(int *)local_138 != 0) {
              LOCK();
              *(int *)local_138 = *(int *)local_138 + -1;
              local_29 = *(int *)local_138 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1007260f3;
            }
            QArrayData::deallocate(local_138,2,8);
          }
        }
LAB_1007260f3:
        if (*(int *)local_110 == -1) goto LAB_100726129;
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_29 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100726129;
        }
        QArrayData::deallocate(local_110,2,8);
        goto LAB_100726129;
      }
      pDVar5 = pDVar5 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    cVar2 = '\0';
  }
LAB_100726129:
  pDVar5 = local_e0;
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      UNLOCK();
      if (*(int *)local_e0 != 0) {
        return cVar2;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_e0 + 0xc);
    if (iVar1 != *(int *)(local_e0 + 8)) {
      lVar4 = (long)*(int *)(local_e0 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_e0 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar5);
  }
  return cVar2;
}

