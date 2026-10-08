
long FUN_100b3acd0(long param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  QArrayData *local_40;
  
  cVar1 = (**(code **)(*param_2 + 0x88))(param_2,param_3);
  lVar4 = 0;
  if (cVar1 != '\0') {
    plVar3 = *(long **)(param_1 + 0x18);
    lVar4 = 0;
    if (plVar3 != (long *)(param_1 + 0x18)) {
      lVar4 = 0;
      do {
        QString::toUtf8();
        lVar2 = QIODevice::write((char *)param_2,(longlong)(local_40 + *(long *)(local_40 + 0x10)));
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            UNLOCK();
            if (*(int *)local_40 != 0) goto LAB_100b3ad68;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_100b3ad68:
        if (lVar2 < 0) {
          return lVar4;
        }
        lVar4 = lVar4 + lVar2;
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)(param_1 + 0x18));
    }
  }
  return lVar4;
}

