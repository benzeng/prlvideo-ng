
void FUN_1001ad490(long param_1,long *param_2,char param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (*(int *)(lVar1 + 8) < *(int *)(lVar1 + 0xc)) {
    local_38 = *(QArrayData **)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8);
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  else {
    local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  plVar3 = (long *)FUN_1001a9960(param_1,&local_38);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0xa8))(&local_40,plVar3);
    lVar1 = *param_2;
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"host",0xffffffff,
                       1);
    if (param_3 != '\0') {
      FUN_1001b10f0(&local_38,&local_40,2 - (uint)(iVar2 == 0),param_2);
    }
    if (iVar2 != 0) {
      FUN_1001ab020(param_1,&local_38,param_2);
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001ad58e;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1001ad58e:
  FUN_1000e5580((long *)(param_1 + 0x40),&local_38);
  lVar1 = *(long *)(param_1 + 0x40);
  if (*(int *)(lVar1 + 0xc) != *(int *)(lVar1 + 8)) {
    FUN_1001ab820(param_1);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

