
void FUN_100d5f7b0(char *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  FILE *pFVar6;
  char *pcVar7;
  uint *puVar8;
  QArrayData *local_4c0;
  QArrayData *local_4b8;
  QArrayData *local_4b0;
  QArrayData *local_4a8;
  QString local_4a0;
  QArrayData *local_498;
  QArrayData *local_490;
  uint *local_488;
  QArrayData *local_480;
  QArrayData *local_478;
  QArrayData *local_470;
  QString local_468;
  undefined1 local_459;
  char local_458 [1024];
  QArrayData **local_58;
  uint *local_50;
  QArrayData **local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_470 = (QArrayData *)QString::fromAscii_helper("%1/sources/ei.cfg",0x11);
  iVar4 = -1;
  if (param_1 != (char *)0x0) {
    sVar5 = _strlen(param_1);
    iVar4 = (int)sVar5;
  }
  local_478 = (QArrayData *)QString::fromAscii_helper(param_1,iVar4);
  QString::arg(&local_468,&local_470,&local_478,0,0x20);
  if (*(int *)local_478 != -1) {
    if (*(int *)local_478 != 0) {
      LOCK();
      *(int *)local_478 = *(int *)local_478 + -1;
      local_459 = *(int *)local_478 != 0;
      UNLOCK();
      if ((bool)local_459) goto LAB_100d5f872;
    }
    QArrayData::deallocate(local_478,2,8);
  }
LAB_100d5f872:
  if (*(int *)local_470 != -1) {
    if (*(int *)local_470 != 0) {
      LOCK();
      *(int *)local_470 = *(int *)local_470 + -1;
      local_459 = *(int *)local_470 != 0;
      UNLOCK();
      if ((bool)local_459) goto LAB_100d5f8ae;
    }
    QArrayData::deallocate(local_470,2,8);
  }
LAB_100d5f8ae:
  QString::toUtf8();
  pFVar6 = _fopen((char *)(local_480 + *(long *)(local_480 + 0x10)),"r");
  if (*(int *)local_480 != -1) {
    if (*(int *)local_480 != 0) {
      LOCK();
      *(int *)local_480 = *(int *)local_480 + -1;
      local_459 = *(int *)local_480 != 0;
      UNLOCK();
      if ((bool)local_459) goto LAB_100d5f91e;
    }
    QArrayData::deallocate(local_480,1,8);
  }
LAB_100d5f91e:
  if (pFVar6 == (FILE *)0x0) {
    local_490 = (QArrayData *)QString::fromAscii_helper("sources/ei.cfg",0xe);
    local_498 = (QArrayData *)QString::fromAscii_helper("/",1);
    QString::split(&local_488,&local_490,&local_498,0,1);
    if (*(int *)local_498 != -1) {
      if (*(int *)local_498 != 0) {
        LOCK();
        *(int *)local_498 = *(int *)local_498 + -1;
        local_459 = *(int *)local_498 != 0;
        UNLOCK();
        if ((bool)local_459) goto LAB_100d5f9b5;
      }
      QArrayData::deallocate(local_498,2,8);
    }
LAB_100d5f9b5:
    if (*(int *)local_490 != -1) {
      if (*(int *)local_490 != 0) {
        LOCK();
        *(int *)local_490 = *(int *)local_490 + -1;
        local_459 = *(int *)local_490 != 0;
        UNLOCK();
        if ((bool)local_459) goto LAB_100d5f9f1;
      }
      QArrayData::deallocate(local_490,2,8);
    }
LAB_100d5f9f1:
    local_4a8 = (QArrayData *)QString::fromAscii_helper("%1/%2/%3",8);
    iVar4 = -1;
    if (param_1 != (char *)0x0) {
      sVar5 = _strlen(param_1);
      iVar4 = (int)sVar5;
    }
    local_4b0 = (QArrayData *)QString::fromAscii_helper(param_1,iVar4);
    if (*local_488 < 2) {
      puVar8 = local_488 + (long)(int)local_488[2] * 2 + 4;
    }
    else {
      FUN_100036c40(&local_488,local_488[1]);
      puVar8 = local_488 + (long)(int)local_488[2] * 2 + 4;
      if (1 < *local_488) {
        FUN_100036c40(&local_488,local_488[1]);
      }
    }
    QString::toUpper();
    local_58 = &local_4b0;
    local_50 = puVar8;
    local_48 = &local_4b8;
    QString::multiArg((int)&local_4a0,(QString **)&local_4a8);
    QString::operator=(&local_468,&local_4a0);
    if (*(int *)local_4a0.field0_0x0 != -1) {
      if (*(int *)local_4a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_4a0.field0_0x0 = *(int *)local_4a0.field0_0x0 + -1;
        local_459 = *(int *)local_4a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_459) goto LAB_100d5fb16;
      }
      QArrayData::deallocate((QArrayData *)local_4a0.field0_0x0,2,8);
    }
LAB_100d5fb16:
    if (*(int *)local_4b8 != -1) {
      if (*(int *)local_4b8 != 0) {
        LOCK();
        *(int *)local_4b8 = *(int *)local_4b8 + -1;
        local_459 = *(int *)local_4b8 != 0;
        UNLOCK();
        if ((bool)local_459) goto LAB_100d5fb52;
      }
      QArrayData::deallocate(local_4b8,2,8);
    }
LAB_100d5fb52:
    if (*(int *)local_4b0 != -1) {
      if (*(int *)local_4b0 != 0) {
        LOCK();
        *(int *)local_4b0 = *(int *)local_4b0 + -1;
        local_459 = *(int *)local_4b0 != 0;
        UNLOCK();
        if ((bool)local_459) goto LAB_100d5fb8e;
      }
      QArrayData::deallocate(local_4b0,2,8);
    }
LAB_100d5fb8e:
    if (*(int *)local_4a8 != -1) {
      if (*(int *)local_4a8 != 0) {
        LOCK();
        *(int *)local_4a8 = *(int *)local_4a8 + -1;
        local_459 = *(int *)local_4a8 != 0;
        UNLOCK();
        if ((bool)local_459) goto LAB_100d5fbca;
      }
      QArrayData::deallocate(local_4a8,2,8);
    }
LAB_100d5fbca:
    QString::toUtf8();
    pFVar6 = _fopen((char *)(local_4c0 + *(long *)(local_4c0 + 0x10)),"r");
    if (*(int *)local_4c0 != -1) {
      if (*(int *)local_4c0 != 0) {
        LOCK();
        *(int *)local_4c0 = *(int *)local_4c0 + -1;
        local_459 = *(int *)local_4c0 != 0;
        UNLOCK();
        if ((bool)local_459) goto LAB_100d5fc33;
      }
      QArrayData::deallocate(local_4c0,1,8);
    }
LAB_100d5fc33:
    FUN_100039a80(&local_488);
    if (pFVar6 != (FILE *)0x0) goto LAB_100d5fc48;
  }
  else {
LAB_100d5fc48:
    pcVar7 = _fgets(local_458,0x3ff,pFVar6);
    if (pcVar7 != (char *)0x0) {
      bVar2 = false;
      do {
        if ((bVar2) && (local_458[0] == '1')) {
          *(undefined1 *)(param_2 + 0x30) = 1;
          if (1 < DAT_10230ffd0) {
            FUN_100df99c0("DetectOS","DetectOS",2,
                          "Detect OS: Windows distribution has volume license");
          }
          break;
        }
        iVar4 = _strncmp(local_458,"[VL]",4);
        bVar3 = true;
        if (iVar4 != 0) {
          bVar3 = bVar2;
        }
        bVar2 = bVar3;
        pcVar7 = _fgets(local_458,0x3ff,pFVar6);
      } while (pcVar7 != (char *)0x0);
    }
    _fclose(pFVar6);
  }
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_468.field0_0x0 != -1) {
    if (*(int *)local_468.field0_0x0 != 0) {
      LOCK();
      *(int *)local_468.field0_0x0 = *(int *)local_468.field0_0x0 + -1;
      local_459 = *(int *)local_468.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_459) goto LAB_100d5fd47;
    }
    QArrayData::deallocate((QArrayData *)local_468.field0_0x0,2,8);
  }
LAB_100d5fd47:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

