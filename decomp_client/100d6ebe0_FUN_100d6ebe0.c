
void FUN_100d6ebe0(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  size_t sVar6;
  QArrayData *local_450;
  QArrayData *local_448;
  QArrayData *local_440;
  QRegExp local_438 [15];
  undefined1 local_429;
  char local_428 [1024];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  cVar2 = QProcess::canReadLine();
  if (cVar2 == '\0') goto LAB_100d6ed9f;
  lVar5 = QIODevice::readLine((char *)(param_1 + 0x20),(longlong)local_428);
  local_440 = (QArrayData *)QString::fromAscii_helper("\\s(\\d+)",7);
  QRegExp::QRegExp(local_438,&local_440,1,3);
  if (*(int *)local_440 != -1) {
    if (*(int *)local_440 != 0) {
      LOCK();
      *(int *)local_440 = *(int *)local_440 + -1;
      local_429 = *(int *)local_440 != 0;
      UNLOCK();
      if ((bool)local_429) goto LAB_100d6ec9d;
    }
    QArrayData::deallocate(local_440,2,8);
  }
LAB_100d6ec9d:
  if (lVar5 != -1) {
    sVar6 = _strlen(local_428);
    local_448 = (QArrayData *)QString::fromAscii_helper(local_428,(int)sVar6);
    iVar3 = QRegExp::indexIn(local_438,&local_448,0,0);
    if (*(int *)local_448 != -1) {
      if (*(int *)local_448 != 0) {
        LOCK();
        *(int *)local_448 = *(int *)local_448 + -1;
        local_429 = *(int *)local_448 != 0;
        UNLOCK();
        if ((bool)local_429) goto LAB_100d6ed1c;
      }
      QArrayData::deallocate(local_448,2,8);
    }
LAB_100d6ed1c:
    if (-1 < iVar3) {
      QRegExp::cap((int)&local_450);
      uVar4 = QString::toInt((bool *)&local_450,0);
      if (*(int *)local_450 != -1) {
        if (*(int *)local_450 != 0) {
          LOCK();
          *(int *)local_450 = *(int *)local_450 + -1;
          local_429 = *(int *)local_450 != 0;
          UNLOCK();
          if ((bool)local_429) goto LAB_100d6ed89;
        }
        QArrayData::deallocate(local_450,2,8);
      }
LAB_100d6ed89:
      FUN_100d6f9e0(param_1,uVar4);
    }
  }
  QRegExp::~QRegExp(local_438);
LAB_100d6ed9f:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

