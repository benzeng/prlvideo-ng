
undefined8 FUN_100552190(long param_1,int *param_2)

{
  char cVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (((-1 < *param_2) && (-1 < param_2[1])) && (iVar6 = 0, *(long *)(param_2 + 4) != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    uVar4 = (ulong)*(uint *)(lVar2 + 8);
    if ((int)*(uint *)(lVar2 + 8) < *(int *)(lVar2 + 0xc)) {
      lVar5 = 0;
      do {
        cVar1 = FUN_100551820(*(undefined8 *)(lVar2 + 0x10 + ((int)uVar4 + lVar5) * 8));
        if (cVar1 != '\0') {
          if (*param_2 == iVar6) {
            puVar3 = *(uint **)(*(long *)(param_1 + 0x10) + 0x10);
            if (1 < *puVar3) {
              puVar7 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
              FUN_100559bb0(puVar7,puVar3[1]);
              puVar3 = (uint *)*puVar7;
            }
            return *(undefined8 *)(puVar3 + ((int)puVar3[2] + lVar5) * 2 + 4);
          }
          iVar6 = iVar6 + 1;
        }
        lVar5 = lVar5 + 1;
        lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
        uVar4 = (ulong)*(int *)(lVar2 + 8);
      } while (lVar5 < (long)((long)*(int *)(lVar2 + 0xc) - uVar4));
    }
  }
  return 0;
}

