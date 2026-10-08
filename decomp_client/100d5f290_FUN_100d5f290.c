
void FUN_100d5f290(char *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  FILE *pFVar6;
  char *pcVar7;
  QArrayData *local_470;
  QArrayData *local_468;
  QArrayData *local_460;
  QArrayData *local_458;
  QArrayData *local_450;
  QString local_448;
  undefined1 local_439;
  char local_438 [5];
  undefined1 local_433;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_458 = (QArrayData *)QString::fromAscii_helper("%1/sources/lang.ini",0x13);
  iVar4 = -1;
  if (param_1 != (char *)0x0) {
    sVar5 = _strlen(param_1);
    iVar4 = (int)sVar5;
  }
  local_460 = (QArrayData *)QString::fromAscii_helper(param_1,iVar4);
  QString::arg(&local_450,&local_458,&local_460,0,0x20);
  if (*(int *)local_460 != -1) {
    if (*(int *)local_460 != 0) {
      LOCK();
      *(int *)local_460 = *(int *)local_460 + -1;
      local_439 = *(int *)local_460 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d5f352;
    }
    QArrayData::deallocate(local_460,2,8);
  }
LAB_100d5f352:
  if (*(int *)local_458 != -1) {
    if (*(int *)local_458 != 0) {
      LOCK();
      *(int *)local_458 = *(int *)local_458 + -1;
      local_439 = *(int *)local_458 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d5f395;
    }
    QArrayData::deallocate(local_458,2,8);
  }
LAB_100d5f395:
  QString::toUtf8();
  pFVar6 = _fopen((char *)(local_468 + *(long *)(local_468 + 0x10)),"r");
  if (*(int *)local_468 != -1) {
    if (*(int *)local_468 != 0) {
      LOCK();
      *(int *)local_468 = *(int *)local_468 + -1;
      local_439 = *(int *)local_468 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d5f3fe;
    }
    QArrayData::deallocate(local_468,1,8);
  }
LAB_100d5f3fe:
  if (pFVar6 != (FILE *)0x0) {
    pcVar7 = _fgets(local_438,0x3ff,pFVar6);
    if (pcVar7 != (char *)0x0) {
      bVar2 = false;
      do {
        if ((bVar2) && (pcVar7 = _strchr(local_438,0x2d), pcVar7 != (char *)0x0)) {
          local_433 = 0;
          _strlen(local_438);
          QString::fromUtf8_helper((char *)&local_448,(int)local_438);
          QString::operator=((QString *)(param_2 + 0x10),&local_448);
          if (*(int *)local_448.field0_0x0 != -1) {
            if (*(int *)local_448.field0_0x0 != 0) {
              LOCK();
              *(int *)local_448.field0_0x0 = *(int *)local_448.field0_0x0 + -1;
              local_439 = *(int *)local_448.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_439) goto LAB_100d5f50b;
            }
            QArrayData::deallocate((QArrayData *)local_448.field0_0x0,2,8);
          }
LAB_100d5f50b:
          if (DAT_10230ffd0 < 2) break;
          QString::toUtf8();
          FUN_100df99c0("DetectOS","DetectOS",2,"Detect OS: Windows distribution locale %s",
                        local_470 + *(long *)(local_470 + 0x10));
          if (*(int *)local_470 == -1) break;
          if (*(int *)local_470 != 0) {
            LOCK();
            *(int *)local_470 = *(int *)local_470 + -1;
            local_439 = *(int *)local_470 != 0;
            UNLOCK();
            if ((bool)local_439) break;
          }
          QArrayData::deallocate(local_470,1,8);
          break;
        }
        iVar4 = _strncmp(local_438,"[Available UI Languages]",0x18);
        bVar3 = true;
        if (iVar4 != 0) {
          bVar3 = bVar2;
        }
        bVar2 = bVar3;
        pcVar7 = _fgets(local_438,0x3ff,pFVar6);
      } while (pcVar7 != (char *)0x0);
    }
    _fclose(pFVar6);
  }
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_450 != -1) {
    if (*(int *)local_450 != 0) {
      LOCK();
      *(int *)local_450 = *(int *)local_450 + -1;
      local_439 = *(int *)local_450 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d5f5d8;
    }
    QArrayData::deallocate(local_450,2,8);
  }
LAB_100d5f5d8:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

