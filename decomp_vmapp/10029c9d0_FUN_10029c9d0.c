
char * FUN_10029c9d0(long param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  pcVar2 = "???";
  if ((param_2 < 8) &&
     (uVar1 = *(uint *)(*(long *)(param_1 + 0xb0) + (ulong)param_2 * 4), (int)uVar1 < 8)) {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 1:
      ppuVar3 = &PTR_s_1_100bb2060;
      break;
    case 2:
      ppuVar3 = &PTR_s_L_100bb2020;
      break;
    default:
      ppuVar3 = &PTR_s_FL_100bb1f60;
      break;
    case 4:
      ppuVar3 = &PTR_s_FL_100bb1fe0;
      break;
    case 6:
      ppuVar3 = &PTR_s_FL_100bb1fa0;
    }
    pcVar2 = ppuVar3[uVar1];
  }
  return pcVar2;
}

