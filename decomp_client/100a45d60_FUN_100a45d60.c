
void FUN_100a45d60(long param_1,QString *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QArrayData *local_90;
  QArrayData *local_88;
  Connection local_80 [8];
  QArrayData *local_78;
  Connection local_70 [8];
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    QString::operator=((QString *)(param_1 + 0x18),param_2);
    return;
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar2 = QString::indexOf(param_2,0x3f,0,1);
  if (-1 < iVar2) {
    QString::left((int)&local_40);
    QString::operator=(&local_50,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a45e08;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100a45e08:
    QString::right((int)&local_48);
    QString::operator=(&local_58,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a45e5e;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100a45e5e:
    MacUtils::localPathForUrlString(&local_60);
    QString::operator=(&local_58,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a45ea8;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100a45ea8:
    lVar3 = FUN_100a464e0(&local_58);
    if (lVar3 == 0) {
      uVar5 = FUN_1001d50a0();
      uVar5 = FUN_1001d50d0(uVar5);
      uVar4 = FUN_100152280();
      uVar4 = FUN_1001554a0(uVar4);
      lVar3 = FUN_1001db070(uVar5,uVar4,&local_58,0x2714,0,0);
      if (lVar3 != 0) {
        local_68 = (QArrayData *)QString::fromAscii_helper("//power",7);
        iVar2 = QString::compare(&local_50,&local_68,1);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_29 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a46078;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_100a46078:
        if (iVar2 == 0) {
          QObject::connect(local_70,lVar3,"2taskFinished(PRL_RESULT)",param_1,
                           "1vmRegisteredForPower(PRL_RESULT)",0);
          QMetaObject::Connection::~Connection(local_70);
        }
        else {
          local_78 = (QArrayData *)QString::fromAscii_helper("//config",8);
          iVar2 = QString::compare(&local_50,&local_78,1);
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_29 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100a460d9;
            }
            QArrayData::deallocate(local_78,2,8);
          }
LAB_100a460d9:
          if (iVar2 == 0) {
            QObject::connect(local_80,lVar3,"2taskFinished(PRL_RESULT)",param_1,
                             "1vmRegisteredForConfig(PRL_RESULT)",0);
            QMetaObject::Connection::~Connection(local_80);
          }
        }
      }
    }
    else {
      local_88 = (QArrayData *)QString::fromAscii_helper("//power",7);
      iVar2 = QString::compare(&local_50,&local_88,1);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_29 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a45f16;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100a45f16:
      if (iVar2 == 0) {
        iVar2 = FUN_10018a9d0(lVar3);
        if (iVar2 == 0x30000004) {
          FUN_100193200(lVar3,0xc9);
        }
        else {
          FUN_100192d10(lVar3,0x27f,0,0);
        }
      }
      else {
        local_90 = (QArrayData *)QString::fromAscii_helper("//config",8);
        iVar2 = QString::compare(&local_50,&local_90,1);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_29 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a45f83;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_100a45f83:
        if (iVar2 == 0) {
          uVar5 = FUN_1006915d0();
          lVar3 = FUN_100691620(uVar5,0x3e,lVar3);
          if (lVar3 != 0) {
            QAction::activate(lVar3,0);
          }
        }
        else if (0 < DAT_10230ffd0) {
          FUN_100df99c0("SIATOOL","SIAToolClient",1,"unknown prlql command");
        }
      }
      if (*(undefined **)(param_1 + 0x18) != PTR_shared_null_1021e1288) {
        local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
        QString::operator=((QString *)(param_1 + 0x18),&local_38);
        if (*(int *)local_38.field0_0x0 != -1) {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            local_29 = *(int *)local_38.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a461e0;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
        }
      }
    }
  }
LAB_100a461e0:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a46210;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100a46210:
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

