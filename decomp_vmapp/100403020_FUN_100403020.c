
undefined8 FUN_100403020(long param_1,code *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0xffffffff;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar3 = FUN_100707580();
    if (iVar3 != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x60) + 0xf0);
      *plVar1 = *plVar1 + 1;
      lVar2 = *(long *)(param_1 + 8);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 8) != 0)) {
        if (*(int *)(lVar2 + 0x20) == 0) {
          iVar3 = _rand();
          *(uint *)(*(long *)(param_1 + 8) + 0x20) = (iVar3 % 0x3c) * 1000 | 1;
        }
        FUN_1007685b0();
      }
      uVar4 = FUN_100402eb0(param_1,param_2,param_3);
      return uVar4;
    }
    uVar4 = 0;
    if (param_2 != (code *)0x0) {
      uVar4 = 0;
      (*param_2)(param_3,0);
    }
  }
  return uVar4;
}

