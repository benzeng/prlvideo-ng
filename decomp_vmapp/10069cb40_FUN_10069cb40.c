
long FUN_10069cb40(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  plVar1 = (long *)*param_1;
  lVar4 = param_1[1];
  iVar2 = FUN_10069d930(plVar1,*(undefined8 *)(*(long *)(*plVar1 + -0x18) + 0x58 + (long)plVar1));
  iVar3 = (**(code **)(*plVar1 + 0x158))(plVar1);
  lVar4 = FUN_1007dbf90(lVar4,iVar2 - iVar3,0);
  if (lVar4 == -0x16) {
    *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
    param_1 = (long *)*param_1;
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a0))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    lVar4 = 0xffffffff;
  }
  return lVar4;
}

