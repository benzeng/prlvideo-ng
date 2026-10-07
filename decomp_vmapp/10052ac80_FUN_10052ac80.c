
long * FUN_10052ac80(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(undefined4 *)(lVar2 + 4);
  lVar3 = *(long *)(lVar2 + 0x10);
  FUN_10052be40(param_1 + 1);
  (**(code **)(*param_1 + 0x10))(param_1,uVar1,lVar2 + lVar3);
  return param_1;
}

