
bool FUN_10053b390(ulong param_1,QString *param_2,QString *param_3,QString *param_4,
                  undefined4 param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  pid_t pVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  pid_t pVar11;
  bool bVar12;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QTypedArrayData<unsigned_short> *local_270;
  QArrayData *local_268;
  pid_t local_260;
  int local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  uint local_240 [129];
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  cVar2 = QThread::isRunning();
  if (cVar2 != '\0') {
    cVar2 = QThread::isRunning();
    pcVar8 = "false";
    if (cVar2 != '\0') {
      pcVar8 = "true";
    }
    FUN_1008e3970("","InvSharingHost",0,"The worker is busy, mount disallowed: isRunning = %s",
                  pcVar8);
    return false;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 0x18) + 4) == 0) {
    FUN_1008e3970("","InvSharingHost",0,"Couldn\'t determine vfstool path");
    return false;
  }
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  local_260 = 0;
  local_268 = *(QArrayData **)(lVar1 + 0x18);
  if (1 < *(int *)local_268 + 1U) {
    LOCK();
    *(int *)local_268 = *(int *)local_268 + 1;
    local_31 = *(int *)local_268 != 0;
    UNLOCK();
  }
  local_270 = param_2->field0_0x0;
  if (1 < *(int *)local_270 + 1U) {
    LOCK();
    *(int *)local_270 = *(int *)local_270 + 1;
    local_31 = *(int *)local_270 != 0;
    UNLOCK();
  }
  local_278 = (QArrayData *)param_3->field0_0x0;
  if (1 < *(int *)local_278 + 1U) {
    LOCK();
    *(int *)local_278 = *(int *)local_278 + 1;
    local_31 = *(int *)local_278 != 0;
    UNLOCK();
  }
  cVar2 = FUN_10053bee0(&local_268,&local_270,&local_278,param_5,&local_260,&local_25c);
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_31 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053b504;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_10053b504:
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053b541;
    }
    QArrayData::deallocate((QArrayData *)local_270,2,8);
  }
