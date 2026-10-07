
void FUN_100358ec0(long param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  
  puVar3 = *(undefined1 **)(param_2 + 2);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 6);
  }
  *puVar3 = 0;
  *param_2 = 0;
  if ((param_4 & 0x10) != 0) {
    FUN_10038e8e0(param_2,"(1.0 - ");
  }
  switch(param_4 & 0xf) {
  case 0:
    pcVar6 = "in_color";
    break;
  default:
    pcVar6 = "out_color";
    break;
  case 2:
    FUN_10038e8e0(param_2,"tex_colors%u",param_3);
    goto switchD_100358f23_caseD_6;
  case 3:
    lVar1 = *(long *)(param_1 + 0x48);
    lVar2 = *(long *)(lVar1 + 0x140);
    uVar5 = lVar2 - *(long *)(lVar1 + 0x138) >> 2;
    if (uVar5 == 0) {
      FUN_10032f560(lVar1 + 0x138,1);
      pcVar6 = "c_ps[OFF_TFACTOR]";
    }
    else {
      if ((1 < uVar5) && (lVar4 = *(long *)(lVar1 + 0x138) + 4, lVar2 != lVar4)) {
        *(ulong *)(lVar1 + 0x140) = (~((lVar2 + -4) - lVar4) & 0xfffffffffffffffcU) + lVar2;
      }
      pcVar6 = "c_ps[OFF_TFACTOR]";
    }
    break;
  case 4:
    pcVar6 = "in_specular";
    break;
  case 5:
    pcVar6 = "temp_color";
    break;
  case 6:
    goto switchD_100358f23_caseD_6;
  }
  FUN_10038e8e0(param_2,pcVar6);
switchD_100358f23_caseD_6:
  if ((param_4 & 0x10) != 0) {
    FUN_10038e8e0(param_2,")");
  }
  if ((param_4 & 0x40) == 0) {
    if ((param_4 & 0x20) == 0) {
      pcVar6 = ".rgb";
    }
    else {
      pcVar6 = ".a";
    }
    FUN_10038e8e0(param_2,pcVar6);
    return;
  }
  return;
}

