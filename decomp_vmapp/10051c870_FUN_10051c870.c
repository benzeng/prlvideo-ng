
int FUN_10051c870(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  QArrayData *local_60;
  undefined4 local_54;
  QArrayData *local_50;
  undefined4 local_44;
  long local_40;
  undefined1 local_31;
  
  lVar3 = param_1[0xe];
  iVar1 = *(int *)(lVar3 + 8);
  local_40 = param_2;
  if (iVar1 != *(int *)(lVar3 + 0xc)) {
    piVar4 = (int *)(lVar3 + 0x10 + (long)iVar1 * 8);
    lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (*piVar4 == *(int *)(param_2 + 8)) {
        QMutex::lock();
        local_44 = *(undefined4 *)(param_2 + 8);
        plVar2 = (long *)FUN_10051d850(param_1 + 0x12,&local_44);
        if (*(int *)(*plVar2 + 0xc) == *(int *)(*plVar2 + 8)) {
          QMutex::unlock();
          QMutex::lock();
          local_54 = *(undefined4 *)(param_2 + 8);
          FUN_10051e370(param_1 + 0x14,&local_54,&local_40);
          QMutex::unlock();
          return -1;
        }
        FUN_10051e2a0(&local_50,plVar2);
        QMutex::unlock();
        lVar3 = FUN_1002a6120(param_2,0,1);
        if (lVar3 == 0) {
          iVar1 = -0xfffffe4;
        }
        else {
          iVar1 = -0xffffff7;
          if (*(int *)(local_50 + 4) <= *(int *)(lVar3 + 8)) {
            iVar1 = 0;
            FUN_1002a5a50(lVar3,0,local_50 + *(long *)(local_50 + 0x10));
          }
        }
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) {
              return iVar1;
            }
          }
          QArrayData::deallocate(local_50,1,8);
          return iVar1;
        }
        return iVar1;
      }
      piVar4 = piVar4 + 2;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  lVar3 = param_1[0xd];
  iVar1 = *(int *)(lVar3 + 8);
  if (iVar1 != *(int *)(lVar3 + 0xc)) {
    piVar4 = (int *)(lVar3 + 0x10 + (long)iVar1 * 8);
    lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (*piVar4 == *(int *)(param_2 + 8)) {
        local_60 = (QArrayData *)PTR_shared_null_100ba20d0;
        iVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_60);
        if ((iVar1 == 0) && (iVar1 = 0, *(int *)(local_60 + 4) != 0)) {
          lVar3 = FUN_1002a6120(param_2,1,0);
          iVar1 = -0xffffff7;
          if ((lVar3 != 0) && (*(int *)(local_60 + 4) <= *(int *)(lVar3 + 8))) {
            iVar1 = 0;
            FUN_1002a5a50(lVar3,0,local_60 + *(long *)(local_60 + 0x10));
          }
        }
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            UNLOCK();
            if (*(int *)local_60 != 0) {
              return iVar1;
            }
            local_31 = 0;
          }
          QArrayData::deallocate(local_60,1,8);
          return iVar1;
        }
        return iVar1;
      }
      piVar4 = piVar4 + 2;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return -0xfffffe4;
}