LAB_10053b541:
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053b577;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_10053b577:
  if (cVar2 == '\0') {
    if (DAT_1011b55f8 < 1) {
      bVar12 = false;
    }
    else {
      bVar12 = false;
      FUN_1008e3970("","InvSharingHost",1,"execVfstool() failed");
    }
    goto LAB_10053bc03;
  }
  *(int *)(param_1 + 0x68) = local_25c;
  iVar3 = 1;
  iVar9 = 0;
  iVar5 = 0;
  if (local_25c != -1) {
    iVar10 = local_25c;
    do {
      iVar3 = -0x16;
      iVar5 = iVar9;
      if (0xfff < iVar10) break;
      ___bzero(local_240,0x200);
      local_258 = 0;
      uStack_250 = 0;
      local_240[(ulong)(long)iVar10 >> 5] =
           local_240[(ulong)(long)iVar10 >> 5] | 1 << ((byte)iVar10 & 0x1f);
      iVar3 = _select_DARWIN_EXTSN(iVar10 + 1,local_240,0,0,&local_258);
      if (iVar3 == -1) {
        piVar6 = ___error();
        iVar3 = -*piVar6;
      }
      if (iVar3 != 0) break;
      QThread::msleep(100);
      pVar11 = local_260;
      iVar9 = iVar9 + 100;
      if (29999 < iVar9) {
        cVar2 = FUN_10053d2d0(local_260);
        if (0 < DAT_1011b55f8) {
          QString::toUtf8();
          pcVar8 = "an error";
          if (cVar2 != '\0') {
            pcVar8 = "success";
          }
          FUN_1008e3970("","InvSharingHost",1,
                        "mount of \"%s\" has %s, attempted to terminate vfstool(%d) with %s",
                        local_280 + *(long *)(local_280 + 0x10),"timed out",pVar11,pcVar8);
          if (*(int *)local_280 != -1) {
            if (*(int *)local_280 != 0) {
              LOCK();
              *(int *)local_280 = *(int *)local_280 + -1;
              local_31 = *(int *)local_280 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10053b817;
            }
            QArrayData::deallocate(local_280,1,8);
          }
        }
LAB_10053b817:
        local_260 = 0;
        iVar3 = 0;
        goto LAB_10053b824;
      }
      iVar10 = *(int *)(param_1 + 0x68);
      iVar3 = 1;
      iVar5 = iVar9;
    } while (iVar10 != -1);
  }
  pVar11 = local_260;
  pVar4 = _waitpid(local_260,&local_3c,1);
  iVar9 = iVar5;
  if (pVar4 == pVar11) {
    local_260 = 0;
  }
  else if (pVar11 != 0) {
    *(undefined1 *)(param_1 + 0x75) = 1;
    QThread::start(param_1,7);
    uVar7 = 0xffffff9c;
    while (*(char *)(param_1 + 0x75) != '\0') {
      uVar7 = uVar7 + 100;
      if (9999 < uVar7) {
        if (DAT_1011b55f8 < 1) break;
        QString::toUtf8();
        FUN_1008e3970("","InvSharingHost",1,
                      "the wait for mount completion has timed out, vfstool pid is %d, mp is \"%s\""
                      ,pVar11,local_298 + *(long *)(local_298 + 0x10));
        if (*(int *)local_298 == -1) break;
        if (*(int *)local_298 != 0) {
          LOCK();
          *(int *)local_298 = *(int *)local_298 + -1;
          local_31 = *(int *)local_298 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_298,1,8);
        break;
      }
      pVar4 = _waitpid(pVar11,&local_38,1);
      if (pVar4 == pVar11) {
        local_260 = 0;
        pVar11 = 0;
        if (0 < DAT_1011b55f8) {
          pVar11 = 0;
          FUN_1008e3970("","InvSharingHost",1,
                        "the vfstool(%d) has stopped before the mount complete",0);
        }
        break;
      }
      QThread::msleep(100);
    }
    if (*(char *)(param_1 + 0x74) == '\0') {
      LOCK();
      iVar3 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = 0;
      UNLOCK();
      if (iVar3 != 0) {
        QSemaphore::release((int)param_1 + 0x38);
      }
      QThread::wait(param_1);
      *(undefined1 *)(param_1 + 0x75) = 0;
      FUN_1008e3970("","InvSharingHost",0,"mount failed");
      QString::toUtf8();
      iVar5 = _unmount((char *)(local_2a0 + *(long *)(local_2a0 + 0x10)),0x80000);
      iVar3 = 0;
      if (iVar5 == -1) {
        piVar6 = ___error();
        iVar3 = *piVar6;
      }
      if (*(int *)local_2a0 != -1) {
        if (*(int *)local_2a0 != 0) {
          LOCK();
          *(int *)local_2a0 = *(int *)local_2a0 + -1;
          local_31 = *(int *)local_2a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10053bb44;
        }
        QArrayData::deallocate(local_2a0,1,8);
      }
LAB_10053bb44:
      if (((0 < DAT_1011b55f8) && (iVar3 != 0)) && (iVar3 != 0x16)) {
        QString::toUtf8();
        lVar1 = *(long *)(local_2a8 + 0x10);
        pcVar8 = _strerror(iVar3);
        FUN_1008e3970("","InvSharingHost",1,"failed to unmount the dead fs (%s): %s",
                      local_2a8 + lVar1,pcVar8);
        if (*(int *)local_2a8 != -1) {
          if (*(int *)local_2a8 != 0) {
            LOCK();
            *(int *)local_2a8 = *(int *)local_2a8 + -1;
            local_31 = *(int *)local_2a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10053bbee;
          }
          QArrayData::deallocate(local_2a8,1,8);
        }
      }
LAB_10053bbee:
      if (pVar11 != 0) {
        FUN_10053d2d0(pVar11);
      }
    }
    else {
      QString::operator=((QString *)(param_1 + 0x48),param_2);
      QString::operator=((QString *)(param_1 + 0x50),param_3);
      QString::operator=((QString *)(param_1 + 0x58),param_4);
      *(pid_t *)(param_1 + 0x70) = pVar11;
    }
    bVar12 = *(char *)(param_1 + 0x74) != '\0';
    goto LAB_10053bc03;
  }
LAB_10053b824:
  FUN_1008e3970("","InvSharingHost",0,"mount failed in %d ms, sock = %d, sockready = %d.",iVar9,
                local_25c,iVar3);
  if (*(int *)(param_1 + 0x68) != -1) {
    iVar3 = _shutdown(*(int *)(param_1 + 0x68),2);
    if ((iVar3 == 0) || (piVar6 = ___error(), *piVar6 != 9)) {
      _close(*(int *)(param_1 + 0x68));
    }
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  }
  QString::toUtf8();
  iVar5 = _unmount((char *)(local_288 + *(long *)(local_288 + 0x10)),0x80000);
  iVar3 = 0;
  if (iVar5 == -1) {
    piVar6 = ___error();
    iVar3 = *piVar6;
  }
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_31 = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053b8f3;
    }
    QArrayData::deallocate(local_288,1,8);
  }
LAB_10053b8f3:
  if (DAT_1011b55f8 < 1) {
    bVar12 = false;
  }
  else {
    bVar12 = false;
    if ((iVar3 != 0) && (iVar3 != 0x16)) {
      QString::toUtf8();
      lVar1 = *(long *)(local_290 + 0x10);
      pcVar8 = _strerror(iVar3);
      FUN_1008e3970("","InvSharingHost",1,"failed to unmount the dead fs (%s): %s",local_290 + lVar1
                    ,pcVar8);
      if (*(int *)local_290 == -1) {
        bVar12 = false;
      }
      else {
        if (*(int *)local_290 != 0) {
          LOCK();
          *(int *)local_290 = *(int *)local_290 + -1;
          local_31 = *(int *)local_290 != 0;
          UNLOCK();
          if ((bool)local_31) {
            bVar12 = false;
            goto LAB_10053bc03;
          }
        }
        QArrayData::deallocate(local_290,1,8);
        bVar12 = false;
      }
    }
  }
LAB_10053bc03:
  QMutex::unlock();
  return bVar12;
}

