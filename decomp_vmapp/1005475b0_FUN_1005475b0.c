
undefined8 FUN_1005475b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  QArrayData *local_50;
  QFileInfo local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemoryMappedPlain::create_new(%s)",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054762b;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10054762b:
  lVar1 = param_1 + 0x50;
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x10);
  QFileInfo::QFileInfo(local_48,(QString *)(param_1 + 8));
  iVar5 = FUN_100544850(lVar1,lVar2 + lVar3,local_48,0,0);
  QFileInfo::~QFileInfo(local_48);
  if (iVar5 == 0) {
    cVar4 = FUN_1005477b0(param_1,1);
    if (cVar4 == '\0') {
      FUN_1005446a0(lVar1);
      uVar6 = 4;
    }
    else {
      uVar6 = 0;
      FUN_100544e10(lVar1,1,0);
      *(undefined2 *)(param_1 + 0x68) = 0x101;
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,
                  "CGuestMemoryMappedPlain::create_new(%s) failed to init swap object %d",
                  local_50 + *(long *)(local_50 + 0x10),iVar5);
    uVar6 = 3;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return 3;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  return uVar6;
}

