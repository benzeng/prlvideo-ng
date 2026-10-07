
void FUN_10036bdb0(undefined8 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
  case 9:
    pcVar1 = "position";
    break;
  case 1:
    pcVar1 = "blendweight";
    break;
  case 2:
    pcVar1 = "blendindices";
    break;
  case 3:
    pcVar1 = "normal";
    break;
  case 4:
    pcVar1 = "psize";
    break;
  case 5:
    pcVar1 = "texcoord";
    break;
  case 6:
    pcVar1 = "tangent";
    break;
  case 7:
    pcVar1 = "binormal";
    break;
  case 8:
    pcVar1 = "tessfactor";
    break;
  case 10:
    pcVar1 = "color";
    break;
  case 0xb:
    pcVar1 = "fog";
    break;
  case 0xc:
    pcVar1 = "depth";
    break;
  case 0xd:
    pcVar1 = "sample";
    break;
  default:
    pcVar1 = "usage?";
  }
  FUN_10038e8e0(param_1,pcVar1);
  if (param_3 == 0) {
    return;
  }
  FUN_10038e8e0(param_1,"%d",param_3);
  return;
}

