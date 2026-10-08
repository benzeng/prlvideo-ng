
undefined8 FUN_100d60090(char *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  FILE *pFVar4;
  char *pcVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  QString local_4e8;
  QArrayData *local_4e0;
  QArrayData *local_4d8;
  QArrayData *local_4d0;
  QArrayData *local_4c8;
  QArrayData *local_4c0;
  QString local_4b8;
  QString local_4b0;
  int local_4a8;
  uint local_4a4;
  undefined4 local_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478;
  undefined *local_470;
  undefined4 local_468;
  undefined1 local_464;
  undefined1 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_4a8 = 0xff;
  local_4a4 = 0;
  local_4a0 = 0;
  local_498._8_4_ = (int)PTR_shared_null_1021e1288;
  local_498._0_8_ = PTR_shared_null_1021e1288;
  local_498._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_488._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_488._0_8_ = PTR_shared_null_1021e15e8;
  local_488._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_478 = 0;
  local_470 = PTR_shared_null_1021e1288;
  local_468 = 0;
  local_464 = 0;
  local_460 = 0;
  local_448 = 0;
  local_450 = 0;
  local_458 = 0;
  local_4b0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("sources/idwbinfo.txt",0x14);
  QString::toLower();
  QString::operator=(&local_4b0,&local_4b8);
  if (*(int *)local_4b8.field0_0x0 != -1) {
    if (*(int *)local_4b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4b8.field0_0x0 = *(int *)local_4b8.field0_0x0 + -1;
      local_439 = *(int *)local_4b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d601cf;
    }
    QArrayData::deallocate((QArrayData *)local_4b8.field0_0x0,2,8);
  }
LAB_100d601cf:
  iVar7 = 0;
  do {
    local_4d0 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
    iVar2 = -1;
    if (param_1 != (char *)0x0) {
      sVar3 = _strlen(param_1);
      iVar2 = (int)sVar3;
    }
    local_4d8 = (QArrayData *)QString::fromAscii_helper(param_1,iVar2);
    QString::arg(&local_4c8,&local_4d0,&local_4d8,0,0x20);
    QString::arg(&local_4c0,&local_4c8,&local_4b0,0,0x20);
    if (*(int *)local_4c8 != -1) {
      if (*(int *)local_4c8 != 0) {
        LOCK();
        *(int *)local_4c8 = *(int *)local_4c8 + -1;
        local_439 = *(int *)local_4c8 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100d602a2;
      }
      QArrayData::deallocate(local_4c8,2,8);
    }
LAB_100d602a2:
    if (*(int *)local_4d8 != -1) {
      if (*(int *)local_4d8 != 0) {
        LOCK();
        *(int *)local_4d8 = *(int *)local_4d8 + -1;
        local_439 = *(int *)local_4d8 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100d602de;
      }
      QArrayData::deallocate(local_4d8,2,8);
    }
LAB_100d602de:
    if (*(int *)local_4d0 != -1) {
      if (*(int *)local_4d0 != 0) {
        LOCK();
        *(int *)local_4d0 = *(int *)local_4d0 + -1;
        local_439 = *(int *)local_4d0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100d6031a;
      }
      QArrayData::deallocate(local_4d0,2,8);
    }
LAB_100d6031a:
    QString::toUtf8();
    pFVar4 = _fopen((char *)(local_4e0 + *(long *)(local_4e0 + 0x10)),"r");
    if (*(int *)local_4e0 != -1) {
      if (*(int *)local_4e0 != 0) {
        LOCK();
        *(int *)local_4e0 = *(int *)local_4e0 + -1;
        local_439 = *(int *)local_4e0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100d60383;
      }
      QArrayData::deallocate(local_4e0,1,8);
    }
LAB_100d60383:
    if (pFVar4 == (FILE *)0x0) {
      QString::toUpper();
      QString::operator=(&local_4b0,&local_4e8);
      uVar8 = 4;
      if (*(int *)local_4e8.field0_0x0 != -1) {
        if (*(int *)local_4e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_4e8.field0_0x0 = *(int *)local_4e8.field0_0x0 + -1;
          local_439 = *(int *)local_4e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_439) goto LAB_100d6069f;
        }
        QArrayData::deallocate((QArrayData *)local_4e8.field0_0x0,2,8);
      }
    }
    else {
      pcVar5 = _fgets(local_438,0x3ff,pFVar4);
      while (pcVar5 != (char *)0x0) {
        iVar2 = _strncmp(local_438,"BuildBranch=vista",0x11);
        if (((iVar2 == 0) || (iVar2 = _strncmp(local_438,"BuildBranch=lh",0xe), iVar2 == 0)) ||
           (iVar2 = _strncmp(local_438,"BuildBranch=longhorn",0x14), iVar2 == 0)) {
          local_4a8 = 0x809;
LAB_100d604ea:
          if (local_4a4 != 0) break;
        }
        else {
          iVar2 = _strncmp(local_438,"BuildBranch=winmain_win7",0x18);
          if ((iVar2 == 0) || (iVar2 = _strncmp(local_438,"BuildBranch=win7",0x10), iVar2 == 0)) {
            local_4a8 = 0x80b;
            goto LAB_100d604ea;
          }
          iVar2 = _strncmp(local_438,"BuildBranch=winmain_win8",0x18);
          if ((iVar2 == 0) || (iVar2 = _strncmp(local_438,"BuildBranch=win8",0x10), iVar2 == 0)) {
            local_4a8 = 0x80c;
            goto LAB_100d604ea;
          }
          iVar2 = _strncmp(local_438,"BuildBranch=winmain_blue",0x18);
          if ((iVar2 == 0) || (iVar2 = _strncmp(local_438,"BuildBranch=winblue",0x13), iVar2 == 0))
          {
            local_4a8 = 0x80e;
            goto LAB_100d604ea;
          }
          iVar2 = _strncmp(local_438,"BuildArch=x86",0xd);
          if (iVar2 == 0) {
            local_4a4 = local_4a4 | 1;
LAB_100d60539:
            if (local_4a8 != 0xff) break;
          }
          else {
            iVar2 = _strncmp(local_438,"BuildArch=amd64",0xf);
            if (iVar2 == 0) {
              local_4a4 = local_4a4 | 2;
              goto LAB_100d60539;
            }
          }
        }
        pcVar5 = _fgets(local_438,0x3ff,pFVar4);
      }
      _fclose(pFVar4);
      if (local_4a8 == 0xff) {
        FUN_100d5d680(param_1,&local_4a8);
        iVar2 = (int)((ulong)local_450 >> 0x20);
        if ((int)local_450 == 10) {
          if (iVar2 == 0) {
LAB_100d60632:
            local_4a8 = 0x80f;
            goto LAB_100d60660;
          }
        }
        else if ((int)local_450 == 6) {
          if (iVar2 == 4) goto LAB_100d60632;
          if (iVar2 == 3) {
            local_4a8 = 0x80e;
            goto LAB_100d60660;
          }
        }
        uVar8 = 0;
        if (local_4a8 == 0xff) goto LAB_100d6069f;
      }
LAB_100d60660:
      FUN_100d5f290(param_1,&local_4a8);
      FUN_100d5f7b0(param_1,&local_4a8);
      uVar8 = 1;
      FUN_100287aa0(param_2,&local_4a8);
    }
LAB_100d6069f:
    if (*(int *)local_4c0 != -1) {
      if (*(int *)local_4c0 != 0) {
        LOCK();
        *(int *)local_4c0 = *(int *)local_4c0 + -1;
        local_439 = *(int *)local_4c0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100d606db;
      }
      QArrayData::deallocate(local_4c0,2,8);
    }
LAB_100d606db:
    uVar6 = 0;
    if ((uVar8 | 4) != 4) break;
    iVar7 = iVar7 + 1;
    uVar6 = 0xffffffff;
  } while (iVar7 < 2);
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_4b0.field0_0x0 != -1) {
    if (*(int *)local_4b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_4b0.field0_0x0 = *(int *)local_4b0.field0_0x0 + -1;
      local_439 = *(int *)local_4b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d6073f;
    }
    QArrayData::deallocate((QArrayData *)local_4b0.field0_0x0,2,8);
  }
LAB_100d6073f:
  FUN_10005e410(&local_4a8);
  if (lVar1 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

