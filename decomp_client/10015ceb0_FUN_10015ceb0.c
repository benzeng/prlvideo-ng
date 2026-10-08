
long FUN_10015ceb0(long param_1,QString *param_2)

{
  char cVar1;
  long lVar2;
  QFileInfo local_70 [8];
  QString local_68;
  QFileInfo local_60 [8];
  int *local_58;
  long *local_50;
  long *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  FUN_100179800(&local_58,param_1 + 200);
  local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
  local_40 = 1;
  lVar2 = 0;
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      lVar2 = *(long *)*local_50;
      if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) &&
         (lVar2 = ((long *)*local_50)[1], lVar2 != 0)) {
        FUN_10018d980(&local_68,lVar2);
        QFileInfo::QFileInfo(local_60,&local_68);
        QFileInfo::QFileInfo(local_70,param_2);
        cVar1 = QFileInfo::operator==(local_60,local_70);
        QFileInfo::~QFileInfo(local_70);
        QFileInfo::~QFileInfo(local_60);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015cfa3;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_10015cfa3:
        if (cVar1 != '\0') break;
      }
      local_50 = local_50 + 1;
      local_40 = 1;
      lVar2 = 0;
    } while (local_50 != local_48);
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return lVar2;
      }
      local_31 = 0;
    }
    FUN_100179430(&local_58,local_58);
  }
  return lVar2;
}

