
undefined8 FUN_1003941e0(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint local_1f8 [2];
  undefined4 local_1f0;
  undefined4 local_1d8 [2];
  undefined1 *local_1d0;
  undefined1 *local_1c0;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_1003a25c0(local_1f8,param_1 + 0x58);
  uVar5 = param_2 & 0xf;
  local_1f8[0] = param_3;
  if (uVar5 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = FUN_1003a2680(local_1f8);
    FUN_10038e8e0(uVar1,"gl_Position = %s;\n",uVar6);
  }
  else if (uVar5 == 4) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    if ((param_3 & 0xf0000) == 0xf0000) {
      uVar6 = FUN_1003a2680(local_1f8);
      FUN_10038e8e0(uVar1,"gl_PointSize = %s.x;\n",uVar6);
    }
    else {
      uVar6 = FUN_1003a2680(local_1f8);
      FUN_10038e8e0(uVar1,"gl_PointSize = %s;\n",uVar6);
    }
  }
  else {
    uVar8 = param_2 >> 0x10 & 0xf;
    if (((uVar5 == 0xb) && (((param_3 & 0xf0000) + 0xfffff & param_3 & 0xf0000) == 0 && uVar8 == 0))
       && (*(int *)(param_1 + 0x40) != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = FUN_1003a2680(local_1f8);
      FUN_10038e8e0(uVar1,"v_fogCoord = %s;\n",uVar6);
    }
    else {
      lVar2 = **(long **)(param_1 + 0x48);
      lVar9 = (*(long **)(param_1 + 0x48))[1] - lVar2;
      if (lVar9 != 0) {
        uVar4 = 1;
        uVar10 = 0;
        do {
          uVar7 = uVar4;
          lVar3 = uVar10 * 3;
          if ((*(byte *)(lVar2 + lVar3) == uVar5) && (*(byte *)(lVar2 + 2 + lVar3) == uVar8)) {
            if (uVar5 == 5) {
              if (*(char *)(param_1 + 0x51) != '\0') goto LAB_100394347;
              local_1f8[0] = param_3 | 0xf0000;
            }
            else {
              local_1f8[0] = param_3 | 0xf0000;
              if ((uVar5 == 10) && (*(uint *)**(undefined8 **)(param_1 + 0x30) < 0xfffe0300)) {
                uVar1 = *(undefined8 *)(param_1 + 0x28);
                uVar6 = FUN_1003a2680(local_1f8);
                FUN_10038e8e0(uVar1,"src0 = clamp(%s, 0.0, 1.0);\n",uVar6);
                if (local_1d0 == (undefined1 *)0x0) {
                  local_1d0 = local_1c0;
                }
                *local_1d0 = 0;
                local_1d8[0] = 0;
                FUN_10038e8e0(local_1d8,"src0");
                local_1f0 = 0;
              }
            }
            uVar1 = *(undefined8 *)(param_1 + 0x28);
            uVar6 = FUN_1003a2680(local_1f8);
            FUN_10036c4f0(uVar1,lVar2 + lVar3,uVar6);
            break;
          }
LAB_100394347:
          uVar4 = (ulong)((int)uVar7 + 1);
          uVar10 = uVar7;
        } while (uVar7 < (ulong)(lVar9 * -0x5555555555555555));
      }
    }
  }
  FUN_1003a2670(local_1f8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

