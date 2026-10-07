
int FUN_10057d850(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined1 local_50 [8];
  long *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  int local_28 [2];
  
  local_28[0] = 1;
  iVar3 = (**(code **)(**(long **)(param_1[1] + 0x10) + 0x188))
                    (*(long **)(param_1[1] + 0x10),local_28);
  if ((iVar3 < 0) || (local_28[0] == 0)) {
    (**(code **)(*param_1 + 0x230))(&local_38,param_1);
    QString::toUtf8();
    FUN_1008e3970("Backup","vdisk",0,"%s: Backup API disabled by config",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        local_28[0] = CONCAT31(local_28[0]._1_3_,*(int *)local_30 != 0);
        if (*(int *)local_30 != 0) goto LAB_10057d9a3;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_10057d9a3:
    if (*(int *)local_38 == -1) {
      return -0x7ffdefcb;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      local_28[0] = CONCAT31(local_28[0]._1_3_,*(int *)local_38 != 0);
      if (*(int *)local_38 != 0) {
        return -0x7ffdefcb;
      }
    }
    QArrayData::deallocate(local_38,2,8);
    return -0x7ffdefcb;
  }
  FUN_1005fd1d0(local_50,param_1);
  iVar3 = FUN_1005ff7b0(local_50,param_2);
  if (iVar3 < 0) {
    FUN_1008e3970("Backup","vdisk",0,"Operation failed, err = 0x%X",iVar3);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      local_28[0] = CONCAT31(local_28[0]._1_3_,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) goto LAB_10057d903;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10057d903:
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  return iVar3;
}

