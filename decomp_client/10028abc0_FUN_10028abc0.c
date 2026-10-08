
void FUN_10028abc0(long *param_1,int param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  QArrayData *local_30;
  undefined1 local_21;
  
  plVar1 = param_1 + 3;
  FUN_100054f90(&local_30,plVar1);
  if ((param_2 < 0) || (FUN_1000341d0(param_1 + 4,&local_30), (char)param_1[6] == '\0')) {
    puVar2 = (uint *)*plVar1;
    uVar3 = puVar2[2];
    if (puVar2[3] == uVar3) {
      uVar4 = 0x80000009;
      if (*(int *)(param_1[4] + 0xc) != *(int *)(param_1[4] + 8)) {
        uVar4 = 0;
      }
      (**(code **)(*param_1 + 0xb0))(param_1,uVar4);
    }
    else {
      if (1 < *puVar2) {
        FUN_100036c40(plVar1,puVar2[1]);
        puVar2 = (uint *)*plVar1;
        uVar3 = puVar2[2];
      }
      FUN_10028aa20(param_1,puVar2 + (long)(int)uVar3 * 2 + 4);
    }
  }
  else {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return;
      }
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

