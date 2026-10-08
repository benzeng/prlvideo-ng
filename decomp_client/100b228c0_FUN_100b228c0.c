
undefined8 FUN_100b228c0(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_3 < param_2) {
    FUN_100df99c0("","dimg",0,"Filling wrong range: %u .. %u",param_2,param_3);
    uVar6 = 0x80000003;
  }
  else {
    iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 8);
    uVar7 = (param_3 - param_2) * iVar4;
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar9 = (ulong)uVar7;
      uVar8 = (ulong)(iVar4 * param_2) + *(long *)(*(long *)(param_1 + 0x20) + 0x18);
      do {
        uVar1 = (uVar8 & 0xfffffffffffff000) + 0x1000;
        uVar10 = uVar1 - uVar8;
        if (uVar9 + uVar8 <= uVar1) {
          uVar10 = uVar9;
        }
        iVar4 = FUN_100b224b0(param_1 + 0x18098);
        if (iVar4 != 0) {
          return 0x80021029;
        }
        ___bzero((ulong)*(uint *)(param_1 + 0x180b8) + (uVar8 & 0xfff) +
                 *(long *)(param_1 + 0x180a0),uVar10);
        *(undefined1 *)(param_1 + 0x180d8) = 1;
        if (*(long *)(param_1 + 0x180d0) != -1) {
          plVar2 = *(long **)(*(long *)(**(long **)(param_1 + 0x180c8) + -0x18) + 8 +
                             (long)*(long **)(param_1 + 0x180c8));
          cVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined8 *)(param_1 + 0x180a0),0x1000,0);
          if (cVar3 == '\0') {
            uVar6 = *(undefined8 *)(param_1 + 0x180d0);
            uVar5 = FUN_100db96d0();
            FUN_100df99c0("","dimg",0,"FlushOffsets failed. Write [Offset %llu] Error %d",uVar6,
                          uVar5);
          }
          else {
            *(undefined1 *)(param_1 + 0x180d8) = 0;
          }
        }
        uVar6 = 0;
        uVar9 = uVar9 - uVar10;
        uVar8 = uVar1;
      } while (uVar9 != 0);
    }
  }
  return uVar6;
}

