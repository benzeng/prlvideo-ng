
undefined8 FUN_100c4bb80(long param_1,int param_2,int param_3,long *param_4)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_30;
  long local_28;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (param_2 < 0x1001) {
    switch(param_2) {
    case 1:
      if (param_4 == (long *)0x0) {
LAB_100c4be39:
        *(long **)(piVar1 + 8) = param_4;
        return 1;
      }
      if (piVar1[6] == 5) {
        uVar4 = FUN_100c6fc30(param_4);
        iVar5 = FUN_100c49eb0(uVar4);
        if (iVar5 != -1) goto LAB_100c4be39;
LAB_100c4bcae:
        uVar6 = 0x8e;
        uVar7 = 0x1a9;
        goto LAB_100c4be30;
      }
      if (piVar1[6] != 3) goto LAB_100c4be39;
switchD_100c4bc94_caseD_3:
      uVar6 = 0x8d;
      uVar7 = 0x1a3;
LAB_100c4be30:
      FUN_100c62ee0(4,0x8c,uVar6,"rsa_pmeth.c",uVar7);
      return 0;
    case 2:
      uVar6 = 0x94;
      uVar7 = 0x21c;
      break;
    case 3:
    case 4:
    case 5:
    case 7:
    case 9:
    case 0xb:
      return 1;
    default:
      goto switchD_100c4bbbd_caseD_3;
    case 10:
      local_28 = 0;
      local_30 = 0;
      if (param_4 == (long *)0x0) {
        return 1;
      }
      FUN_100cba5b0(param_4,0,0,&local_28);
      if (local_28 == 0) {
        return 1;
      }
      FUN_100c7af60(&local_30,0,0);
      if (local_30 == 0) {
        return 1;
      }
      iVar5 = FUN_100bf7220();
      if (iVar5 != 0x397) {
        return 1;
      }
      piVar1[6] = 4;
      return 1;
    }
  }
  else {
    switch(param_2) {
    case 0x1001:
      if (param_3 - 1U < 6) {
        lVar2 = *(long *)(piVar1 + 8);
        if (lVar2 == 0) {
          if (param_3 != 4) {
            if (param_3 != 6) goto switchD_100c4bc94_default;
            goto switchD_100c4bc94_caseD_6;
          }
switchD_100c4bc94_caseD_4:
          bVar3 = *(byte *)(param_1 + 0x21) & 3;
        }
        else {
          switch(param_3) {
          case 3:
            goto switchD_100c4bc94_caseD_3;
          case 4:
            goto switchD_100c4bc94_caseD_4;
          case 5:
            uVar4 = FUN_100c6fc30(lVar2);
            iVar5 = FUN_100c49eb0(uVar4);
            if (iVar5 != -1) goto switchD_100c4bc94_default;
            goto LAB_100c4bcae;
          case 6:
switchD_100c4bc94_caseD_6:
            bVar3 = *(byte *)(param_1 + 0x20) & 0x18;
            break;
          default:
            goto switchD_100c4bc94_default;
          }
        }
        if (bVar3 != 0) {
          if (lVar2 == 0) {
            uVar6 = FUN_100c6ca00();
            *(undefined8 *)(piVar1 + 8) = uVar6;
          }
switchD_100c4bc94_default:
          piVar1[6] = param_3;
          return 1;
        }
      }
      uVar6 = 0x90;
      uVar7 = 0x1cc;
      break;
    case 0x1002:
    case 0x1007:
      if (piVar1[6] == 6) {
        if (param_2 == 0x1007) {
          *(int *)param_4 = piVar1[0xc];
          return 1;
        }
        if (-3 < param_3) {
          piVar1[0xc] = param_3;
          return 1;
        }
        return 0xfffffffe;
      }
      uVar6 = 0x92;
      uVar7 = 0x1d6;
      break;
    case 0x1003:
      if (0xff < param_3) {
        *piVar1 = param_3;
        return 1;
      }
      uVar6 = 0x91;
      uVar7 = 0x1e4;
      break;
    case 0x1004:
      if (param_4 != (long *)0x0) {
        *(long **)(piVar1 + 2) = param_4;
        return 1;
      }
      return 0xfffffffe;
    case 0x1005:
    case 0x1008:
      if (piVar1[6] == 6) {
        if (param_2 != 0x1008) {
          *(long **)(piVar1 + 10) = param_4;
          return 1;
        }
        if (*(long *)(piVar1 + 10) != 0) {
          *param_4 = *(long *)(piVar1 + 10);
          return 1;
        }
        *param_4 = *(long *)(piVar1 + 8);
        return 1;
      }
      uVar6 = 0x9c;
      uVar7 = 0x1f9;
      break;
    case 0x1006:
      *(int *)param_4 = piVar1[6];
      return 1;
    default:
      goto switchD_100c4bbbd_caseD_3;
    }
  }
  FUN_100c62ee0(4,0x8f,uVar6,"rsa_pmeth.c",uVar7);
switchD_100c4bbbd_caseD_3:
  return 0xfffffffe;
}

