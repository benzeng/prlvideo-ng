
undefined8 FUN_1003b8f00(undefined4 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(long *)(param_1 + 4) = param_2;
  plVar3 = *(long **)(param_2 + 0x108);
  while (lVar5 = *plVar3, lVar5 != 0) {
    FUN_1003b8ff0(param_1,lVar5);
    plVar3 = *(long **)(lVar5 + 8);
  }
  puVar1 = (undefined8 *)(param_1 + 2);
  lVar5 = **(long **)(param_2 + 0x138);
  if (lVar5 != 0) {
    bVar6 = false;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      if (!bVar6) {
        FUN_10038e8e0(*puVar1,"\nUntyped:");
      }
      FUN_10038e8e0(*puVar1," %d",*(undefined4 *)(lVar5 + 0x78));
      lVar5 = **(long **)(lVar5 + 0x38);
      bVar6 = iVar4 != -1;
      iVar2 = iVar4 + 1;
    } while (lVar5 != 0);
    if (iVar4 != -1) {
      FUN_10038e8e0(*puVar1,"\nNumUntyped=%d\n",iVar4 + 1);
    }
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *puVar1 = 0;
  return 0;
}

