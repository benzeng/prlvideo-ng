
undefined8 FUN_100551b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  undefined2 uVar4;
  QArrayData *pQVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  undefined1 local_1d0 [32];
  char local_1b0;
  undefined2 *local_1a8;
  QArrayData *local_138;
  QArrayData *local_130;
  undefined1 local_128 [6];
  undefined1 local_122;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  undefined1 local_108 [152];
  QArrayData *local_70;
  QArrayData *local_68;
  undefined1 local_60 [6];
  undefined1 local_5a;
  QArrayData *local_58;
  undefined8 local_50;
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar10 = param_1 + 8;
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  uVar7 = *(undefined1 *)(param_1 + 0x30);
  QString::toUtf8();
  pQVar5 = local_40 + *(long *)(local_40 + 0x10);
  FUN_1008e3970("","TransMem",0,"CMemCryptTransaction::execute(%d -> %d, %s)",uVar7,uVar6,pQVar5,
                lVar10);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100551c11;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100551c11:
  local_50 = param_2;
  local_48 = param_3;
  FUN_100761460(local_60);
  puVar2 = PTR_shared_null_100ba20d0;
  local_5a = 0;
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  QString::toUtf8();
  cVar3 = FUN_100546b20(local_60,local_68 + *(long *)(local_68 + 0x10),0,0,0,0,
                        (ulong)pQVar5 & 0xffffffff00000000);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100551c96;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100551c96:
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CMemCryptTransaction::execute() failed to create file %s",
                  local_70 + *(long *)(local_70 + 0x10));
    uVar8 = 0x80000009;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055232c;
      }
      QArrayData::deallocate(local_70,1,8);
    }
  }
  else {
    puVar9 = &local_50;
    FUN_10054be90(local_108,local_60,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),
                  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),param_1 + 0x58,FUN_1005527c0,
                  puVar9);
    cVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    if (cVar3 == '\0') {
      FUN_100761460(local_128);
      local_122 = 0;
      local_120 = (QArrayData *)puVar2;
      QString::toUtf8();
      cVar3 = FUN_100546b20(local_128,local_130 + *(long *)(local_130 + 0x10),1,1,0,0,
                            (ulong)puVar9 & 0xffffffff00000000);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100551e30;
        }
        QArrayData::deallocate(local_130,1,8);
      }
