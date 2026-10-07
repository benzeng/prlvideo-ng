
char * FUN_10029c940(long param_1,uint param_2,char param_3)

{
  undefined **ppuVar1;
  
  if (7 < (int)param_2) {
    return "???";
  }
  if (param_3 == '\0') {
switchD_10029c96e_caseD_3:
    ppuVar1 = &PTR_s_FL_100bb1f60;
  }
  else {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 1:
      ppuVar1 = &PTR_s_1_100bb2060;
      break;
    case 2:
      ppuVar1 = &PTR_s_L_100bb2020;
      break;
    default:
      goto switchD_10029c96e_caseD_3;
    case 4:
      ppuVar1 = &PTR_s_FL_100bb1fe0;
      break;
    case 6:
      ppuVar1 = &PTR_s_FL_100bb1fa0;
    }
  }
  return ppuVar1[param_2];
}

