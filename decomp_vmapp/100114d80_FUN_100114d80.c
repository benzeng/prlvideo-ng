
undefined8 FUN_100114d80(undefined8 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  
  lVar1 = *param_2;
  puVar3 = (ulong *)(lVar1 + *(long *)(lVar1 + 0x10));
  lVar5 = (long)*(int *)(lVar1 + 4);
  puVar4 = puVar3 + lVar5 * 4;
  if ((((lVar5 != 0) && (*puVar3 <= param_3)) &&
      (puVar6 = puVar3 + lVar5 * 4 + -4, param_3 <= *puVar6)) &&
     (puVar4 = puVar3, (ulong *)(*(long *)(lVar1 + 0x10) + 0x20 + lVar1) < puVar6)) {
    do {
      uVar2 = ((long)puVar6 - (long)puVar3 >> 5) - ((long)puVar6 - (long)puVar3 >> 0x3f) &
              0xffffffffffffffe;
      puVar4 = puVar3 + uVar2 * 2;
      if (param_3 < puVar3[uVar2 * 2]) {
        puVar6 = puVar4;
        puVar4 = puVar3;
      }
      puVar3 = puVar4;
    } while (puVar4 + 4 < puVar6);
  }
  lVar5 = *(long *)(lVar1 + 0x10) + lVar1;
  if (puVar4 == (ulong *)((long)*(int *)(lVar1 + 4) * 0x20 + lVar5)) {
    FUN_1001149c0(param_1,lVar5,param_3);
  }
  else {
    FUN_100114b80(param_1,lVar5,puVar4 + 1,param_3 - *puVar4);
  }
  return param_1;
}

