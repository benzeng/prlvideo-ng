
undefined8 * FUN_1008a0720(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)FUN_1008a4610(&DAT_100be1420);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar3 = FUN_100821870(param_1);
  *puVar2 = uVar3;
  *(undefined4 *)(puVar2 + 1) = 0;
  lVar4 = FUN_100884e10();
  puVar2[2] = lVar4;
  if ((lVar4 == 0) || (lVar4 = FUN_1008a8980(), lVar4 == 0)) {
    FUN_1008a4c40(puVar2,&DAT_100be1420);
  }
  else {
    iVar1 = FUN_1008852e0(puVar2[2],lVar4);
    if (iVar1 != 0) {
      FUN_10089b8d0(lVar4,param_2,param_3);
      return puVar2;
    }
    FUN_1008a4c40(puVar2,&DAT_100be1420);
    FUN_1008a89a0(lVar4);
  }
  return (undefined8 *)0x0;
}

