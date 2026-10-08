
/* WARNING: Removing unreachable block (ram,0x00010014e90f) */
/* WARNING: Removing unreachable block (ram,0x00010014e91d) */
/* WARNING: Removing unreachable block (ram,0x00010014e929) */

undefined1 FUN_10014e310(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined4 in_stack_fffffffffffffe3c;
  Data_conflict local_188;
  undefined4 local_180;
  undefined1 local_178;
  int *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  Data_conflict local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined1 local_130 [24];
  QArrayData *local_118;
  QString local_110;
  int *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  Data_conflict local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_88 [24];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QDir::fromNativeSeparators(&local_40);
  local_48 = (QArrayData *)QString::fromAscii_helper("./",2);
  cVar2 = QString::startsWith(&local_40,&local_48,1);
  bVar5 = true;
  if (cVar2 == '\0') {
    local_50 = (QArrayData *)QString::fromAscii_helper("../",3);
    cVar2 = QString::startsWith(&local_40,&local_50,1);
    bVar5 = true;
    if (cVar2 == '\0') {
      local_58 = (QArrayData *)QString::fromAscii_helper("/.",2);
      cVar2 = QString::endsWith(&local_40,&local_58,1);
      bVar5 = true;
      if (cVar2 == '\0') {
        local_60 = (QArrayData *)QString::fromAscii_helper("/..",3);
        cVar2 = QString::endsWith(&local_40,&local_60,1);
        bVar5 = true;
        if (cVar2 == '\0') {
          local_68 = (QArrayData *)QString::fromAscii_helper("/./",3);
          iVar3 = QString::indexOf(&local_40,&local_68,0,1);
          bVar5 = true;
          if (iVar3 == -1) {
            local_70 = (QArrayData *)QString::fromAscii_helper("/../",4);
            iVar3 = QString::indexOf(&local_40,&local_70,0,1);
            bVar5 = iVar3 != -1;
            if (*(int *)local_70 != -1) {
              if (*(int *)local_70 != 0) {
                LOCK();
                *(int *)local_70 = *(int *)local_70 + -1;
                local_31 = *(int *)local_70 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10014e483;
              }
              QArrayData::deallocate(local_70,2,8);
            }
          }
LAB_10014e483:
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10014e4b3;
            }
            QArrayData::deallocate(local_68,2,8);
          }
        }
LAB_10014e4b3:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10014e4e3;
          }
          QArrayData::deallocate(local_60,2,8);
        }
      }
LAB_10014e4e3:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10014e513;
        }
        QArrayData::deallocate(local_58,2,8);
      }
    }
LAB_10014e513:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10014e543;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_10014e543:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014e573;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10014e573:
  if (bVar5) {
    iVar3 = CMessageManager::instance();
    puVar1 = PTR_shared_null_1021e15e8;
    local_88._16_8_ = PTR_shared_null_1021e1288;
    local_88._8_8_ = PTR_shared_null_1021e15e8;
    FUN_1000341d0(local_88 + 8,param_2);
    local_88._0_8_ = puVar1;
    local_c8 = (int *)0x0;
    uStack_c0 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_a0 = 0x80000000;
    local_a8.field7 = 0;
    local_98 = 1;
    local_108 = (int *)0x0;
    uStack_100 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_e0 = 0x80000000;
    local_e8.field7 = 0;
    local_d8 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x3ad8,(QStringList *)(local_88 + 0x10),
               (QStringList *)(local_88 + 8),(CSlotInfo *)local_88,SUB81(&local_c8,0),
               (QWidget *)CONCAT44(in_stack_fffffffffffffe3c,1),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_e8);
    if (local_108 != (int *)0x0) {
      LOCK();
      *local_108 = *local_108 + -1;
      local_31 = *local_108 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_108 != (int *)0x0)) {
        operator_delete(local_108);
      }
    }
    QVariant::~QVariant((QVariant *)&local_a8);
    if (local_c8 != (int *)0x0) {
      LOCK();
      *local_c8 = *local_c8 + -1;
      local_31 = *local_c8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_c8 != (int *)0x0)) {
        operator_delete(local_c8);
      }
    }
    FUN_100039a80(local_88);
    FUN_100039a80(local_88 + 8);
    if (*(int *)local_88._16_8_ == -1) {
      uVar4 = 0;
    }
    else {
      if (*(int *)local_88._16_8_ != 0) {
        LOCK();
        *(int *)local_88._16_8_ = *(int *)local_88._16_8_ + -1;
        local_31 = *(int *)local_88._16_8_ != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar4 = 0;
          goto LAB_10014e9fe;
        }
      }
      QArrayData::deallocate((QArrayData *)local_88._16_8_,2,8);
      uVar4 = 0;
    }
    goto LAB_10014e9fe;
  }
  local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_110.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + 1;
    local_31 = *(int *)local_110.field0_0x0 != 0;
    UNLOCK();
  }
  cVar2 = QString::endsWith(param_2,0x2f,1);
  if (cVar2 == '\0') {
    local_118 = (QArrayData *)QString::fromAscii_helper("\\",1);
    cVar2 = QString::endsWith(param_2,&local_118,1);
    if (cVar2 == '\0') {
      bVar5 = false;
    }
    else {
      bVar5 = 1 < *(int *)(*param_2 + 4);
    }
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10014e7cc;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_10014e7cc:
    if (bVar5) goto LAB_10014e7d0;
  }
  else if (1 < *(int *)(*param_2 + 4)) {
LAB_10014e7d0:
    QString::chop((int)&local_110);
  }
  cVar2 = QFile::exists(&local_110);
  uVar4 = 1;
  if (cVar2 == '\0') {
    iVar3 = CMessageManager::instance();
    puVar1 = PTR_shared_null_1021e15e8;
    local_130._16_8_ = PTR_shared_null_1021e1288;
    local_130._8_8_ = PTR_shared_null_1021e15e8;
    FUN_1000341d0(local_130 + 8,&local_110);
    local_130._0_8_ = puVar1;
    local_168 = (int *)0x0;
    uStack_160 = 0;
    local_150 = 0;
    local_158 = 0;
    local_140 = 0x80000000;
    local_148.field7 = 0;
    local_138 = 1;
    local_180 = 0x80000000;
    local_188.field7 = 0;
    local_178 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x3abb,(QStringList *)(local_130 + 0x10),
               (QStringList *)(local_130 + 8),(CSlotInfo *)local_130,SUB81(&local_168,0),
               (QWidget *)CONCAT44(in_stack_fffffffffffffe3c,1),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_188);
    QVariant::~QVariant((QVariant *)&local_148);
    if (local_168 != (int *)0x0) {
      LOCK();
      *local_168 = *local_168 + -1;
      local_31 = *local_168 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_168 != (int *)0x0)) {
        operator_delete(local_168);
      }
    }
    FUN_100039a80(local_130);
    FUN_100039a80(local_130 + 8);
    if (*(int *)local_130._16_8_ != -1) {
      if (*(int *)local_130._16_8_ != 0) {
        LOCK();
        *(int *)local_130._16_8_ = *(int *)local_130._16_8_ + -1;
        local_31 = *(int *)local_130._16_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10014e9af;
      }
      QArrayData::deallocate((QArrayData *)local_130._16_8_,2,8);
    }
LAB_10014e9af:
    uVar4 = 0;
  }
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_31 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10014e9fe;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_10014e9fe:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar4;
}

