
ulong FUN_100b1a7f0(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = (ulong)*(uint *)((ulong)*(uint *)(param_2 + 0x20) + *(long *)(param_2 + 8) +
                          (param_3 & 0xffffffff) * 4);
  uVar7 = 0;
  if (uVar9 != 0) {
    lVar6 = param_1[4];
    if (lVar6 == 0) {
      FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != si",
                    "DiskImageComp.cpp",0xbba,"GetBlockOffset");
    }
    uVar9 = *(uint *)(lVar6 + 0xc) * uVar9;
    lVar1 = *(long *)(*param_1 + -0x18);
    pcVar2 = *(code **)(*(long *)((long)param_1 + lVar1) + 0x198);
    lVar3 = *(long *)((long)param_1 + lVar1 + 0x38);
    uVar5 = FUN_100b1ffb0(lVar6);
    cVar4 = (*pcVar2)((long)param_1 + lVar1,lVar3 * uVar9,uVar5,"GetBlockOffset");
    uVar7 = 0;
    if (cVar4 != '\0') {
      lVar1 = *(long *)(lVar6 + 0x70);
      lVar6 = FUN_100b1ff40(lVar6);
      uVar8 = lVar6 + lVar1;
      uVar7 = uVar9;
      if ((uVar8 <= uVar9 && uVar9 - uVar8 != 0) &&
         (*(char *)(*(long *)(*param_1 + -0x18) + 0x48 + (long)param_1) != '\0')) {
        FUN_100df99c0("","dimg",0,"Error: Offset %llu lay out of configured disk size %llu",uVar9,
                      uVar8);
        (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a0))
                  ((long)param_1 + *(long *)(*param_1 + -0x18));
      }
    }
  }
  return uVar7;
}

