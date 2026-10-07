
void FUN_100397e70(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0xa8) + 0xc);
  if (param_3 == 0x10000) {
    if (iVar1 != 0) {
      pcVar2 = "vec4(gN.xyz, 1.0)";
      goto LAB_100397ec6;
    }
  }
  else {
    if (param_3 == 0x20000) {
      pcVar2 = "vec4(gV.xyz, 1.0)";
      goto LAB_100397ec6;
    }
    if (param_3 != 0x30000) {
      return;
    }
    if (iVar1 != 0) {
      if (*(int *)(*(long *)(param_1 + 0xa8) + 0x54) == 0) {
        pcVar2 = "vec3(0.0,0.0,1.0)";
      }
      else {
        pcVar2 = "normalize(gV.xyz)";
      }
      FUN_10038e8e0(param_2,"vec4(REFLECT(%s, gN.xyz), 1.0)",pcVar2);
      return;
    }
  }
  pcVar2 = "vec4(0.0, 0.0, 0.0, 1.0)";
LAB_100397ec6:
  FUN_10038e8e0(param_2,pcVar2);
  return;
}

