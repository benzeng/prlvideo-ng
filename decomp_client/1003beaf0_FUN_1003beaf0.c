
bool FUN_1003beaf0(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  QArrayData *local_30;
  QVariant local_28;
  undefined1 local_11;
  
  lVar3 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  if (lVar3 == 0) {
    bVar5 = false;
  }
  else {
    uVar4 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    cVar1 = FUN_1001754c0(uVar4,0x10);
    if (cVar1 == '\0') {
      bVar5 = false;
    }
    else {
      lVar3 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
      if (*(char *)(lVar3 + 0x13a) == '\0') {
        uVar4 = FUN_1003b0af0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
        local_30 = (QArrayData *)QString::fromAscii_helper("Settings.Shutdown.OnVmWindowClose",0x21)
        ;
        FUN_1003e1800(&local_28,uVar4,&local_30,0);
        iVar2 = QVariant::toInt((bool *)&local_28);
        bVar5 = iVar2 == 5;
        QVariant::~QVariant(&local_28);
        if (*(int *)local_30 != -1) {
          if (*(int *)local_30 != 0) {
            LOCK();
            *(int *)local_30 = *(int *)local_30 + -1;
            UNLOCK();
            if (*(int *)local_30 != 0) {
              return bVar5;
            }
            local_11 = 0;
          }
          QArrayData::deallocate(local_30,2,8);
        }
      }
      else {
        bVar5 = false;
      }
    }
  }
  return bVar5;
}

