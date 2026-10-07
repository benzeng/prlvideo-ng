
char * FUN_1003961f0(long param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = "vec4(1.0)";
  switch(param_2) {
  case 1:
    break;
  case 2:
    return "vec4(0.0)";
  case 3:
    return "c[OFF_MTRL_DIFF]";
  case 4:
    return "c[OFF_MTRL_SPEC]";
  case 5:
    pcVar1 = *(char **)(param_1 + 0x28);
    if (pcVar1 == (char *)0x0) {
      return *(char **)(param_1 + 0x38);
    }
    break;
  case 6:
    pcVar1 = *(char **)(param_1 + 0x50);
    if (pcVar1 == (char *)0x0) {
      return *(char **)(param_1 + 0x60);
    }
    break;
  case 7:
    return "c[OFF_MTRL_AMB]";
  case 8:
    return "c[OFF_MTRL_EMS]";
  default:
    pcVar1 = "";
  }
  return pcVar1;
}

