
void FUN_1001dc5cd(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (param_1[0xc] == 0) {
    param_1[0xc] = 4;
    uVar2 = (*(code *)_xmlMalloc)((long)(int)param_1[0xc] * 0x18);
    *(undefined8 *)(param_1 + 0xe) = uVar2;
    if (*(long *)(param_1 + 0xe) == 0) {
      FUN_1001d7cf4(0,"saving regexp");
      param_1[0xc] = 0;
      return;
    }
    puVar4 = *(undefined1 **)(param_1 + 0xe);
    for (lVar3 = (long)(int)param_1[0xc] * 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  else if ((int)param_1[0xc] <= (int)param_1[0xd]) {
    iVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xc] * 2;
    lVar3 = (*(code *)_xmlRealloc)(*(undefined8 *)(param_1 + 0xe),(long)(int)param_1[0xc] * 0x18);
    if (lVar3 == 0) {
      FUN_1001d7cf4(0,"saving regexp");
      param_1[0xc] = (int)param_1[0xc] / 2;
      return;
    }
    *(long *)(param_1 + 0xe) = lVar3;
    puVar4 = (undefined1 *)(*(long *)(param_1 + 0xe) + (long)iVar1 * 0x18);
    for (lVar3 = (long)(param_1[0xc] - iVar1) * 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18) =
       *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18 + 8) = param_1[0x14];
  *(int *)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18 + 0xc) = param_1[10] + 1;
  if (0 < *(int *)(*(long *)(param_1 + 2) + 0x28)) {
    if (*(long *)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18 + 0x10) == 0) {
      lVar3 = *(long *)(param_1 + 0xe);
      iVar1 = param_1[0xd];
      uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(*(long *)(param_1 + 2) + 0x28) * 4);
      *(undefined8 *)(lVar3 + (long)iVar1 * 0x18 + 0x10) = uVar2;
      if (*(long *)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18 + 0x10) == 0) {
        FUN_1001d7cf4(0,"saving regexp");
        *param_1 = 0xfffffffb;
        return;
      }
    }
    puVar4 = *(undefined1 **)(param_1 + 0x10);
    puVar5 = *(undefined1 **)(*(long *)(param_1 + 0xe) + (long)(int)param_1[0xd] * 0x18 + 0x10);
    for (lVar3 = (long)*(int *)(*(long *)(param_1 + 2) + 0x28) * 4; lVar3 != 0; lVar3 = lVar3 + -1)
    {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  param_1[0xd] = param_1[0xd] + 1;
  return;
}

