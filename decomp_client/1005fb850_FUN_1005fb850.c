
ulong FUN_1005fb850(long param_1,QString *param_2)

{
  char cVar1;
  ulong uVar2;
  QVariant local_50;
  QString local_40;
  undefined1 local_31;
  
  if (*(int *)(*(long *)(param_1 + 0x18) + 8) < *(int *)(*(long *)(param_1 + 0x18) + 0xc)) {
    uVar2 = 0;
    do {
      QObject::property((char *)&local_50);
      QVariant::toString();
      cVar1 = operator==(&local_40,param_2);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005fb8f4;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1005fb8f4:
      QVariant::~QVariant(&local_50);
      if (cVar1 != '\0') {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 <
             (long)*(int *)(*(long *)(param_1 + 0x18) + 0xc) -
             (long)*(int *)(*(long *)(param_1 + 0x18) + 8));
  }
  return 0xffffffff;
}

