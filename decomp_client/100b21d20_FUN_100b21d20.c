
undefined4 FUN_100b21d20(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  
  lVar1 = *(long *)(*param_1 + -0xd0);
  if (param_3 != 0) {
    lVar2 = *(long *)((long)param_1 + lVar1 + 0x20);
    lVar5 = *(long *)(*(long *)((long)param_1 + lVar1) + -0x18) + lVar1;
    plVar6 = *(long **)(lVar2 + 0x38);
    cVar3 = (**(code **)(*(long *)((long)param_1 + lVar5) + 0x198))
                      ((long)param_1 + lVar5,*(long *)((long)param_1 + lVar5 + 0x38) * param_3,
                       *(int *)(lVar2 + 0x10) *
                       *(int *)(*(long *)(*plVar6 + -0x18) + 0x38 + (long)plVar6),"UpdateBATSync");
    if (cVar3 == '\0') {
      return 0x80021056;
    }
  }
  plVar6 = (long *)((long)param_1 + lVar1);
  (**(code **)(*plVar6 + 0x100))(plVar6);
  uVar4 = (**(code **)(*plVar6 + 0x60))
                    (plVar6,param_2 / *(uint *)(*(long *)((long)param_1 + lVar1 + 0x20) + 0x10) &
                            0xffffffff,param_3);
  (**(code **)(*plVar6 + 0x108))(plVar6);
  return uVar4;
}

