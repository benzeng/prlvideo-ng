
void FUN_100396290(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 local_80 [8];
  long local_78;
  long local_68;
  undefined1 local_58 [32];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  FUN_10038e870(local_80,local_58,0x20);
  uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x90);
  switch(uVar1) {
  case 1:
  case 2:
  case 3:
    FUN_10038e8e0(local_80,"abs(%s.z)",param_3);
    break;
  case 4:
  case 5:
  case 6:
    FUN_10038e8e0(local_80,"length(%s)",param_3);
    break;
  case 7:
    FUN_10038e8e0(param_2,"fogCoord = ");
    if (*(int *)(*(long *)(param_1 + 0xa8) + 8) == 0) {
      FUN_10038e8e0(param_2,"0.0;\n");
    }
    else {
      lVar5 = *(long *)(param_1 + 0x50);
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_1 + 0x60);
      }
      FUN_10038e8e0(param_2,"%s.a;\n",lVar5);
    }
    goto LAB_100396466;
  default:
    goto switchD_1003962f2_caseD_8;
  case 9:
    FUN_10038e8e0(param_2,"fogCoord = fog.x;\n");
    goto LAB_100396466;
  }
  if (uVar1 < 7) {
    if ((0x12U >> (uVar1 & 0x1f) & 1) == 0) {
      if ((0x24U >> (uVar1 & 0x1f) & 1) == 0) {
        if ((0x48U >> (uVar1 & 0x1f) & 1) != 0) {
          if (local_78 == 0) {
            local_78 = local_68;
          }
          FUN_10038e8e0(param_2,"fogCoord = (c[OFF_FOG_PARAMS].y - %s) * c[OFF_FOG_PARAMS].z;\n",
                        local_78);
        }
      }
      else {
        if (local_78 == 0) {
          local_78 = local_68;
        }
        FUN_10038e8e0(param_2,"fogCoord = exp(-pow(c[OFF_FOG_PARAMS].x * %s, 2.0));\n",local_78);
      }
    }
    else {
      if (local_78 == 0) {
        local_78 = local_68;
      }
      FUN_10038e8e0(param_2,"fogCoord = exp(-c[OFF_FOG_PARAMS].x * %s);\n",local_78);
    }
  }
switchD_1003962f2_caseD_8:
  lVar5 = *(long *)(param_1 + 0xb0);
  lVar3 = *(long *)(lVar5 + 200);
  uVar6 = lVar3 - *(long *)(lVar5 + 0xc0) >> 2;
  if (uVar6 == 0) {
    FUN_10032f560(lVar5 + 0xc0,1);
  }
  else if ((1 < uVar6) && (lVar4 = *(long *)(lVar5 + 0xc0) + 4, lVar3 != lVar4)) {
    *(ulong *)(lVar5 + 200) = (~((lVar3 + -4) - lVar4) & 0xfffffffffffffffcU) + lVar3;
  }
LAB_100396466:
  FUN_10038e8c0(local_80);
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

