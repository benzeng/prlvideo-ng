
int FUN_100b2f100(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long in_RAX;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uStack_38;
  
  if ((param_3 < param_2 + 3) ||
     (param_3 < (long *)((ulong)*(uint *)(param_2 + 2) + 0x18 + (long)param_2))) {
    FUN_100df99c0("","dimg",0,"Error: extansions block is not zero-ended");
    return -1;
  }
  if (*param_2 == 0) {
    return 0;
  }
  iVar5 = *(uint *)(param_2 + 2) + 0x18;
  uStack_38 = in_RAX;
  plVar3 = (long *)FUN_100b2efb0(param_1,*param_2,param_2[1],(long)&uStack_38 + 4);
  if (uStack_38 < 0) {
    if (plVar3 == (long *)0x0) goto LAB_100b2f21d;
  }
  else {
    iVar2 = (**(code **)*plVar3)(plVar3,param_2 + 3,(int)param_2[2]);
    uStack_38 = CONCAT44(iVar2,(undefined4)uStack_38);
    if (-1 < iVar2) {
      plVar4 = operator_new(0x18);
      plVar4[2] = (long)plVar3;
      plVar4[1] = param_1 + 8;
      lVar1 = *(long *)(param_1 + 8);
      *plVar4 = lVar1;
      *(long **)(lVar1 + 8) = plVar4;
      *(long **)(param_1 + 8) = plVar4;
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
      if (*param_2 != 0x20385fae252cb34a) {
        return iVar5;
      }
      *(long **)(param_1 + 0x20) = plVar3;
      return iVar5;
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_100b2f21d:
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    FUN_100df99c0("","dimg",0,"Warning: failed to load unnecessary extension: %x",uStack_38._4_4_);
  }
  else {
    FUN_100df99c0("","dimg",0,"Error: failed to load necessary extension: %x",uStack_38._4_4_);
    iVar5 = -1;
  }
  return iVar5;
}

