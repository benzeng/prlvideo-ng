
int FUN_10057d590(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  int local_38 [2];
  
  if (param_1[0x225] == param_1[0x226]) {
    FUN_1008e3970("Backup","vdisk",0,"Disk was not opened correctly!");
    return -0x7ffe6fea;
  }
  local_38[0] = 1;
  iVar2 = (**(code **)(**(long **)(param_1[1] + 0x10) + 0x188))
                    (*(long **)(param_1[1] + 0x10),local_38);
  if ((-1 < iVar2) && (local_38[0] != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (cVar1 != '\0') {
      FUN_1008e3970("Backup","vdisk",0,"FinishBackup() found uncommited operation");
      return -0x7ffdef9e;
    }
    lVar3 = FUN_1005f6150(6,param_1);
    if ((lVar3 != 0) &&
       (plVar4 = (long *)___dynamic_cast(lVar3,&PTR_vtable_100bc7fa0,&PTR_vtable_100bc80c0,0),
       plVar4 != (long *)0x0)) {
      iVar2 = (**(code **)(*plVar4 + 0x128))(plVar4,param_1 + 1,param_2,param_3,param_4);
      if (-1 < iVar2) {
        param_1[0x239] = (long)plVar4;
        iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        return iVar2;
      }
      FUN_1008e3970("Backup","vdisk",0,"Operation init failed, err = 0x%X",iVar2);
      (**(code **)(*plVar4 + 0x58))(plVar4);
      return iVar2;
    }
    FUN_1008e3970("Backup","vdisk",0,"Failed to create object");
    return -0x7ffeffed;
  }
  (**(code **)(*param_1 + 0x230))(&local_48,param_1);
  QString::toUtf8();
  FUN_1008e3970("Backup","vdisk",0,"%s: Backup API disabled by config",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      local_38[0] = CONCAT31(local_38[0]._1_3_,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) goto LAB_10057d6bf;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10057d6bf:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      local_38[0] = CONCAT31(local_38[0]._1_3_,*(int *)local_48 != 0);
      if (*(int *)local_48 != 0) {
        return -0x7ffdefcb;
      }
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return -0x7ffdefcb;
}

