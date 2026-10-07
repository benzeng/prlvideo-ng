
undefined8 FUN_10069cbc0(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (*(int *)((long)param_1 + 0x14) != -1) {
    plVar1 = (long *)*param_1;
    lVar2 = param_1[1];
    iVar3 = FUN_10069d930(plVar1,*(undefined8 *)(*(long *)(*plVar1 + -0x18) + 0x58 + (long)plVar1));
    iVar4 = (**(code **)(*plVar1 + 0x158))(plVar1);
    uVar5 = FUN_1007dc0f0(lVar2,iVar3 - iVar4,0);
    return uVar5;
  }
  return 0xffffffffffffffea;
}

