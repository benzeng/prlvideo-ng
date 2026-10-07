
undefined8 FUN_100356600(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint local_1f8 [112];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  FUN_1003a25c0(local_1f8,param_1 + 0x78);
  uVar6 = param_2 >> 0x10 & 0xf;
  param_2 = param_2 & 0xf;
  local_1f8[0] = param_3;
  if (param_2 == 5) {
    if (uVar6 < 8) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      if (*(char *)(param_1 + 0x9c) == '\0') {
        uVar3 = FUN_1003a2680(local_1f8);
        uVar4 = FUN_1003a2750(local_1f8);
        uVar5 = FUN_1003a2850(local_1f8);
        FUN_10038e8e0(uVar2,"%s = %sgl_TexCoord[%d]%s;\n",uVar3,uVar4,uVar6,uVar5);
      }
      else {
        uVar3 = FUN_1003a2680(local_1f8);
        uVar4 = FUN_1003a2750(local_1f8);
        uVar5 = FUN_1003a2850(local_1f8);
        FUN_10038e8e0(uVar2,"%s = %svec4(gl_PointCoord, 0.0, 1.0)%s;\n",uVar3,uVar4,uVar5);
      }
    }
  }
  else if (param_2 == 10) {
    if (uVar6 == 1) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = FUN_1003a2680(local_1f8);
      uVar4 = FUN_1003a2750(local_1f8);
      uVar5 = FUN_1003a2850(local_1f8);
      FUN_10038e8e0(uVar2,"%s = %sgl_SecondaryColor%s;\n",uVar3,uVar4,uVar5);
    }
    else if (uVar6 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = FUN_1003a2680(local_1f8);
      uVar4 = FUN_1003a2750(local_1f8);
      uVar5 = FUN_1003a2850(local_1f8);
      FUN_10038e8e0(uVar2,"%s = %sgl_Color%s;\n",uVar3,uVar4,uVar5);
    }
  }
  else if (((param_2 == 0xb) &&
           (((param_3 & 0xf0000) + 0xfffff & param_3 & 0xf0000) == 0 && uVar6 == 0)) &&
          (*(int *)(param_1 + 0x40) == 7)) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = FUN_1003a2680(local_1f8);
    FUN_10038e8e0(uVar2,"%s = gl_FogFragCoord;\n",uVar3);
  }
  FUN_1003a2670(local_1f8);
  if (lVar1 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

