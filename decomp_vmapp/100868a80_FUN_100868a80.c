
undefined4 FUN_100868a80(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_100891f40();
  if ((lVar3 != 0) && (iVar1 = FUN_1008922f0(lVar3,param_2), iVar1 != 0)) {
    uVar2 = FUN_1008925f0(param_1,lVar3,param_3,0);
    FUN_1008924e0(lVar3);
    return uVar2;
  }
  return 0;
}

