
undefined1 FUN_1000468e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  QArrayData *local_90;
  utimbuf local_88;
  QArrayData *local_78;
  QString local_70;
  undefined1 local_68 [8];
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  undefined1 local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_100ab7410(local_48,0);
  FUN_100ab78a0(local_48,param_2);
  uVar4 = FUN_100ab7900();
  uVar5 = FUN_100ab7a20();
  FUN_100ab7880(local_48,uVar4,uVar5);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_29 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1db695b);
  QString::append(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100046997;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100046997:
  cVar3 = FUN_100ab78e0(local_48,&local_50);
  if (cVar3 == '\0') {
    QString::toUtf8();
    pQVar2 = local_58;
    lVar1 = *(long *)(local_58 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",0,
                  "Error: failed to save document icon \"%s\" for helper \"%s\"",pQVar2 + lVar1,
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100046b64;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_100046b64:
    if (*(int *)local_58 == -1) {
      uVar6 = 0;
    }
    else {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) {
          uVar6 = 0;
          goto LAB_100046c4c;
        }
      }
      QArrayData::deallocate(local_58,1,8);
      uVar6 = 0;
    }
  }
  else {
    FUN_100ab71b0(local_68);
    FUN_100ab7640(local_68,param_2);
    FUN_100ab78c0(local_68,0x80);
    uVar4 = FUN_100ab7900();
    uVar5 = FUN_100ab7a20();
    FUN_100ab7880(local_68,uVar4,uVar5);
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
    if (1 < *(int *)local_70.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0x1db69ba);
    QString::append(&local_70);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100046a55;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_100046a55:
    cVar3 = FUN_100ab78e0(local_68,&local_70);
    if (cVar3 == '\0') {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",0,"Error: failed to save helper icon \"%s\"",
                    local_78 + *(long *)(local_78 + 0x10));
      if (*(int *)local_78 == -1) {
        uVar6 = 0;
      }
      else {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) {
            uVar6 = 0;
            goto LAB_100046c13;
          }
        }
        QArrayData::deallocate(local_78,1,8);
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 1;
      if (param_3 != 0) {
        local_88.actime = param_3;
        local_88.modtime = param_3;
        QString::toUtf8();
        _utime((char *)(local_90 + *(long *)(local_90 + 0x10)),&local_88);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_29 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100046c13;
          }
          QArrayData::deallocate(local_90,1,8);
        }
      }
    }
LAB_100046c13:
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100046c43;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100046c43:
    FUN_100ab75f0(local_68);
  }
LAB_100046c4c:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100046c7c;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100046c7c:
  FUN_100ab75f0(local_48);
  return uVar6;
}

