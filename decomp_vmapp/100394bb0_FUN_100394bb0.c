
undefined8
FUN_100394bb0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  bool bVar10;
  undefined1 local_498 [8];
  long local_490;
  long local_480;
  undefined1 local_470 [8];
  long local_468;
  long local_458;
  undefined1 local_448 [16];
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  *(long *)(param_1 + 0xa8) = param_3;
  *(undefined8 *)(param_1 + 0xb0) = param_8;
  *(undefined8 *)(param_1 + 0x70) = param_5;
  *(undefined8 *)(param_1 + 0x78) = param_6;
  bVar10 = true;
  if ((*(int *)(param_3 + 0x38) == 0) && (*(int *)(param_3 + 0x98) == 0)) {
    bVar10 = *(int *)(param_3 + 0x70) != 0;
  }
  *(bool *)(param_1 + 0x80) = bVar10;
  *(bool *)(param_1 + 0x81) = *(int *)(param_3 + 0x90) != 0;
  FUN_10038e870(local_470,local_438,0x400);
  cVar1 = *(char *)(DAT_1011c8478 + 0x2d);
  uVar2 = *(uint *)(DAT_1011c8478 + 4);
  uVar7 = 0x78;
  if (0x13f < uVar2) {
    uVar7 = 0x96;
  }
  FUN_10038e8e0(param_7,"#version %u\n\n",uVar7);
  if (cVar1 != '\0') {
    uVar7 = FUN_10038fee0();
    FUN_10038e8e0(param_7,uVar7);
  }
  if (param_4 != 0) {
    lVar9 = *(long *)(param_1 + 0xa8);
    iVar4 = 0;
    if (*(int *)(lVar9 + 0x5c) != 0) {
      FUN_10038e8e0(param_7,"#extension GL_EXT_gpu_shader4: enable\n");
      lVar9 = *(long *)(param_1 + 0xa8);
      iVar4 = *(int *)(lVar9 + 0x5c);
    }
    pcVar8 = "varying";
    if (0x13f < uVar2) {
      pcVar8 = "out";
    }
    FUN_10036c290(param_7,param_4,pcVar8,iVar4 != 0,*(int *)(lVar9 + 0x60) != 0);
    if (*(char *)(param_1 + 0x81) != '\0') {
      FUN_10038e8e0(param_7,"%s float v_fogCoord;\n",pcVar8);
    }
  }
  uVar7 = FUN_10036b880();
  FUN_10038e8e0(param_7,"uniform vec2 posCorrection;\n\n%s\n",uVar7);
  FUN_10038e8e0(local_470,"void main(void)\n{\n");
  if (*(char *)(param_1 + 0x81) != '\0') {
    FUN_10038e8e0(local_470,"float fogCoord;\n\n");
  }
  plVar3 = *(long **)(param_1 + 0x78);
  lVar9 = *plVar3;
  if (lVar9 != plVar3[1]) {
    pcVar8 = "attribute";
    if (0x13f < uVar2) {
      pcVar8 = "in";
    }
    do {
      if (*(char *)(lVar9 + 6) == '\x01') {
        piVar5 = (int *)(*(long *)(param_1 + 0xa8) + 0x88);
LAB_100394e13:
        if (*piVar5 - 1U < 4) {
          FUN_10038e870(local_498,local_448,0x10);
          FUN_10036bf10(local_498,*(undefined1 *)(lVar9 + 6),*(undefined1 *)(lVar9 + 7));
          lVar6 = local_490;
          if (local_490 == 0) {
            lVar6 = local_480;
          }
          FUN_10038e8e0(param_7,"%s vec4 %s;\n",pcVar8,lVar6);
          FUN_10038e8e0(local_470,"vec4 ");
          FUN_10036bdb0(local_470,*(undefined1 *)(lVar9 + 6),*(undefined1 *)(lVar9 + 7));
          FUN_10038e8e0(local_470," = ");
          if (cVar1 == '\0') {
            lVar6 = local_490;
            if (local_490 == 0) {
              lVar6 = local_480;
            }
            FUN_10038e8e0(local_470,lVar6);
          }
          else if (*(char *)(lVar9 + 4) == '\x0f') {
            lVar6 = local_490;
            if (local_490 == 0) {
              lVar6 = local_480;
            }
            FUN_10038e8e0(local_470,"vec4(halfToFloat(%s.xy), 0.0, 1.0)",lVar6);
          }
          else if (*(char *)(lVar9 + 4) == '\x10') {
            lVar6 = local_490;
            if (local_490 == 0) {
              lVar6 = local_480;
            }
            FUN_10038e8e0(local_470,"halfToFloat4(%s)",lVar6);
          }
          else {
            lVar6 = local_490;
            if (local_490 == 0) {
              lVar6 = local_480;
            }
            FUN_10038e8e0(local_470,lVar6);
          }
          if ((*(char *)(DAT_1011c8478 + 0x49) != '\0') && (*(char *)(lVar9 + 4) == '\x04')) {
            FUN_10038e8e0(local_470,".zyxw");
          }
          FUN_10038e8e0(local_470,";\n");
          FUN_10038e8c0(local_498);
          plVar3 = *(long **)(param_1 + 0x78);
        }
      }
      else if (((*(char *)(lVar9 + 6) != '\x05') ||
               (*(int *)(*(long *)(param_1 + 0xa8) + 0x60) == 0)) &&
              ((ulong)*(byte *)(lVar9 + 4) < 0x11)) {
        piVar5 = (int *)(&DAT_100b3ede0 + (ulong)*(byte *)(lVar9 + 4) * 4);
        goto LAB_100394e13;
      }
      lVar9 = lVar9 + 8;
    } while (lVar9 != plVar3[1]);
  }
  FUN_10038e8e0(param_7,"\n");
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (**(int **)(param_1 + 0xa8) == 0) {
    FUN_1003952f0(param_1,local_470,param_7);
  }
  else {
    FUN_1003950d0(param_1,local_470);
  }
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0x10) != 0) {
    FUN_10038e8e0(local_470,"gl_PointSize = psize.x;\n");
  }
  if (param_4 == 0) {
    FUN_100396000(param_1,local_470);
  }
  else {
    FUN_100395e50(param_1,local_470,param_4);
  }
  FUN_10036bf50(local_470,"gl_Position");
  if (local_468 == 0) {
    local_468 = local_458;
  }
  FUN_10038e8e0(param_7,"%s}\n",local_468);
  FUN_10038e8c0(local_470);
  if (lVar9 == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

