
undefined8 FUN_100356410(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint local_3b8 [112];
  uint local_1f8 [112];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (((param_2 & 0xf) == 5) && (*(char *)(param_1 + 0x9c) != '\0')) {
    FUN_1003a25c0(local_1f8,param_1 + 0x78);
    local_1f8[0] = param_3 | 0xf0000;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = FUN_1003a2680(local_1f8);
    FUN_10038e8e0(uVar2,"%s = vec4(gl_PointCoord, 0.0, 1.0);\n",uVar6);
    FUN_1003a2670(local_1f8);
  }
  else {
    lVar3 = **(long **)(param_1 + 0x70);
    lVar7 = (*(long **)(param_1 + 0x70))[1] - lVar3;
    if (lVar7 != 0) {
      uVar10 = param_2 >> 0x10 & 0xf;
      uVar5 = 1;
      uVar9 = 0;
      do {
        uVar8 = uVar5;
        lVar4 = uVar9 * 3;
        if (((uint)*(byte *)(lVar3 + lVar4) == (param_2 & 0xf)) &&
           (*(byte *)(lVar3 + 2 + lVar4) == uVar10)) {
          FUN_1003a25c0(local_3b8,param_1 + 0x78);
          if ((*(char *)(lVar3 + lVar4) == '\v') &&
             ((((param_3 & 0xf0000) + 0xfffff & param_3 & 0xf0000) == 0 && uVar10 == 0 &&
              (*(int *)(param_1 + 0x40) == 7)))) {
            uVar2 = *(undefined8 *)(param_1 + 0x30);
            uVar6 = FUN_1003a2680(local_3b8);
            FUN_10038e8e0(uVar2,"%s = v_fogCoord;\n",uVar6);
          }
          else {
            local_3b8[0] = param_3 | 0xf0000;
            uVar2 = *(undefined8 *)(param_1 + 0x30);
            uVar6 = FUN_1003a2680(local_3b8);
            FUN_10036c470(uVar2,(char *)(lVar3 + lVar4),uVar6);
          }
          FUN_1003a2670(local_3b8);
          break;
        }
        uVar5 = (ulong)((int)uVar8 + 1);
        uVar9 = uVar8;
      } while (uVar8 < (ulong)(lVar7 * -0x5555555555555555));
    }
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

