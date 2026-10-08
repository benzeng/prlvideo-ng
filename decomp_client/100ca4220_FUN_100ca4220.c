
undefined8
FUN_100ca4220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_58 [5];
  
  iVar3 = FUN_100c60800(param_2);
  if (0 < iVar3) {
    iVar3 = (int)param_4 + 2;
    iVar8 = 0;
    do {
      FUN_100c58a70(param_3,"\n");
      puVar5 = (undefined8 *)FUN_100c60820(param_2,iVar8);
      piVar1 = (int *)*puVar5;
      if (piVar1 != (int *)0x0) {
        if (*piVar1 == 0) {
          iVar7 = 0;
          FUN_100c5c0c0(param_3,"%*sFull Name:\n",param_4,"");
          uVar2 = *(undefined8 *)(piVar1 + 2);
          iVar4 = FUN_100c60800(uVar2);
          if (0 < iVar4) {
            do {
              FUN_100c5c0c0(param_3,"%*s",iVar3,"");
              uVar6 = FUN_100c60820(uVar2,iVar7);
              FUN_100ca12d0(param_3,uVar6);
              FUN_100c58a70(param_3,"\n");
              iVar7 = iVar7 + 1;
              iVar4 = FUN_100c60800(uVar2);
            } while (iVar7 < iVar4);
          }
        }
        else {
          local_58[0] = *(undefined8 *)(piVar1 + 2);
          FUN_100c5c0c0(param_3,"%*sRelative Name:\n%*s",param_4,"",iVar3,"");
          FUN_100c79e60(param_3,local_58,0,0x82031f);
          FUN_100c58a70(param_3,"\n");
        }
      }
      if (puVar5[1] != 0) {
        FUN_100ca5060(param_3,"Reasons",puVar5[1],param_4);
      }
      if (puVar5[2] != 0) {
        iVar7 = 0;
        FUN_100c5c0c0(param_3,"%*sCRL Issuer:\n",param_4,"");
        uVar2 = puVar5[2];
        iVar4 = FUN_100c60800(uVar2);
        if (0 < iVar4) {
          do {
            FUN_100c5c0c0(param_3,"%*s",iVar3,"");
            uVar6 = FUN_100c60820(uVar2,iVar7);
            FUN_100ca12d0(param_3,uVar6);
            FUN_100c58a70(param_3,"\n");
            iVar7 = iVar7 + 1;
            iVar4 = FUN_100c60800(uVar2);
          } while (iVar7 < iVar4);
        }
      }
      iVar8 = iVar8 + 1;
      iVar4 = FUN_100c60800(param_2);
    } while (iVar8 < iVar4);
  }
  return 1;
}

