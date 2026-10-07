
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ad430(long param_1)

{
  undefined4 uVar1;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  char *pcStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_68 = 0;
  pcStack_60 = "pos";
  local_58 = 1;
  pcStack_50 = "src";
  local_48 = 2;
  pcStack_40 = "dst";
  uVar1 = FUN_1002ad260(*(undefined4 *)(param_1 + 0x85c),
                        "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nOUT_VS vec2 t0;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n t0 = pos * src.zw + src.xy;\n}\n"
                        ,
                        "IN_PS vec2 t0;\nuniform sampler2DRect tex;\nvoid main() { OUT_COLOR = TEXTURE2DRECT(tex, t0); }\n"
                        ,3,&local_68);
  *(undefined4 *)(param_1 + 0x11874) = uVar1;
  (*DAT_1011c6ee0)(uVar1);
  uVar1 = (*DAT_1011c6230)(*(undefined4 *)(param_1 + 0x11874),"tex");
  (*DAT_1011c6d38)(uVar1,0);
  uVar1 = FUN_1002ad260(*(undefined4 *)(param_1 + 0x85c),
                        "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nOUT_VS vec2 t0;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n t0 = pos * src.zw + src.xy;\n}\n"
                        ,
                        "IN_PS vec2 t0;\nuniform sampler2D tex;\nvoid main() { OUT_COLOR = TEXTURE2D(tex, t0); }\n"
                        ,3,&local_68);
  *(undefined4 *)(param_1 + 0x11878) = uVar1;
  (*DAT_1011c6ee0)(uVar1);
  uVar1 = (*DAT_1011c6230)(*(undefined4 *)(param_1 + 0x11878),"tex");
  (*DAT_1011c6d38)(uVar1,0);
  local_98 = 0;
  pcStack_90 = "pos";
  local_88 = 1;
  pcStack_80 = "color";
  local_78 = 2;
  pcStack_70 = "base";
  uVar1 = FUN_1002ad260(*(undefined4 *)(param_1 + 0x85c),
                        "IN_VS vec2 pos;\nIN_VS vec4 color;\nIN_VS vec4 base;\nOUT_VS_FLAT vec4 c;\nvoid main()\n{\n gl_Position = vec4(pos, 0., 0.) + vec4(base.x - base.w, base.w - base.y, base.z, base.w);\n c = color;\n}\n"
                        ,"IN_PS_FLAT vec4 c;\nvoid main() { OUT_COLOR = c; }\n",3,&local_98);
  *(undefined4 *)(param_1 + 0x11880) = uVar1;
  local_a8 = _DAT_100bb2d30;
  puStack_a0 = PTR_s_keyColor_100bb2d38;
  local_b8 = _DAT_100bb2d20;
  uStack_b0 = _UNK_100bb2d28;
  local_c8 = _DAT_100bb2d10;
  uStack_c0 = _UNK_100bb2d18;
  local_d8 = _DAT_100bb2d00;
  uStack_d0 = _UNK_100bb2d08;
  local_e8 = _DAT_100bb2cf0;
  uStack_e4 = _UNK_100bb2cf4;
  uStack_e0 = _UNK_100bb2cf8;
  uStack_dc = _UNK_100bb2cfc;
  uVar1 = FUN_1002ad260(*(undefined4 *)(param_1 + 0x85c),
                        "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nIN_VS vec2 alphaParams;\nIN_VS vec3 keyColor;\nOUT_VS vec2 t0;\nOUT_VS float constAlphaPS;\nOUT_VS float noAlphaPS;\nOUT_VS vec3 keyColorPS;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n t0 = pos * src.zw + src.xy;\n constAlphaPS = alphaParams.x;\n noAlphaPS = alphaParams.y;\n keyColorPS = keyColor;\n}\n"
                        ,
                        "IN_PS vec2 t0;\nIN_PS float constAlphaPS;\nIN_PS float noAlphaPS;\nIN_PS vec3 keyColorPS;\nuniform sampler2D tex;\nvoid main() {\n vec4 pixel = TEXTURE2D(tex, t0);\n vec3 epsilon = vec3(0.5 / 255.0);\n if (noAlphaPS != 0.0) pixel.a = 1.0;\n if (all(greaterThanEqual(pixel.rgb, keyColorPS - epsilon)) && \n  all(lessThanEqual(pixel.rgb, keyColorPS + epsilon))) \n  pixel = vec4(0.0);\n pixel = pixel * constAlphaPS;\n OUT_COLOR = pixel;\n}\n"
                        ,5,&local_e8);
  *(undefined4 *)(param_1 + 0x1187c) = uVar1;
  (*DAT_1011c6ee0)(uVar1);
  uVar1 = (*DAT_1011c6230)(*(undefined4 *)(param_1 + 0x1187c),"tex");
  (*DAT_1011c6d38)(uVar1,0);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

