
void FUN_100331920(long param_1,char param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  QString *pQVar4;
  QStringList *pQVar5;
  undefined8 uVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  char *pcVar9;
  int *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  Data_conflict local_138;
  undefined4 local_130;
  undefined1 local_128;
  undefined1 local_120 [24];
  int *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  Data_conflict local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  undefined1 local_d0 [24];
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_78 [24];
  QArrayData *local_60;
  undefined4 local_58;
  AnonymousBitField0 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  QArrayData *local_40;
  undefined1 local_31;
  
  pcVar9 = "NOT ";
  if (param_2 != '\0') {
    pcVar9 = "";
  }
  FUN_100df99c0("","prl_client_app",0,"Coherence Mode has stopped %sby command from VM, reason=%d.",
                pcVar9,param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar2 = FUN_100319ae0();
  if (iVar2 != 3) {
    return;
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar3 = FUN_100319390(uVar6);
  if (lVar3 == 0) {
    return;
  }
  if (param_3 == 3) {
    QMutex::lock();
    plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0xb8))(plVar1,1);
    }
    QMutex::unlock();
  }
  if ((param_2 != '\0') &&
     ((iVar2 = FUN_10018a9d0(lVar3), iVar2 == 0x30000004 ||
      (iVar2 = FUN_10018a9d0(lVar3), iVar2 == 0x30000003)))) {
    if ((param_3 == 6) && (iVar2 = FUN_10018f860(lVar3), iVar2 == 8)) {
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
      }
      QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Shutting_down____102270ad8);
      FUN_10031c280(uVar6,&local_40);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100331b0a;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
    else {
      local_58 = 3;
      local_50 = 0;
      local_54.bitField0_30 = 0;
      local_4c = 0xffff;
      local_44 = 0;
      local_48 = 2;
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
      }
      FUN_10031bef0(uVar6,1,&local_58);
    }
  }
