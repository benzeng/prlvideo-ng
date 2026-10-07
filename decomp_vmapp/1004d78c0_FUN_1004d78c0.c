
QListData * FUN_1004d78c0(QListData *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int *local_30;
  undefined1 local_21;
  
  puVar1 = (uint *)*param_2;
  if (puVar1[3] != puVar1[2]) {
    puVar2 = *(uint **)param_1;
    if (puVar2[3] == puVar2[2]) {
      if (puVar2 != puVar1) {
        FUN_1004d6ff0(&local_30,param_2);
        piVar3 = *(int **)param_1;
        *(int **)param_1 = local_30;
        if (*piVar3 != -1) {
          if (*piVar3 != 0) {
            LOCK();
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 != 0) {
              return param_1;
            }
            local_21 = 0;
          }
          local_30 = piVar3;
          FUN_1004d6ab0(&local_30,piVar3);
        }
      }
    }
    else {
      if (*puVar2 < 2) {
        uVar4 = QListData::append(param_1);
      }
      else {
        uVar4 = FUN_1004d6e60(param_1,0x7fffffff);
      }
      FUN_1004d6ca0(param_1,uVar4,
                    *(long *)param_1 + 0x10 + (long)*(int *)(*(long *)param_1 + 0xc) * 8,
                    *param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
    }
  }
  return param_1;
}

