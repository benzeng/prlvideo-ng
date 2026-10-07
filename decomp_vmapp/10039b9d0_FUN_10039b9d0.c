
char * FUN_10039b9d0(undefined8 param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 3;
  if (param_4 != 1) {
    iVar2 = param_2;
  }
  if (param_2 != 1) {
    iVar2 = param_2;
  }
  pcVar1 = "samplerBuffer";
  switch(iVar2) {
  case 1:
    break;
  case 2:
    pcVar1 = "sampler1D";
    if (param_3 == 1) {
      pcVar1 = "sampler1DShadow";
    }
    return pcVar1;
  case 3:
    pcVar1 = "sampler2D";
    if (param_3 == 1) {
      pcVar1 = "sampler2DShadow";
    }
    return pcVar1;
  case 4:
    return "sampler2DMS";
  case 5:
    return "sampler3D";
  case 6:
    pcVar1 = "samplerCube";
    if (param_3 == 1) {
      pcVar1 = "samplerCubeShadow";
    }
    return pcVar1;
  case 7:
    pcVar1 = "sampler1DArray";
    if (param_3 == 1) {
      pcVar1 = "sampler1DArrayShadow";
    }
    return pcVar1;
  case 8:
    pcVar1 = "sampler2DArray";
    if (param_3 == 1) {
      pcVar1 = "sampler2DArrayShadow";
    }
    return pcVar1;
  case 9:
    return "sampler2DMSArray";
  case 10:
    pcVar1 = "samplerCubeArray";
    if (param_3 == 1) {
      pcVar1 = "samplerCubeArrayShadow";
    }
    return pcVar1;
  default:
    pcVar1 = "";
  }
  return pcVar1;
}

