
char * FUN_10038fee0(void)

{
  return 
  "vec2  halfToFloat (vec2 i)\n{\n\tvec2 s = sign(vec2(32768.0) - i);\n\tvec2 e = floor(mod (i, 32768.0) / 1024.0);\n\tvec2 m = floor(mod (i, 1024.0));\n\tvec2 ret;\n\tvec2 e1 = exp2(e - 15.0) * (m / 1024.0 + 1.0);\n\tvec2 e2 = m / exp2(24.0);\n\tret.x = (e.x> 0.0) ? e1.x : e2.x;\n\tret.y = (e.y> 0.0) ? e1.y : e2.y;\n\treturn s * ret;\n}\nvec4  halfToFloat4 (vec4 i)\n{\n\treturn vec4(halfToFloat(i.xy ),halfToFloat(i.zw ));\n}\n"
  ;
}

