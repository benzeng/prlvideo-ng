
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100392ad0(long param_1,long param_2,uint param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 local_60 [8];
  long local_58;
  long local_48;
  undefined1 local_34 [4];
  
  uVar9 = *(uint *)(*(long *)(param_1 + 0x30) + 0x70);
  if (uVar9 <= param_3) {
    param_3 = uVar9;
  }
  if (uVar9 == 0x100) {
    if (*(char *)(DAT_1011c8478 + 0x38) == '\0') {
      bVar12 = false;
    }
    else {
      bVar12 = param_3 < *(uint *)(param_2 + 8);
    }
  }
  else {
    bVar12 = false;
  }
  param_3 = bVar12 + param_3;
  uVar1 = *(uint *)(DAT_1011c8478 + 4);
  if (*(char *)(DAT_1011c8478 + 0x4b) == '\0') {
    bVar13 = false;
  }
  else {
    bVar13 = *(uint *)(param_2 + 8) < param_3;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  if (uVar1 < 0x140) {
    FUN_10038e8e0(uVar11,"#version 110\n");
    if ((bVar12 | param_4) == 1) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"#extension GL_EXT_gpu_shader4: enable\n");
    }
    if (!bVar13) goto LAB_100392baf;
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    pcVar10 = "#extension GL_EXT_bindable_uniform: enable\n";
  }
  else {
    pcVar10 = "#version 150\n";
  }
  FUN_10038e8e0(uVar11,pcVar10);
