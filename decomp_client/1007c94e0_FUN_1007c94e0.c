
void FUN_1007c94e0(long param_1)

{
  long lVar1;
  char cVar2;
  Data_conflict local_70;
  undefined4 local_68;
  QArrayData *local_60;
  int *local_58 [4];
  QVariant local_38 [2];
  undefined1 local_19;
  
  cVar2 = FUN_1007c9220();
  if (cVar2 == '\0') {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar1 + 0x20) == 1) {
      FUN_1007c8fc0(lVar1,0);
      return;
    }
    if (*(int *)(lVar1 + 0x20) == 0) {
      local_60 = (QArrayData *)
                 QString::fromAscii_helper("1onStartDebuggerFinished(PRL_RESULT)",0x24);
      local_68 = 0x80000000;
      local_70.field7 = 0;
      FUN_100a1c600(local_58,lVar1,&local_60,&local_70);
      FUN_1007c9310(param_1,local_58);
      QVariant::~QVariant(local_38);
      if (local_58[0] != (int *)0x0) {
        LOCK();
        *local_58[0] = *local_58[0] + -1;
        local_19 = *local_58[0] != 0;
        UNLOCK();
        if ((!(bool)local_19) && (local_58[0] != (int *)0x0)) {
          operator_delete(local_58[0]);
        }
      }
      QVariant::~QVariant((QVariant *)&local_70);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          if (*(int *)local_60 != 0) {
            return;
          }
          local_19 = 0;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
  }
  return;
}

