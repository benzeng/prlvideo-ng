
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002fd730(long param_1)

{
  undefined4 uVar1;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined *puStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = _DAT_100bb6420;
  puStack_40 = PTR_s_CKL_100bb6428;
  local_58 = _DAT_100bb6410;
  uStack_50 = _UNK_100bb6418;
  local_68 = _DAT_100bb6400;
  uStack_60 = _UNK_100bb6408;
  local_78 = _DAT_100bb63f0;
  uStack_70 = _UNK_100bb63f8;
  local_88 = _DAT_100bb63e0;
  uStack_80 = _UNK_100bb63e8;
  local_98 = _DAT_100bb63d0;
  uStack_94 = _UNK_100bb63d4;
  uStack_90 = _UNK_100bb63d8;
  uStack_8c = _UNK_100bb63dc;
  uVar1 = FUN_1002ad260(*(undefined4 *)(param_1 + 0x85c),
                        "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nIN_VS vec4 mask;\nIN_VS vec4 CKH;\nIN_VS vec4 CKL;\nOUT_VS vec2 t0;\nOUT_VS vec2 t1;\nOUT_VS vec4 keyColorH;\nOUT_VS vec4 keyColorL;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n t0 = pos * mask.zw + mask.xy;\n t1 = pos * src.zw + src.xy;\n keyColorH = CKH;\n keyColorL = CKL;\n}\n"
                        ,
                        "uniform sampler2D overlayTex;\nuniform sampler2D framebufTex;\nIN_PS vec4 keyColorL;\nIN_PS vec4 keyColorH;\nIN_PS vec2 t0;\nIN_PS vec2 t1;\nvoid main(void)\n{\n vec4 maskColor = TEXTURE2D(framebufTex, t0.xy);\n if (any(greaterThanEqual(maskColor.rgb*255.0 - keyColorH.rgb, vec3(0.5)))  || any(greaterThanEqual(keyColorL.rgb - maskColor.rgb*255.0, vec3(0.5))))\n  discard;\n vec4 color = TEXTURE2D(overlayTex, t1.xy);\n OUT_COLOR = color;\n}\n"
                        ,6,&local_98);
  *(undefined4 *)(param_1 + 0x11908) = uVar1;
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,uVar1);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])
                    (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11908),"overlayTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,1);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])
                    (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11908),"framebufTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,0);
  uVar1 = FUN_1002ad260(*(undefined4 *)(param_1 + 0x85c),
                        "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nIN_VS vec4 mask;\nIN_VS vec4 CKH;\nIN_VS vec4 CKL;\nOUT_VS vec2 t0;\nOUT_VS vec2 t1;\nOUT_VS vec4 keyColorH;\nOUT_VS vec4 keyColorL;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n t0 = pos * mask.zw + mask.xy;\n t1 = pos * src.zw + src.xy;\n keyColorH = CKH;\n keyColorL = CKL;\n}\n"
                        ,
                        "uniform sampler2D overlayTex;\nuniform sampler2D framebufTex;\nIN_PS vec4 keyColorL;\nIN_PS vec4 keyColorH;\nIN_PS vec2 t0;\nIN_PS vec2 t1;\nvoid main(void)\n{\n\tvec4 maskColor = TEXTURE2D(framebufTex, t0.xy);\n\tif (any(greaterThanEqual(maskColor.rgb*255.0 - keyColorH.rgb, vec3(0.5)))\t\t|| any(greaterThanEqual(keyColorL.rgb - maskColor.rgb*255.0, vec3(0.5))))\n\t\tdiscard;\n\tvec4 clr = TEXTURE2D(overlayTex, t1.xy);\n\tclr.rb -= 128.0/255.0;\n\tclr.g = 1.164*(clr.g - 16.0/255.0);\n\tOUT_COLOR = vec4(clr.g + 1.596*clr.r,\n\t\tclr.g - 0.813*clr.r - 0.391*clr.b,\n\t\tclr.g + 2.018*clr.b, 1.0);\n}\n"
                        ,6,&local_98);
  *(undefined4 *)(param_1 + 0x1190c) = uVar1;
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,uVar1);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])
                    (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x1190c),"overlayTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,1);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])
                    (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x1190c),"framebufTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,0);
  uVar1 = FUN_1002ad260(*(undefined4 *)(param_1 + 0x85c),
                        "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nIN_VS vec4 mask;\nIN_VS vec4 CKH;\nIN_VS vec4 CKL;\nOUT_VS vec2 t0;\nOUT_VS vec2 t1;\nOUT_VS vec4 keyColorH;\nOUT_VS vec4 keyColorL;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n t0 = pos * mask.zw + mask.xy;\n t1 = pos * src.zw + src.xy;\n keyColorH = CKH;\n keyColorL = CKL;\n}\n"
                        ,
                        "uniform sampler2D overlayTex;\nuniform sampler2D framebufTex;\nuniform sampler2D vTex;\nuniform sampler2D uTex;\nIN_PS vec4 keyColorL;\nIN_PS vec4 keyColorH;\nIN_PS vec2 t0;\nIN_PS vec2 t1;\nvoid main(void)\n{\n vec4 maskColor = TEXTURE2D(framebufTex, t0.xy);\n if (any(greaterThanEqual(maskColor.rgb*255.0 - keyColorH.rgb, vec3(0.5)))  || any(greaterThanEqual(keyColorL.rgb - maskColor.rgb*255.0, vec3(0.5))))\n  discard;\n float y = 1.164*(TEXTURE2D(overlayTex, t1.xy).r - 16.0/255.0);\n float v = TEXTURE2D(vTex, t1.xy).r - 128.0/255.0;\n float u = TEXTURE2D(uTex, t1.xy).r - 128.0/255.0;\n OUT_COLOR = vec4(y + 1.596*v, y - 0.813*v - 0.391*u, y + 2.018*u, 1.0);\n}\n"
                        ,6,&local_98);
  *(undefined4 *)(param_1 + 0x11910) = uVar1;
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,uVar1);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])
                    (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11910),"overlayTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,1);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])
                    (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11910),"framebufTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,0);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])(*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11910),"vTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,2);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])(*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11910),"uTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,3);
  uVar1 = FUN_1002ad260(*(undefined4 *)(param_1 + 0x85c),
                        "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nIN_VS vec4 mask;\nIN_VS vec4 CKH;\nIN_VS vec4 CKL;\nOUT_VS vec2 t0;\nOUT_VS vec2 t1;\nOUT_VS vec4 keyColorH;\nOUT_VS vec4 keyColorL;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n t0 = pos * mask.zw + mask.xy;\n t1 = pos * src.zw + src.xy;\n keyColorH = CKH;\n keyColorL = CKL;\n}\n"
                        ,
                        "uniform sampler2D overlayTex;\nIN_PS vec4 keyColorL;\nIN_PS vec4 keyColorH;\nIN_PS vec2 t0;\nIN_PS vec2 t1;\nvoid main(void)\n{\n vec4 color = TEXTURE2D(overlayTex, t1.xy);\n if (all(lessThanEqual(color.rgb*255.0 - keyColorH.rgb, vec3(0.5)))  && all(lessThanEqual(keyColorL.rgb - color.rgb*255.0, vec3(0.5))))\n  discard;\n OUT_COLOR = color;\n}\n"
                        ,6,&local_98);
  *(undefined4 *)(param_1 + 0x11914) = uVar1;
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,uVar1);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])
                    (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11914),"overlayTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,1);
  uVar1 = FUN_1002ad260(*(undefined4 *)(param_1 + 0x85c),
                        "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nIN_VS vec4 mask;\nIN_VS vec4 CKH;\nIN_VS vec4 CKL;\nOUT_VS vec2 t0;\nOUT_VS vec2 t1;\nOUT_VS vec4 keyColorH;\nOUT_VS vec4 keyColorL;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n t0 = pos * mask.zw + mask.xy;\n t1 = pos * src.zw + src.xy;\n keyColorH = CKH;\n keyColorL = CKL;\n}\n"
                        ,
                        "uniform sampler2D overlayTex;\nIN_PS vec4 keyColorL;\nIN_PS vec4 keyColorH;\nIN_PS vec2 t0;\nIN_PS vec2 t1;\nvoid main(void)\n{\n\tvec4 clr = TEXTURE2D(overlayTex, t1.xy);\n\tclr.rb -= 128.0/255.0;\n\tclr.g = 1.164*(clr.g - 16.0/255.0);\n\tclr = vec4(clr.g + 1.596*clr.r,\n\t\tclr.g - 0.813*clr.r - 0.391*clr.b,\n\t\tclr.g + 2.018*clr.b, 1.0);\n\tif (any(greaterThanEqual(clr.rgb*255.0 - keyColorH.rgb, vec3(0.5)))\t\t|| any(greaterThanEqual(keyColorL.rgb - clr.rgb*255.0, vec3(0.5))))\n\t\tdiscard;\n\tOUT_COLOR = clr;\n}\n"
                        ,6,&local_98);
  *(undefined4 *)(param_1 + 0x11918) = uVar1;
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,uVar1);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])
                    (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x11918),"overlayTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,1);
  uVar1 = FUN_1002ad260(*(undefined4 *)(param_1 + 0x85c),
                        "IN_VS vec2 pos;\nIN_VS vec4 src;\nIN_VS vec4 dst;\nIN_VS vec4 mask;\nIN_VS vec4 CKH;\nIN_VS vec4 CKL;\nOUT_VS vec2 t0;\nOUT_VS vec2 t1;\nOUT_VS vec4 keyColorH;\nOUT_VS vec4 keyColorL;\nvoid main()\n{\n gl_Position = vec4(pos * dst.zw + dst.xy, 0., 1.);\n t0 = pos * mask.zw + mask.xy;\n t1 = pos * src.zw + src.xy;\n keyColorH = CKH;\n keyColorL = CKL;\n}\n"
                        ,
                        "uniform sampler2D overlayTex;\nuniform sampler2D vTex;\nuniform sampler2D uTex;\nIN_PS vec4 keyColorL;\nIN_PS vec4 keyColorH;\nIN_PS vec2 t0;\nIN_PS vec2 t1;\nvoid main(void)\n{\n float y = 1.164*(TEXTURE2D(overlayTex, t1.xy).r - 16.0/255.0);\n float v = TEXTURE2D(vTex, t1.xy).r - 128.0/255.0;\n float u = TEXTURE2D(uTex, t1.xy).r - 128.0/255.0;\n vec4 color = vec4(y + 1.596*v, y - 0.813*v - 0.391*u, y + 2.018*u, 1.0);\n if (all(lessThanEqual(color.rgb*255.0 - keyColorH.rgb, vec3(0.5)))  && all(lessThanEqual(keyColorL.rgb - color.rgb*255.0, vec3(0.5))))\n  discard;\n OUT_COLOR = color;\n}\n"
                        ,6,&local_98);
  *(undefined4 *)(param_1 + 0x1191c) = uVar1;
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,uVar1);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])
                    (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x1191c),"overlayTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,1);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])(*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x1191c),"vTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,2);
  uVar1 = (*(code *)DAT_1011c4a88[0x272])(*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x1191c),"uTex");
  (*(code *)DAT_1011c4a88[0x25f])(*DAT_1011c4a88,uVar1,3);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

