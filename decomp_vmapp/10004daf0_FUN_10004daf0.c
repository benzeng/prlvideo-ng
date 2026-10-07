
void FUN_10004daf0(undefined8 param_1,QString *param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 in_R9;
  QArrayData *local_60;
  longlong local_58;
  QArrayData *local_50;
  long local_48 [2];
  undefined1 local_31;
  
  QFile::QFile((QFile *)local_48,param_2);
  cVar1 = QFile::open((QFile *)local_48,2);
  if (cVar1 == '\0') {
    if (0 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("GSHEXT","vm",1,"Can\'t create file \"%s\" to store guest problem information",
                    local_50 + *(long *)(local_50 + 0x10),in_R9,param_2);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10004dc64;
        }
        QArrayData::deallocate(local_50,1,8);
      }
    }
    goto LAB_10004dc64;
  }
  lVar4 = 0;
  do {
    uVar2 = FUN_1002a5b80(param_1,lVar4,&local_58);
    if (uVar2 == 0) goto LAB_10004dbe2;
    uVar3 = QIODevice::write((char *)local_48,local_58);
    lVar4 = lVar4 + (ulong)uVar2;
  } while (uVar3 == uVar2);
  if (0 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("GSHEXT","vm",1,"Can\'t write guest problemreportinformation to file \"%s\"",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10004dbe2;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
LAB_10004dbe2:
  (**(code **)(local_48[0] + 0x70))(local_48);
LAB_10004dc64:
  QFile::~QFile((QFile *)local_48);
  return;
}

