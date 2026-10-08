
void FUN_100162d30(long param_1,bool *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  QArrayData *local_90;
  long local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined8 local_70;
  QArrayData *local_68;
  ulong local_60;
  int *piStack_58;
  undefined8 local_50;
  QVariant local_48;
  char local_32;
  undefined1 local_31;
  
  iVar2 = CSdkRequest::getResultCode(param_2);
  local_70 = *(undefined8 *)(param_2 + 0x18);
  local_68 = *(QArrayData **)(param_2 + 0x20);
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  local_60 = *(ulong *)(param_2 + 0x28);
  piStack_58 = *(int **)(param_2 + 0x30);
  local_50 = *(undefined8 *)(param_2 + 0x38);
  if (piStack_58 != (int *)0x0) {
    LOCK();
    *piStack_58 = *piStack_58 + 1;
    local_31 = *piStack_58 != 0;
    UNLOCK();
  }
  QVariant::QVariant(&local_48,(QVariant *)(param_2 + 0x40));
  if ((local_32 == '\0') || ((char)local_70 == '\0')) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: invalid async request object.");
    goto LAB_100163508;
  }
  if (iVar2 < -0x7ffdfff7) {
    if (iVar2 < -0x7ffffdb7) {
      if (iVar2 == -0x7ffffefa) {
        local_80 = local_68;
        if (1 < *(int *)local_68 + 1U) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + 1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
        }
        lVar4 = FUN_10015cb20(param_1,&local_80);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100162e45;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100162e45:
        if (lVar4 == 0) {
          FUN_100df99c0("","prl_client_app",0);
        }
        else {
          uVar5 = CMessageManager::instance();
          CSdkRequest::getResultParam((uint)&local_88);
          FUN_100188480(&local_90,lVar4);
          local_c8 = (undefined1  [16])0x0;
          local_b0 = 0;
          local_b8 = 0;
          local_a0 = 0x80000000;
          local_a8.field7 = 0;
          local_98 = 1;
          CMessageManager::showMessageBox(uVar5,&local_88,&local_90);
          QVariant::~QVariant((QVariant *)&local_a8);
          if ((int *)local_c8._0_8_ != (int *)0x0) {
            LOCK();
            *(int *)local_c8._0_8_ = *(int *)local_c8._0_8_ + -1;
            local_31 = *(int *)local_c8._0_8_ != 0;
            UNLOCK();
            if ((!(bool)local_31) && ((int *)local_c8._0_8_ != (int *)0x0)) {
              operator_delete((void *)local_c8._0_8_);
            }
          }
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100162f3c;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_100162f3c:
          if (local_88 != 0) {
            _PrlHandle_Free();
          }
        }
      }
    }
    else if (iVar2 + 0x7ffffc8cU < 2) {
      local_78 = local_68;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      lVar4 = FUN_10015cb20(param_1,&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016306b;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10016306b:
      if (lVar4 != 0) {
        uVar3 = FUN_10018c2b0(lVar4);
        CVmConfiguration::setValidRc(uVar3);
        FUN_10018c7a0(lVar4,1);
      }
    }
    else {
      if (iVar2 == -0x7ffffdb7) {
        FUN_10015a6f0(param_1,1);
        FUN_100801110(param_1,0x80000249);
        goto LAB_100163508;
      }
      if (iVar2 == -0x7ffffd89) {
        FUN_10015a6f0(param_1,1);
      }
    }
  }
  else {
    if (iVar2 != -0x7ffdfff7) goto LAB_100163114;
    local_d0 = local_68;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
    lVar4 = FUN_10015cb20(param_1,&local_d0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100162fe7;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100162fe7:
    if (lVar4 == 0) {
      FUN_100df99c0("","prl_client_app",0);
    }
    else {
      FUN_10018c7e0(lVar4,1);
    }
  }
LAB_100163114:
  if (0x7ea < local_70._4_4_) {
    if (0x807 < local_70._4_4_) {
      if (local_70._4_4_ == 0x808) {
        local_e0 = (QArrayData *)PTR_shared_null_1021e1288;
        CBaseNode::fromString
                  (*(QTypedArrayData<unsigned_short> **)(param_1 + 0xe8),SUB81(&local_e0,0),
                   (QString *)0x0,(int *)0x0,(int *)0x0);
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100163508;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
        goto LAB_100163508;
      }
      if (local_70._4_4_ != 0x80e) {
        if (local_70._4_4_ == 0x820) {
          lVar4 = *(long *)(param_2 + 0x10);
          local_108 = lVar4;
          if (lVar4 != 0) {
            _PrlHandle_AddRef(lVar4);
          }
          FUN_100163aa0(param_1,&local_108);
          if (lVar4 != 0) {
            _PrlHandle_Free(lVar4);
          }
        }
        goto LAB_100163508;
      }
      local_f0 = local_68;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      lVar4 = FUN_10015cb20(param_1,&local_f0);
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10016326d;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_10016326d:
      if (lVar4 != 0) {
        FUN_10018c880(lVar4,0);
      }
      goto LAB_100163508;
    }
    if (local_70._4_4_ - 0x7f7U < 3) {
      iVar7 = -0x7ffffdb7;
      if (iVar2 != -0x7ffffd8b) {
        iVar7 = iVar2;
      }
      FUN_100801110(param_1,iVar7);
      goto LAB_100163508;
    }
    if (local_70._4_4_ != 0x7eb) {
      if (local_70._4_4_ == 0x7ec) {
        local_100 = local_68;
        if (1 < *(int *)local_68 + 1U) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + 1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
        }
        FUN_1008012f0(param_1,&local_100);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100163508;
          }
          QArrayData::deallocate(local_100,2,8);
        }
      }
      goto LAB_100163508;
    }
    local_e8 = local_68;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
    lVar4 = FUN_10015cb20(param_1,&local_e8);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001632f4;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1001632f4:
    if ((lVar4 != 0) && (cVar1 = FUN_10018da40(lVar4), cVar1 != '\0')) {
      FUN_10018dc90(lVar4);
    }
    goto LAB_100163508;
  }
  uVar3 = local_70._4_4_ - 0x3e9;
  if (0x23 < uVar3) goto LAB_100163508;
  if ((0xa00000cc3U >> ((ulong)uVar3 & 0x3f) & 1) == 0) {
    if ((0xa000UL >> ((ulong)uVar3 & 0x3f) & 1) == 0) goto LAB_100163508;
    local_f8 = local_68;
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
    lVar4 = FUN_10015cb20(param_1,&local_f8);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100163443;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_100163443:
    if (lVar4 != 0) {
      uVar5 = FUN_10018f4e0(lVar4);
      lVar6 = FUN_1007c65b0(uVar5,local_60,local_60 >> 0x20);
      if ((lVar6 != 0) && (lVar4 = FUN_10018f120(lVar4,local_60,local_60 >> 0x20), lVar4 != 0)) {
        uVar5 = FUN_100146b20(lVar4);
        FUN_1007bb7c0(lVar6,uVar5);
      }
    }
    goto LAB_100163508;
  }
  local_d8 = local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  lVar4 = FUN_10015cb20(param_1,&local_d8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001631a8;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1001631a8:
  if (lVar4 != 0) {
    FUN_1001923f0(lVar4,0);
  }
LAB_100163508:
  QVariant::~QVariant(&local_48);
  if (piStack_58 != (int *)0x0) {
    LOCK();
    *piStack_58 = *piStack_58 + -1;
    local_31 = *piStack_58 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (piStack_58 != (int *)0x0)) {
      operator_delete(piStack_58);
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}

