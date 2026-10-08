
void FUN_100487210(long param_1)

{
  QString *pQVar1;
  QObject *pQVar2;
  long *plVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  void *pvVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  bool bVar17;
  int *local_1a8;
  int *local_1a0;
  int *local_198;
  uint local_190;
  int *local_188;
  QObject *local_180;
  int *local_178;
  QObject *local_170;
  int *local_168;
  QObject *local_160;
  int *local_158;
  QObject *local_150;
  int *local_148;
  QObject *local_140;
  int *local_138;
  QObject *local_130;
  int *local_128;
  QObject *local_120;
  int *local_118;
  QObject *local_110;
  int *local_108;
  QObject *local_100;
  int *local_f8;
  QObject *local_f0;
  int *local_e8;
  QObject *local_e0;
  int *local_d8;
  QObject *local_d0;
  int *local_c8;
  QObject *local_c0;
  int *local_b8;
  QObject *local_b0;
  int *local_a8;
  QObject *local_a0;
  int *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)
             QString::fromAscii_helper
                       ("QFrame#%1 { padding-left: -6px; padding-right: -6px; padding-bottom: -6px; }"
                        ,0x4c);
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38);
  FUN_100359270(&local_48,&local_50);
  local_58 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  FUN_100359270(&local_48,&local_58);
  local_60 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60);
  FUN_100359270(&local_48,&local_60);
  local_80 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_80);
      lVar14 = (long)*(int *)(local_80 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_80 + lVar14 * 8) &&
         (lVar15 = *(int *)(local_80 + 0xc) - lVar14,
         lVar15 != 0 && lVar14 <= *(int *)(local_80 + 0xc))) {
        _memcpy(local_80 + lVar14 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar15 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
    do {
      local_68 = 1;
      pQVar1 = *(QString **)local_78;
      QObject::objectName();
      QString::arg(&local_88,&local_40,&local_90,0,0x20);
      QWidget::setStyleSheet(pQVar1);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10048739f;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_10048739f:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004873d5;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1004873d5:
      local_78 = local_78 + 8;
    } while (local_78 != local_70);
  }
  puVar4 = PTR_shared_null_1021e15e8;
  local_68 = 1;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048741f;
    }
    QListData::dispose(local_80);
  }
