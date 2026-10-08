
undefined8
FUN_100c84ab0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,ulong *param_5
             )

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 local_38;
  
  uVar1 = *param_5;
  uVar4 = 0;
  if ((uVar1 & 0x80) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_4 + 8) + 0x30);
  }
  lVar5 = 0;
  if ((uVar1 & 0x40) == 0) {
    lVar5 = *(long *)(param_4 + 6);
  }
  if ((*param_4 & 6) == 0) {
    uVar4 = FUN_100c842b0(param_1,param_2,param_3,*(undefined8 *)(param_4 + 8),lVar5,uVar4,0,param_5
                         );
    return uVar4;
  }
  if (lVar5 != 0) {
    if ((uVar1 & 4) == 0) {
      iVar2 = FUN_100c5c0c0(param_1,"%*s%s:\n",param_3,"");
    }
    else {
      pcVar6 = "SET";
      if ((*param_4 & 2) == 0) {
        pcVar6 = "SEQUENCE";
      }
      iVar2 = FUN_100c5c0c0(param_1,"%*s%s OF %s {\n",param_3,"",pcVar6,*(undefined8 *)(param_4 + 6)
                           );
    }
    if (iVar2 < 1) {
      return 0;
    }
  }
  uVar4 = *param_2;
  iVar2 = FUN_100c60800(uVar4);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      if ((0 < iVar2) && (iVar3 = FUN_100c58a70(param_1,"\n"), iVar3 < 1)) {
        return 0;
      }
      local_38 = FUN_100c60820(uVar4,iVar2);
      iVar3 = FUN_100c842b0(param_1,&local_38,(int)param_3 + 2,*(undefined8 *)(param_4 + 8),0,0,1,
                            param_5);
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = FUN_100c60800(uVar4);
    } while (iVar2 < iVar3);
    if (iVar2 != 0) goto LAB_100c84c5c;
  }
  iVar2 = FUN_100c5c0c0(param_1,"%*s<EMPTY>\n",(int)param_3 + 2,"");
  if (iVar2 < 1) {
    return 0;
  }
LAB_100c84c5c:
  if (((*param_5 & 2) != 0) && (iVar2 = FUN_100c5c0c0(param_1,"%*s}\n",param_3,""), iVar2 < 1)) {
    return 0;
  }
  return 1;
}

