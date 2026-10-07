
undefined8 FUN_1003944a0(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined1 local_220 [8];
  long local_218;
  long local_208;
  undefined1 local_1f8 [8];
  uint local_1f0 [112];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_1003a25c0(local_1f0,param_1 + 0x58);
  local_1f0[0] = param_3;
  FUN_10038e870(local_220,local_1f8,8);
  FUN_10039ed40(local_220,param_3,"xyzw");
  if ((param_2 & 0xf) < 0xc) {
    uVar5 = param_2 >> 0x10 & 0xf;
    switch(param_2 & 0xf) {
    case 0:
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      lVar4 = local_218;
      if (local_218 == 0) {
        lVar4 = local_208;
      }
      uVar3 = FUN_1003a2680(local_1f0);
      FUN_10038e8e0(uVar2,"gl_Position%s = %s;\n",lVar4,uVar3);
      break;
    case 4:
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      if ((param_3 & 0xf0000) == 0xf0000) {
        uVar3 = FUN_1003a2680(local_1f0);
        FUN_10038e8e0(uVar2,"gl_PointSize = %s.x;\n",uVar3);
      }
      else {
        uVar3 = FUN_1003a2680(local_1f0);
        FUN_10038e8e0(uVar2,"gl_PointSize = %s;\n",uVar3);
      }
      break;
    case 5:
      if ((uVar5 < 8) && (*(char *)(param_1 + 0x51) == '\0')) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        lVar4 = local_218;
        if (local_218 == 0) {
          lVar4 = local_208;
        }
        uVar3 = FUN_1003a2680(local_1f0);
        FUN_10038e8e0(uVar2,"gl_TexCoord[%d]%s = %s;\n",uVar5,lVar4,uVar3);
      }
      break;
    case 10:
      if (uVar5 == 1) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        lVar4 = local_218;
        if (local_218 == 0) {
          lVar4 = local_208;
        }
        uVar3 = FUN_1003a2680(local_1f0);
        FUN_10038e8e0(uVar2,"gl_FrontSecondaryColor%s = %s;\n",lVar4,uVar3);
      }
      else if (uVar5 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        lVar4 = local_218;
        if (local_218 == 0) {
          lVar4 = local_208;
        }
        uVar3 = FUN_1003a2680(local_1f0);
        FUN_10038e8e0(uVar2,"gl_FrontColor%s = %s;\n",lVar4,uVar3);
      }
      break;
    case 0xb:
      if (((param_3 & 0xf0000) + 0xfffff & param_3 & 0xf0000) == 0 && uVar5 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        uVar3 = FUN_1003a2680(local_1f0);
        FUN_10038e8e0(uVar2,"gl_FogFragCoord = %s;\n",uVar3);
      }
    }
  }
  FUN_10038e8c0(local_220);
  FUN_1003a2670(local_1f0);
  if (lVar1 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

