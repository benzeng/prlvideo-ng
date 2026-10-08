
undefined1 FUN_100105850(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uid_t uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined1 uVar7;
  long lVar8;
  QArrayData *pQVar9;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QProcess local_48 [16];
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    return 0;
  }
  local_38 = (QArrayData *)*param_3;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::replace(&local_38,0x5c,0x2f,1);
  iVar3 = QString::indexOf((QRegExp *)&local_38,0x2312088);
  if (iVar3 != -1) {
    if (DAT_10230ffd0 < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      FUN_100df99c0("","prl_client_app",3,"system program executed");
    }
    goto LAB_100105abe;
  }
  uVar4 = _geteuid();
  puVar5 = (undefined8 *)_getpwuid(uVar4);
  if (puVar5 == (undefined8 *)0x0) {
    uVar7 = 0;
    goto LAB_100105abe;
  }
  QProcess::QProcess(local_48,(QObject *)0x0);
  local_58 = (QArrayData *)
             QString::fromAscii_helper
                       ("dscl . mcxread /Users/%1 com.apple.applicationaccess.new whiteList",0x42);
  pcVar1 = (char *)*puVar5;
  iVar3 = -1;
  if (pcVar1 != (char *)0x0) {
    sVar6 = _strlen(pcVar1);
    iVar3 = (int)sVar6;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar3);
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100105970;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100105970:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001059a0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1001059a0:
  QProcess::start(local_48,&local_50,3);
  cVar2 = QProcess::waitForStarted((int)local_48);
  if ((cVar2 == '\0') || (cVar2 = QProcess::waitForFinished((int)local_48), cVar2 == '\0')) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",1,"dscl mcxread failed");
    }
    QProcess::close();
    uVar7 = 0;
  }
  else {
    iVar3 = QProcess::exitCode();
    if (iVar3 == 0) {
      QProcess::readAllStandardOutput();
      lVar8 = 0;
      pQVar9 = local_70 + *(long *)(local_70 + 0x10);
      if ((pQVar9 != (QArrayData *)0x0) && (*(uint *)(local_70 + 4) != 0)) {
        lVar8 = 0;
        do {
          if (pQVar9[lVar8] == (QArrayData)0x0) break;
          lVar8 = lVar8 + 1;
        } while ((uint)lVar8 < *(uint *)(local_70 + 4));
      }
      local_68.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pQVar9,(int)lVar8);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_21 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100105b66;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_100105b66:
      iVar3 = QString::indexOf(&local_68,param_2,0,1);
      if (iVar3 == -1) {
        local_80 = (QArrayData *)
                   QString::fromAscii_helper
                             ("dscl . mcxread /Users/%1 com.apple.applicationaccess.new familyControlsEnabled"
                              ,0x4e);
        pcVar1 = (char *)*puVar5;
        iVar3 = -1;
        if (pcVar1 != (char *)0x0) {
          sVar6 = _strlen(pcVar1);
          iVar3 = (int)sVar6;
        }
        local_88 = (QArrayData *)QString::fromAscii_helper(pcVar1,iVar3);
        QString::arg(&local_78,&local_80,&local_88,0,0x20);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_21 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100105c1e;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100105c1e:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_21 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100105c4e;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100105c4e:
        QProcess::start(local_48,&local_78,3);
        cVar2 = QProcess::waitForStarted((int)local_48);
        if ((cVar2 == '\0') || (cVar2 = QProcess::waitForFinished((int)local_48), cVar2 == '\0')) {
          if (0 < DAT_10230ffd0) {
            FUN_100df99c0("","prl_client_app",1,"dscl mcxread failed");
          }
          QProcess::close();
          uVar7 = 0;
        }
        else {
          iVar3 = QProcess::exitCode();
          if (iVar3 == 0) {
            QProcess::readAllStandardOutput();
            pQVar9 = local_90 + *(long *)(local_90 + 0x10);
            if ((pQVar9 != (QArrayData *)0x0) && (*(uint *)(local_90 + 4) != 0)) {
              lVar8 = 0;
              do {
                if (pQVar9[lVar8] == (QArrayData)0x0) break;
                lVar8 = lVar8 + 1;
              } while ((uint)lVar8 < *(uint *)(local_90 + 4));
              if ((int)lVar8 == -1) {
                _strlen((char *)pQVar9);
              }
            }
            QString::fromUtf8_helper((char *)&local_30,(int)pQVar9);
            QString::operator=(&local_68,&local_30);
            if (*(int *)local_30.field0_0x0 != -1) {
              if (*(int *)local_30.field0_0x0 != 0) {
                LOCK();
                *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
                local_21 = *(int *)local_30.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_21) goto LAB_100105e65;
              }
              QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
            }
LAB_100105e65:
            if (*(int *)local_90 != -1) {
              if (*(int *)local_90 != 0) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + -1;
                local_21 = *(int *)local_90 != 0;
                UNLOCK();
                if ((bool)local_21) goto LAB_100105e9b;
              }
              QArrayData::deallocate(local_90,1,8);
            }
LAB_100105e9b:
            local_98 = (QArrayData *)QString::fromAscii_helper("1",1);
            iVar3 = QString::indexOf(&local_68,&local_98,0,1);
            if (*(int *)local_98 != -1) {
              if (*(int *)local_98 != 0) {
                LOCK();
                *(int *)local_98 = *(int *)local_98 + -1;
                local_21 = *(int *)local_98 != 0;
                UNLOCK();
                if ((bool)local_21) goto LAB_100105f03;
              }
              QArrayData::deallocate(local_98,2,8);
            }
LAB_100105f03:
            uVar7 = 1;
            if (iVar3 == -1) {
              if (DAT_10230ffd0 < 3) {
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                FUN_100df99c0("","prl_client_app",3,"dscl: application control is off");
              }
            }
          }
          else if (DAT_10230ffd0 < 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            FUN_100df99c0("","prl_client_app",1,"dscl can\'t get settings");
          }
        }
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_21 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_100105d57;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
      else if (DAT_10230ffd0 < 3) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        FUN_100df99c0("","prl_client_app",3,"dscl: application allowed");
      }
LAB_100105d57:
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_21 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100105a79;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
    }
    else if (DAT_10230ffd0 < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      FUN_100df99c0("","prl_client_app",1,"dscl can\'t get settings");
    }
  }
LAB_100105a79:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100105aa9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100105aa9:
  QProcess::~QProcess(local_48);
LAB_100105abe:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar7;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar7;
}

