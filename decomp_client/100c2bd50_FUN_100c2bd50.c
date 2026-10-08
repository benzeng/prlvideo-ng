
undefined8 FUN_100c2bd50(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  if ((lVar2 == 0) || (param_1[1] == 0)) {
    FUN_100c62ee0(3,0x67,0x6b,"bn_blind.c",0xc4);
    uVar3 = 0;
    goto LAB_100c2be27;
  }
  if ((int)param_1[7] == -1) {
    *(undefined4 *)(param_1 + 7) = 1;
LAB_100c2bde8:
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      iVar1 = FUN_100c29cc0(lVar2,lVar2,lVar2,param_1[3],param_2);
      uVar3 = 0;
      if (iVar1 == 0) goto LAB_100c2be27;
      lVar2 = param_1[1];
      iVar1 = FUN_100c29cc0(lVar2,lVar2,lVar2,param_1[3],param_2);
      if (iVar1 == 0) goto LAB_100c2be27;
    }
  }
  else {
    iVar1 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = iVar1;
    if (((iVar1 != 0x20) || (param_1[2] == 0)) || ((*(byte *)(param_1 + 8) & 2) != 0))
    goto LAB_100c2bde8;
    uVar3 = 0;
    lVar2 = FUN_100c2be50(param_1,0,0,param_2,0,0);
    if (lVar2 == 0) goto LAB_100c2be27;
  }
  uVar3 = 1;
LAB_100c2be27:
  if ((int)param_1[7] == 0x20) {
    *(int *)(param_1 + 7) = 0;
  }
  return uVar3;
}

