
undefined8 * FUN_1005bac90(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  QMapNodeBase *pQVar5;
  QString local_110;
  QString local_108;
  QArrayData *local_100;
  QArrayData *local_f8 [11];
  int *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QMapNodeBase *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QMapNodeBase *local_50;
  QMapNodeBase *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_58 = (QArrayData *)QString::fromAscii_helper("store",5);
  uVar3 = FUN_10073fe80(&local_58);
  local_60 = (QArrayData *)QString::fromAscii_helper("os.win",6);
  FUN_100741270(&local_50,uVar3,&local_60);
  local_70 = (QArrayData *)QString::fromAscii_helper("Web Store",9);
  uVar3 = FUN_10073fe80(&local_70);
  local_78 = (QArrayData *)QString::fromAscii_helper("os.win",6);
  FUN_100741270(&local_68,uVar3,&local_78);
  if (*(uint *)local_50 == 0) {
    local_48 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(local_50 + 0x10) != 0) {
      puVar4 = (ulong *)FUN_1005bfe60(*(long *)(local_50 + 0x10),local_48);
      *(ulong **)(local_48 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | (ulong)(local_48 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(uint *)local_50 == 0xffffffff) {
    local_48 = local_50;
  }
  else {
    LOCK();
    *(uint *)local_50 = *(uint *)local_50 + 1;
    local_31 = *(uint *)local_50 != 0;
    UNLOCK();
    local_48 = local_50;
  }
  FUN_1005c0080(&local_48,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005badf7;
    }
    if (*(long *)(local_68 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(local_68,(int)*(undefined8 *)(local_68 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_68);
  }
LAB_1005badf7:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bae27;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005bae27:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bae57;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1005bae57:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bae9f;
    }
    if (*(long *)(local_50 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(local_50,(int)*(undefined8 *)(local_50 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_50);
  }
LAB_1005bae9f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005baecf;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005baecf:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005baeff;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005baeff:
  *param_1 = PTR_shared_null_1021e15d0;
  if (1 < *(uint *)local_48) {
    FUN_1005c0260(&local_48);
  }
  if (*(long *)(local_48 + 0x10) == 0) {
    pQVar5 = local_48 + 8;
  }
  else {
    pQVar5 = *(QMapNodeBase **)(local_48 + 0x20);
  }
  do {
    if (1 < *(uint *)local_48) {
      FUN_1005c0260(&local_48);
    }
    pQVar1 = local_48;
    if (pQVar5 == local_48 + 8) {
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) {
            return param_1;
          }
          local_31 = 0;
        }
        if (*(long *)(local_48 + 0x10) != 0) {
          FUN_1005bfc90();
          QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)pQVar1);
      }
      return param_1;
    }
    FUN_100283580(local_f8,pQVar5 + 0x20);
    local_a0 = *(int **)(pQVar5 + 0x78);
    if (1 < *local_a0 + 1U) {
      LOCK();
      *local_a0 = *local_a0 + 1;
      local_31 = *local_a0 != 0;
      UNLOCK();
    }
    local_98 = *(int **)(pQVar5 + 0x80);
    if (1 < *local_98 + 1U) {
      LOCK();
      *local_98 = *local_98 + 1;
      local_31 = *local_98 != 0;
      UNLOCK();
    }
    local_90 = *(int **)(pQVar5 + 0x88);
    if (1 < *local_90 + 1U) {
      LOCK();
      *local_90 = *local_90 + 1;
      local_31 = *local_90 != 0;
      UNLOCK();
    }
    local_88 = *(int **)(pQVar5 + 0x90);
    if (1 < *local_88 + 1U) {
      LOCK();
      *local_88 = *local_88 + 1;
      local_31 = *local_88 != 0;
      UNLOCK();
    }
    local_80 = *(int **)(pQVar5 + 0x98);
    if (1 < *local_80 + 1U) {
      LOCK();
      *local_80 = *local_80 + 1;
      local_31 = *local_80 != 0;
      UNLOCK();
    }
    FUN_10073e290(&local_100,local_f8);
    iVar2 = QString::compare_helper
                      (local_100 + *(long *)(local_100 + 0x10),*(undefined4 *)(local_100 + 4),"x64",
                       0xffffffff,1);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bb081;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_1005bb081:
    if (iVar2 == 0) {
      local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_f8[0];
      if (1 < *(int *)local_f8[0] + 1U) {
        LOCK();
        *(int *)local_f8[0] = *(int *)local_f8[0] + 1;
        local_31 = *(int *)local_f8[0] != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1e41970);
      QString::append(&local_110);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bb0fd;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1005bb0fd:
      local_108.field0_0x0 = local_110.field0_0x0;
      if (1 < *(int *)local_110.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + 1;
        local_31 = *(int *)local_110.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_108);
      if (*(int *)local_110.field0_0x0 != -1) {
        if (*(int *)local_110.field0_0x0 != 0) {
          LOCK();
          *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
          local_31 = *(int *)local_110.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005bb165;
        }
        QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
      }
LAB_1005bb165:
      FUN_1005bf450(param_1,&local_108,local_f8);
      if (*(int *)local_108.field0_0x0 != -1) {
        if (*(int *)local_108.field0_0x0 != 0) {
          LOCK();
          *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
          local_31 = *(int *)local_108.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005baf50;
        }
        QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
      }
    }
LAB_1005baf50:
    FUN_100252c80(&local_a0);
    FUN_100252e70(local_f8);
    pQVar5 = (QMapNodeBase *)QMapNodeBase::nextNode();
  } while( true );
}