LAB_100331b0a:
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_60,uVar6);
  lVar3 = FUN_1000a9690(&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100331b68;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100331b68:
  if (lVar3 != 0) {
    FUN_1000b6b70(lVar3);
  }
  if (param_3 == 9) {
    iVar2 = CMessageManager::instance();
    pQVar4 = (QString *)CSearchParentHelper::instance();
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(local_120 + 0x10,uVar6);
    pQVar5 = (QStringList *)
             CSearchParentHelper::getParentForMessage
                       (pQVar4,SUB81(local_120 + 0x10,0),(QWidget *)0x0);
    local_120._8_8_ = PTR_shared_null_1021e15e8;
    local_120._0_8_ = PTR_shared_null_1021e15e8;
    local_158 = (int *)0x0;
    uStack_150 = 0;
    local_140 = 0;
    local_148 = 0;
    local_130 = 0x80000000;
    local_138.field7 = 0;
    local_128 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QWidget *)0x80015304,pQVar5,(QStringList *)(local_120 + 8),
               (CSlotInfo *)local_120,SUB81(&local_158,0));
    QVariant::~QVariant((QVariant *)&local_138);
    if (local_158 != (int *)0x0) {
      LOCK();
      *local_158 = *local_158 + -1;
      local_31 = *local_158 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_158 != (int *)0x0)) {
        operator_delete(local_158);
      }
    }
    uVar6 = local_120._0_8_;
    if (*(int *)local_120._0_8_ != -1) {
      if (*(int *)local_120._0_8_ != 0) {
        LOCK();
        *(int *)local_120._0_8_ = *(int *)local_120._0_8_ + -1;
        local_31 = *(int *)local_120._0_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100331f55;
      }
      iVar2 = *(int *)(local_120._0_8_ + 0xc);
      if (iVar2 != *(int *)(local_120._0_8_ + 8)) {
        lVar3 = (long)*(int *)(local_120._0_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar7 = (Data *)(local_120._0_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_100331f34:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_100331f34;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose((Data *)uVar6);
    }
LAB_100331f55:
    uVar6 = local_120._8_8_;
    if (*(int *)local_120._8_8_ != -1) {
      if (*(int *)local_120._8_8_ != 0) {
        LOCK();
        *(int *)local_120._8_8_ = *(int *)local_120._8_8_ + -1;
        local_31 = *(int *)local_120._8_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100331fdf;
      }
      iVar2 = *(int *)(local_120._8_8_ + 0xc);
      if (iVar2 != *(int *)(local_120._8_8_ + 8)) {
        lVar3 = (long)*(int *)(local_120._8_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar7 = (Data *)(local_120._8_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_100331fbe:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_100331fbe;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose((Data *)uVar6);
    }
LAB_100331fdf:
    if (*(int *)local_120._16_8_ == -1) {
      return;
    }
    local_d0._16_8_ = local_120._16_8_;
    if (*(int *)local_120._16_8_ != 0) {
      LOCK();
      *(int *)local_120._16_8_ = *(int *)local_120._16_8_ + -1;
      UNLOCK();
      if (*(int *)local_120._16_8_ != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_100332233;
  }
  if (param_3 != 5) {
    if (param_3 != 2) {
      return;
    }
    iVar2 = CMessageManager::instance();
    pQVar4 = (QString *)CSearchParentHelper::instance();
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193e0(local_78 + 0x10,uVar6);
    pQVar5 = (QStringList *)
             CSearchParentHelper::getParentForMessage
                       (pQVar4,SUB81(local_78 + 0x10,0),(QWidget *)0x0);
    local_78._8_8_ = PTR_shared_null_1021e15e8;
    local_78._0_8_ = PTR_shared_null_1021e15e8;
    local_b8 = (int *)0x0;
    uStack_b0 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_90 = 0x80000000;
    local_98.field7 = 0;
    local_88 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QWidget *)0x80015225,pQVar5,(QStringList *)(local_78 + 8),
               (CSlotInfo *)local_78,SUB81(&local_b8,0));
    QVariant::~QVariant((QVariant *)&local_98);
    if (local_b8 != (int *)0x0) {
      LOCK();
      *local_b8 = *local_b8 + -1;
      local_31 = *local_b8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_b8 != (int *)0x0)) {
        operator_delete(local_b8);
      }
    }
    uVar6 = local_78._0_8_;
    if (*(int *)local_78._0_8_ != -1) {
      if (*(int *)local_78._0_8_ != 0) {
        LOCK();
        *(int *)local_78._0_8_ = *(int *)local_78._0_8_ + -1;
        local_31 = *(int *)local_78._0_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10033218e;
      }
      iVar2 = *(int *)(local_78._0_8_ + 0xc);
      if (iVar2 != *(int *)(local_78._0_8_ + 8)) {
        lVar3 = (long)*(int *)(local_78._0_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar7 = (Data *)(local_78._0_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_10033216d:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_10033216d;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose((Data *)uVar6);
    }
LAB_10033218e:
    uVar6 = local_78._8_8_;
    if (*(int *)local_78._8_8_ != -1) {
      if (*(int *)local_78._8_8_ != 0) {
        LOCK();
        *(int *)local_78._8_8_ = *(int *)local_78._8_8_ + -1;
        local_31 = *(int *)local_78._8_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100332212;
      }
      iVar2 = *(int *)(local_78._8_8_ + 0xc);
      if (iVar2 != *(int *)(local_78._8_8_ + 8)) {
        lVar3 = (long)*(int *)(local_78._8_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar7 = (Data *)(local_78._8_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_1003321f1:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_1003321f1;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose((Data *)uVar6);
    }
LAB_100332212:
    if (*(int *)local_78._16_8_ == -1) {
      return;
    }
    local_d0._16_8_ = local_78._16_8_;
    if (*(int *)local_78._16_8_ != 0) {
      LOCK();
      *(int *)local_78._16_8_ = *(int *)local_78._16_8_ + -1;
      UNLOCK();
      if (*(int *)local_78._16_8_ != 0) {
        return;
      }
      local_31 = 0;
    }
    goto LAB_100332233;
  }
  iVar2 = CMessageManager::instance();
  pQVar4 = (QString *)CSearchParentHelper::instance();
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(local_d0 + 0x10,uVar6);
  pQVar5 = (QStringList *)
           CSearchParentHelper::getParentForMessage(pQVar4,SUB81(local_d0 + 0x10,0),(QWidget *)0x0);
  local_d0._8_8_ = PTR_shared_null_1021e15e8;
  local_d0._0_8_ = PTR_shared_null_1021e15e8;
  local_108 = (int *)0x0;
  uStack_100 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0x80000000;
  local_e8.field7 = 0;
  local_d8 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x80015230,pQVar5,(QStringList *)(local_d0 + 8),(CSlotInfo *)local_d0,
             SUB81(&local_108,0));
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
  uVar6 = local_d0._0_8_;
  if (*(int *)local_d0._0_8_ != -1) {
    if (*(int *)local_d0._0_8_ != 0) {
      LOCK();
      *(int *)local_d0._0_8_ = *(int *)local_d0._0_8_ + -1;
      local_31 = *(int *)local_d0._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100331d0e;
    }
    iVar2 = *(int *)(local_d0._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_d0._0_8_ + 8)) {
      lVar3 = (long)*(int *)(local_d0._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar7 = (Data *)(local_d0._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100331ced:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100331ced;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_100331d0e:
  uVar6 = local_d0._8_8_;
  if (*(int *)local_d0._8_8_ != -1) {
    if (*(int *)local_d0._8_8_ != 0) {
      LOCK();
      *(int *)local_d0._8_8_ = *(int *)local_d0._8_8_ + -1;
      local_31 = *(int *)local_d0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100331d98;
    }
    iVar2 = *(int *)(local_d0._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_d0._8_8_ + 8)) {
      lVar3 = (long)*(int *)(local_d0._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar7 = (Data *)(local_d0._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100331d77:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100331d77;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_100331d98:
  if (*(int *)local_d0._16_8_ == -1) {
    return;
  }
  if (*(int *)local_d0._16_8_ != 0) {
    LOCK();
    *(int *)local_d0._16_8_ = *(int *)local_d0._16_8_ + -1;
    UNLOCK();
    if (*(int *)local_d0._16_8_ != 0) {
      return;
    }
    local_31 = 0;
  }
LAB_100332233:
  QArrayData::deallocate((QArrayData *)local_d0._16_8_,2,8);
  return;
}

