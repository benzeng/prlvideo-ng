
void FUN_1007d9880(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  
  puVar7 = (ulong *)param_2[1];
  puVar5 = (ulong *)param_2[2];
  if (puVar7 == (ulong *)0x0) {
    puVar6 = (ulong *)(*param_2 & 0xfffffffffffffffe);
    puVar7 = (ulong *)0x0;
    if (puVar5 != (ulong *)0x0) goto LAB_1007d9907;
  }
  else {
    if (puVar5 != (ulong *)0x0) {
      do {
        puVar5 = puVar7;
        puVar7 = (ulong *)puVar5[2];
      } while ((ulong *)puVar5[2] != (ulong *)0x0);
      uVar1 = *puVar5;
      puVar7 = (ulong *)puVar5[1];
      puVar4 = (ulong *)(uVar1 & 0xfffffffffffffffe);
      puVar6 = puVar4;
      if (puVar4 == param_2) {
        puVar6 = puVar5;
      }
      if (puVar7 != (ulong *)0x0) {
        *puVar7 = *puVar7 & 1 | (ulong)puVar4;
      }
      if (puVar4 == (ulong *)0x0) {
        *param_1 = puVar7;
      }
      else if ((ulong *)puVar4[2] == puVar5) {
        puVar4[2] = (ulong)puVar7;
      }
      else if ((ulong *)puVar4[1] == puVar5) {
        puVar4[1] = (ulong)puVar7;
      }
      uVar8 = *param_2 & 0xfffffffffffffffe;
      *puVar5 = *param_2 & 0xfffffffffffffffe | *puVar5 & 1;
      if (uVar8 == 0) {
        *param_1 = puVar5;
      }
      else if (*(ulong **)(uVar8 + 0x10) == param_2) {
        *(ulong **)(uVar8 + 0x10) = puVar5;
      }
      else if (*(ulong **)(uVar8 + 8) == param_2) {
        *(ulong **)(uVar8 + 8) = puVar5;
      }
      puVar5[2] = param_2[2];
      uVar2 = *(undefined4 *)((long)param_2 + 4);
      uVar8 = param_2[1];
      uVar3 = *(undefined4 *)((long)param_2 + 0xc);
      *(int *)puVar5 = (int)*param_2;
      *(undefined4 *)((long)puVar5 + 4) = uVar2;
      *(int *)(puVar5 + 1) = (int)uVar8;
      *(undefined4 *)((long)puVar5 + 0xc) = uVar3;
      puVar4 = (ulong *)param_2[2];
      if (puVar4 != (ulong *)0x0) {
        *puVar4 = *puVar4 & 1 | (ulong)puVar5;
      }
      puVar4 = (ulong *)param_2[1];
      if (puVar4 != (ulong *)0x0) {
        *puVar4 = *puVar4 & 1 | (ulong)puVar5;
      }
      if ((uVar1 & 1) == 0) {
        return;
      }
      goto LAB_1007d99d1;
    }
    puVar6 = (ulong *)(*param_2 & 0xfffffffffffffffe);
    puVar5 = puVar7;
LAB_1007d9907:
    *puVar5 = *puVar5 & 1 | (ulong)puVar6;
    puVar7 = puVar5;
  }
  if (puVar6 == (ulong *)0x0) {
    *param_1 = puVar7;
  }
  else if ((ulong *)puVar6[2] == param_2) {
    puVar6[2] = (ulong)puVar7;
  }
  else if ((ulong *)puVar6[1] == param_2) {
    puVar6[1] = (ulong)puVar7;
  }
  if ((*param_2 & 1) == 0) {
    return;
  }
LAB_1007d99d1:
  FUN_1007d9aa0(puVar7,puVar6,param_1);
  return;
}

