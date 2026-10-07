
void FUN_100355900(long param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 local_70 [8];
  long local_68;
  long local_58;
  undefined1 local_48 [16];
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  local_38 = lVar13;
  if ((*(uint *)*puVar5 < 0xffff0300) && (*(int *)((long)puVar5 + 0x6c) != 0)) {
    uVar11 = 0;
    do {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"v[%d] = vec4(0.0, 0.0, 0.0, 1.0);\n",uVar11);
      uVar11 = uVar11 + 1;
      puVar5 = *(undefined8 **)(param_1 + 0x38);
    } while (uVar11 < *(uint *)((long)puVar5 + 0x6c));
    if (*(uint *)((long)puVar5 + 0x6c) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"\n");
      puVar5 = *(undefined8 **)(param_1 + 0x38);
    }
  }
  if (1 < *(uint *)((long)puVar5 + 0xac)) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"vFace = vec4(gl_FrontFacing ? 1.0 : -1.0);\n\n");
    puVar5 = *(undefined8 **)(param_1 + 0x38);
  }
  if (((*(uint *)*puVar5 < 0xffff0200) && (*(char *)(param_1 + 0x9c) == '\0')) &&
     (*(int *)((long)puVar5 + 0x74) != 0)) {
    uVar11 = 0;
    do {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"t[%d] = vec4(0.0, 0.0, 0.0, 1.0);\n",uVar11);
      uVar11 = uVar11 + 1;
      puVar5 = *(undefined8 **)(param_1 + 0x38);
    } while (uVar11 < *(uint *)((long)puVar5 + 0x74));
    if (*(uint *)((long)puVar5 + 0x74) != 0) {
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"\n");
      puVar5 = *(undefined8 **)(param_1 + 0x38);
    }
  }
  if (*(uint *)*puVar5 < 0xffff0104) {
    uVar11 = *(uint *)((long)puVar5 + 0xdc);
    uVar8 = 2;
    if ((uVar11 & 2) == 0) {
      uVar8 = uVar11 & 1;
    }
    uVar6 = 3;
    if ((uVar11 & 4) == 0) {
      uVar6 = uVar8;
    }
    uVar8 = 4;
    if ((uVar11 & 8) == 0) {
      uVar8 = uVar6;
    }
    uVar6 = 5;
    if ((uVar11 & 0x10) == 0) {
      uVar6 = uVar8;
    }
    uVar8 = 6;
    if ((uVar11 & 0x20) == 0) {
      uVar8 = uVar6;
    }
    uVar6 = 7;
    if ((uVar11 & 0x40) == 0) {
      uVar6 = uVar8;
    }
    uVar8 = 8;
    if ((uVar11 & 0x80) == 0) {
      uVar8 = uVar6;
    }
    if (uVar8 != 0) {
      uVar11 = 0;
      do {
        FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"texcoord[%d] = vec4(0.0, 0.0, 0.0, 1.0);\n",
                      uVar11);
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
      if (uVar8 == 0) {
        bVar3 = false;
      }
      else {
        FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"\n");
        bVar3 = true;
        uVar11 = 0;
        do {
          if ((*(uint *)(*(long *)(param_1 + 0x38) + 0xdc) >> (uVar11 & 0x1f) & 1) != 0) {
            plVar1 = *(long **)(param_1 + 0x70);
            if (plVar1 == (long *)0x0) {
              if (uVar11 < 8) {
                uVar12 = *(undefined8 *)(param_1 + 0x30);
                if (*(char *)(param_1 + 0x9c) == '\0') {
                  FUN_10038e8e0(uVar12,"texcoord[%d] = gl_TexCoord[%d];\n",uVar11,uVar11);
                }
                else {
LAB_100355ba3:
                  FUN_10038e8e0(uVar12,"texcoord[%d].xy = gl_PointCoord;\n",uVar11);
                }
              }
            }
            else {
              lVar13 = *plVar1;
              uVar4 = 1;
              uVar9 = 0;
              if (plVar1[1] - lVar13 != 0) {
                do {
                  uVar7 = uVar4;
                  lVar2 = uVar9 * 3;
                  if ((*(char *)(lVar13 + lVar2) == '\x05') &&
                     (*(byte *)(lVar13 + 2 + lVar2) == uVar11)) {
                    if (*(char *)(param_1 + 0x9c) != '\0') {
                      uVar12 = *(undefined8 *)(param_1 + 0x30);
                      goto LAB_100355ba3;
                    }
                    FUN_10038e870(local_70,local_48,0x10);
                    FUN_10038e8e0(local_70,"texcoord[%d]",uVar11);
                    lVar10 = local_68;
                    if (local_68 == 0) {
                      lVar10 = local_58;
                    }
                    FUN_10036c470(*(undefined8 *)(param_1 + 0x30),lVar13 + lVar2,lVar10);
                    FUN_10038e8c0(local_70);
                    break;
                  }
                  uVar4 = (ulong)((int)uVar7 + 1);
                  uVar9 = uVar7;
                } while (uVar7 < (ulong)((plVar1[1] - lVar13) * -0x5555555555555555));
              }
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar8);
      }
      lVar13 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (bVar3) {
        FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"\n");
      }
    }
  }
  if (lVar13 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

