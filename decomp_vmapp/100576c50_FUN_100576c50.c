
undefined8 FUN_100576c50(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  do {
    uVar2 = *(long *)(param_1 + 0x28) + 1;
    *(ulong *)(param_1 + 0x28) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x1128);
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x1130);
    if ((ulong)(lVar4 - lVar3 >> 3) <= uVar2) goto LAB_100576caf;
    cVar1 = FUN_100595b70(*(undefined8 *)(lVar3 + uVar2 * 8));
  } while (cVar1 == '\0');
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x1128);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x1130);
LAB_100576caf:
  return CONCAT71((int7)(uVar2 >> 8),lVar4 - lVar3 >> 3 != uVar2);
}