LAB_100392baf:
  if (*(char *)(DAT_1011c8478 + 0x2d) != '\0') {
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = FUN_10038fee0();
    FUN_10038e8e0(uVar11,uVar4);
  }
  FUN_100393e90(param_1);
  if ((*(char *)(DAT_1011c8478 + 0x37) == '\0') && (*(char *)(param_1 + 0x50) != '\0')) {
    pcVar10 = "varying";
    if (0x13f < uVar1) {
      pcVar10 = "out";
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"%s vec4 v_clipVertex;\n\n",pcVar10);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    pcVar10 = "varying";
    if (0x13f < uVar1) {
      pcVar10 = "out";
    }
    FUN_10036c290(*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x48),pcVar10,param_4,
                  *(undefined1 *)(param_1 + 0x51));
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"%s float v_fogCoord;\n",pcVar10);
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"\n");
  }
  lVar7 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar7 + 0x84) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"#define i vs_i\n");
    lVar7 = *(long *)(param_1 + 0x30);
  }
  if (*(int *)(lVar7 + 0xa0) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"#define b vs_b\n");
  }
  if (*(char *)(DAT_1011c8478 + 100) == '\0') {
    pcVar10 = "uniform vec2 posCorrection;\n";
  }
  else {
    pcVar10 = "uniform PosCB {vec2 posCorrection;};\n";
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),pcVar10);
  if (param_3 != 0) {
    FUN_10038e870(local_60,local_34,4);
    if (bVar13) {
      FUN_10038e8e0(local_60,"cb");
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"bindable ");
    }
    else {
      FUN_10038e8e0(local_60,"c");
    }
    lVar7 = local_58;
    if (local_58 == 0) {
      lVar7 = local_48;
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"uniform vec4 %s[%d];\n",lVar7,param_3);
    if (*(char *)(DAT_1011c8478 + 0x39) == '\0') {
      lVar7 = local_58;
      if (local_58 == 0) {
        lVar7 = local_48;
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"vec4 C(int N) { return %s[N]; }\n",lVar7);
    }
    else {
      lVar7 = local_58;
      if (local_58 == 0) {
        lVar7 = local_48;
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"#define C(N) %s[N]\n",lVar7);
    }
    if (uVar9 == 0x100) {
      if (bVar12 == false) {
        if (local_58 == 0) {
          local_58 = local_48;
        }
        FUN_10038e8e0((double)((float)param_3 + _DAT_100b3ed84),*(undefined8 *)(param_1 + 0x28),
                      "vec4 Crel(int N) { int cN = int(clamp(float(N),0.0,%f)); return(float(cN == N)*%s[cN]);}\n"
                      ,local_58);
      }
      else {
        if (local_58 == 0) {
          local_58 = local_48;
        }
        FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),
                      "#define Crel(N) (%s[min(((N) & 2147483647), %d)]) \n",local_58,param_3 - 1);
      }
    }
    FUN_10038e8c0(local_60);
  }
  if (((*(byte *)(*(long *)(param_1 + 0x30) + 0xf0) & 1) != 0) &&
     (cVar3 = FUN_100399b30(*(undefined8 *)(param_1 + 0x38),0x10), cVar3 == '\0')) {
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = FUN_100399b00(*(undefined8 *)(param_1 + 0x38),0x10);
    uVar5 = FUN_10036bd80(0x10);
    FUN_10038e8e0(uVar11,"uniform %s %s;\n",uVar4,uVar5);
  }
  if (((*(byte *)(*(long *)(param_1 + 0x30) + 0xf0) & 2) != 0) &&
     (cVar3 = FUN_100399b30(*(undefined8 *)(param_1 + 0x38),0x11), cVar3 == '\0')) {
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = FUN_100399b00(*(undefined8 *)(param_1 + 0x38),0x11);
    uVar5 = FUN_10036bd80(0x11);
    FUN_10038e8e0(uVar11,"uniform %s %s;\n",uVar4,uVar5);
  }
  if (((*(byte *)(*(long *)(param_1 + 0x30) + 0xf0) & 4) != 0) &&
     (cVar3 = FUN_100399b30(*(undefined8 *)(param_1 + 0x38),0x12), cVar3 == '\0')) {
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = FUN_100399b00(*(undefined8 *)(param_1 + 0x38),0x12);
    uVar5 = FUN_10036bd80(0x12);
    FUN_10038e8e0(uVar11,"uniform %s %s;\n",uVar4,uVar5);
  }
  if (((*(byte *)(*(long *)(param_1 + 0x30) + 0xf0) & 8) != 0) &&
     (cVar3 = FUN_100399b30(*(undefined8 *)(param_1 + 0x38),0x13), cVar3 == '\0')) {
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = FUN_100399b00(*(undefined8 *)(param_1 + 0x38),0x13);
    uVar5 = FUN_10036bd80(0x13);
    FUN_10038e8e0(uVar11,"uniform %s %s;\n",uVar4,uVar5);
  }
  lVar7 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar7 + 0xf0) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"\n");
    lVar7 = *(long *)(param_1 + 0x30);
  }
  if (*(int *)(lVar7 + 0x74) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"ivec4 a0;\n");
    lVar7 = *(long *)(param_1 + 0x30);
  }
  if (*(int *)(lVar7 + 0xb4) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"bvec4 p0;\n");
    lVar7 = *(long *)(param_1 + 0x30);
  }
  if (*(int *)(lVar7 + 0xa4) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"int aL;\n");
    lVar7 = *(long *)(param_1 + 0x30);
  }
  if (*(int *)(lVar7 + 0x84) != 0) {
    if ((*(char *)(DAT_1011c8478 + 100) == '\0') || (param_3 <= *(uint *)(param_2 + 8))) {
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      pcVar10 = "uniform ivec4 i[%d];\n";
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      pcVar10 = "layout(std140) uniform IntCB { ivec4 i[%d]; };\n";
    }
    FUN_10038e8e0(uVar11,pcVar10);
  }
  if (*(int *)(*(long *)(param_1 + 0x30) + 0xa0) != 0) {
    if ((*(char *)(DAT_1011c8478 + 100) == '\0') || (param_3 <= *(uint *)(param_2 + 8))) {
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      pcVar10 = "uniform bool b[%d];\n";
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      pcVar10 = "layout(std140) uniform BoolCB { bool b[%d]; };\n";
    }
    FUN_10038e8e0(uVar11,pcVar10);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x30);
  if (*(int *)((long)puVar6 + 0x6c) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"vec4 v[%d];\n");
    puVar6 = *(undefined8 **)(param_1 + 0x30);
  }
  iVar2 = *(int *)(puVar6 + 0xd);
  if (iVar2 != 0) {
    iVar8 = 0;
    do {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"vec4 r%d;\n",iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
    puVar6 = *(undefined8 **)(param_1 + 0x30);
  }
  if (*(int *)(puVar6 + 0x10) != 0) {
    if (*(uint *)*puVar6 < 0xfffe0300) {
      pcVar10 = "vec4 oT[%d];\n";
    }
    else {
      pcVar10 = "vec4 o[%d];\n";
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),pcVar10);
  }
  lVar7 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar7 + 0x7c) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"vec4 oD[%d];\n");
    lVar7 = *(long *)(param_1 + 0x30);
  }
  if (((*(int *)(lVar7 + 0x78) != 0) &&
      (FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"vec4 oPos;\n"),
      1 < *(uint *)(*(long *)(param_1 + 0x30) + 0x78))) &&
     (FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"vec4 oFog;\n"),
     2 < *(uint *)(*(long *)(param_1 + 0x30) + 0x78))) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"vec4 oPts;\n");
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"\n");
  iVar2 = *(int *)(*(long *)(param_1 + 0x30) + 0xb0);
  if (iVar2 != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    iVar8 = 0;
    do {
      FUN_10038e8e0(uVar11,"void l%d();\n",iVar8);
      iVar8 = iVar8 + 1;
      uVar11 = *(undefined8 *)(param_1 + 0x28);
    } while (iVar2 != iVar8);
    FUN_10038e8e0(uVar11,"\n");
  }
  uVar9 = 0;
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"void main()\n{\nvec4 dst, src0, src1, src2;\n");
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"bvec4 bdst;\n\n");
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x6c) != 0) {
    do {
      FUN_10038e8e0(uVar11,"v[%d] = vec4(0.0, 0.0, 0.0, 1.0);\n",uVar9);
      uVar9 = uVar9 + 1;
      uVar11 = *(undefined8 *)(param_1 + 0x28);
    } while (uVar9 < *(uint *)(*(long *)(param_1 + 0x30) + 0x6c));
  }
  FUN_10038e8e0(uVar11,"\n");
  return;
}

