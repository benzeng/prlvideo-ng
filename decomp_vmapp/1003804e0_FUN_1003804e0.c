
void FUN_1003804e0(undefined4 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_s__version_410__define_IN_VS_in__d_101118ae0;
  if (((*(uint *)(DAT_1011c8478 + 4) < 0x19a) &&
      (puVar5 = PTR_s__version_150__define_IN_VS_in__d_101118ad8,
      *(uint *)(DAT_1011c8478 + 4) < 0x140)) &&
     (puVar5 = PTR_s__version_110__extension_GL_ARB_s_101118ad0,
     *(char *)(DAT_1011c8478 + 0x2b) != '\0')) {
    puVar5 = PTR_s__version_110__extension_GL_ARB_t_101118ae8;
  }
  iVar2 = FUN_10036d620(1,puVar5,PTR_s_IN_VS_vec2_pos__IN_VS_vec4_src__I_101118af0);
  if (iVar2 != 0) {
    iVar3 = FUN_10036d620(0,puVar5,(&PTR_s_IN_PS_vec2_texCoord__IN_PS_FLAT_f_101118b00)[param_2]);
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003806a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_1011c5b78)(iVar2);
      return;
    }
    uVar4 = (*DAT_1011c5ae8)();
    *param_1 = uVar4;
    (*DAT_1011c56c8)(uVar4,iVar2);
    (*DAT_1011c56c8)(*param_1,iVar3);
    (*DAT_1011c56f8)(*param_1,0,"pos");
    (*DAT_1011c56f8)(*param_1,1,"src");
    (*DAT_1011c56f8)(*param_1,2,"dst");
    (*DAT_1011c56f8)(*param_1,3,"size");
    (*DAT_1011c56f8)(*param_1,4,"ext");
    (*DAT_1011c56f8)(*param_1,5,"colorkey");
    if (0x13f < *(uint *)(DAT_1011c8478 + 4)) {
      (*DAT_1011c74c0)(*param_1,0,"OUT_COLOR");
    }
    cVar1 = FUN_10036d740(*param_1);
    (*DAT_1011c5bb8)(*param_1,iVar2);
    (*DAT_1011c5bb8)(*param_1,iVar3);
    (*DAT_1011c5b78)(iVar2);
    (*DAT_1011c5b78)(iVar3);
    if (cVar1 == '\0') {
      (*DAT_1011c5b40)(*param_1);
      *param_1 = 0;
    }
    else {
      uVar4 = (*DAT_1011c6230)(*param_1,"tex");
      param_1[1] = uVar4;
    }
  }
  return;
}

