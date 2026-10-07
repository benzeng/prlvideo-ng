
int FUN_100594c60(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100584e90();
  if (*(long **)(param_1 + 0x20) != (long *)(param_1 + 0x28)) {
    plVar4 = *(long **)(param_1 + 0x20);
    do {
      pcVar1 = *(code **)(*param_2 + 0x100);
      FUN_100585d90(&local_40,param_1,plVar4 + 7);
      iVar3 = (*pcVar1)(param_2,&local_40,*(long *)(param_1 + 8),
                        *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8),(int)plVar4[6]);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100594d04;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100594d04:
      if (iVar3 < 0) {
        FUN_1008e3970("","vdisk",0,"Error adding image to filter 0x%x",iVar3);
        return iVar3;
      }
      plVar2 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar4[2];
          bVar6 = (long *)*plVar5 != plVar4;
          plVar4 = plVar5;
        } while (bVar6);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar4 = plVar5;
    } while (plVar5 != (long *)(param_1 + 0x28));
  }
  return 0;
}

