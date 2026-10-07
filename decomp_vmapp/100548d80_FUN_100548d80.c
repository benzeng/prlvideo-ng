
undefined8 FUN_100548d80(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  QString::toUtf8();
  FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::create_new(%s)",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100548df6;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100548df6:
  *(undefined1 *)(param_1 + 0xc) = 1;
  QString::toUtf8();
  cVar1 = FUN_100546b20(param_1 + 0xd,local_38 + *(long *)(local_38 + 0x10),0,0,1,0,
                        *(undefined1 *)(param_1[6] + 0x1d));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100548e62;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100548e62:
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::create_new(%s) failed to open file",
                  local_40 + *(long *)(local_40 + 0x10));
    uVar2 = 1;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return 1;
        }
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  else {
    uVar2 = 0;
    cVar1 = FUN_100548fe0(param_1,0);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,1);
      uVar2 = 4;
    }
    else {
      FUN_100544d60((int)param_1[0xd],1,0);
      *(undefined1 *)(param_1 + 0xf) = 1;
      *(undefined1 *)(param_1 + 0x17) = 1;
    }
  }
  return uVar2;
}

