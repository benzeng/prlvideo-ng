
undefined1 FUN_1005e72b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 local_98 [88];
  undefined1 local_40 [40];
  
  lVar1 = FUN_1005ec990(param_1 + 0x38);
  uVar3 = 1;
  if (*(int *)(lVar1 + 0x50) != 4) {
    uVar2 = FUN_1005ec990(param_1 + 0x38);
    FUN_1005b69c0(local_98,uVar2);
    uVar3 = FUN_10073dd70(local_98);
    FUN_100252c80(local_40);
    FUN_100252e70(local_98);
  }
  return uVar3;
}

