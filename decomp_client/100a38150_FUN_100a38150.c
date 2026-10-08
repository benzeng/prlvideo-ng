
void FUN_100a38150(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  QString QVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  QArrayData *pQVar8;
  undefined4 uVar9;
  undefined4 local_f8 [2];
  QArrayData *local_f0;
  undefined4 local_e8;
  int *local_e0;
  QArrayData *local_d8;
  undefined4 local_d0 [2];
  QArrayData *local_c8;
  undefined4 local_c0;
  int *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar2 = DAT_1023112a8;
  puVar1 = PTR_shared_null_1021e1288;
  if (DAT_1023112a8 == 0) {
    return;
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QUrl::toString(&local_58,param_1,0);
  local_60 = (QArrayData *)QString::fromAscii_helper("prlql://",8);
  cVar4 = QString::startsWith(&local_58,&local_60,1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a381e8;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a381e8:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a38218;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a38218:
  if (cVar4 == '\0') {
    QUrl::toString(&local_78,param_1,0);
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
    }
    local_38 = (QArrayData *)QString::fromAscii_helper("%23",3);
    local_40 = (QArrayData *)QString::fromAscii_helper("#",1);
    QString::replace(&local_70,&local_38,&local_40,1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a3838a;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100a3838a:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a383ba;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_100a383ba:
    QString::operator=(&local_50,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a383f7;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100a383f7:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a38427;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
  else {
    QUrl::toEncoded(&local_68,param_1,0x1f00000);
    pQVar8 = local_68 + *(long *)(local_68 + 0x10);
    if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_68 + 4) != 0)) {
      lVar7 = 0;
      do {
        if (pQVar8[lVar7] == (QArrayData)0x0) break;
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < *(uint *)(local_68 + 4));
      if ((int)lVar7 == -1) {
        _strlen((char *)pQVar8);
      }
    }
    QString::fromUtf8_helper((char *)&local_48,(int)pQVar8);
    QString::operator=(&local_50,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a382b6;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100a382b6:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a38427;
      }
      QArrayData::deallocate(local_68,1,8);
    }
  }
LAB_100a38427:
  local_80 = (QArrayData *)puVar1;
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  cVar4 = FUN_100a39020(&local_50,0x3a,&local_80,&local_88);
  if (cVar4 == '\0') goto LAB_100a38965;
  local_90 = (QArrayData *)QString::fromAscii_helper("prli",4);
  iVar5 = QString::compare(&local_80,&local_90,1);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a384b2;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100a384b2:
  if (iVar5 == 0) {
    local_98 = (QArrayData *)QString::fromAscii_helper("A20E1BFF69F24FAF96A7D6D032BE8B87:1/",0x23);
    cVar4 = QString::startsWith(&local_88,&local_98,1);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a386e2;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100a386e2:
    uVar9 = 1;
    if (cVar4 != '\0') {
      uVar9 = 0x11;
    }
    local_a0 = (QArrayData *)QString::fromAscii_helper("A20E1BFF69F24FAF96A7D6D032BE8B87",0x20);
    cVar4 = QString::startsWith(&local_88,&local_a0,1);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a38758;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100a38758:
    if (cVar4 != '\0') {
      local_a8 = (QArrayData *)puVar1;
      local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
      cVar4 = FUN_100a39020(&local_88,0x2f,&local_a8,&local_b0);
      if (cVar4 != '\0') {
        QString::operator=(&local_88,&local_b0);
      }
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_29 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a387db;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_100a387db:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_29 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a38811;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100a38811:
      if (cVar4 == '\0') goto LAB_100a38965;
    }
    QVar3.field0_0x0 = local_88.field0_0x0;
    if (*(int *)(local_88.field0_0x0 + 4) == 0) goto LAB_100a38965;
    local_b8 = (int *)PTR_shared_null_1021e15e8;
    if (1 < *(int *)local_88.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
    }
    local_d0[0] = 2;
    local_c8 = (QArrayData *)local_88.field0_0x0;
    if (1 < *(int *)local_88.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
    }
    local_c0 = uVar9;
    FUN_100a3f200(&local_b8,local_d0);
    if (*(int *)QVar3.field0_0x0 != -1) {
      if (*(int *)QVar3.field0_0x0 == 0) {
LAB_100a3889b:
        QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
      }
      else {
        LOCK();
        *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + -1;
        local_29 = *(int *)QVar3.field0_0x0 != 0;
        UNLOCK();
        if (!(bool)local_29) goto LAB_100a3889b;
      }
      if (*(int *)QVar3.field0_0x0 != -1) {
        if (*(int *)QVar3.field0_0x0 != 0) {
          LOCK();
          *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + -1;
          local_29 = *(int *)QVar3.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a388d8;
        }
        QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
      }
    }
LAB_100a388d8:
    if (DAT_102310a08 == (void *)0x0) {
      pvVar6 = operator_new(0x220);
      FUN_1007cc3f0(pvVar6);
      DAT_102273890 = 1;
      DAT_102310a08 = pvVar6;
    }
    FUN_1007d45f0(DAT_102310a08);
    FUN_100a39180(lVar2,&local_b8);
    if (*local_b8 != -1) {
      if (*local_b8 != 0) {
        LOCK();
        *local_b8 = *local_b8 + -1;
        local_29 = *local_b8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a38965;
      }
      FUN_100a3fda0(&local_b8,local_b8);
    }
  }
  else {
    local_d8 = (QArrayData *)QString::fromAscii_helper("prlql",5);
    iVar5 = QString::compare(&local_80,&local_d8,1);
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a3851f;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_100a3851f:
    if (iVar5 == 0) {
      FUN_100a45d60(lVar2 + 0x90,&local_88);
    }
    else {
      cVar4 = FUN_100a39370(lVar2,&local_80,&local_50);
      QVar3.field0_0x0 = local_50.field0_0x0;
      if (cVar4 == '\0') {
        local_e0 = (int *)PTR_shared_null_1021e15e8;
        iVar5 = *(int *)local_50.field0_0x0;
        if (1 < iVar5 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_29 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          iVar5 = *(int *)local_50.field0_0x0;
        }
        local_f8[0] = 2;
        local_f0 = (QArrayData *)local_50.field0_0x0;
        if (1 < iVar5 + 1U) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
          local_29 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
        }
        local_e8 = 0;
        FUN_100a3f200(&local_e0,local_f8);
        if (*(int *)QVar3.field0_0x0 != -1) {
          if (*(int *)QVar3.field0_0x0 == 0) {
LAB_100a385bb:
            QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
          }
          else {
            LOCK();
            *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + -1;
            local_29 = *(int *)QVar3.field0_0x0 != 0;
            UNLOCK();
            if (!(bool)local_29) goto LAB_100a385bb;
          }
          if (*(int *)QVar3.field0_0x0 != -1) {
            if (*(int *)QVar3.field0_0x0 != 0) {
              LOCK();
              *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + -1;
              local_29 = *(int *)QVar3.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100a385f8;
            }
            QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
          }
        }
LAB_100a385f8:
        if (DAT_102310a08 == (void *)0x0) {
          pvVar6 = operator_new(0x220);
          FUN_1007cc3f0(pvVar6);
          DAT_102273890 = 1;
          DAT_102310a08 = pvVar6;
        }
        FUN_1007d45f0(DAT_102310a08);
        FUN_100a39180(lVar2,&local_e0);
        if (*local_e0 != -1) {
          if (*local_e0 != 0) {
            LOCK();
            *local_e0 = *local_e0 + -1;
            local_29 = *local_e0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a38965;
          }
          FUN_100a3fda0(&local_e0,local_e0);
        }
      }
    }
  }
LAB_100a38965:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a38995;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100a38995:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a389c5;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100a389c5:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

