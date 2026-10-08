
undefined8 * FUN_1003b0eb0(undefined8 *param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  FUN_1003b10e0(&local_40);
  FUN_1003bc230(&local_68,&local_40);
  local_60 = local_68;
  if (*local_68 != -1) {
    if (*local_68 == 0) {
      QListData::detach((int)&local_60);
      iVar4 = local_60[2];
      if (iVar4 != local_60[3]) {
        local_68 = local_68 + (long)local_68[2] * 2 + 4;
        piVar3 = local_60 + (long)iVar4 * 2 + 4;
        lVar1 = (long)local_60[3] * 8 + (long)iVar4 * -8;
        do {
          piVar2 = *(int **)local_68;
          *(int **)piVar3 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar3 = piVar3 + 2;
          local_68 = local_68 + 2;
          lVar1 = lVar1 + -8;
        } while (lVar1 != 0);
      }
    }
    else {
      LOCK();
      *local_68 = *local_68 + 1;
      local_31 = *local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  FUN_100039a80(&local_68);
  iVar4 = 2;
  if ((local_48 != 0) && (local_58 != local_50)) {
    do {
      piVar3 = local_58;
      piVar2 = (int *)FUN_1003bc2d0(&local_40,local_58);
      if (*piVar2 == param_2) {
        piVar3 = *(int **)piVar3;
        *param_1 = piVar3;
        iVar4 = 1;
        if (1 < *piVar3 + 1U) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          local_31 = *piVar3 != 0;
          UNLOCK();
        }
        break;
      }
      local_58 = local_58 + 2;
      local_48 = 1;
    } while (local_58 != local_50);
  }
  FUN_100039a80(&local_60);
  if (iVar4 == 2) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_1003bd540();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
  return param_1;
}

