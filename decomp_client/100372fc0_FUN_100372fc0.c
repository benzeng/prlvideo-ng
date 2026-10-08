
void FUN_100372fc0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  int local_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  undefined4 local_104;
  undefined4 local_100;
  QString local_f8 [2];
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined1 local_c0 [48];
  QArrayData *local_90;
  undefined1 local_80 [36];
  undefined4 local_5c;
  undefined4 local_58;
  QString local_50 [2];
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return;
  }
  FUN_10036bf70(&local_40,param_2);
  uVar2 = FUN_10036acc0(param_2);
  FUN_10036e360(local_80,param_2);
  iVar3 = FUN_10036c900(param_2);
  FUN_100371ce0(local_c0,param_1,&local_40,uVar2,iVar3,0);
  puVar1 = PTR_s_Console__1__2__3__1022738a0;
  iVar5 = -1;
  if (PTR_s_Console__1__2__3__1022738a0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_Console__1__2__3__1022738a0);
    iVar5 = (int)sVar4;
  }
  local_e0 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  QString::arg(&local_d8,&local_e0,&local_40,0,0x20);
  QString::arg(&local_d0,&local_d8,uVar2,0,10,0x20);
  QString::number((int)&local_e8,iVar3);
  QString::arg(&local_c8,&local_d0,&local_e8,0,0x20);
  FUN_1003712c0();
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10037311a;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10037311a:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100373150;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100373150:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100373186;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100373186:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003731bc;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1003731bc:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003731f2;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1003731f2:
  if (iVar3 == 4) {
    FUN_100371ce0(&local_128,param_1,&local_40,uVar2,1,0);
    local_120 = local_120 + ((int)local_80._0_8_ - local_128);
    iStack_11c = iStack_11c + (SUB84(local_80._0_8_,4) - iStack_124);
    local_110 = local_110 + ((int)local_80._16_8_ - local_118);
    iStack_10c = iStack_10c + (SUB84(local_80._16_8_,4) - iStack_114);
    local_104 = local_5c;
    local_100 = local_58;
    local_128 = (int)local_80._0_8_;
    iStack_124 = SUB84(local_80._0_8_,4);
    local_118 = (int)local_80._16_8_;
    iStack_114 = SUB84(local_80._16_8_,4);
    QString::operator=(local_f8,local_50);
    puVar1 = PTR_s_Console__1__2__3__1022738a0;
    iVar3 = -1;
    if (PTR_s_Console__1__2__3__1022738a0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_Console__1__2__3__1022738a0);
      iVar3 = (int)sVar4;
    }
    local_148 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    QString::arg(&local_140,&local_148,&local_40,0,0x20);
    QString::arg(&local_138,&local_140,uVar2,0,10,0x20);
    QString::number((int)&local_150,1);
    QString::arg(&local_130,&local_138,&local_150,0,0x20);
    FUN_1003712c0();
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003733b4;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_1003733b4:
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003733ea;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_1003733ea:
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100373420;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_100373420:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100373456;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_100373456:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10037348c;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_10037348c:
    if (*(int *)local_f8[0].field0_0x0 != -1) {
      if (*(int *)local_f8[0].field0_0x0 != 0) {
        LOCK();
        *(int *)local_f8[0].field0_0x0 = *(int *)local_f8[0].field0_0x0 + -1;
        local_31 = *(int *)local_f8[0].field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003734c2;
      }
      QArrayData::deallocate((QArrayData *)local_f8[0].field0_0x0,2,8);
    }
  }
LAB_1003734c2:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003734f8;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003734f8:
  if (*(int *)local_50[0].field0_0x0 != -1) {
    if (*(int *)local_50[0].field0_0x0 != 0) {
      LOCK();
      *(int *)local_50[0].field0_0x0 = *(int *)local_50[0].field0_0x0 + -1;
      local_31 = *(int *)local_50[0].field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100373528;
    }
    QArrayData::deallocate((QArrayData *)local_50[0].field0_0x0,2,8);
  }
LAB_100373528:
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

