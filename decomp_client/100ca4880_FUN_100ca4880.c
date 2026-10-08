
undefined8 FUN_100ca4880(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_58 [5];
  
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      FUN_100c5c0c0(param_3,"%*sFull Name:\n",param_4,"");
      uVar2 = *(undefined8 *)(piVar1 + 2);
      iVar3 = FUN_100c60800(uVar2);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          FUN_100c5c0c0(param_3,"%*s",(int)param_4 + 2,"");
          uVar5 = FUN_100c60820(uVar2,iVar3);
          FUN_100ca12d0(param_3,uVar5);
          FUN_100c58a70(param_3,"\n");
          iVar3 = iVar3 + 1;
          iVar4 = FUN_100c60800(uVar2);
        } while (iVar3 < iVar4);
      }
    }
    else {
      local_58[0] = *(undefined8 *)(piVar1 + 2);
      FUN_100c5c0c0(param_3,"%*sRelative Name:\n%*s",param_4,"",(int)param_4 + 2,"");
      FUN_100c79e60(param_3,local_58,0,0x82031f);
      FUN_100c58a70(param_3,"\n");
    }
  }
  if (0 < (int)param_2[1]) {
    FUN_100c5c0c0(param_3,"%*sOnly User Certificates\n",param_4 & 0xffffffff,"");
  }
  if (0 < *(int *)((long)param_2 + 0xc)) {
    FUN_100c5c0c0(param_3,"%*sOnly CA Certificates\n",param_4 & 0xffffffff,"");
  }
  if (0 < (int)param_2[3]) {
    FUN_100c5c0c0(param_3,"%*sIndirect CRL\n",param_4 & 0xffffffff,"");
  }
  if (param_2[2] != 0) {
    FUN_100ca5060(param_3,"Only Some Reasons",param_2[2],param_4 & 0xffffffff);
  }
  if (0 < *(int *)((long)param_2 + 0x1c)) {
    FUN_100c5c0c0(param_3,"%*sOnly Attribute Certificates\n",param_4 & 0xffffffff,"");
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((long)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((long)param_2 + 0x1c) < 1)))) {
    FUN_100c5c0c0(param_3,"%*s<EMPTY>\n",param_4 & 0xffffffff,"");
  }
  return 1;
}

