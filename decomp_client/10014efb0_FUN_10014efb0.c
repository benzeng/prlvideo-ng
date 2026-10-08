
/* WARNING: Removing unreachable block (ram,0x00010014f58a) */
/* WARNING: Removing unreachable block (ram,0x00010014f598) */
/* WARNING: Removing unreachable block (ram,0x00010014f5a4) */

undefined1 FUN_10014efb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined4 in_stack_fffffffffffffe1c;
  Data_conflict local_198;
  undefined4 local_190;
  undefined1 local_188;
  int *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  Data_conflict local_158;
  undefined4 local_150;
  undefined1 local_148;
  undefined1 local_140 [24];
  AnonymousUnion0 local_128;
  QString local_120;
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
  AnonymousUnion0 local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  plVar1 = *(long **)(param_1 + 0x108);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      lVar2 = *plVar1;
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_58 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  uVar8 = 1;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      if ((*(long *)local_50 != 0) &&
         ((*(long *)(param_1 + 0x110) == 0 || (*(long *)local_50 != *(long *)(param_1 + 0x110))))) {
        CVmSharedFolder::getName();
        iVar5 = QString::compare(&local_60,param_2,0);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10014f0e0;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_10014f0e0:
        puVar3 = PTR_shared_null_1021e15e8;
        if (iVar5 == 0) {
          local_68.field1 = (Data *)PTR_shared_null_1021e15e8;
          CVmSharedFolder::getName();
          FUN_1000341d0(&local_68,&local_70);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10014f256;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_10014f256:
          CVmSharedFolder::getPath();
          FUN_1000341d0(&local_68,local_88 + 0x10);
          if (*(int *)local_88._16_8_ != -1) {
            if (*(int *)local_88._16_8_ != 0) {
              LOCK();
              *(int *)local_88._16_8_ = *(int *)local_88._16_8_ + -1;
              local_31 = *(int *)local_88._16_8_ != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10014f29f;
            }
            QArrayData::deallocate((QArrayData *)local_88._16_8_,2,8);
          }
LAB_10014f29f:
          iVar5 = CMessageManager::instance();
          local_88._8_8_ = PTR_shared_null_1021e1288;
          local_88._0_8_ = puVar3;
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
                    (iVar5,(QString *)0x3aa9,(QStringList *)(local_88 + 8),
                     (QStringList *)&local_68.field0,(CSlotInfo *)local_88,SUB81(&local_c8,0),
                     (QWidget *)CONCAT44(in_stack_fffffffffffffe1c,1),(CSlotInfo *)0x0);
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
          if (*(int *)local_88._8_8_ != -1) {
            if (*(int *)local_88._8_8_ != 0) {
              LOCK();
              *(int *)local_88._8_8_ = *(int *)local_88._8_8_ + -1;
              local_31 = *(int *)local_88._8_8_ != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10014f40f;
            }
            QArrayData::deallocate((QArrayData *)local_88._8_8_,2,8);
          }
LAB_10014f40f:
          FUN_100039a80(&local_68);
        }
        else {
          CVmSharedFolder::getPath();
          QDir::cleanPath(&local_110);
          QDir::cleanPath(&local_120);
          cVar4 = operator==(&local_110,&local_120);
          if (*(int *)local_120.field0_0x0 != -1) {
            if (*(int *)local_120.field0_0x0 != 0) {
              LOCK();
              *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
              local_31 = *(int *)local_120.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10014f169;
            }
            QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
          }
LAB_10014f169:
          if (*(int *)local_110.field0_0x0 != -1) {
            if (*(int *)local_110.field0_0x0 != 0) {
              LOCK();
              *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
              local_31 = *(int *)local_110.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10014f19f;
            }
            QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
          }
LAB_10014f19f:
          if (*(int *)local_118 != -1) {
            if (*(int *)local_118 != 0) {
              LOCK();
              *(int *)local_118 = *(int *)local_118 + -1;
              local_31 = *(int *)local_118 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10014f1d5;
            }
            QArrayData::deallocate(local_118,2,8);
          }
LAB_10014f1d5:
          puVar3 = PTR_shared_null_1021e15e8;
          if (cVar4 == '\0') goto LAB_10014f1e2;
          local_128.field1 = (Data *)PTR_shared_null_1021e15e8;
          FUN_1000341d0(&local_128,param_3);
          CVmSharedFolder::getName();
          FUN_1000341d0(&local_128,local_140 + 0x10);
          if (*(int *)local_140._16_8_ != -1) {
            if (*(int *)local_140._16_8_ != 0) {
              LOCK();
              *(int *)local_140._16_8_ = *(int *)local_140._16_8_ + -1;
              local_31 = *(int *)local_140._16_8_ != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10014f496;
            }
            QArrayData::deallocate((QArrayData *)local_140._16_8_,2,8);
          }
LAB_10014f496:
          iVar5 = CMessageManager::instance();
          local_140._8_8_ = PTR_shared_null_1021e1288;
          local_140._0_8_ = puVar3;
          local_178 = (int *)0x0;
          uStack_170 = 0;
          local_160 = 0;
          local_168 = 0;
          local_150 = 0x80000000;
          local_158.field7 = 0;
          local_148 = 1;
          local_190 = 0x80000000;
          local_198.field7 = 0;
          local_188 = 1;
          CMessageManager::showMessageBox
                    (iVar5,(QString *)0x3aaa,(QStringList *)(local_140 + 8),
                     (QStringList *)&local_128.field0,(CSlotInfo *)local_140,SUB81(&local_178,0),
                     (QWidget *)CONCAT44(in_stack_fffffffffffffe1c,1),(CSlotInfo *)0x0);
          QVariant::~QVariant((QVariant *)&local_198);
          QVariant::~QVariant((QVariant *)&local_158);
          if (local_178 != (int *)0x0) {
            LOCK();
            *local_178 = *local_178 + -1;
            local_31 = *local_178 != 0;
            UNLOCK();
            if ((!(bool)local_31) && (local_178 != (int *)0x0)) {
              operator_delete(local_178);
            }
          }
          FUN_100039a80(local_140);
          if (*(int *)local_140._8_8_ != -1) {
            if (*(int *)local_140._8_8_ != 0) {
              LOCK();
              *(int *)local_140._8_8_ = *(int *)local_140._8_8_ + -1;
              local_31 = *(int *)local_140._8_8_ != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10014f61e;
            }
            QArrayData::deallocate((QArrayData *)local_140._8_8_,2,8);
          }
LAB_10014f61e:
          FUN_100039a80(&local_128);
        }
        uVar8 = 0;
        goto LAB_10014f62c;
      }
LAB_10014f1e2:
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
    uVar8 = 1;
  }
LAB_10014f62c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return uVar8;
}

