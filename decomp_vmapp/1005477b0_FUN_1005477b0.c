
undefined1 FUN_1005477b0(long param_1,char param_2)

{
  char cVar1;
  long lVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemoryMappedPlain::init(%s)",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_10054782c;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10054782c:
  if (param_2 != '\0') {
    cVar1 = FUN_1005450c0(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
    lVar2 = FUN_100544ca0(param_1 + 0x50,0,*(undefined8 *)(param_1 + 0x10));
    *(long *)(param_1 + 0x20) = lVar2;
    if (lVar2 == 0) {
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,"CGuestMemoryMappedPlain::init(%s) failed to map main [%llu]",
                    local_40 + *(long *)(local_40 + 0x10),*(undefined8 *)(param_1 + 0x10));
      if (*(int *)local_40 == -1) {
        return 0;
      }
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return 0;
        }
      }
      QArrayData::deallocate(local_40,1,8);
      return 0;
    }
  }
  lVar2 = FUN_100544ca0(param_1 + 0x50,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  *(long *)(param_1 + 0x28) = lVar2;
  if (lVar2 != 0) {
    return 1;
  }
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,
                "CGuestMemoryMappedPlain::init(%s) failed to map video at %llu[%llu]",
                local_48 + *(long *)(local_48 + 0x10),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_100547974;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100547974:
  FUN_100544d20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return 0;
}

