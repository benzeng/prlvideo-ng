
undefined8 FUN_1005fe4d0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_3;
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 < *(int *)(lVar3 + 0xc)) {
    lVar4 = lVar3 + 8 + (long)iVar2 * 8;
    lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      if (lVar3 == 0) goto LAB_1005fe548;
      puVar1 = (undefined8 *)(lVar4 + 8);
      lVar4 = lVar4 + 8;
      iVar2 = FUN_1007ea6f0(*puVar1,param_2);
      lVar3 = lVar3 + -8;
    } while (iVar2 != 0);
    if ((int)(lVar4 - (*param_3 + 0x10 + (ulong)*(uint *)(*param_3 + 8) * 8) >> 3) != -1) {
      return 0;
    }
  }
LAB_1005fe548:
  FUN_1006028e0(param_3,param_2);
  return 0;
}

