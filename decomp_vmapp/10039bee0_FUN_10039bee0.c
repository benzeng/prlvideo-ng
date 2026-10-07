
void FUN_10039bee0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char *pcVar1;
  
  FUN_10038e8e0(param_2,"\t%s.x = ",param_4);
  switch(param_3) {
  case 2:
    pcVar1 = "cmpVal < %s.x";
    break;
  case 3:
    pcVar1 = "cmpVal == %s.x";
    break;
  case 4:
    pcVar1 = "cmpVal <= %s.x";
    break;
  case 5:
    pcVar1 = "cmpVal > %s.x";
    break;
  case 6:
    pcVar1 = "cmpVal != %s.x";
    break;
  case 7:
    pcVar1 = "cmpVal >= %s.x";
    break;
  case 8:
    pcVar1 = "true";
    goto LAB_10039bf15;
  default:
    pcVar1 = "false";
LAB_10039bf15:
    FUN_10038e8e0(param_2,pcVar1);
    goto LAB_10039bf72;
  }
  FUN_10038e8e0(param_2,pcVar1,param_4);
LAB_10039bf72:
  FUN_10038e8e0(param_2," ? 1.0 : 0.0;\n");
  return;
}

