
uint FUN_1002fcd60(long param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  uVar2 = param_3;
  if ((param_3 < *(uint *)(param_1 + 0x928)) && (param_4 <= *(uint *)(param_1 + 0x928) - param_3)) {
    _memcpy((void *)((ulong)param_3 + *(long *)(param_1 + 0x920)),param_2,(ulong)param_4);
  }
  else {
    for (; param_4 != 0; param_4 = param_4 - uVar4) {
      iVar6 = 0;
      uVar4 = *(uint *)(param_1 + 0x11968);
      while( true ) {
        do {
          uVar3 = uVar4;
          if (uVar3 == 0) goto LAB_1002fce2a;
          uVar4 = uVar3 >> 1;
          lVar5 = (ulong)(uVar4 + iVar6) * 0x10;
          uVar1 = *(uint *)(*(long *)(param_1 + 0x11970) + lVar5);
        } while (uVar2 < uVar1);
        lVar5 = *(long *)(*(long *)(param_1 + 0x11970) + 8 + lVar5);
        if (uVar2 < uVar1 + *(int *)(lVar5 + 8)) break;
        iVar6 = uVar4 + iVar6 + 1;
        uVar4 = (uVar3 - 1) - uVar4;
      }
      if ((lVar5 == 0) || (uVar4 = FUN_1002a5a50(lVar5,uVar2 - uVar1,param_2,param_4), uVar4 == 0))
      break;
      param_2 = (void *)((long)param_2 + (ulong)uVar4);
      uVar2 = uVar2 + uVar4;
    }
LAB_1002fce2a:
    param_4 = uVar2 - param_3;
  }
  return param_4;
}

