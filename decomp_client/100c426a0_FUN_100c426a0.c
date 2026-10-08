
undefined8 FUN_100c426a0(undefined4 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if ((param_3 == 0) || (lVar3 = FUN_100c3fad0(param_3), lVar3 == 0)) {
    FUN_100c62ee0(0x10,0xdf,0x7c,"ec_ameth.c",0x4a);
    return 0;
  }
  iVar1 = FUN_100c36c70(lVar3);
  if ((iVar1 == 0) || (iVar1 = FUN_100c36c50(lVar3), iVar1 == 0)) {
    piVar5 = (int *)FUN_100c8b280();
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    iVar1 = FUN_100c3ed10(param_3,piVar5 + 2);
    *piVar5 = iVar1;
    if (iVar1 < 1) {
      FUN_100c8b2f0(piVar5);
      FUN_100c62ee0(0x10,0xdf,0x10,"ec_ameth.c",0x5c);
      return 0;
    }
    *param_2 = piVar5;
    uVar2 = 0x10;
  }
  else {
    uVar4 = FUN_100bf6fe0(iVar1);
    *param_2 = uVar4;
    uVar2 = 6;
  }
  *param_1 = uVar2;
  return 1;
}

