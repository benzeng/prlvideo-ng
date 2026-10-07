
uint FUN_100543cb0(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = 0x3e87;
  if (param_1 < 0x32ca) {
    if (param_1 < -0x7fff8000) {
      if (param_1 < -0x7ffffb8f) {
        if (param_1 < -0x7ffffbcd) {
          if ((param_1 == -0x7ffffd99) || (param_1 == -0x7ffffd77))
          goto switchD_100543d2b_caseD_32f7;
        }
        else {
          if (param_1 == -0x7ffffbcd) goto LAB_100543d83;
          if (param_1 == -0x7ffffbba) {
            uVar3 = 0x3e94;
            goto switchD_100543d2b_caseD_32f7;
          }
        }
      }
      else if (param_1 == -0x7ffffb8f) goto switchD_100543d2b_caseD_32cd;
    }
    else if (param_1 < -0x7ffecfb8) {
      if (param_1 + 0x7fff8000U < 8) goto switchD_100543d2b_caseD_32cd;
    }
    else {
      if (param_1 == -0x7ffecfb8) {
LAB_100543d83:
        uVar3 = 0x3e92;
        goto switchD_100543d2b_caseD_32f7;
      }
      if (param_1 == -0x7ffdffff) goto switchD_100543d2b_caseD_32d2;
      if (param_1 == -0x7ffdffee) {
        uVar3 = 0x3e9a;
        goto switchD_100543d2b_caseD_32f7;
      }
    }
switchD_100543d2b_caseD_32cb:
    FUN_1008e3970("","QuestionHelper",0,"Unknown question: %.8X",param_1);
    uVar3 = 0x80000003;
  }
  else {
    switch(param_1) {
    case 0x32ca:
      uVar3 = 0x3e8b;
      break;
    default:
      goto switchD_100543d2b_caseD_32cb;
    case 0x32cd:
    case 0x32d0:
    case 0x32df:
    case 0x32e0:
    case 0x32e1:
    case 0x32e7:
    case 0x32ed:
    case 0x32f0:
    case 0x32f4:
    case 0x32f6:
    case 0x32f9:
switchD_100543d2b_caseD_32cd:
      uVar3 = 0x3e82;
      break;
    case 0x32d2:
    case 0x32e4:
    case 0x32e6:
switchD_100543d2b_caseD_32d2:
      uVar3 = 0x3e83;
      break;
    case 0x32d3:
      uVar3 = 0x3e89;
      break;
    case 0x32d5:
      uVar3 = 0x3e8d;
      break;
    case 0x32d6:
      uVar3 = 0x3e81;
      if (param_2 == 0) {
        uVar3 = 0x3e8f;
      }
      break;
    case 0x32d8:
      uVar3 = 0x3e86;
      break;
    case 0x32dc:
    case 0x32fc:
      uVar3 = 0x3e88;
      break;
    case 0x32e3:
      uVar3 = 0x3e97;
      break;
    case 0x32e5:
      uVar3 = 0x3e81;
      break;
    case 0x32ee:
      if (param_2 == 2) {
        uVar3 = 0x3e99;
        if (param_3 != 1) {
          uVar3 = param_3 != 2 | 0x3e86;
        }
      }
      break;
    case 0x32f1:
      uVar3 = 0x3e97;
      break;
    case 0x32f7:
      break;
    case 0x32fa:
      uVar3 = 0x3e9e;
      break;
    case 0x32fb:
      uVar3 = 0x3e9a;
    }
  }
switchD_100543d2b_caseD_32f7:
  if (0 < DAT_1011b55f8) {
    uVar1 = FUN_1007dd120(param_1);
    uVar2 = FUN_1007dd120(uVar3);
    FUN_1008e3970("","QuestionHelper",1,"Question = %s (%.8X), default answer = %s (%.8X)",uVar1,
                  param_1,uVar2,uVar3);
  }
  return uVar3;
}

