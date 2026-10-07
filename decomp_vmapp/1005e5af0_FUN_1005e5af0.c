
undefined8 FUN_1005e5af0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if (*(long **)(param_1 + 0x20) != (long *)(param_1 + 0x28)) {
    plVar2 = *(long **)(param_1 + 0x20);
    do {
      QFileInfo::absoluteFilePath();
      FUN_10000c490(param_2,&local_40);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005e5b8c;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1005e5b8c:
      plVar1 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar2[2];
          bVar4 = (long *)*plVar3 != plVar2;
          plVar2 = plVar3;
        } while (bVar4);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      plVar2 = plVar3;
    } while (plVar3 != (long *)(param_1 + 0x28));
  }
  QMutex::unlock();
  return 1;
}

