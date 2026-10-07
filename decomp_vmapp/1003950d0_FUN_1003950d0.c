
void FUN_1003950d0(long param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0xa8);
  iVar2 = *(int *)(lVar9 + 4);
  iVar3 = *(int *)(lVar9 + 8);
  if (*(int *)(lVar9 + 0x58) == 0) {
    pcVar7 = "1.0";
  }
  else {
    pcVar7 = "position.z";
  }
  FUN_10038e8e0(param_2,
                "vec4 vertex = vec4(position.xy, clamp(position.z, 0.0, %s), 1.0) / position.w;\n",
                pcVar7);
  FUN_10038e8e0(param_2,
                "gl_Position.x = dot(c[OFF_MAT_PROJ + 0], vertex);\ngl_Position.y = dot(c[OFF_MAT_PROJ + 1], vertex);\ngl_Position.z = dot(c[OFF_MAT_PROJ + 2], vertex);\ngl_Position.w = dot(c[OFF_MAT_PROJ + 3], vertex);\n"
               );
  lVar9 = *(long *)(param_1 + 0xb0);
  lVar4 = *(long *)(lVar9 + 0x80);
  uVar8 = lVar4 - *(long *)(lVar9 + 0x78) >> 2;
  if (uVar8 == 0) {
    FUN_10032f560(lVar9 + 0x78,1);
  }
  else if ((1 < uVar8) && (lVar6 = *(long *)(lVar9 + 0x78) + 4, lVar4 != lVar6)) {
    *(ulong *)(lVar9 + 0x80) = (~((lVar4 + -4) - lVar6) & 0xfffffffffffffffcU) + lVar4;
  }
  if (iVar2 == 0) {
    pcVar7 = "vec4(1.0)";
  }
  else {
    pcVar7 = *(char **)(param_1 + 0x28);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = *(char **)(param_1 + 0x38);
    }
  }
  FUN_10038e8e0(param_2,"vec4 out_color_0 = %s;\n",pcVar7);
  if (*(char *)(param_1 + 0x80) != '\0') {
    if (iVar3 == 0) {
      pcVar7 = "vec4(0.0)";
    }
    else {
      pcVar7 = *(char **)(param_1 + 0x50);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = *(char **)(param_1 + 0x60);
      }
    }
    FUN_10038e8e0(param_2,"vec4 out_color_1 = %s;\n",pcVar7);
  }
  if (*(char *)(param_1 + 0x81) != '\0') {
    FUN_100396290(param_1,param_2,"vertex");
  }
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0x60) == 0) {
    lVar9 = 0x42c;
    uVar5 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x78);
    uVar8 = 0;
    while (uVar5 != 0) {
      if ((uVar5 & 1) != 0) {
        uVar1 = *(ushort *)(*(long *)(param_1 + 0xa0) + lVar9);
        FUN_10038e8e0(param_2,"vec4 out_tex_%u = ",uVar8 & 0xffffffff);
        if (*(int *)(*(long *)(param_1 + 0xa8) + (ulong)(uVar1 + 5) * 4) == 0) {
          FUN_10038e8e0(param_2,"vec4(0.0, 0.0, 0.0, 1.0)");
        }
        else {
          FUN_10036bdb0(param_2,5,uVar1);
        }
        FUN_10038e8e0(param_2,";\n");
      }
      if (7 < uVar8 + 1) break;
      lVar9 = lVar9 + 0x100;
      uVar5 = *(int *)(*(long *)(param_1 + 0xa8) + 0x78) >> ((char)uVar8 + 1U & 0x1f);
      uVar8 = uVar8 + 1;
    }
  }
  FUN_10038e8e0(param_2,"\n");
  return;
}

