
void FUN_1004f2f20(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  long lVar7;
  int *piVar8;
  QString local_c78;
  QArrayData *local_c70;
  QArrayData *local_c68;
  QString local_c60;
  QString local_c58;
  QString local_c50;
  QArrayData *local_c48;
  undefined1 local_c39;
  char local_c38 [1024];
  char local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar7;
  QString::left((int)&local_c48);
  QString::toUtf8_helper(&local_c50);
  _strcpy(local_438,(char *)(local_c50.field0_0x0 + *(long *)(local_c50.field0_0x0 + 0x10)));
  if (*(int *)local_c50.field0_0x0 != -1) {
    if (*(int *)local_c50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c50.field0_0x0 = *(int *)local_c50.field0_0x0 + -1;
      local_c39 = *(int *)local_c50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_c39) goto LAB_1004f2fcd;
    }
    QArrayData::deallocate((QArrayData *)local_c50.field0_0x0,1,8);
  }
LAB_1004f2fcd:
  lVar3 = _opendir_INODE64(local_438);
  if (lVar3 != 0) {
    sVar4 = _strlen(local_438);
    local_438[sVar4] = '/';
    QString::toUtf8_helper(&local_c58);
    _strcpy(local_838,(char *)(local_c58.field0_0x0 + *(long *)(local_c58.field0_0x0 + 0x10)));
    if (*(int *)local_c58.field0_0x0 != -1) {
      if (*(int *)local_c58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c58.field0_0x0 = *(int *)local_c58.field0_0x0 + -1;
        local_c39 = *(int *)local_c58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_c39) goto LAB_1004f3065;
      }
      QArrayData::deallocate((QArrayData *)local_c58.field0_0x0,1,8);
    }
LAB_1004f3065:
    sVar5 = _strlen(local_838);
    local_838[sVar5] = '/';
    QString::toUtf8_helper(&local_c60);
    _strcpy(local_c38,(char *)(local_c60.field0_0x0 + *(long *)(local_c60.field0_0x0 + 0x10)));
    if (*(int *)local_c60.field0_0x0 != -1) {
      if (*(int *)local_c60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c60.field0_0x0 = *(int *)local_c60.field0_0x0 + -1;
        local_c39 = *(int *)local_c60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_c39) goto LAB_1004f30e2;
      }
      QArrayData::deallocate((QArrayData *)local_c60.field0_0x0,1,8);
    }
LAB_1004f30e2:
    sVar6 = _strlen(local_c38);
    local_c38[sVar6] = '/';
LAB_1004f3140:
    lVar7 = _readdir_INODE64(lVar3);
    if (lVar7 != 0) {
      if (((1 < *(ushort *)(lVar7 + 0x12)) && (*(char *)(lVar7 + 0x15) == '$')) &&
         ((*(byte *)(lVar7 + 0x16) & 0xdf) == 0x49)) {
        _strcpy(local_438 + sVar4 + 1,(char *)(lVar7 + 0x15));
        _strlen(local_438);
        QString::fromUtf8_helper((char *)&local_c68,(int)local_438);
        local_c70 = (QArrayData *)PTR_shared_null_100ba20d0;
        cVar1 = FUN_1004f2b50(&local_c68,&local_c70);
        if (cVar1 != '\0') {
          QString::toUtf8_helper(&local_c78);
          _strcpy(local_838 + sVar5 + 1,
                  (char *)(local_c78.field0_0x0 + *(long *)(local_c78.field0_0x0 + 0x10)));
          if (*(int *)local_c78.field0_0x0 != -1) {
            if (*(int *)local_c78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_c78.field0_0x0 = *(int *)local_c78.field0_0x0 + -1;
              local_c39 = *(int *)local_c78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_c39) goto LAB_1004f3231;
            }
            QArrayData::deallocate((QArrayData *)local_c78.field0_0x0,1,8);
          }
LAB_1004f3231:
          _strcpy(local_c38 + sVar6 + 1,(char *)(lVar7 + 0x15));
          local_438[sVar4 + 2] = 'R';
          iVar2 = FUN_1004f2e90(local_438,local_838);
          if (iVar2 == -1) {
            piVar8 = ___error();
            if ((*piVar8 != 0x11) && (0 < DAT_1011b55f8)) {
              piVar8 = ___error();
              FUN_1008e3970("","SharedFoldersHost",1,"%d: failed to move \"%s\" to \"%s\"",*piVar8,
                            local_438,local_838);
            }
          }
          else {
            local_c38[sVar6 + 2] = 'R';
            iVar2 = FUN_1004f0b70(local_838,local_c38);
            if (iVar2 == -1) {
              if (0 < DAT_1011b55f8) {
                piVar8 = ___error();
                FUN_1008e3970("","SharedFoldersHost",1,"%d: failed to create stub \"%s\" to \"%s\"",
                              *piVar8,local_c38,local_838);
              }
              iVar2 = FUN_1004f2e90(local_838,local_438);
              if (iVar2 == -1) {
                piVar8 = ___error();
                FUN_1008e3970("","SharedFoldersHost",0,
                              "%d: failed to move file \"%s\" back to \"%s\"",*piVar8,local_838,
                              local_438);
              }
            }
            else {
              local_c38[sVar6 + 2] = 'I';
              local_438[sVar4 + 2] = 'I';
              iVar2 = FUN_1004f2e90(local_438,local_c38);
              if (iVar2 == -1) {
                if (0 < DAT_1011b55f8) {
                  piVar8 = ___error();
                  FUN_1008e3970("","SharedFoldersHost",1,"%d: failed to move \"%s\" to \"%s\"",
                                *piVar8,local_438,local_c38);
                }
                local_c38[sVar6 + 2] = 'R';
                _unlink(local_c38);
                local_438[sVar4 + 2] = 'R';
                iVar2 = FUN_1004f2e90(local_838,local_438);
                if (iVar2 == -1) {
                  piVar8 = ___error();
                  FUN_1008e3970("","SharedFoldersHost",0,
                                "%d: failed to move file \"%s\" back to \"%s\"",*piVar8,local_838,
                                local_438);
                }
              }
            }
          }
        }
        if (*(int *)local_c70 != -1) {
          if (*(int *)local_c70 != 0) {
            LOCK();
            *(int *)local_c70 = *(int *)local_c70 + -1;
            local_c39 = *(int *)local_c70 != 0;
            UNLOCK();
            if ((bool)local_c39) goto LAB_1004f3474;
          }
          QArrayData::deallocate(local_c70,2,8);
        }
LAB_1004f3474:
        if (*(int *)local_c68 != -1) {
          if (*(int *)local_c68 != 0) {
            LOCK();
            *(int *)local_c68 = *(int *)local_c68 + -1;
            local_c39 = *(int *)local_c68 != 0;
            UNLOCK();
            if ((bool)local_c39) goto LAB_1004f3140;
          }
          QArrayData::deallocate(local_c68,2,8);
        }
      }
      goto LAB_1004f3140;
    }
    _closedir(lVar3);
    lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (*(int *)local_c48 != -1) {
    if (*(int *)local_c48 != 0) {
      LOCK();
      *(int *)local_c48 = *(int *)local_c48 + -1;
      local_438[0] = *(int *)local_c48 != 0;
      UNLOCK();
      if ((bool)local_438[0]) goto LAB_1004f3500;
    }
    QArrayData::deallocate(local_c48,2,8);
  }
LAB_1004f3500:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

