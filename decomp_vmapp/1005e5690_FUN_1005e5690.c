
int FUN_1005e5690(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  
  QMutex::lock();
  plVar3 = *(long **)(param_1 + 0x20);
  do {
    if (plVar3 == (long *)(param_1 + 0x28)) {
      iVar2 = 0;
LAB_1005e5724:
      QMutex::unlock();
      return iVar2;
    }
    if ((*(char *)(*(long *)(plVar3[6] + 0x10) + 0x244) == '\0') &&
       (iVar2 = FUN_1005da290(plVar3 + 6), iVar2 < 0)) {
      QFileInfo::absoluteFilePath();
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error: save of VMDK \'%s\' failed [%x]",
                    local_40 + *(long *)(local_40 + 0x10),iVar2);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) goto LAB_1005e57ca;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_1005e57ca:
      if (*(int *)local_48 == -1) goto LAB_1005e5724;
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) goto LAB_1005e5724;
      }
      QArrayData::deallocate(local_48,2,8);
      goto LAB_1005e5724;
    }
    plVar1 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar1 = (long *)plVar3[2];
        bVar4 = (long *)*plVar1 != plVar3;
        plVar3 = plVar1;
      } while (bVar4);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  } while( true );
}

