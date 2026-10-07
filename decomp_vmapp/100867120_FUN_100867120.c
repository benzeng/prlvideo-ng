
undefined8 FUN_100867120(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_1008648d0(*(undefined8 *)(param_2 + 0x20));
  lVar3 = FUN_10085b820(uVar2);
  uVar2 = 0;
  if (lVar3 != 0) {
    iVar1 = FUN_1008648e0(*(undefined8 *)(param_1 + 0x20),lVar3);
    if (iVar1 != 0) {
      FUN_10085af70(lVar3);
      uVar2 = 1;
    }
  }
  return uVar2;
}

