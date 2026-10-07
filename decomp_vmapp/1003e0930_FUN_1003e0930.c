
void FUN_1003e0930(long *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 uVar5;
  
  bVar1 = *(byte *)param_1[0xb];
  if (bVar1 == 0x4a) {
    uVar2 = (**(code **)(*param_1 + 0x280))(param_1);
    FUN_1003e0fb0(param_1,uVar2);
    return;
  }
  if ((*(uint *)(param_1 + 5) & 0xfffffcff) == 0xa0) {
    if (bVar1 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x280))(param_1);
      if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e0992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x260))(param_1);
        return;
      }
LAB_1003e09e6:
      if (iVar3 == 1) {
LAB_1003e09eb:
        lVar4 = param_1[0xc];
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
        uVar5 = 0x62800;
LAB_1003e0a18:
                    /* WARNING: Could not recover jumptable at 0x0001003e0a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,uVar5,lVar4);
        return;
      }
      if (iVar3 == 2) {
        lVar4 = param_1[0xc];
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
        uVar5 = 0x23a00;
        goto LAB_1003e0a18;
      }
    }
  }
  else if (bVar1 < 0x46) {
    if (bVar1 < 0x12) {
      if (bVar1 == 0) {
        iVar3 = (**(code **)(*param_1 + 0x280))(param_1);
        if (iVar3 != 1) goto switchD_1003e0a45_caseD_0;
        goto LAB_1003e09eb;
      }
      if (bVar1 != 3) goto LAB_1003e09da;
    }
    else if ((bVar1 != 0x12) && (bVar1 != 0x1b)) goto LAB_1003e09da;
  }
  else if ((bVar1 != 0x46) && (bVar1 != 0x5a)) {
LAB_1003e09da:
    iVar3 = (**(code **)(*param_1 + 0x280))(param_1);
    goto LAB_1003e09e6;
  }
  if (bVar1 < 0x88) {
    if (bVar1 < 0x12) {
      switch(bVar1) {
      case 0:
switchD_1003e0a45_caseD_0:
                    /* WARNING: Could not recover jumptable at 0x0001003e0a51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xc0))(param_1);
        return;
      case 1:
                    /* WARNING: Could not recover jumptable at 0x0001003e0b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 200))(param_1);
        return;
      case 3:
                    /* WARNING: Could not recover jumptable at 0x0001003e0ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xd0))(param_1);
        return;
      case 4:
                    /* WARNING: Could not recover jumptable at 0x0001003e0bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xd8))(param_1);
        return;
      }
    }
    else if (bVar1 < 0x3c) {
      if (bVar1 < 0x28) {
        if (bVar1 < 0x1b) {
          if (bVar1 == 0x12) {
                    /* WARNING: Could not recover jumptable at 0x0001003e0ab1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0xe0))(param_1);
            return;
          }
        }
        else if (bVar1 < 0x23) {
          if (bVar1 == 0x1b) {
                    /* WARNING: Could not recover jumptable at 0x0001003e0b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0xe8))(param_1);
            return;
          }
          if (bVar1 == 0x1e) {
                    /* WARNING: Could not recover jumptable at 0x0001003e0c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0xf0))(param_1);
            return;
          }
        }
        else {
          if (bVar1 == 0x23) {
                    /* WARNING: Could not recover jumptable at 0x0001003e0bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0xf8))(param_1);
            return;
          }
          if (bVar1 == 0x25) goto switchD_1003e0b03_caseD_9e;
        }
      }
      else {
        switch(bVar1) {
        case 0x28:
                    /* WARNING: Could not recover jumptable at 0x0001003e0b67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x108))(param_1);
          return;
        case 0x2a:
                    /* WARNING: Could not recover jumptable at 0x0001003e0d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x120))(param_1);
          return;
        case 0x2b:
                    /* WARNING: Could not recover jumptable at 0x0001003e0d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x128))(param_1);
          return;
        case 0x2e:
                    /* WARNING: Could not recover jumptable at 0x0001003e0d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x130))(param_1);
          return;
        case 0x2f:
                    /* WARNING: Could not recover jumptable at 0x0001003e0d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x138))(param_1);
          return;
        case 0x35:
                    /* WARNING: Could not recover jumptable at 0x0001003e0d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x140))(param_1);
          return;
        }
      }
    }
    else {
      switch(bVar1) {
      case 0x3c:
                    /* WARNING: Could not recover jumptable at 0x0001003e0b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x148))(param_1);
        return;
      case 0x42:
                    /* WARNING: Could not recover jumptable at 0x0001003e0d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x150))(param_1);
        return;
      case 0x43:
                    /* WARNING: Could not recover jumptable at 0x0001003e0d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x158))(param_1);
        return;
      case 0x44:
                    /* WARNING: Could not recover jumptable at 0x0001003e0d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x118))(param_1);
        return;
      case 0x46:
                    /* WARNING: Could not recover jumptable at 0x0001003e0d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x168))(param_1);
        return;
      case 0x47:
                    /* WARNING: Could not recover jumptable at 0x0001003e0da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x170))(param_1);
        return;
      case 0x4b:
                    /* WARNING: Could not recover jumptable at 0x0001003e0db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x178))(param_1);
        return;
      case 0x4e:
                    /* WARNING: Could not recover jumptable at 0x0001003e0dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x180))(param_1);
        return;
      case 0x51:
                    /* WARNING: Could not recover jumptable at 0x0001003e0dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x188))(param_1);
        return;
      case 0x52:
                    /* WARNING: Could not recover jumptable at 0x0001003e0de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 400))(param_1);
        return;
      case 0x53:
                    /* WARNING: Could not recover jumptable at 0x0001003e0df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x198))(param_1);
        return;
      case 0x54:
                    /* WARNING: Could not recover jumptable at 0x0001003e0e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1a0))(param_1);
        return;
      case 0x55:
                    /* WARNING: Could not recover jumptable at 0x0001003e0e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1a8))(param_1);
        return;
      case 0x58:
                    /* WARNING: Could not recover jumptable at 0x0001003e0e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1b0))(param_1);
        return;
      case 0x5a:
                    /* WARNING: Could not recover jumptable at 0x0001003e0e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1b8))(param_1);
        return;
      case 0x5b:
                    /* WARNING: Could not recover jumptable at 0x0001003e0e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c0))(param_1);
        return;
      case 0x5c:
                    /* WARNING: Could not recover jumptable at 0x0001003e0e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c8))(param_1);
        return;
      case 0x5d:
                    /* WARNING: Could not recover jumptable at 0x0001003e0e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1d0))(param_1);
        return;
      }
    }
  }
  else if (bVar1 < 0xb6) {
    if (bVar1 < 0x9e) {
      if (bVar1 == 0x88) {
                    /* WARNING: Could not recover jumptable at 0x0001003e0a7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x110))(param_1);
        return;
      }
    }
    else {
      switch(bVar1) {
      case 0x9e:
switchD_1003e0b03_caseD_9e:
                    /* WARNING: Could not recover jumptable at 0x0001003e0c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x100))(param_1);
        return;
      case 0xa1:
                    /* WARNING: Could not recover jumptable at 0x0001003e0b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1d8))(param_1);
        return;
      case 0xa2:
                    /* WARNING: Could not recover jumptable at 0x0001003e0c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1e0))(param_1);
        return;
      case 0xa3:
                    /* WARNING: Could not recover jumptable at 0x0001003e0c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1e8))(param_1);
        return;
      case 0xa4:
                    /* WARNING: Could not recover jumptable at 0x0001003e0ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1f0))(param_1);
        return;
      case 0xa6:
                    /* WARNING: Could not recover jumptable at 0x0001003e0cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1f8))(param_1);
        return;
      case 0xa7:
                    /* WARNING: Could not recover jumptable at 0x0001003e0cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x200))(param_1);
        return;
      case 0xa8:
                    /* WARNING: Could not recover jumptable at 0x0001003e0cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x208))(param_1);
        return;
      case 0xaa:
                    /* WARNING: Could not recover jumptable at 0x0001003e0ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x210))(param_1);
        return;
      case 0xac:
                    /* WARNING: Could not recover jumptable at 0x0001003e0cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x218))(param_1);
        return;
      case 0xad:
                    /* WARNING: Could not recover jumptable at 0x0001003e0d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x220))(param_1);
        return;
      }
    }
  }
  else {
    switch(bVar1) {
    case 0xb6:
                    /* WARNING: Could not recover jumptable at 0x0001003e0ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x228))(param_1);
      return;
    case 0xb9:
                    /* WARNING: Could not recover jumptable at 0x0001003e0bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x230))(param_1);
      return;
    case 0xba:
                    /* WARNING: Could not recover jumptable at 0x0001003e0bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x238))(param_1);
      return;
    case 0xbb:
                    /* WARNING: Could not recover jumptable at 0x0001003e0bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x240))(param_1);
      return;
    case 0xbc:
                    /* WARNING: Could not recover jumptable at 0x0001003e0c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x160))(param_1);
      return;
    case 0xbd:
                    /* WARNING: Could not recover jumptable at 0x0001003e0c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x248))(param_1);
      return;
    case 0xbe:
                    /* WARNING: Could not recover jumptable at 0x0001003e0c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x250))(param_1);
      return;
    case 0xbf:
                    /* WARNING: Could not recover jumptable at 0x0001003e0c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 600))(param_1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e0c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1);
  return;
}

