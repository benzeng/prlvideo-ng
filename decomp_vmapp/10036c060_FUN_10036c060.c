
void FUN_10036c060(undefined8 param_1,undefined8 param_2)

{
  if (*(char *)(DAT_1011c8478 + 0x35) != '\0') {
    FUN_10038e8e0(param_1,"src0.rgb = clamp(%s.rgb, vec3(0.0), vec3(1.0)); \n",param_2);
    FUN_10038e8e0(param_1,
                  "src1.rgb = ((1.6341003*src0.rgb+vec3(2.0833857))*src0.rgb+vec3(0.0019583211)); \n"
                 );
    FUN_10038e8e0(param_1,
                  "%s.rgb = src1.rgb*inversesqrt(src1.rgb)+(-0.065647572*src0.rgb-vec3(0.81860006))*src0.rgb-vec3(0.044252835); \n"
                  ,param_2);
    return;
  }
  FUN_10038e8e0(param_1,"%s = lessThanEqual(%s.rgb, vec3(0.00313)); \n","gamma_cmp",param_2);
  FUN_10038e8e0(param_1,
                "%s.rgb = vec3(%s) * %s.rgb * 12.92 + vec3( not(%s) ) * (pow(%s.rgb, vec3(1.0/2.4)) * 1.055 - 0.055); \n"
                ,param_2,"gamma_cmp",param_2,"gamma_cmp",param_2);
  return;
}

