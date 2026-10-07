
int FUN_1005f9f00(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined1 local_38 [8];
  long *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_1005fd1d0(local_38,*(undefined8 *)(param_1 + 0x58));
  iVar3 = FUN_100602020(local_38,param_1 + 0x100,*(undefined4 *)(param_1 + 0xf8));
  iVar4 = 0;
  if (iVar3 < 0) {
    FUN_1008e3970("Backup","vdisk",0,"Snapshot commit failed, err = 0x%X",iVar3);
    iVar4 = iVar3;
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005f9f90;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005f9f90:
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return iVar4;
}

