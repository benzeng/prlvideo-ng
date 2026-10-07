
void FUN_10069a000(long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_RDX;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x4c) == 1) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar4 = *(ulong *)(*(long *)(**(long **)(lVar1 + 0x38) + -0x18) + 0x38 +
                      (long)*(long **)(lVar1 + 0x38));
    uVar5 = (ulong)*(uint *)(lVar1 + 0x10);
    uVar4 = (((param_2 * uVar4 * (ulong)*(uint *)(lVar1 + 0xc)) / uVar4 - 1) -
            *(ulong *)(lVar1 + 0x20) / uVar4) + uVar5;
    uVar3 = uVar4 / uVar5;
    uVar4 = uVar4 % uVar5;
    if (3 < DAT_1011b55f8) {
      FUN_1008e3970("Compact","dimg",4,"[%p] Block(idx %u, bat idx %u) marked as free",param_1,
                    uVar3 & 0xffffffff,param_2);
      uVar4 = extraout_RDX;
    }
    cVar2 = FUN_10069ca00(param_1 + 0x38,uVar3 & 0xffffffff,uVar4);
    if (cVar2 == '\0') {
      FUN_1008e3970("Compact","dimg",0,"[%p] Error: MarkAsFree(offset %u idx %u) internal error",
                    param_1,(ulong)param_2,(int)uVar3);
    }
  }
  return;
}

