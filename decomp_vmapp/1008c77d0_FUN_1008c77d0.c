
undefined8 FUN_1008c77d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar1 = FUN_100885600(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)FUN_100885620(param_2,iVar1);
      FUN_100880ec0(param_3,"%*sPolicy: ",param_4,"");
      FUN_1008993b0(param_3,*puVar3);
      FUN_10087d870(param_3,"\n");
      if (puVar3[1] != 0) {
        FUN_1008c8740(param_3,puVar3[1],param_4 + 2);
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100885600(param_2);
    } while (iVar1 < iVar2);
  }
  return 1;
}

