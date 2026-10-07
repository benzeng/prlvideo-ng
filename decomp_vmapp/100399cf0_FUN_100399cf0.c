
undefined * FUN_100399cf0(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined **ppuVar4;
  
  iVar1 = *(int *)(param_1 + 8 + (ulong)param_2 * 0xc);
  if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
    switch(iVar1) {
    case 1:
      if (param_3 < 5) {
        lVar2 = (long)(int)param_3;
        ppuVar4 = &PTR_s_texture2D_100bbd3b0;
LAB_100399d56:
        return ppuVar4[lVar2];
      }
      break;
    case 2:
      if (param_3 < 5) {
        lVar2 = (long)(int)param_3;
        ppuVar4 = &PTR_s_texture3D_100bbd410;
        goto LAB_100399d56;
      }
      break;
    case 3:
      if (param_3 < 5) {
        lVar2 = (long)(int)param_3;
        ppuVar4 = &PTR_s_textureCube_100bbd440;
        goto LAB_100399d56;
      }
      break;
    case 4:
      if (param_3 < 5) {
        lVar2 = (long)(int)param_3;
        ppuVar4 = &PTR_s_shadow2D_100bbd3e0;
        goto LAB_100399d56;
      }
    }
  }
  else {
    uVar3 = 0;
    if (iVar1 != 3) {
      uVar3 = param_3;
    }
    if (param_3 != 4) {
      uVar3 = param_3;
    }
    if (uVar3 < 5) {
      lVar2 = (long)(int)uVar3;
      ppuVar4 = &PTR_s_texture_100bbd470;
      goto LAB_100399d56;
    }
  }
  return (undefined *)0x0;
}

