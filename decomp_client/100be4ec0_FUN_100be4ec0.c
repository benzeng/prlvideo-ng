
long FUN_100be4ec0(long param_1,char *param_2,int param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x4a4) = 0;
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x98))(0,0);
  if ((iVar1 == 0) || (param_3 % iVar1 != 0)) {
    FUN_100c62ee0(0x14,0xa1,0x97,"ssl_lib.c",0x5a0);
    return 0;
  }
  if ((param_4 == (long *)0x0) || (lVar3 = *param_4, lVar3 == 0)) {
    lVar3 = FUN_100c60010();
    if (lVar3 == 0) {
      FUN_100c62ee0(0x14,0xa1,0x41,"ssl_lib.c",0x5a6);
      return 0;
    }
  }
  else {
    FUN_100c60760(lVar3);
  }
  if (0 < param_3) {
    iVar5 = 0;
    if (iVar1 == 3) {
      do {
        if (*(long *)(param_1 + 0x80) == 0) {
LAB_100be50f0:
          if ((*param_2 == '\0') && ((param_2[1] == 'V' && (param_2[2] == '\0')))) {
            lVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1,0x77,0,0);
            if (lVar4 == 0) goto LAB_100be51a9;
          }
          else {
LAB_100be5110:
            lVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x90))(param_2);
            if ((lVar4 != 0) && (iVar1 = FUN_100c604e0(lVar3,lVar4), iVar1 == 0))
            goto LAB_100be5160;
          }
        }
        else {
          if (*param_2 != '\0') goto LAB_100be5110;
          if ((param_2[1] != '\0') || (param_2[2] != -1)) goto LAB_100be50f0;
          if (*(int *)(param_1 + 0x2a4) != 0) goto LAB_100be51f0;
          *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x4a4) = 1;
        }
        param_2 = param_2 + 3;
        iVar5 = iVar5 + 3;
      } while (iVar5 < param_3);
    }
    else {
      do {
        if (((*(long *)(param_1 + 0x80) == 0) || (param_2[(long)iVar1 + -2] != '\0')) ||
           (param_2[(long)iVar1 + -1] != -1)) {
          if ((param_2[(long)iVar1 + -2] == 'V') && (param_2[(long)iVar1 + -1] == '\0')) {
            lVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1,0x77,0,0);
            if (lVar4 == 0) goto LAB_100be51a9;
          }
          else {
            lVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x90))(param_2);
            if ((lVar4 != 0) && (iVar2 = FUN_100c604e0(lVar3,lVar4), iVar2 == 0))
            goto LAB_100be5160;
          }
        }
        else {
          if (*(int *)(param_1 + 0x2a4) != 0) goto LAB_100be51f0;
          *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x4a4) = 1;
        }
        param_2 = param_2 + iVar1;
        iVar5 = iVar5 + iVar1;
      } while (iVar5 < param_3);
    }
  }
  if (param_4 == (long *)0x0) {
    return lVar3;
  }
  *param_4 = lVar3;
  return lVar3;
LAB_100be5160:
  FUN_100c62ee0(0x14,0xa1,0x41,"ssl_lib.c",0x5db);
  goto LAB_100be5189;
LAB_100be51f0:
  FUN_100c62ee0(0x14,0xa1,0x159,"ssl_lib.c",0x5b6);
  FUN_100bd2dc0(param_1,2,0x28);
  goto LAB_100be5189;
LAB_100be51a9:
  FUN_100c62ee0(0x14,0xa1,0x175,"ssl_lib.c",0x5cd);
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_100bd2dc0(param_1,2,0x56);
  }
LAB_100be5189:
  if ((param_4 == (long *)0x0) || (*param_4 == 0)) {
    FUN_100c5ffd0(lVar3);
  }
  return 0;
}