LAB_100551e30:
      if (cVar3 == '\0') {
        QString::toUtf8();
        FUN_1008e3970("","TransMem",0,"CMemCryptTransaction::execute() failed to open file %s",
                      local_138 + *(long *)(local_138 + 0x10));
        bVar1 = true;
        if (*(int *)local_138 != -1) {
          if (*(int *)local_138 != 0) {
            LOCK();
            *(int *)local_138 = *(int *)local_138 + -1;
            local_31 = *(int *)local_138 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100552273;
          }
          QArrayData::deallocate(local_138,1,8);
        }
      }
      else {
        FUN_10054be90(local_1d0,local_128,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18),param_1 + 0x30,0,0);
        cVar3 = FUN_10054c5d0(local_1d0);
        if (cVar3 == '\0') {
          QString::toUtf8();
          FUN_1008e3970("","TransMem",0,
                        "CGuestMemoryMapped::execute() failed to init source image %s",
                        local_1d8 + *(long *)(local_1d8 + 0x10));
          bVar1 = true;
          if (*(int *)local_1d8 != -1) {
            if (*(int *)local_1d8 != 0) {
              LOCK();
              *(int *)local_1d8 = *(int *)local_1d8 + -1;
              local_31 = *(int *)local_1d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100552267;
            }
            QArrayData::deallocate(local_1d8,1,8);
          }
        }
        else {
          if (local_1b0 == '\0') {
            uVar4 = 0xffff;
            uVar6 = 0xff;
            uVar7 = 0xff;
          }
          else {
            uVar4 = *local_1a8;
            uVar6 = *(undefined1 *)(local_1a8 + 1);
            uVar7 = *(undefined1 *)((long)local_1a8 + 3);
          }
          cVar3 = FUN_10054c090(local_108,uVar4,uVar6,uVar7);
          if (cVar3 == '\0') {
            QString::toUtf8();
            FUN_1008e3970("","TransMem",0,"CGuestMemoryMapped::execute() failed to init image %s",
                          local_1e0 + *(long *)(local_1e0 + 0x10));
            bVar1 = true;
            if (*(int *)local_1e0 != -1) {
              if (*(int *)local_1e0 != 0) {
                LOCK();
                *(int *)local_1e0 = *(int *)local_1e0 + -1;
                local_31 = *(int *)local_1e0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100552267;
              }
              QArrayData::deallocate(local_1e0,1,8);
            }
          }
          else {
            cVar3 = FUN_10054e540(local_1d0,local_108);
            if ((cVar3 != '\0') && (cVar3 = FUN_10054eed0(local_1d0), cVar3 != '\0')) {
              cVar3 = FUN_10054eed0(local_108);
              bVar1 = false;
              if (cVar3 != '\0') goto LAB_100552267;
            }
            QString::toUtf8();
            lVar10 = *(long *)(local_1e8 + 0x10);
            QString::toUtf8();
            FUN_1008e3970("","TransMem",0,
                          "CGuestMemoryMapped::execute() failed to copy image %s -> %s",
                          local_1e8 + lVar10,local_1f0 + *(long *)(local_1f0 + 0x10));
            if (*(int *)local_1f0 != -1) {
              if (*(int *)local_1f0 != 0) {
                LOCK();
                *(int *)local_1f0 = *(int *)local_1f0 + -1;
                local_31 = *(int *)local_1f0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005521ad;
              }
              QArrayData::deallocate(local_1f0,1,8);
            }
LAB_1005521ad:
            bVar1 = true;
            if (*(int *)local_1e8 != -1) {
              if (*(int *)local_1e8 != 0) {
                LOCK();
                *(int *)local_1e8 = *(int *)local_1e8 + -1;
                local_31 = *(int *)local_1e8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100552267;
              }
              QArrayData::deallocate(local_1e8,1,8);
            }
          }
        }
LAB_100552267:
        FUN_100546d50(local_1d0);
      }
LAB_100552273:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005522a9;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1005522a9:
      FUN_1007614a0(local_128);
      uVar8 = 0;
      if (bVar1) goto LAB_1005522bd;
    }
    else {
      cVar3 = FUN_10054c040(local_108);
      if (cVar3 == '\0') {
        QString::toUtf8();
        FUN_1008e3970("","TransMem",0,"CGuestMemoryMapped::execute() failed to init image %s",
                      local_110 + *(long *)(local_110 + 0x10));
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005522bd;
          }
          QArrayData::deallocate(local_110,1,8);
        }
      }
      else {
        cVar3 = FUN_10054d010(local_108,*(undefined8 *)(param_1 + 0x28));
        if (cVar3 == '\0') {
          cVar3 = '\0';
        }
        else {
          cVar3 = FUN_10054eed0(local_108);
        }
        uVar8 = 0;
        (**(code **)(**(long **)(param_1 + 0x28) + 0x20))(*(long **)(param_1 + 0x28),0);
        if (cVar3 != '\0') goto LAB_100552320;
        QString::toUtf8();
        FUN_1008e3970("","TransMem",0,"CGuestMemoryMapped::execute() failed to save image %s",
                      local_118 + *(long *)(local_118 + 0x10));
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005522bd;
          }
          QArrayData::deallocate(local_118,1,8);
        }
      }
LAB_1005522bd:
      FUN_1007614d0(local_60);
      QString::toUtf8();
      FUN_100761940(local_1f8 + *(long *)(local_1f8 + 0x10));
      uVar8 = 0x80000009;
      if (*(int *)local_1f8 != -1) {
        if (*(int *)local_1f8 != 0) {
          LOCK();
          *(int *)local_1f8 = *(int *)local_1f8 + -1;
          local_31 = *(int *)local_1f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100552320;
        }
        QArrayData::deallocate(local_1f8,1,8);
      }
    }
LAB_100552320:
    FUN_100546d50(local_108);
  }
LAB_10055232c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055235c;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10055235c:
  FUN_1007614a0(local_60);
  return uVar8;
}

