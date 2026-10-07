
void FUN_10036c1a0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_3 == 7) {
    pcVar3 = "clamp(fogCoord, 0.0, 1.0)";
  }
  else {
    if ((param_3 & 0xfffffffe) == 4) {
      pcVar2 = "1.0 / gl_FragCoord.w";
    }
    else {
      pcVar2 = "clamp(gl_FragCoord.z, 0.0, 1.0)";
      if (param_3 == 6) {
        pcVar2 = "1.0 / gl_FragCoord.w";
      }
    }
    pcVar3 = "fog";
    FUN_10038e8e0(param_1,"float %s = ","fog");
    if (6 < param_3) {
      return;
    }
    if ((0x12U >> (param_3 & 0x1f) & 1) == 0) {
      if ((0x24U >> (param_3 & 0x1f) & 1) == 0) {
        if ((0x48U >> (param_3 & 0x1f) & 1) == 0) {
          return;
        }
        pcVar1 = "clamp((c_ps[OFF_FOG_PARAMS].y - %s) * c_ps[OFF_FOG_PARAMS].z, 0.0, 1.0); \n";
      }
      else {
        pcVar1 = "exp(-pow(c_ps[OFF_FOG_PARAMS].x * %s, 2.0)); \n";
      }
    }
    else {
      pcVar1 = "exp(-c_ps[OFF_FOG_PARAMS].x * %s); \n";
    }
    FUN_10038e8e0(param_1,pcVar1,pcVar2);
  }
  FUN_10038e8e0(param_1,"%s.rgb = mix(c_ps[OFF_FOG_COLOR].rgb, %s.rgb, %s);\n",param_2,param_2,
                pcVar3);
  return;
}

