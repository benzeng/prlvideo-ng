
void FUN_1001142f0(undefined8 param_1,long *param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  QArrayData *local_a0;
  string local_98 [24];
  ulong local_80;
  string local_78 [24];
  QArrayData *local_60;
  QArrayData *local_58;
  QTextStream local_50 [16];
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_2 + 4) == 0) {
    FUN_1008e3970("","vm",0,"Failed to get map file");
    return;
  }
  QTextStream::QTextStream(local_50,param_2,1);
  uVar4 = 0;
  do {
    cVar1 = QTextStream::atEnd();
    if (cVar1 != '\0') break;
    QTextStream::readLine((longlong)&local_58);
    iVar2 = QString::indexOf(&local_58,0x20,0,1);
    uVar6 = uVar4;
    uVar5 = 4;
    if (0 < iVar2) {
      QString::left((int)&local_60);
      lVar3 = QString::toULongLong((bool *)&local_60,0);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001143d8;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1001143d8:
      uVar6 = lVar3 + param_3;
      if (uVar6 < uVar4) {
        FUN_1008e3970("","vm",0,"Map file is not sorted by address: %lx > %lx",uVar4,uVar6);
        uVar6 = uVar4;
        uVar5 = 1;
      }
      else {
        QString::mid((int)&local_a0,(int)&local_58);
        QString::toUtf8();
        std::string::__init((char *)local_98,(ulong)(local_40 + *(long *)(local_40 + 0x10)));
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10011449d;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_10011449d:
        local_80 = uVar6;
        std::string::string(local_78,local_98);
        FUN_100115640(param_1,&local_80);
        std::string::~string(local_78);
        std::string::~string(local_98);
        uVar5 = 0;
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            uVar5 = 0;
            if ((bool)local_31) goto LAB_100114520;
          }
          QArrayData::deallocate(local_a0,2,8);
          uVar5 = 0;
        }
      }
    }
LAB_100114520:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100114550;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100114550:
    uVar4 = uVar6;
  } while ((uVar5 | 4) == 4);
  QTextStream::~QTextStream(local_50);
  return;
}

