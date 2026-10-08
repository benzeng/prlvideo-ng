
long FUN_100c96e70(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    iVar2 = FUN_100c60800(*param_1);
    lVar3 = 0;
    if ((-1 < param_2) && (param_2 < iVar2)) {
      uVar1 = *param_1;
      lVar3 = FUN_100c60270(uVar1,param_2);
      iVar2 = FUN_100c60800(uVar1);
      *(undefined4 *)(param_1 + 1) = 1;
      if (iVar2 != param_2) {
        if (param_2 == 0) {
          iVar5 = *(int *)(lVar3 + 0x10) + -1;
        }
        else {
          lVar4 = FUN_100c60820(uVar1,param_2 + -1);
          iVar5 = *(int *)(lVar4 + 0x10);
        }
        lVar4 = FUN_100c60820(uVar1,param_2);
        if ((iVar5 + 1 < *(int *)(lVar4 + 0x10)) && (param_2 < iVar2)) {
          do {
            lVar4 = FUN_100c60820(uVar1,param_2);
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
            param_2 = param_2 + 1;
          } while (iVar2 != param_2);
        }
      }
    }
  }
  return lVar3;
}

