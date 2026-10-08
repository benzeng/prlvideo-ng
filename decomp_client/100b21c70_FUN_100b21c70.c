
undefined4 FUN_100b21c70(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  
  if (param_3 != 0) {
    lVar1 = *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(param_1[4] + 0x38);
    cVar3 = (**(code **)(*(long *)((long)param_1 + lVar1) + 0x198))
                      ((long)param_1 + lVar1,*(long *)((long)param_1 + lVar1 + 0x38) * param_3,
                       *(int *)(param_1[4] + 0x10) *
                       *(int *)(*(long *)(*plVar2 + -0x18) + 0x38 + (long)plVar2),"UpdateBATSync");
    if (cVar3 == '\0') {
      return 0x80021056;
    }
  }
  (**(code **)(*param_1 + 0x100))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x60))
                    (param_1,param_2 / *(uint *)(param_1[4] + 0x10) & 0xffffffff,param_3);
  (**(code **)(*param_1 + 0x108))(param_1);
  return uVar4;
}

