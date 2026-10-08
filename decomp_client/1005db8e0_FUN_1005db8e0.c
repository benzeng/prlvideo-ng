
void FUN_1005db8e0(long param_1)

{
  long *plVar1;
  QString *pQVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  void *pvVar10;
  byte bVar11;
  char *pcVar12;
  undefined8 in_R9;
  bool bVar13;
  double dVar14;
  double dVar15;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
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
  undefined1 local_31;
  
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  iVar5 = *(int *)(local_e0 + 4);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005db945;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1005db945:
  bVar13 = iVar5 != 0;
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x28);
  (**(code **)(*plVar1 + 0x68))(plVar1,bVar13);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x90);
  (**(code **)(*plVar1 + 0x68))(plVar1,bVar13);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x98);
  (**(code **)(*plVar1 + 0x68))(plVar1,bVar13);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0xb0);
  (**(code **)(*plVar1 + 0x68))(plVar1,bVar13);
  if (iVar5 == 0) {
    return;
  }
  lVar6 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  if (*(int *)(lVar6 + 0x50) == 10) {
    lVar6 = *(long *)(lVar6 + 0x188);
  }
  else if (*(int *)(lVar6 + 0x50) == 0) {
    lVar6 = FUN_1005ce820();
  }
  else {
    lVar6 = FUN_1005cd310(*(undefined4 *)(lVar6 + 0x38),*(undefined4 *)(lVar6 + 0x3c));
    lVar6 = lVar6 << 0x14;
  }
  FUN_100def650(&local_e8,lVar6,1);
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  lVar7 = FUN_1005cd2a0(&local_f0);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dba4b;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1005dba4b:
  lVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  if (*(int *)(lVar8 + 0x50) == 0) {
    pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x98);
    QMetaObject::tr((char *)&local_100,"",0x1e04fb0);
    QString::arg(&local_f8,&local_100,&local_e8,0,0x20);
    QLabel::setText(pQVar2);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005dbc91;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_1005dbc91:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005dbcc7;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_1005dbcc7:
    pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0xa0);
    QMetaObject::tr((char *)&local_108,"",0x1e04fcf);
    QLabel::setText(pQVar2);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005dbf65;
      }
      QArrayData::deallocate(local_108,2,8);
    }
  }
  else {
    lVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    if (*(char *)(lVar8 + 0x148) == '\0') {
      lVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x98);
      if (*(int *)(lVar8 + 0x50) == 10) {
        QMetaObject::tr((char *)&local_138,"",0x1e04fb0);
        QString::arg(&local_130,&local_138,&local_e8,0,0x20);
        QLabel::setText(pQVar2);
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_31 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005dbdf1;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_1005dbdf1:
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005dbe27;
          }
          QArrayData::deallocate(local_138,2,8);
        }
LAB_1005dbe27:
        pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0xa0);
        QMetaObject::tr((char *)&local_140,"",0x1e0503d);
        QLabel::setText(pQVar2);
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_31 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005dbf65;
          }
          QArrayData::deallocate(local_140,2,8);
        }
      }
      else {
        QMetaObject::tr((char *)&local_150,"",0x1e05071);
        QString::arg(&local_148,&local_150,&local_e8,0,0x20);
        QLabel::setText(pQVar2);
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_31 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005dbf2f;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_1005dbf2f:
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_31 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005dbf65;
          }
          QArrayData::deallocate(local_150,2,8);
        }
      }
    }
    else {
      pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x98);
      QMetaObject::tr((char *)&local_120,"",0x1e05017);
      FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      EnumUtils::OsVerToString((uint)&local_128);
      QString::arg(&local_118,&local_120,&local_128,0,0x20);
      QString::arg(&local_110,&local_118,&local_e8,0,0x20);
      QLabel::setText(pQVar2);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005dbb4e;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1005dbb4e:
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005dbb84;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1005dbb84:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005dbbba;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_1005dbbba:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005dbf65;
        }
        QArrayData::deallocate(local_120,2,8);
      }
    }
  }
LAB_1005dbf65:
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x28);
  QMetaObject::tr((char *)&local_160,"",0x1e05095);
  FUN_100def650(&local_168,lVar7,1);
  QString::arg(&local_158,&local_160,&local_168,0,0x20);
  QLabel::setText(pQVar2);
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc00a;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_1005dc00a:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc040;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1005dc040:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc076;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_1005dc076:
  lVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  if ((((*(uint *)(lVar8 + 0x38) & 0xffffff00) == 0x900) ||
      (lVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48),
      (*(uint *)(lVar8 + 0x38) & 0xffffff00) == 0xf00)) ||
     (lVar8 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48),
     (*(uint *)(lVar8 + 0x38) & 0xffffff00) == 0x1000)) {
    uVar9 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    iVar5 = FUN_1005b9800(uVar9);
    bVar13 = iVar5 == 0;
  }
  else {
    bVar13 = false;
  }
  dVar14 = (double)lVar7;
  dVar15 = DAT_100e128c8 * dVar14 + (double)lVar6;
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x90);
  bVar11 = (bVar13 ^ 1U) & lVar6 != 0;
  (**(code **)(*plVar1 + 0x68))(plVar1,dVar14 < dVar15 & bVar11);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x98);
  (**(code **)(*plVar1 + 0x68))(plVar1,bVar11);
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0xb0);
  pcVar3 = *(code **)(*plVar1 + 0x68);
  if (dVar15 <= dVar14) {
    uVar4 = 0;
  }
  else {
    if (DAT_1023109c0 == (void *)0x0) {
      pvVar10 = operator_new(0x18);
      FUN_10076b480(pvVar10);
      DAT_102271418 = 1;
      DAT_1023109c0 = pvVar10;
    }
    uVar4 = FUN_10076b500(DAT_1023109c0);
  }
  (*pcVar3)(plVar1,uVar4);
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x98);
  local_178 = (QArrayData *)QString::fromAscii_helper("QLabel { color: %1; }",0x15);
  pcVar12 = "white";
  if (dVar14 < dVar15) {
    pcVar12 = "gold";
  }
  local_180 = (QArrayData *)QString::fromAscii_helper(pcVar12,dVar15 <= dVar14 | 4);
  QString::arg(&local_170,&local_178,&local_180,0,0x20);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc281;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1005dc281:
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc2b7;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_1005dc2b7:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005dc2ed;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_1005dc2ed:
  uVar9 = CDeclarativeWizardProxyPage::sourcePage();
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
  QMetaObject::invokeMethod(uVar9,"update",2,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
  return;
}

