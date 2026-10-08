
/* WARNING: Type propagation algorithm not settling */

void FUN_1003ba890(double param_1,undefined8 param_2,long *param_3)

{
  double *pdVar1;
  double local_310 [9];
  double local_2c8 [13];
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  double local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  double local_200 [14];
  double local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  double local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  double local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  
  local_38 = param_1;
  if (param_1 <= DAT_100e1b0b8) {
    FUN_1001413e0(param_3,&local_38);
    local_40 = 0x4020000000000000;
    FUN_1001413e0(param_3,&local_40);
    local_48 = 0x4040000000000000;
    FUN_1001413e0(param_3,&local_48);
    local_50 = 0x4060000000000000;
    FUN_1001413e0(param_3,&local_50);
    local_58 = 0x4080000000000000;
    FUN_1001413e0(param_3,&local_58);
    FUN_1001413e0(param_3,&DAT_102273e58);
    local_60 = (*(double *)(*param_3 + 0x18 + (long)*(int *)(*param_3 + 8) * 8) - local_38) *
               DAT_100e110f0 + local_38;
    FUN_1001413e0(param_2,&local_38);
    FUN_1001413e0(param_2,&local_60);
    local_68 = 0x4020000000000000;
    FUN_1001413e0(param_2,&local_68);
    local_70 = 0x4030000000000000;
    FUN_1001413e0(param_2,&local_70);
    local_78 = 0x4040000000000000;
    FUN_1001413e0(param_2,&local_78);
    local_80 = 0x4050000000000000;
    FUN_1001413e0(param_2,&local_80);
    local_88 = 0x4060000000000000;
    FUN_1001413e0(param_2,&local_88);
    local_90 = 0x4070000000000000;
    FUN_1001413e0(param_2,&local_90);
    local_98 = 0x4080000000000000;
    FUN_1001413e0(param_2,&local_98);
    local_a0 = 1024.0;
    pdVar1 = &local_a0;
  }
  else if (param_1 <= DAT_100e1b0c0) {
    FUN_1001413e0(param_3,&local_38);
    local_a8 = 0x4030000000000000;
    FUN_1001413e0(param_3,&local_a8);
    local_b0 = 0x4050000000000000;
    FUN_1001413e0(param_3,&local_b0);
    local_b8 = 0x4070000000000000;
    FUN_1001413e0(param_3,&local_b8);
    local_c0 = 1024.0;
    FUN_1001413e0(param_3,&local_c0);
    FUN_1001413e0(param_3,&DAT_102273e58);
    local_c8 = (*(double *)(*param_3 + 0x18 + (long)*(int *)(*param_3 + 8) * 8) - local_38) *
               DAT_100e110f0 + local_38;
    FUN_1001413e0(param_2,&local_38);
    FUN_1001413e0(param_2,&local_c8);
    local_d0 = 0x4030000000000000;
    FUN_1001413e0(param_2,&local_d0);
    local_d8 = 0x4040000000000000;
    FUN_1001413e0(param_2,&local_d8);
    local_e0 = 0x4050000000000000;
    FUN_1001413e0(param_2,&local_e0);
    local_e8 = 0x4060000000000000;
    FUN_1001413e0(param_2,&local_e8);
    local_f0 = 0x4070000000000000;
    FUN_1001413e0(param_2,&local_f0);
    local_f8 = 0x4080000000000000;
    FUN_1001413e0(param_2,&local_f8);
    local_100 = 0x4090000000000000;
    FUN_1001413e0(param_2,&local_100);
    local_108 = 0x4098000000000000;
    pdVar1 = (double *)&local_108;
  }
  else if (param_1 <= DAT_100e1b0c8) {
    FUN_1001413e0(param_3,&local_38);
    local_110 = 0x4040000000000000;
    FUN_1001413e0(param_3,&local_110);
    local_118 = 0x4050000000000000;
    FUN_1001413e0(param_3,&local_118);
    local_120 = 0x4070000000000000;
    FUN_1001413e0(param_3,&local_120);
    local_128 = 0x4090000000000000;
    FUN_1001413e0(param_3,&local_128);
    FUN_1001413e0(param_3,&DAT_102273e58);
    local_130 = (*(double *)(*param_3 + 0x18 + (long)*(int *)(*param_3 + 8) * 8) - local_38) *
                DAT_100e110f0 + local_38;
    FUN_1001413e0(param_2,&local_38);
    FUN_1001413e0(param_2,&local_130);
    local_138 = 0x4040000000000000;
    FUN_1001413e0(param_2,&local_138);
    local_140 = 0x4048000000000000;
    FUN_1001413e0(param_2,&local_140);
    local_148 = 0x4050000000000000;
    FUN_1001413e0(param_2,&local_148);
    local_150 = 0x4060000000000000;
    FUN_1001413e0(param_2,&local_150);
    local_158 = 0x4070000000000000;
    FUN_1001413e0(param_2,&local_158);
    local_160 = 0x4080000000000000;
    FUN_1001413e0(param_2,&local_160);
    local_168 = 0x4090000000000000;
    FUN_1001413e0(param_2,&local_168);
    local_170 = 1536.0;
    pdVar1 = &local_170;
  }
  else if (param_1 <= DAT_100e1b0d0) {
    FUN_1001413e0(param_3,&local_38);
    local_178 = 0x4050000000000000;
    FUN_1001413e0(param_3,&local_178);
    local_180 = 0x4060000000000000;
    FUN_1001413e0(param_3,&local_180);
    local_188 = 0x4070000000000000;
    FUN_1001413e0(param_3,&local_188);
    local_190 = 1024.0;
    FUN_1001413e0(param_3,&local_190);
    FUN_1001413e0(param_3,&DAT_102273e58);
    local_200[0xd] =
         (*(double *)(*param_3 + 0x18 + (long)*(int *)(*param_3 + 8) * 8) - local_38) *
         DAT_100e110f0 + local_38;
    FUN_1001413e0(param_2,&local_38);
    FUN_1001413e0(param_2,local_200 + 0xd);
    local_200[0xc] = 64.0;
    FUN_1001413e0(param_2,local_200 + 0xc);
    local_200[0xb] = 96.0;
    FUN_1001413e0(param_2,local_200 + 0xb);
    local_200[10] = 128.0;
    FUN_1001413e0(param_2,local_200 + 10);
    local_200[9] = 192.0;
    FUN_1001413e0(param_2,local_200 + 9);
    local_200[8] = 256.0;
    FUN_1001413e0(param_2,local_200 + 8);
    local_200[7] = 512.0;
    FUN_1001413e0(param_2,local_200 + 7);
    local_200[6] = 1024.0;
    FUN_1001413e0(param_2,local_200 + 6);
    local_200[5] = 1536.0;
    pdVar1 = local_200 + 5;
  }
  else if (param_1 <= DAT_100e1b0d8) {
    FUN_1001413e0(param_3,&local_38);
    local_200[4] = 128.0;
    FUN_1001413e0(param_3,local_200 + 4);
    local_200[3] = 256.0;
    FUN_1001413e0(param_3,local_200 + 3);
    local_200[2] = 512.0;
    FUN_1001413e0(param_3,local_200 + 2);
    local_200[1] = 1024.0;
    FUN_1001413e0(param_3,local_200 + 1);
    FUN_1001413e0(param_3,&DAT_102273e58);
    local_200[0] = (*(double *)(*param_3 + 0x18 + (long)*(int *)(*param_3 + 8) * 8) - local_38) *
                   DAT_100e110f0 + local_38;
    FUN_1001413e0(param_2,&local_38);
    FUN_1001413e0(param_2,local_200);
    local_208 = 0x4060000000000000;
    FUN_1001413e0(param_2,&local_208);
    local_210 = 0x4068000000000000;
    FUN_1001413e0(param_2,&local_210);
    local_218 = 0x4070000000000000;
    FUN_1001413e0(param_2,&local_218);
    local_220 = 0x4078000000000000;
    FUN_1001413e0(param_2,&local_220);
    local_228 = 0x4080000000000000;
    FUN_1001413e0(param_2,&local_228);
    local_230 = 0x4088000000000000;
    FUN_1001413e0(param_2,&local_230);
    local_238 = 0x4090000000000000;
    FUN_1001413e0(param_2,&local_238);
    local_240 = 1536.0;
    pdVar1 = &local_240;
  }
  else if (param_1 <= DAT_100e1b0e0) {
    FUN_1001413e0(param_3,&local_38);
    local_248 = 0x4070000000000000;
    FUN_1001413e0(param_3,&local_248);
    local_250 = 0x4080000000000000;
    FUN_1001413e0(param_3,&local_250);
    local_258 = 0x4090000000000000;
    FUN_1001413e0(param_3,&local_258);
    local_260 = 0x4098000000000000;
    FUN_1001413e0(param_3,&local_260);
    FUN_1001413e0(param_3,&DAT_102273e58);
    local_2c8[0xc] =
         (*(double *)(*param_3 + 0x18 + (long)*(int *)(*param_3 + 8) * 8) - local_38) *
         DAT_100e110f0 + local_38;
    FUN_1001413e0(param_2,&local_38);
    FUN_1001413e0(param_2,local_2c8 + 0xc);
    local_2c8[0xb] = 256.0;
    FUN_1001413e0(param_2,local_2c8 + 0xb);
    local_2c8[10] = 384.0;
    FUN_1001413e0(param_2,local_2c8 + 10);
    local_2c8[9] = 512.0;
    FUN_1001413e0(param_2,local_2c8 + 9);
    local_2c8[8] = 768.0;
    FUN_1001413e0(param_2,local_2c8 + 8);
    local_2c8[7] = 1024.0;
    FUN_1001413e0(param_2,local_2c8 + 7);
    local_2c8[6] = 1280.0;
    FUN_1001413e0(param_2,local_2c8 + 6);
    local_2c8[5] = 1536.0;
    FUN_1001413e0(param_2,local_2c8 + 5);
    local_2c8[4] = 1792.0;
    pdVar1 = local_2c8 + 4;
  }
  else {
    if (DAT_100e1b0e8 < param_1) {
      return;
    }
    FUN_1001413e0(param_3,&local_38);
    local_2c8[3] = 512.0;
    FUN_1001413e0(param_3,local_2c8 + 3);
    local_2c8[2] = 768.0;
    FUN_1001413e0(param_3,local_2c8 + 2);
    local_2c8[1] = 1024.0;
    FUN_1001413e0(param_3,local_2c8 + 1);
    local_2c8[0] = 1536.0;
    FUN_1001413e0(param_3,local_2c8);
    FUN_1001413e0(param_3,&DAT_102273e58);
    local_310[8] = (*(double *)(*param_3 + 0x18 + (long)*(int *)(*param_3 + 8) * 8) - local_38) *
                   DAT_100e110f0 + local_38;
    FUN_1001413e0(param_2,&local_38);
    FUN_1001413e0(param_2,local_310 + 8);
    local_310[7] = 512.0;
    FUN_1001413e0(param_2,local_310 + 7);
    local_310[6] = 640.0;
    FUN_1001413e0(param_2,local_310 + 6);
    local_310[5] = 768.0;
    FUN_1001413e0(param_2,local_310 + 5);
    local_310[4] = 896.0;
    FUN_1001413e0(param_2,local_310 + 4);
    local_310[3] = 1024.0;
    FUN_1001413e0(param_2,local_310 + 3);
    local_310[2] = 1280.0;
    FUN_1001413e0(param_2,local_310 + 2);
    local_310[1] = 1536.0;
    FUN_1001413e0(param_2,local_310 + 1);
    local_310[0] = 1792.0;
    pdVar1 = local_310;
  }
  FUN_1001413e0(param_2,pdVar1);
  FUN_1001413e0(param_2,&DAT_102273e58);
  return;
}

