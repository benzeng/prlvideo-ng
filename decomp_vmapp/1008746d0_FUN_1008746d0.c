
undefined8 FUN_1008746d0(long param_1,int param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (param_2 < 0x1001) {
    uVar3 = 1;
    switch(param_2) {
    case 1:
      iVar2 = FUN_1008946b0(param_4);
      if (((((iVar2 != 0x40) && (iVar2 = FUN_1008946b0(param_4), iVar2 != 0x74)) &&
           ((iVar2 = FUN_1008946b0(param_4), iVar2 != 0x42 &&
            ((iVar2 = FUN_1008946b0(param_4), iVar2 != 0x2a3 &&
             (iVar2 = FUN_1008946b0(param_4), iVar2 != 0x2a0)))))) &&
          (iVar2 = FUN_1008946b0(param_4), iVar2 != 0x2a1)) &&
         (iVar2 = FUN_1008946b0(param_4), iVar2 != 0x2a2)) {
        uVar3 = 0xc2;
LAB_10087488b:
        FUN_100887ce0(10,0x78,0x6a,"dsa_pmeth.c",uVar3);
        return 0;
      }
      goto LAB_1008747ff;
    case 2:
      FUN_100887ce0(10,0x78,0x96,"dsa_pmeth.c",0xcf);
    default:
switchD_100874708_caseD_3:
      uVar3 = 0xfffffffe;
      break;
    case 5:
    case 7:
    case 0xb:
      break;
    }
  }
  else {
    if (param_2 != 0x1003) {
      if (param_2 == 0x1002) {
        if (param_3 < 0xe0) {
          if ((param_3 != 0) && (param_3 != 0xa0)) {
            return 0xfffffffe;
          }
        }
        else if ((param_3 != 0xe0) && (param_3 != 0x100)) {
          return 0xfffffffe;
        }
        piVar1[1] = param_3;
        return 1;
      }
      if (param_2 == 0x1001) {
        if (param_3 < 0x100) {
          return 0xfffffffe;
        }
        *piVar1 = param_3;
        return 1;
      }
      goto switchD_100874708_caseD_3;
    }
    iVar2 = FUN_1008946b0(param_4);
    if (((iVar2 != 0x40) && (iVar2 = FUN_1008946b0(param_4), iVar2 != 0x2a3)) &&
       (iVar2 = FUN_1008946b0(param_4), iVar2 != 0x2a0)) {
      uVar3 = 0xb4;
      goto LAB_10087488b;
    }
LAB_1008747ff:
    *(undefined8 *)(piVar1 + 6) = param_4;
    uVar3 = 1;
  }
  return uVar3;
}

