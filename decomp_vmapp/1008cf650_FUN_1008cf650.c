
undefined8 FUN_1008cf650(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[2];
  *param_3 = *param_2;
  iVar2 = FUN_1008852e0(uVar1,param_3);
  uVar4 = 0;
  if (iVar2 != 0) {
    lVar3 = FUN_1008859e0(*(undefined8 *)(param_1 + 0x10),param_3);
    uVar4 = 1;
    if (lVar3 != 0) {
      FUN_100884f70(uVar1,lVar3);
      FUN_10081e1a0(*(undefined8 *)(lVar3 + 8));
      FUN_10081e1a0(*(undefined8 *)(lVar3 + 0x10));
      FUN_10081e1a0(lVar3);
    }
  }
  return uVar4;
}

