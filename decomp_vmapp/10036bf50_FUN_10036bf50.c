
void FUN_10036bf50(undefined8 param_1,undefined8 param_2)

{
  FUN_10038e8e0(param_1,"%s.y = -%s.y;\n",param_2,param_2);
  FUN_10038e8e0(param_1,"%s.xy += posCorrection.xy * %s.ww;\n",param_2,param_2);
  FUN_10038e8e0(param_1,"%s.z = %s.z + %s.z - %s.w;\n",param_2,param_2,param_2,param_2);
  return;
}

