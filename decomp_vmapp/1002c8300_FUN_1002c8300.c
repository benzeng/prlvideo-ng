
undefined8 FUN_1002c8300(long *param_1,long *param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (*(int *)(*param_2 + 4) != 0) {
    uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
    if (uVar2 != 0xffffffff) {
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Disonnect device from host port %u",
                      (&PTR_s_UNK_101117020)[*(uint *)(param_1 + 0x292)],uVar2);
      }
      (**(code **)(*param_1 + 0x50))(param_1,uVar2,0);
      pvVar1 = (void *)param_1[(ulong)uVar2 + 0xc];
      if (pvVar1 != (void *)0x0) {
        FUN_1002d6060(pvVar1);
        operator_delete(pvVar1);
        param_1[(ulong)uVar2 + 0xc] = 0;
      }
      iVar3 = FUN_1002c6e30(param_2);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + -1;
      }
      *(int *)((long)param_1 + 0x46c) = *(int *)((long)param_1 + 0x46c) + -1;
      uVar4 = 1;
    }
  }
  return uVar4;
}

