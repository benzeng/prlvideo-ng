
void FUN_100699300(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  if (*(int *)(param_1 + 0x4c) == 1) {
    plVar1 = *(long **)(param_1 + 0x38);
    FUN_10069d930(plVar1,*(undefined8 *)(*(long *)(*plVar1 + -0x18) + 0x58 + (long)plVar1));
    (**(code **)(*plVar1 + 0x158))(plVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar4 = *(ulong *)(*(long *)(**(long **)(lVar2 + 0x38) + -0x18) + 0x38 +
                      (long)*(long **)(lVar2 + 0x38));
    uVar8 = (ulong)*(uint *)(lVar2 + 0x10);
    uVar5 = ((param_2 / uVar4 - 1) - *(ulong *)(lVar2 + 0x20) / uVar4) + uVar8;
    uVar4 = uVar5 / uVar8;
    cVar3 = FUN_10069c370(param_1 + 0x38,uVar4 & 0xffffffff,uVar5 % uVar8);
    if (cVar3 == '\0') {
      pcVar6 = "[%p] Error: MarkAsUsed(%llu) internal error";
      uVar7 = 0;
LAB_10069941f:
      FUN_1008e3970("Compact","dimg",uVar7,pcVar6,param_1,param_2);
      return;
    }
    if (3 < DAT_1011b55f8) {
      FUN_1008e3970("Compact","dimg",4,"[%p] Block idx %llu, file offset %llu bytes marked as used",
                    param_1,uVar4,param_2);
    }
  }
  else if (3 < DAT_1011b55f8) {
    pcVar6 = "[%p] Block with file offset %llu bytes skiped";
    uVar7 = 4;
    goto LAB_10069941f;
  }
  return;
}

