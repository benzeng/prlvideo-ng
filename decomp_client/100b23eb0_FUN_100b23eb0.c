
void FUN_100b23eb0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  
  plVar1 = (long *)*param_1;
  uVar8 = (ulong)(*(long *)(*(long *)(*plVar1 + -0x18) + 0x58 + (long)plVar1) -
                 *(long *)(plVar1[4] + 0x20)) /
          *(ulong *)(*(long *)(*plVar1 + -0x18) + 0x38 + (long)plVar1);
  uVar10 = *(uint *)(plVar1[4] + 0x10);
  uVar7 = uVar8 / uVar10;
  uVar8 = uVar8 % (ulong)uVar10;
  uVar10 = *(uint *)((long)param_1 + 0x8bc);
  uVar11 = (uint)uVar7;
  if (uVar11 < uVar10) {
    FUN_100df99c0("Compact","dimg",0,"[%p] # of blocks: original %u, current %u",plVar1,uVar10,
                  uVar7 & 0xffffffff);
    lVar2 = *(long *)(*plVar1 + -0x18);
    uVar3 = *(undefined8 *)((long)plVar1 + lVar2 + 0x58);
    uVar12 = *(undefined8 *)(plVar1[4] + 0x20);
    uVar9 = (**(code **)(*(long *)((long)plVar1 + lVar2) + 0x160))(lVar2 + (long)plVar1);
    FUN_100df99c0("Compact","dimg",0,"[%p] DataArea.End %llu, DataOffset %llu, file size %llu",
                  plVar1,uVar3,uVar12,uVar9);
    uVar13 = (undefined4)((ulong)uVar12 >> 0x20);
    FUN_100b24b10(plVar1 + 7,0);
    *(undefined4 *)((long)plVar1 + 0x4c) = 0xffffffff;
    plVar1 = (long *)plVar1[7];
    (**(code **)(*(long *)((long)plVar1 + *(long *)(*plVar1 + -0x18)) + 0x1a0))
              ((long)plVar1 + *(long *)(*plVar1 + -0x18));
    FUN_100df99c0("Compact","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                  "StructuredBase.cpp",CONCAT44(uVar13,0x701),"ConsistencyCompletionCb");
    return;
  }
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("Compact","dimg",4,"[%p] # of blocks: original %u, current %u",plVar1,uVar10,
                  uVar7 & 0xffffffff);
    uVar10 = *(uint *)((long)param_1 + 0x8bc);
    uVar8 = extraout_RDX;
  }
  if (uVar10 < uVar11) {
    do {
      FUN_100b25070(plVar1 + 7,uVar10,uVar8);
      uVar10 = uVar10 + 1;
      uVar8 = extraout_RDX_00;
    } while (uVar10 != uVar11);
    uVar10 = *(uint *)((long)param_1 + 0x8bc);
    if (uVar10 < uVar11) {
      do {
        FUN_100b249e0(plVar1 + 7,uVar10);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
  }
  if (*(int *)((long)plVar1 + 0x4c) != -1) {
    *(undefined4 *)((long)plVar1 + 0x4c) = 1;
  }
  if (plVar1[0x301e] != 0) {
    lVar2 = plVar1[0x301c];
    plVar4 = (long *)plVar1[0x301d];
    lVar5 = *plVar4;
    *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar5;
    plVar1[0x301e] = 0;
    while (plVar4 != plVar1 + 0x301c) {
      plVar6 = (long *)plVar4[1];
      operator_delete(plVar4);
      plVar4 = plVar6;
    }
  }
  FUN_100b24b10(plVar1 + 7,4);
  return;
}

