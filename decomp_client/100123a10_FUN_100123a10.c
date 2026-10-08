
undefined1 FUN_100123a10(long *param_1)

{
  long lVar1;
  long lVar2;
  QArrayData *pQVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  QString local_900;
  QArrayData *local_8f8;
  QArrayData *local_8f0;
  QString local_8e8;
  QArrayData *local_8e0;
  QArrayData *local_8d8;
  QArrayData *local_8d0;
  QArrayData *local_8c8;
  QString local_8c0;
  QArrayData *local_8b8;
  undefined1 local_8a9;
  undefined1 local_8a8 [88];
  char local_850 [2080];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (*(int *)(*param_1 + 4) == 0) {
    uVar4 = 0;
    FUN_100df99c0("","prl_client_app",0,"Empty application bundle ID");
    goto LAB_100123eb8;
  }
  MacUtils::findAppWithIdentifier(&local_8c0);
  if (*(int *)(local_8c0.field0_0x0 + 4) == 0) {
    uVar4 = 0;
  }
  else {
    QString::toUtf8();
    pQVar3 = local_8c8;
    lVar2 = *(long *)(local_8c8 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"%s application is found \'%s\'",pQVar3 + lVar2,
                  local_8d0 + *(long *)(local_8d0 + 0x10));
    if (*(int *)local_8d0 != -1) {
      if (*(int *)local_8d0 != 0) {
        LOCK();
        *(int *)local_8d0 = *(int *)local_8d0 + -1;
        local_8a9 = *(int *)local_8d0 != 0;
        UNLOCK();
        if ((bool)local_8a9) goto LAB_100123afb;
      }
      QArrayData::deallocate(local_8d0,1,8);
    }
LAB_100123afb:
    if (*(int *)local_8c8 != -1) {
      if (*(int *)local_8c8 != 0) {
        LOCK();
        *(int *)local_8c8 = *(int *)local_8c8 + -1;
        local_8a9 = *(int *)local_8c8 != 0;
        UNLOCK();
        if ((bool)local_8a9) goto LAB_100123b37;
      }
      QArrayData::deallocate(local_8c8,1,8);
    }
LAB_100123b37:
    QString::normalized(&local_8b8,&local_8c0,0,0);
    QString::toUtf8();
    if (*(int *)local_8b8 != -1) {
      if (*(int *)local_8b8 != 0) {
        LOCK();
        *(int *)local_8b8 = *(int *)local_8b8 + -1;
        local_8a9 = *(int *)local_8b8 != 0;
        UNLOCK();
        if ((bool)local_8a9) goto LAB_100123b9d;
      }
      QArrayData::deallocate(local_8b8,2,8);
    }
LAB_100123b9d:
    if ((1 < *(uint *)local_8d8) || (*(long *)(local_8d8 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_8d8,*(uint *)(local_8d8 + 4) + 1,*(uint *)(local_8d8 + 8) >> 0x1f);
    }
    iVar5 = _statfs_INODE64(local_8d8 + *(long *)(local_8d8 + 0x10),local_8a8);
    if (*(int *)local_8d8 != -1) {
      if (*(int *)local_8d8 != 0) {
        LOCK();
        *(int *)local_8d8 = *(int *)local_8d8 + -1;
        local_8a9 = *(int *)local_8d8 != 0;
        UNLOCK();
        if ((bool)local_8a9) goto LAB_100123c1c;
      }
      QArrayData::deallocate(local_8d8,1,8);
    }
LAB_100123c1c:
    if (iVar5 == 0) {
      _strlen(local_850);
      QString::fromUtf8_helper((char *)&local_8e8,(int)local_850);
      QString::toUtf8();
      pQVar3 = local_8f0;
      lVar2 = *(long *)(local_8f0 + 0x10);
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"%s path mount point \'%s\'",pQVar3 + lVar2,
                    local_8f8 + *(long *)(local_8f8 + 0x10));
      if (*(int *)local_8f8 != -1) {
        if (*(int *)local_8f8 != 0) {
          LOCK();
          *(int *)local_8f8 = *(int *)local_8f8 + -1;
          local_8a9 = *(int *)local_8f8 != 0;
          UNLOCK();
          if ((bool)local_8a9) goto LAB_100123d71;
        }
        QArrayData::deallocate(local_8f8,1,8);
      }
LAB_100123d71:
      if (*(int *)local_8f0 != -1) {
        if (*(int *)local_8f0 != 0) {
          LOCK();
          *(int *)local_8f0 = *(int *)local_8f0 + -1;
          local_8a9 = *(int *)local_8f0 != 0;
          UNLOCK();
          if ((bool)local_8a9) goto LAB_100123dad;
        }
        QArrayData::deallocate(local_8f0,1,8);
      }
LAB_100123dad:
      QDir::rootPath();
      uVar4 = operator==(&local_900,&local_8e8);
      if (*(int *)local_900.field0_0x0 != -1) {
        if (*(int *)local_900.field0_0x0 != 0) {
          LOCK();
          *(int *)local_900.field0_0x0 = *(int *)local_900.field0_0x0 + -1;
          local_8a9 = *(int *)local_900.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_8a9) goto LAB_100123e0a;
        }
        QArrayData::deallocate((QArrayData *)local_900.field0_0x0,2,8);
      }
LAB_100123e0a:
      if (*(int *)local_8e8.field0_0x0 != -1) {
        if (*(int *)local_8e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_8e8.field0_0x0 = *(int *)local_8e8.field0_0x0 + -1;
          local_8a9 = *(int *)local_8e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_8a9) goto LAB_100123e83;
        }
        QArrayData::deallocate((QArrayData *)local_8e8.field0_0x0,2,8);
      }
    }
    else {
      QString::toUtf8();
      pQVar3 = local_8e0;
      lVar2 = *(long *)(local_8e0 + 0x10);
      piVar6 = ___error();
      FUN_100df99c0("","prl_client_app",0,"Failed to get the mount point for \'%s\', 0x%x",
                    pQVar3 + lVar2,*piVar6);
      if (*(int *)local_8e0 == -1) {
        uVar4 = 0;
      }
      else {
        if (*(int *)local_8e0 != 0) {
          LOCK();
          *(int *)local_8e0 = *(int *)local_8e0 + -1;
          local_8a9 = *(int *)local_8e0 != 0;
          UNLOCK();
          if ((bool)local_8a9) {
            uVar4 = 0;
            goto LAB_100123e83;
          }
        }
        QArrayData::deallocate(local_8e0,1,8);
        uVar4 = 0;
      }
    }
  }
LAB_100123e83:
  if (*(int *)local_8c0.field0_0x0 != -1) {
    if (*(int *)local_8c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_8c0.field0_0x0 = *(int *)local_8c0.field0_0x0 + -1;
      local_8a9 = *(int *)local_8c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_8a9) goto LAB_100123eb8;
    }
    QArrayData::deallocate((QArrayData *)local_8c0.field0_0x0,2,8);
  }
LAB_100123eb8:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

