
undefined8 FUN_100b21ab0(long *param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 local_28 [8];
  
  uVar5 = 0x80021011;
  if (param_2 != 0) {
    cVar3 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                      ((long)param_1 + *(long *)(*param_1 + -0x18));
    uVar5 = 0x80021021;
    if (cVar3 != '\0') {
      uVar6 = (**(code **)(*param_1 + 0x120))(param_1,local_28);
      if (uVar6 == 0xffffffffffffffff) {
        uVar4 = FUN_100db96d0();
        FUN_100df99c0("","dimg",0,"Error: GetNewBlockOffset failed. %u",uVar4);
        uVar5 = 0x80021056;
      }
      else {
        lVar9 = param_1[4];
        uVar1 = *(ulong *)(lVar9 + 0x20);
        if (uVar6 < uVar1) {
          FUN_100df99c0("","dimg",0,"Error: invalid current position %llu, must be >= %llu",uVar6);
          uVar5 = 0x80021056;
        }
        else {
          uVar8 = (ulong)*(uint *)(lVar9 + 0x10);
          uVar7 = param_2 * uVar8 * *(long *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
          if (uVar6 - uVar1 < uVar7) {
            uVar7 = *(ulong *)(*(long *)(**(long **)(lVar9 + 0x38) + -0x18) + 0x38 +
                              (long)*(long **)(lVar9 + 0x38));
            FUN_100df99c0("","dimg",0,"Error: invalid blocks num param %u, must be <= %llu",param_2,
                          (((uVar8 - 1) + uVar6 / uVar7) - uVar1 / uVar7) / uVar8);
            uVar5 = 0x80021011;
          }
          else {
            lVar9 = uVar6 - uVar7;
            plVar2 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
            cVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,lVar9);
            if (cVar3 == '\0') {
              uVar4 = FUN_100db96d0();
              FUN_100df99c0("","dimg",0,"Error: truncate failed %u",uVar4);
              uVar5 = 0x80022002;
            }
            else {
              (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x188))
                        ((long)param_1 + *(long *)(*param_1 + -0x18),lVar9);
              uVar5 = 0;
            }
          }
        }
      }
    }
  }
  return uVar5;
}

