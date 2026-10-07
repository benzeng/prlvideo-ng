
int FUN_10055cae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  char cVar4;
  QArrayData *pQVar5;
  undefined2 *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined4 uVar11;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  long local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar1 = *(undefined1 *)(param_1 + 0x60);
  uVar2 = *(undefined1 *)(param_1 + 0x38);
  QString::toUtf8();
  pQVar5 = local_40 + *(long *)(local_40 + 0x10);
  FUN_1008e3970("","TransMem",0,"CSnapshotCryptTransaction::execute(%d -> %d, %s)",uVar2,uVar1,
                pQVar5);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055cb82;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10055cb82:
  cVar4 = FUN_10055c9b0(param_1 + 0x88,param_1 + 0x38);
  if (cVar4 == '\0') {
    return -0x7ffffff7;
  }
  cVar4 = FUN_10055c9b0(param_1 + 0x90,param_1 + 0x60);
  if (cVar4 == '\0') {
    return -0x7ffffff7;
  }
  FUN_100761480(local_48);
  FUN_100761480(local_50);
  QString::toUtf8();
  uVar10 = (ulong)pQVar5 & 0xffffffff00000000;
  cVar4 = FUN_100761540(local_48,local_58 + *(long *)(local_58 + 0x10),1,1,1,0,uVar10);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055cc33;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10055cc33:
  if (cVar4 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CSnapshotCryptTransaction::execute() failed to open file %s",
                  local_60 + *(long *)(local_60 + 0x10));
    iVar9 = -0x7ffffff7;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055d32a;
      }
      QArrayData::deallocate(local_60,1,8);
    }
    goto LAB_10055d32a;
  }
  QString::toUtf8();
  uVar10 = uVar10 & 0xffffffff00000000;
  cVar4 = FUN_100761540(local_50,local_68 + *(long *)(local_68 + 0x10),0,0,1,0,uVar10);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055cca8;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10055cca8:
  if (cVar4 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CSnapshotCryptTransaction::execute() failed to open file %s",
                  local_70 + *(long *)(local_70 + 0x10));
    iVar9 = -0x7ffffff7;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055d32a;
      }
      QArrayData::deallocate(local_70,1,8);
    }
    goto LAB_10055d32a;
  }
  puVar6 = (undefined2 *)
           FUN_100553bc0(local_48,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                         FUN_10055d740,param_1);
  if (puVar6 == (undefined2 *)0x0) {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,
                  "CSnapshotCryptTransaction::execute(%s, 0x%llX, 0x%llX) invalid swap file",
                  local_80 + *(long *)(local_80 + 0x10),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30));
    iVar8 = -0x7fffffe8;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055d2bb;
      }
      QArrayData::deallocate(local_80,1,8);
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,
                  "CSnapshotCryptTransaction::execute(%s) version=%x, %u clusters, %u blocks",
                  local_78 + *(long *)(local_78 + 0x10),*puVar6,
                  CONCAT44(uVar11,*(undefined4 *)(puVar6 + 6)),*(undefined4 *)(puVar6 + 4));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055cd53;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_10055cd53:
    lVar7 = FUN_1005540b0(puVar6);
    if (lVar7 == 0) {
      QString::toUtf8();
      pQVar5 = local_88;
      lVar3 = *(long *)(local_88 + 0x10);
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,
                    "CSnapshotCryptTransaction::execute() failed to clone swap file %s -> %s",
                    pQVar5 + lVar3,local_90 + *(long *)(local_90 + 0x10));
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10055d0ab;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_10055d0ab:
      iVar8 = -0x7ffffff7;
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10055d296;
        }
        QArrayData::deallocate(local_88,1,8);
      }
    }
    else {
      local_a8 = *(undefined4 *)(lVar7 + 0x20);
      local_b0 = param_1;
      local_a0 = param_2;
      local_98 = param_3;
      if (*(char *)(lVar7 + 3) == '\0') {
        cVar4 = FUN_10055bf60(local_48,local_50,lVar7,FUN_10055d7c0,FUN_10055d8e0,&local_b0);
        if (cVar4 == '\0') {
          QString::toUtf8();
          lVar3 = *(long *)(local_c8 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("","TransMem",0,
                        "CSnapshotCryptTransaction::execute() failed to convert swap file %s -> %s",
                        local_c8 + lVar3,local_d0 + *(long *)(local_d0 + 0x10));
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10055d25b;
            }
            QArrayData::deallocate(local_d0,1,8);
          }
LAB_10055d25b:
          iVar8 = -0x7ffffff7;
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10055d296;
            }
            QArrayData::deallocate(local_c8,1,8);
          }
          goto LAB_10055d296;
        }
      }
      else {
        cVar4 = FUN_100557b20(local_48,local_50,lVar7,FUN_10055d7c0,FUN_10055d8e0,&local_b0);
        if (cVar4 == '\0') {
          QString::toUtf8();
          lVar3 = *(long *)(local_b8 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("","TransMem",0,
                        "CSnapshotCryptTransaction::execute() failed to convert compressed swap file %s -> %s"
                        ,local_b8 + lVar3,local_c0 + *(long *)(local_c0 + 0x10));
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10055ce5c;
            }
            QArrayData::deallocate(local_c0,1,8);
          }
LAB_10055ce5c:
          iVar8 = -0x7ffffff7;
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10055d296;
            }
            QArrayData::deallocate(local_b8,1,8);
          }
          goto LAB_10055d296;
        }
      }
      cVar4 = FUN_100553ca0(lVar7,local_50,FUN_10055da00,param_1);
      iVar8 = 0;
      if (cVar4 == '\0') {
        QString::toUtf8();
        FUN_1008e3970("","TransMem",0,
                      "CSnapshotCryptTransaction::execute() failed to save swap file %s",
                      local_d8 + *(long *)(local_d8 + 0x10));
        iVar8 = -0x7ffffff7;
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10055d296;
          }
          QArrayData::deallocate(local_d8,1,8);
        }
      }
    }
LAB_10055d296:
    FUN_100554070(puVar6);
    if (lVar7 != 0) {
      FUN_100554070(lVar7);
    }
    iVar9 = 0;
    if (-1 < iVar8) goto LAB_10055d32a;
  }
LAB_10055d2bb:
  FUN_1007614d0(local_50);
  QString::toUtf8();
  FUN_100761940(local_e0 + *(long *)(local_e0 + 0x10));
  iVar9 = iVar8;
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055d32a;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_10055d32a:
  FUN_100761500(local_50);
  FUN_100761500(local_48);
  return iVar9;
}

