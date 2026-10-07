
void FUN_100396940(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((((((*(int *)(*(long *)(param_1 + 0xa8) + 0x34) == 0) &&
         ((uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78), (uVar1 & 1) == 0 ||
          ((*(uint *)(*(long *)(param_1 + 0xa0) + 0x42c) & 0xfffd0000) != 0x10000)))) &&
        (((uVar1 & 2) == 0 ||
         ((*(uint *)(*(long *)(param_1 + 0xa0) + 0x52c) & 0xfffd0000) != 0x10000)))) &&
       (((((uVar1 & 4) == 0 ||
          ((*(uint *)(*(long *)(param_1 + 0xa0) + 0x62c) & 0xfffd0000) != 0x10000)) &&
         (((uVar1 & 8) == 0 ||
          ((*(uint *)(*(long *)(param_1 + 0xa0) + 0x72c) & 0xfffd0000) != 0x10000)))) &&
        (((uVar1 & 0x10) == 0 ||
         ((*(uint *)(*(long *)(param_1 + 0xa0) + 0x82c) & 0xfffd0000) != 0x10000)))))) &&
      (((uVar1 & 0x20) == 0 ||
       ((*(uint *)(*(long *)(param_1 + 0xa0) + 0x92c) & 0xfffd0000) != 0x10000)))) &&
     (((uVar1 & 0x40) == 0 ||
      ((*(uint *)(*(long *)(param_1 + 0xa0) + 0xa2c) & 0xfffd0000) != 0x10000)))) {
    if ((uVar1 & 0x80) == 0) {
      return;
    }
    if ((*(uint *)(*(long *)(param_1 + 0xa0) + 0xb2c) & 0xfffd0000) != 0x10000) {
      return;
    }
  }
  FUN_10038e8e0(param_2,"vec4 gN;\n");
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0x88) == 0) {
    FUN_10038e8e0(param_2,
                  "gN.x = dot(c[OFF_MAT_IMVIEW + 0], vec4(normal.xyz, 0.0));\ngN.y = dot(c[OFF_MAT_IMVIEW + 1], vec4(normal.xyz, 0.0));\ngN.z = dot(c[OFF_MAT_IMVIEW + 2], vec4(normal.xyz, 0.0));\ngN.w = 0.0;\n"
                 );
    lVar2 = *(long *)(param_1 + 0xb0);
    lVar3 = *(long *)(lVar2 + 0x68);
    uVar5 = lVar3 - *(long *)(lVar2 + 0x60) >> 2;
    if (uVar5 == 0) {
      FUN_10032f560(lVar2 + 0x60,1);
    }
    else if ((1 < uVar5) && (lVar4 = *(long *)(lVar2 + 0x60) + 4, lVar3 != lVar4)) {
      *(ulong *)(lVar2 + 0x68) = (~((lVar3 + -4) - lVar4) & 0xfffffffffffffffcU) + lVar3;
    }
  }
  else {
    FUN_100396740(param_1,param_2,1);
  }
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0x50) == 0) {
    return;
  }
  FUN_10038e8e0(param_2,"gN = normalize(gN);\n");
  return;
}

