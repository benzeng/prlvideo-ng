
undefined8 FUN_10053a340(ulong param_1,char param_2)

{
  pid_t pVar1;
  long lVar2;
  QArrayData *pQVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  pid_t pVar7;
  int *piVar8;
  char *pcVar9;
  int local_74;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *(undefined1 *)(param_1 + 0x76) = 1;
  QMutex::lock();
  bVar4 = true;
  if (*(int *)(*(long *)(param_1 + 0x48) + 4) == 0) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","InvSharingHost",2,"not mounted");
    }
    QThread::wait(param_1);
    goto LAB_10053a90f;
  }
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x68) != -1)) {
    iVar5 = _shutdown(*(int *)(param_1 + 0x68),2);
    if ((iVar5 == 0) || (piVar8 = ___error(), *piVar8 != 9)) {
      _close(*(int *)(param_1 + 0x68));
    }
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  }
  pVar1 = *(pid_t *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x70) = 0;
  iVar5 = _kill(pVar1,0x1e);
  if (iVar5 == -1) {
    piVar8 = ___error();
    iVar5 = *piVar8;
    if (iVar5 != 0) {
      if (iVar5 == 3) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("","InvSharingHost",1,"there is no vfstool(%d) process available",pVar1);
        }
      }
      else {
        pcVar9 = _strerror(iVar5);
        FUN_1008e3970("","InvSharingHost",0,
                      "failed to schedule auto-termination for vfstool(%d): %s",pVar1,pcVar9);
      }
    }
  }
  QString::toUtf8();
  iVar6 = _unmount((char *)(local_50 + *(long *)(local_50 + 0x10)),0x80000);
  iVar5 = 0;
  if (iVar6 == -1) {
    piVar8 = ___error();
    iVar5 = *piVar8;
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053a4f6;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10053a4f6:
  if (iVar5 != 0) {
    if ((iVar5 == 2) || (iVar5 == 0x16)) {
      if (1 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("","InvSharingHost",2,"nothing to unmount at \"%s\"",
                      local_58 + *(long *)(local_58 + 0x10));
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10053a612;
          }
          QArrayData::deallocate(local_58,1,8);
        }
      }
    }
    else {
      QString::toUtf8();
      pQVar3 = local_60;
      lVar2 = *(long *)(local_60 + 0x10);
      pcVar9 = _strerror(iVar5);
      FUN_1008e3970("","InvSharingHost",0,"failed to unmount \"%s\": %s",pQVar3 + lVar2,pcVar9);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10053a612;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
  }
LAB_10053a612:
  *(undefined1 *)(param_1 + 0x74) = 0;
  LOCK();
  iVar5 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = 0;
  UNLOCK();
  if (iVar5 != 0) {
    QSemaphore::release((int)param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x68) != -1) {
    iVar5 = _shutdown(*(int *)(param_1 + 0x68),2);
    if ((iVar5 == 0) || (piVar8 = ___error(), *piVar8 != 9)) {
      _close(*(int *)(param_1 + 0x68));
    }
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  }
  if (*(undefined **)(param_1 + 0x58) != PTR_shared_null_100ba20d0) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x58),&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053a6b6;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10053a6b6:
  QString::toUtf8();
  iVar5 = _rmdir((char *)(local_68 + *(long *)(local_68 + 0x10)));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053a701;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10053a701:
  if ((iVar5 == -1) && (0 < DAT_1011b55f8)) {
    piVar8 = ___error();
    iVar5 = *piVar8;
    QString::toUtf8();
    FUN_1008e3970("","InvSharingHost",1,"failed to remove useless mountpoint: %d, %s",iVar5,
                  local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053a784;
      }
      QArrayData::deallocate(local_70,1,8);
    }
  }
LAB_10053a784:
  if (((QString *)(param_1 + 0x48))->field0_0x0 !=
      (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x48),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053a7d8;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_10053a7d8:
  QThread::wait(param_1);
  bVar4 = false;
  QMutex::unlock();
  if (pVar1 != 0) {
    pVar7 = _waitpid(pVar1,&local_74,0);
    if (pVar7 == pVar1) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","InvSharingHost",2,"UnMount: vfstool(%d) cleaned up");
      }
    }
    else if (pVar7 == 0) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("","InvSharingHost",1,"UnMount: vfstool(%d) is still running");
      }
    }
    else if (0 < DAT_1011b55f8) {
      piVar8 = ___error();
      pcVar9 = _strerror(*piVar8);
      FUN_1008e3970("","InvSharingHost",1,"UnMount: failed to wait for vfstool(%d): %s",pVar1,pcVar9
                   );
    }
  }
LAB_10053a90f:
  *(undefined1 *)(param_1 + 0x76) = 0;
  if (bVar4) {
    QMutex::unlock();
  }
  return 1;
}

