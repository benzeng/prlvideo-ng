
undefined4 FUN_1002c4760(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  char local_39;
  QString local_38;
  undefined1 local_29;
  
  QString::QString(&local_38,0x7c);
  QString::section(&local_48,param_1,&local_38,1,1,0);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c47d6;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1002c47d6:
  uVar1 = QString::toUInt((bool *)&local_48,(int)&local_39);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002c481a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002c481a:
  uVar2 = param_3;
  if (local_39 != '\0') {
    uVar2 = uVar1;
  }
  uVar1 = FUN_1007da300(param_2,uVar2);
  if (-1 < DAT_1011c568c) {
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"SARE: %s (%d -> %d)",local_50 + *(long *)(local_50 + 0x10),param_3,
                  uVar1);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return uVar1;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  return uVar1;
}

