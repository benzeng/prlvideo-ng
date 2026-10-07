
void FUN_100396b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint local_4c;
  uint local_48 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48[2] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  iVar1 = *(int *)(*(long *)(param_1 + 0xa8) + 0xc);
  if ((iVar1 != 0) && (FUN_10038e8e0(param_2,"gD = "), *(char *)(param_1 + 0x80) != '\0')) {
    FUN_10038e8e0(param_2,"gS = ");
  }
  uVar12 = 0;
  FUN_10038e8e0(param_2,"gA = vec3(0.0, 0.0, 0.0);\n");
  local_4c = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x70);
  puVar6 = (undefined8 *)*puVar2;
  do {
    if (puVar6 == puVar2 + 1) break;
    if (*(char *)(puVar6[5] + 0x74) != '\0') {
      local_48[*(uint *)(puVar6[5] + 0x70)] = local_48[*(uint *)(puVar6[5] + 0x70)] + 1;
      uVar12 = uVar12 + 1;
      local_4c = uVar12;
    }
    puVar7 = puVar6;
    puVar5 = (undefined8 *)puVar6[1];
    if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
      do {
        puVar6 = (undefined8 *)puVar7[2];
        bVar14 = (undefined8 *)*puVar6 != puVar7;
        puVar7 = puVar6;
      } while (bVar14);
    }
    else {
      do {
        puVar6 = puVar5;
        puVar5 = (undefined8 *)*puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
  } while (uVar12 < 8);
  lVar3 = *(long *)(param_1 + 0xb0);
  puVar4 = *(uint **)(lVar3 + 8);
  if (puVar4 == *(uint **)(lVar3 + 0x10)) {
    FUN_10027f110(lVar3,&local_4c);
  }
  else {
    *puVar4 = uVar12;
    *(uint **)(lVar3 + 8) = puVar4 + 1;
  }
  if (uVar12 != 0) {
    uVar11 = 0;
    iVar13 = 0;
    do {
      uVar12 = local_48[uVar11];
      iVar10 = (int)uVar11;
      if (3 < uVar12) {
        FUN_100397180(param_1,param_3,uVar11 & 0xffffffff,4);
      }
      if ((uVar12 & 3) != 0) {
        FUN_100397180(param_1,param_3,uVar11 & 0xffffffff);
      }
      if (0 < (int)uVar12) {
        do {
          uVar9 = 4;
          if ((int)uVar12 < 5) {
            uVar9 = uVar12;
          }
          if (iVar10 == 0) {
            pcVar8 = "lightSpot";
LAB_100396d20:
            FUN_10038e8e0(param_2,pcVar8);
          }
          else {
            if (iVar10 == 1) {
              pcVar8 = "lightPoint";
              goto LAB_100396d20;
            }
            if (iVar10 == 2) {
              pcVar8 = "lightDirectional";
              goto LAB_100396d20;
            }
          }
          FUN_10038e8e0(param_2,"%u(",uVar9);
          FUN_10038e8e0(param_2,"%u, gV.xyz, gD",iVar13);
          if (*(int *)(*(long *)(param_1 + 0xa8) + 0x9c) == 2) {
            FUN_10038e8e0(param_2,", c[OFF_MTRL_EMS].w");
          }
          if (uVar11 != 2) {
            FUN_10038e8e0(param_2,", gA");
          }
          if ((iVar1 != 0) && (FUN_10038e8e0(param_2,", gN.xyz"), *(char *)(param_1 + 0x80) != '\0')
             ) {
            FUN_10038e8e0(param_2,", gS");
          }
          FUN_10038e8e0(param_2,");\n");
          iVar13 = iVar13 + uVar9;
          bVar14 = 4 < (int)uVar12;
          uVar12 = uVar12 - 4;
        } while (bVar14);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 3);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

