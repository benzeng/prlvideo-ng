
undefined1
FUN_100dc0bd0(undefined8 param_1,QString *param_2,int param_3,QProcess *param_4,code *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  long lVar6;
  undefined1 uVar7;
  QArrayData *pQVar8;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QProcess local_48 [23];
  undefined1 local_31;
  
  QProcess::QProcess(local_48,(QObject *)0x0);
  if (param_4 == (QProcess *)0x0) {
    param_4 = local_48;
  }
  QProcess::start(param_4,param_1,3);
  iVar3 = (int)param_4;
  cVar1 = QProcess::waitForStarted(iVar3);
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","HostUtils",0,"Cannot execute \'%s\' !",local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc1141;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  else {
    if (param_5 != (code *)0x0) {
      (*param_5)(param_4);
    }
    iVar2 = QProcess::state();
    cVar1 = '\x01';
    if (iVar2 != 0) {
      if (param_3 == 0) {
        cVar1 = QProcess::waitForFinished(iVar3);
      }
      else {
        cVar1 = QProcess::waitForFinished(iVar3);
      }
    }
    QProcess::readAllStandardOutput();
    pQVar8 = local_68 + *(long *)(local_68 + 0x10);
    if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_68 + 4) != 0)) {
      lVar6 = 0;
      do {
        if (pQVar8[lVar6] == (QArrayData)0x0) break;
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < *(uint *)(local_68 + 4));
      if ((int)lVar6 == -1) {
        _strlen((char *)pQVar8);
      }
    }
    QString::fromUtf8_helper((char *)&local_60,(int)pQVar8);
    QString::normalized(&local_58,&local_60,1,0);
    QString::operator=(param_2,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc0d8d;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100dc0d8d:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc0dbd;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100dc0dbd:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100dc0ded;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_100dc0ded:
    if (cVar1 == '\0') {
      QString::toUtf8();
      FUN_100df99c0("","HostUtils",0,"Timeout at finish \'%s\' !",
                    local_70 + *(long *)(local_70 + 0x10));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100dc1141;
        }
        QArrayData::deallocate(local_70,1,8);
      }
    }
    else {
      iVar3 = QProcess::exitStatus();
      if (iVar3 == 1) {
        QString::toUtf8();
        FUN_100df99c0("","HostUtils",0,"The \'%s\' was crashed !",
                      local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dc1141;
          }
          QArrayData::deallocate(local_78,1,8);
        }
      }
      else {
        iVar3 = QProcess::exitCode();
        uVar7 = 1;
        if (iVar3 == 0) goto LAB_100dc1143;
        QString::toUtf8();
        pQVar8 = local_80;
        lVar6 = *(long *)(local_80 + 0x10);
        uVar4 = QProcess::exitCode();
        FUN_100df99c0("","HostUtils",0,"The \'%s\' returned exit code: \'%d\' !",pQVar8 + lVar6,
                      uVar4);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dc0f73;
          }
          QArrayData::deallocate(local_80,1,8);
        }
LAB_100dc0f73:
        QProcess::readAllStandardError();
        if (*(int *)(local_88 + 4) != 0) {
          QByteArray::right((int)&local_90);
          QByteArray::operator=((QByteArray *)&local_88,(QByteArray *)&local_90);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc0fe8;
            }
            QArrayData::deallocate(local_90,1,8);
          }
LAB_100dc0fe8:
          local_a8 = (QArrayData *)QString::fromAscii_helper("The \'%1\' stderr:\n",0x11);
          QString::arg(&local_a0,&local_a8,param_1,0,0x20);
          QString::toUtf8();
          QByteArray::prepend((char *)&local_88);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc107b;
            }
            QArrayData::deallocate(local_98,1,8);
          }
LAB_100dc107b:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc10b1;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_100dc10b1:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100dc10e7;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_100dc10e7:
          QByteArray::append((char *)&local_88);
          pQVar8 = local_88 + *(long *)(local_88 + 0x10);
          sVar5 = _strlen((char *)pQVar8);
          FUN_100df9f70(pQVar8,sVar5 & 0xffffffff);
        }
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100dc1141;
          }
          QArrayData::deallocate(local_88,1,8);
        }
      }
    }
  }
LAB_100dc1141:
  uVar7 = 0;
LAB_100dc1143:
  QProcess::~QProcess(local_48);
  return uVar7;
}

