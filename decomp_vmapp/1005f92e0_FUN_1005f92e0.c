
int FUN_1005f92e0(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_1006002d0(&local_28,param_1 + 0x10);
  if (*(int *)(local_28 + 4) == 0) {
    iVar2 = -0x7ffdf000;
    FUN_1008e3970("Backup","vdisk",0,"Unable to get path to disk descriptor");
  }
  else {
    lVar1 = param_1[0x10];
    plVar3 = (long *)0x0;
    if (lVar1 != 0) {
      plVar3 = *(long **)(lVar1 + 0x10);
    }
    iVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_28);
    if (iVar2 < 0) {
      FUN_1008e3970("Backup","vdisk",0,"Descriptor copy saving failed, err = 0x%X",iVar2);
    }
    else {
      (**(code **)(*(long *)param_1[0xb] + 0x310))();
      iVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
      if ((-1 < iVar2) && (iVar2 = (**(code **)(*param_1 + 0x100))(param_1), -1 < iVar2)) {
        iVar2 = FUN_1005fae80(param_1);
      }
    }
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return iVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return iVar2;
}

