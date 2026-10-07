
undefined1 FUN_1003f9bf0(undefined4 param_1,int param_2,int param_3,long *param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  size_t sVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  QString local_b8;
  QString local_b0;
  undefined4 *local_a8;
  undefined4 *puStack_a0;
  undefined4 *local_98;
  undefined1 local_90 [24];
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (param_3 == 0) {
    param_3 = FUN_100768f60();
  }
  uVar3 = FUN_1007dd120(param_2);
  FUN_1008e3970("","HddUtils",0,
                "ErrorProcess: Error writing/reading HDD sectors! status %x, internalError 0x%x (%s) sys_error = %d"
                ,param_1,param_2,uVar3,param_3);
  FUN_10006a060(local_90);
  puVar1 = PTR_shared_null_100ba20d0;
  local_a8 = (undefined4 *)0x0;
  puStack_a0 = (undefined4 *)0x0;
  local_98 = (undefined4 *)0x0;
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (param_2 == -0x7ffdefde) {
    uVar8 = 0;
    FUN_1008e3970("","HddUtils",0,"ErrorProcess: Real disk is full!");
    if ((*(byte *)(DAT_1011c3698 + 0x10d8) & 2) != 0) goto LAB_1003fa41f;
    iVar2 = -1;
    if (param_4 != (long *)0x0) {
      (**(code **)(*param_4 + 0x178))(&local_b8,param_4);
      QString::operator=(&local_b0,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003f9d37;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_1003f9d37:
      uVar4 = FUN_100769600(&local_b0);
      iVar2 = (int)(uVar4 >> 0x14);
    }
    local_bc = 0x3e9d;
    if (puStack_a0 == local_98) {
      FUN_10002de70(&local_a8,&local_bc);
    }
    else {
      *puStack_a0 = 0x3e9d;
      puStack_a0 = puStack_a0 + 1;
    }
    local_c0 = 0x3e87;
    if (puStack_a0 == local_98) {
      FUN_10002de70(&local_a8,&local_c0);
    }
    else {
      *puStack_a0 = 0x3e87;
      puStack_a0 = puStack_a0 + 1;
    }
    FUN_1000a4ca0(&local_c8,DAT_1011c3698);
    FUN_10006a120(local_90,&local_c8,0);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fa33b;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1003fa33b:
    QString::number((ulonglong)&local_d0,iVar2);
    FUN_10006a120(local_90,&local_d0,1);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_31 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fa39d;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1003fa39d:
    QString::number((int)&local_d8,0x100);
    FUN_10006a120(local_90,&local_d8,2);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fa401;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1003fa401:
    uVar8 = 0x80000289;
    FUN_10006a120(local_90,&local_b0,3);
  }
  else if (param_2 == -0x7ffdefdd) {
    FUN_1008e3970("","HddUtils",0,"ErrorProcess: FAT32 file size exceeded!");
    local_e0 = (QArrayData *)QString::fromAscii_helper("FAT",3);
    FUN_10006a120(local_90,&local_e0,0);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f9e0f;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_1003f9e0f:
    local_e4 = 0x3e87;
    if (puStack_a0 == local_98) {
      uVar8 = 0x80000267;
      FUN_10002de70(&local_a8,&local_e4);
    }
    else {
      *puStack_a0 = 0x3e87;
      puStack_a0 = puStack_a0 + 1;
      uVar8 = 0x80000267;
    }
  }
  else {
    local_e8 = 0x3e87;
    FUN_10002de70(&local_a8,&local_e8);
    local_ec = 0x3e9d;
    if (puStack_a0 == local_98) {
      FUN_10002de70(&local_a8,&local_ec);
    }
    else {
      *puStack_a0 = 0x3e9d;
      puStack_a0 = puStack_a0 + 1;
    }
    QString::number((uint)&local_f8,param_5);
    FUN_10006a120(local_90,&local_f8,0);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f9f05;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_1003f9f05:
    FUN_1000a4ca0(&local_100,DAT_1011c3698);
    FUN_10006a120(local_90,&local_100,1);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003f9f69;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_1003f9f69:
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    pcVar5 = _malloc(0x400);
    if (pcVar5 != (char *)0x0) {
      iVar2 = _strerror_r(param_3,pcVar5,0x400);
      if (iVar2 == 0) {
        _strlen(pcVar5);
        QString::fromUtf8_helper((char *)&local_50,(int)pcVar5);
        QString::normalized(&local_48,&local_50,1,0);
        QString::operator=(&local_40,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fa002;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_1003fa002:
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003fa032;
          }
          QArrayData::deallocate(local_50,2,8);
        }
      }
LAB_1003fa032:
      _free(pcVar5);
    }
    local_70 = (QArrayData *)QString::fromAscii_helper("%1 (%2), errno=%3 (%4)",0x16);
    pcVar5 = (char *)FUN_1007dd120(param_2);
    iVar2 = -1;
    if (pcVar5 != (char *)0x0) {
      sVar6 = _strlen(pcVar5);
      iVar2 = (int)sVar6;
    }
    local_78 = (QArrayData *)QString::fromAscii_helper(pcVar5,iVar2);
    QString::arg(&local_68,&local_70,&local_78,0,0x20);
    QString::arg(&local_60,&local_68,param_2,0,0x10,0x20);
    QString::arg(&local_58,&local_60,param_3,0,10,0x20);
    QString::arg(&local_108,&local_58,&local_40,0,0x20);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fa11c;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1003fa11c:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fa14c;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1003fa14c:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fa17c;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1003fa17c:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fa1ac;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1003fa1ac:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fa1dc;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1003fa1dc:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fa20c;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1003fa20c:
    FUN_10006a120(local_90,&local_108,2);
    uVar8 = 0x32f7;
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003fa41f;
      }
      QArrayData::deallocate(local_108,2,8);
    }
  }
LAB_1003fa41f:
  FUN_1000a7880(DAT_1011c3698);
  uVar3 = FUN_1007dd120(uVar8);
  FUN_1008e3970("","HddUtils",0,"ErrorProcess: Ask user about %s",uVar3);
  iVar2 = FUN_1000648b0(DAT_1011c3650,uVar8,&local_a8,local_90);
  FUN_1000a7890(DAT_1011c3698);
  if (iVar2 == 0x3e87) {
    FUN_1000b1f90(DAT_1011c3698,2);
LAB_1003fa4ed:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 0x3e9d) goto LAB_1003fa4ed;
    uVar7 = 1;
  }
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003fa525;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1003fa525:
  if (local_a8 != (undefined4 *)0x0) {
    if (puStack_a0 != local_a8) {
      puStack_a0 = (undefined4 *)
                   ((~((long)puStack_a0 + (-4 - (long)local_a8)) & 0xfffffffffffffffcU) +
                   (long)puStack_a0);
    }
    operator_delete(local_a8);
  }
  FUN_10006a680(local_90);
  return uVar7;
}

