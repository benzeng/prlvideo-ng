
void * FUN_10032d2e0(long *param_1,void *param_2,int param_3,int param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  
  if (((char)param_1[3] != '\0') && ((int)param_1[5] == 0)) {
    iVar3 = *(int *)((long)param_1 + 0x2c);
    uVar4 = (param_4 + param_3) * iVar3;
    plVar5 = (long *)param_1[2];
    uVar1 = *(uint *)(plVar5 + 1);
    if (uVar1 < uVar4) {
      do {
        uVar1 = uVar1 + 0x40000;
      } while (uVar1 < uVar4);
      *(uint *)(plVar5 + 1) = uVar1;
      if ((void *)*plVar5 != (void *)0x0) {
        operator_delete__((void *)*plVar5);
        uVar1 = *(uint *)(plVar5 + 1);
      }
      pvVar2 = operator_new__((ulong)uVar1);
      *plVar5 = (long)pvVar2;
      (**(code **)(*param_1 + 0x10))(param_1);
      plVar5 = (long *)param_1[2];
      iVar3 = *(int *)((long)param_1 + 0x2c);
    }
    _memcpy((void *)((long)(param_3 * iVar3) + *plVar5),param_2,(long)(iVar3 * param_4));
    param_2 = (void *)((long)param_2 + (long)param_4 * (long)*(int *)((long)param_1 + 0x2c));
  }
  return param_2;
}

