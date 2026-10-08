
int FUN_100b25c10(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(long *)(*param_1 + -0x130);
  iVar2 = 0;
  if (*(int *)((long)param_1 + lVar1 + 0x4c) == 1) {
    iVar2 = FUN_100b25fa0((long)param_1 + lVar1,
                          *(undefined8 *)
                           ((long)param_1 +
                           *(long *)(*(long *)((long)param_1 + lVar1) + -0x18) + lVar1 + 0x58));
    iVar3 = (**(code **)(*(long *)((long)param_1 + lVar1) + 0x158))((long)param_1 + lVar1);
    iVar2 = (iVar2 - iVar3) - *(int *)((long)param_1 + lVar1 + 0x48);
  }
  return iVar2;
}

