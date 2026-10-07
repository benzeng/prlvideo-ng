
void FUN_10054b4d0(undefined4 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_50 [31];
  undefined1 local_31;
  
  if (*(char *)((long)param_1 + 6) == '\0') {
    FUN_1008e3970("","TransMem",0,
                  "CGuestMemoryHostFile::FlushFile() file has never been memory mapped.");
LAB_10054b5ca:
    FUN_1007616c0(param_1);
    FUN_1008e3970("","TransMem",0,"CGuestMemoryHostFile::FlushFile() completed");
    return;
  }
  FUN_1005445e0(local_50);
  uVar3 = FUN_100761a10(*param_1);
  if (uVar3 == 0xffffffffffffffff) {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CGuestMemoryHostFile::FlushFile() failed to query filesize %s",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10054b7b6;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
  else {
    uVar3 = uVar3 & 0xffffffffffe00000;
    iVar2 = FUN_100544c60(local_50,uVar3,*param_1,0,1);
    if (iVar2 == 0) {
      lVar4 = FUN_100544ca0(local_50,0,uVar3);
      if (lVar4 != 0) {
        FUN_1008e3970("","TransMem",0,"CGuestMemoryHostFile::FlushFile() started");
        if (0 < (long)uVar3) {
          lVar5 = 0;
          do {
            cVar1 = FUN_100544e10(local_50,1,1);
            if (cVar1 == '\0') {
              FUN_1008e3970("","TransMem",0,"CGuestMemoryHostFile::FlushFile() exiting");
              FUN_100544d20(lVar4,uVar3);
              goto LAB_10054b7b6;
            }
            FUN_100544e30(lVar4 + lVar5,0x200000);
            FUN_100544e10(local_50,0,0);
            if (param_2 != 0) {
              FUN_1007685b0(0x831 / (ulong)param_2);
            }
            lVar5 = lVar5 + 0x200000;
          } while (lVar5 < (long)uVar3);
        }
        FUN_100544d20(lVar4,uVar3);
        FUN_100544840(local_50);
        goto LAB_10054b5ca;
      }
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,"CGuestMemoryHostFile::FlushFile() failed to map image %s",
                    local_68 + *(long *)(local_68 + 0x10));
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10054b7b6;
        }
        QArrayData::deallocate(local_68,1,8);
      }
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,
                    "CGuestMemoryHostFile::FlushFile() failed to create mapping of size %llu for %s"
                    ,uVar3,local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10054b7b6;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
  }
LAB_10054b7b6:
  FUN_100544840(local_50);
  return;
}