LAB_10048741f:
  local_98 = (int *)puVar4;
  uVar6 = FUN_10044e660(param_1);
  cVar5 = FUN_1003bee30(uVar6);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0xb0);
    piVar7 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_a8 = piVar7;
    local_a0 = pQVar2;
    FUN_10007b8d0(&local_98,&local_a8);
    local_b0 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x38);
    piVar8 = (int *)0x0;
    if (local_b0 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_b0);
    }
    local_b8 = piVar8;
    FUN_10007b8d0(&local_98,&local_b8);
    local_c0 = *(QObject **)(*(long *)(param_1 + 0x38) + 0xd0);
    piVar9 = (int *)0x0;
    if (local_c0 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_c0);
    }
    local_c8 = piVar9;
    FUN_10007b8d0(&local_98,&local_c8);
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
  }
  uVar6 = FUN_10044e660(param_1);
  cVar5 = FUN_1003beed0(uVar6);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0xa8);
    piVar7 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_d8 = piVar7;
    local_d0 = pQVar2;
    FUN_10007b8d0(&local_98,&local_d8);
    local_e0 = *(QObject **)(*(long *)(param_1 + 0x38) + 8);
    piVar8 = (int *)0x0;
    if (local_e0 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_e0);
    }
    local_e8 = piVar8;
    FUN_10007b8d0(&local_98,&local_e8);
    local_f0 = *(QObject **)(*(long *)(param_1 + 0x38) + 200);
    piVar9 = (int *)0x0;
    if (local_f0 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_f0);
    }
    local_f8 = piVar9;
    FUN_10007b8d0(&local_98,&local_f8);
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
  }
  uVar6 = FUN_10044e660(param_1);
  cVar5 = FUN_1003beeb0(uVar6);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x88);
    piVar7 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_108 = piVar7;
    local_100 = pQVar2;
    FUN_10007b8d0(&local_98,&local_108);
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
  }
  uVar6 = FUN_10044e660(param_1);
  cVar5 = FUN_1003bef40(uVar6);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x130);
    piVar7 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_118 = piVar7;
    local_110 = pQVar2;
    FUN_10007b8d0(&local_98,&local_118);
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
  }
  uVar6 = FUN_10044e660(param_1);
  cVar5 = FUN_1003bef20(uVar6);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0xd8);
    piVar7 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_128 = piVar7;
    local_120 = pQVar2;
    FUN_10007b8d0(&local_98,&local_128);
    local_130 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x108);
    piVar8 = (int *)0x0;
    if (local_130 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_130);
    }
    local_138 = piVar8;
    FUN_10007b8d0(&local_98,&local_138);
    local_140 = *(QObject **)(*(long *)(param_1 + 0x38) + 0xe0);
    piVar9 = (int *)0x0;
    if (local_140 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_140);
    }
    local_148 = piVar9;
    FUN_10007b8d0(&local_98,&local_148);
    local_150 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x110);
    piVar10 = (int *)0x0;
    if (local_150 != (QObject *)0x0) {
      piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_150);
    }
    local_158 = piVar10;
    FUN_10007b8d0(&local_98,&local_158);
    local_160 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x120);
    piVar11 = (int *)0x0;
    if (local_160 != (QObject *)0x0) {
      piVar11 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_160);
    }
    local_168 = piVar11;
    FUN_10007b8d0(&local_98,&local_168);
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + -1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar11);
      }
    }
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_31 = *piVar10 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar10);
      }
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
  }
  uVar6 = FUN_10044e660(param_1);
  cVar5 = FUN_1003bea70(uVar6);
  if (cVar5 == '\0') {
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0xe8);
    piVar7 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_178 = piVar7;
    local_170 = pQVar2;
    FUN_10007b8d0(&local_98,&local_178);
    local_180 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x118);
    piVar8 = (int *)0x0;
    if (local_180 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_180);
    }
    local_188 = piVar8;
    FUN_10007b8d0(&local_98,&local_188);
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar7);
      }
    }
  }
  FUN_10006b440(&local_1a8,&local_98);
  local_1a0 = local_1a8 + (long)local_1a8[2] * 2 + 4;
  local_198 = local_1a8 + (long)local_1a8[3] * 2 + 4;
  local_190 = 1;
  if (local_1a8[2] != local_1a8[3]) {
    do {
      piVar7 = (int *)**(undefined8 **)local_1a0;
      plVar3 = (long *)(*(undefined8 **)local_1a0)[1];
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        local_31 = *piVar7 != 0;
        UNLOCK();
      }
      if (local_190 != 0) {
        plVar16 = (long *)0x0;
        if ((piVar7 != (int *)0x0) && (plVar16 = (long *)0x0, piVar7[1] != 0)) {
          plVar16 = plVar3;
        }
        (**(code **)(*plVar16 + 0x68))(plVar16,0);
        QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x38));
        local_190 = 0;
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        local_31 = *piVar7 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar7);
        }
      }
      local_1a0 = local_1a0 + 2;
      uVar13 = local_190 ^ 1;
      bVar17 = local_190 != 1;
      local_190 = uVar13;
    } while ((bVar17) && (local_1a0 != local_198));
  }
  if (*local_1a8 != -1) {
    if (*local_1a8 != 0) {
      LOCK();
      *local_1a8 = *local_1a8 + -1;
      local_31 = *local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100487b76;
    }
    FUN_10006b5d0(&local_1a8,local_1a8);
  }
LAB_100487b76:
  lVar14 = *(long *)(param_1 + 0x38);
  if ((ushort)((~*(ushort *)(*(long *)(*(long *)(lVar14 + 0xe8) + 0x28) + 10) & 1) +
              (~*(ushort *)(*(long *)(*(long *)(lVar14 + 0x128) + 0x28) + 10) & 1) +
              (~*(ushort *)(*(long *)(*(long *)(lVar14 + 0x130) + 0x28) + 10) & 1) +
              (~*(ushort *)(*(long *)(*(long *)(lVar14 + 0x88) + 0x28) + 10) & 1)) < 2) {
    (**(code **)(**(long **)(lVar14 + 0xb8) + 0x68))(*(long **)(lVar14 + 0xb8),0);
    QLayout::removeWidget((QWidget *)**(undefined8 **)(param_1 + 0x38));
  }
  pvVar12 = operator_new(0x10);
  FUN_100139d70(pvVar12,param_1);
  QButtonGroup::setExclusive(SUB81(pvVar12,0));
  FUN_100139df0(pvVar12,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x108));
  FUN_100139df0(pvVar12,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x110));
  FUN_100139df0(pvVar12,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xe0));
  if (*local_98 != -1) {
    if (*local_98 != 0) {
      LOCK();
      *local_98 = *local_98 + -1;
      local_31 = *local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100487c8d;
    }
    FUN_10006b5d0(&local_98,local_98);
  }
LAB_100487c8d:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100487cb3;
    }
    QListData::dispose(local_48);
  }
LAB_100487cb3:
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
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

