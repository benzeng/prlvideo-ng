
undefined8 FUN_1003f5080(undefined8 param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  QArrayData *local_40;
  undefined1 local_32;
  
  if (param_2 != 0) {
    pcVar2 = (char *)_DADiskGetBSDName();
    QMutex::lock();
    plVar3 = *(long **)(param_2 + 0x10);
    if (plVar3 != (long *)(param_2 + 0x10)) {
      do {
        if (pcVar2 != (char *)0x0) {
          _strlen(pcVar2);
        }
        QString::fromLocal8Bit_helper((char *)&local_40,(int)pcVar2);
        iVar1 = QString::compare(plVar3 + -1,&local_40,0);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_32 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_1003f5130;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_1003f5130:
        if ((iVar1 == 0) && ((long *)plVar3[-2] != (long *)0x0)) {
          (**(code **)(*(long *)plVar3[-2] + 0xa0))();
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)(param_2 + 0x10));
    }
    QMutex::unlock();
  }
  return 0;
}

