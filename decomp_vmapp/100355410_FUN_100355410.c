
void FUN_100355410(long param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  
  uVar1 = *(uint *)(DAT_1011c8478 + 4);
  bVar16 = 0;
  uVar10 = 0;
  do {
    if ((*(uint *)(*(long *)(param_1 + 0x38) + 0xe0) >> (uVar10 & 0x1f) & 1) != 0) {
      cVar5 = FUN_100399b30(*(undefined8 *)(param_1 + 0x20),uVar10);
      if (cVar5 == '\0') {
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        uVar7 = FUN_100399b00(*(undefined8 *)(param_1 + 0x20),uVar10);
        uVar8 = FUN_10036bd80(uVar10);
        FUN_10038e8e0(uVar2,"uniform %s %s;\n",uVar7,uVar8);
      }
      bVar6 = FUN_100399b50(*(undefined8 *)(param_1 + 0x20),uVar10);
      bVar16 = bVar16 & 1 | bVar6;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x10);
  if ((((param_2 != '\0') ||
       (puVar9 = *(undefined8 **)(param_1 + 0x38), *(int *)(puVar9 + 0x1b) != 0)) ||
      ((bVar16 & 1) != 0)) || (*(int *)((long)puVar9 + 0xe4) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = FUN_10036b910();
    FUN_10038e8e0(uVar2,uVar7);
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"\n");
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  if (*(int *)(puVar9 + 0x1c) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"\n");
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  if (*(int *)(puVar9 + 0xe) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"uniform vec4 c[%d];\n");
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  if (*(int *)((long)puVar9 + 0x84) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"uniform ivec4 i[%d];\n");
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  if (*(int *)(puVar9 + 0x14) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"uniform bool b[%d];\n");
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  if (*(uint *)*puVar9 < 0xffff0200) {
    if (uVar1 < 0x140) {
      pcVar13 = "#define ps_out0 gl_FragData[0]\n";
    }
    else {
      pcVar13 = "out vec4 ps_out0;\n";
    }
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),pcVar13);
    iVar15 = 1;
  }
  else {
    uVar10 = *(uint *)(puVar9 + 0x11);
    iVar15 = 0;
    if (uVar10 != 0) {
      uVar14 = *(uint *)(param_1 + 0x94) & 0xffffffef;
      iVar15 = 0;
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"vec4 oC[%u];\n",uVar10);
      if (uVar14 != 0) {
        uVar11 = 1;
        do {
          if ((uVar14 & 1) != 0) {
            if (uVar1 < 0x140) {
              FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#define ps_out%u gl_FragData[%u]\n",
                            iVar15,iVar15);
            }
            else {
              FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"out vec4 ps_out%u;\n",iVar15);
            }
            iVar15 = iVar15 + 1;
          }
          if (uVar10 <= uVar11) break;
          uVar11 = uVar11 + 1;
          uVar4 = uVar14 >> 1;
          uVar14 = uVar14 >> 1;
        } while (uVar4 != 0);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x94) & 0x10) != 0) {
    if (uVar1 < 0x140) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"#define ps_out%u gl_FragData[%u]\n",iVar15,
                    iVar15);
    }
    else {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"out vec4 ps_out%u;\n",iVar15);
    }
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"\n");
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  if (*(int *)((long)puVar9 + 0xa4) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"int aL;\n");
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  if (*(int *)((long)puVar9 + 0xb4) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"bvec4 p0;\n");
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  if (*(int *)((long)puVar9 + 0x6c) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"vec4 v[%d];\n");
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  if (*(int *)((long)puVar9 + 0x74) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"vec4 t[%d];\n");
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  iVar15 = *(int *)(puVar9 + 0xd);
  if (0 < iVar15) {
    iVar12 = 0;
    do {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"vec4 r%d;\n",iVar12);
      iVar12 = iVar12 + 1;
    } while (iVar15 != iVar12);
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  if (1 < *(uint *)((long)puVar9 + 0xac)) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"vec4 vFace;\n");
    puVar9 = *(undefined8 **)(param_1 + 0x38);
  }
  if ((*(int *)((long)puVar9 + 0xdc) != 0) && (*(uint *)*puVar9 < 0xffff0104)) {
    uVar1 = *(uint *)((long)puVar9 + 0xdc);
    uVar10 = 2;
    if ((uVar1 & 2) == 0) {
      uVar10 = uVar1 & 1;
    }
    uVar14 = 3;
    if ((uVar1 & 4) == 0) {
      uVar14 = uVar10;
    }
    uVar10 = 4;
    if ((uVar1 & 8) == 0) {
      uVar10 = uVar14;
    }
    uVar14 = 5;
    if ((uVar1 & 0x10) == 0) {
      uVar14 = uVar10;
    }
    uVar10 = 6;
    if ((uVar1 & 0x20) == 0) {
      uVar10 = uVar14;
    }
    uVar14 = 7;
    if ((uVar1 & 0x40) == 0) {
      uVar14 = uVar10;
    }
    uVar10 = 8;
    if ((uVar1 & 0x80) == 0) {
      uVar10 = uVar14;
    }
    if (uVar10 != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"vec4 texcoord[%d];\n");
      puVar9 = *(undefined8 **)(param_1 + 0x38);
    }
  }
  iVar15 = *(int *)(puVar9 + 0x16);
  if (iVar15 != 0) {
    puVar3 = *(uint **)(param_1 + 0x30);
    uVar1 = *puVar3;
    uVar10 = uVar1;
    if (0 < iVar15) {
      iVar12 = 0;
      do {
        if (iVar12 == 0) {
          FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"\n");
        }
        FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"void l%d();\n",iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar15);
      uVar10 = *puVar3;
    }
    if (uVar1 < uVar10) {
      FUN_10038e8e0(puVar3,"\n");
      return;
    }
  }
  return;
}

