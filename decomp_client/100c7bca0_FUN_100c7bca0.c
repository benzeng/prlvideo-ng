
undefined8 * FUN_100c7bca0(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)FUN_100c7fb90(&DAT_102251a30);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar3 = FUN_100bf6fe0(param_1);
  *puVar2 = uVar3;
  *(undefined4 *)(puVar2 + 1) = 0;
  lVar4 = FUN_100c60010();
  puVar2[2] = lVar4;
  if ((lVar4 == 0) || (lVar4 = FUN_100c83f00(), lVar4 == 0)) {
    FUN_100c801c0(puVar2,&DAT_102251a30);
  }
  else {
    iVar1 = FUN_100c604e0(puVar2[2],lVar4);
    if (iVar1 != 0) {
      FUN_100c76e50(lVar4,param_2,param_3);
      return puVar2;
    }
    FUN_100c801c0(puVar2,&DAT_102251a30);
    FUN_100c83f20(lVar4);
  }
  return (undefined8 *)0x0;
}

