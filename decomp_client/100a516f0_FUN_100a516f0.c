
void FUN_100a516f0(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 != param_2) {
    uVar3 = (ulong)(uint)(*(int *)(param_2 + 0x10) * 0x18);
    puVar7 = (undefined8 *)(param_1 + 0x10);
    do {
      if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
        uVar4 = (ulong)(*(byte *)(lVar5 + 0x10) >> 1);
      }
      else {
        uVar4 = *(ulong *)(lVar5 + 0x18);
      }
      if (uVar4 == 0) {
        *(undefined4 *)(puVar7 + -2) = 0;
      }
      else {
        iVar2 = (int)uVar3;
        *(int *)(puVar7 + -2) = iVar2;
        if ((*(byte *)(lVar5 + 0x10) & 1) == 0) {
          pcVar6 = (char *)(lVar5 + 0x11);
        }
        else {
          pcVar6 = *(char **)(lVar5 + 0x20);
        }
        _strcpy((char *)(param_1 + uVar3),pcVar6);
        bVar1 = *(byte *)(lVar5 + 0x10);
        if ((bVar1 & 1) == 0) {
          uVar3 = (ulong)(iVar2 + 1 + (uint)(bVar1 >> 1));
        }
        else {
          uVar3 = (ulong)(uint)(iVar2 + 1 + (int)*(undefined8 *)(lVar5 + 0x18));
        }
      }
      if ((*(byte *)(lVar5 + 0x28) & 1) == 0) {
        uVar4 = (ulong)(*(byte *)(lVar5 + 0x28) >> 1);
      }
      else {
        uVar4 = *(ulong *)(lVar5 + 0x30);
      }
      if (uVar4 == 0) {
        *(undefined4 *)((long)puVar7 + -0xc) = 0;
      }
      else {
        iVar2 = (int)uVar3;
        *(int *)((long)puVar7 + -0xc) = iVar2;
        if ((*(byte *)(lVar5 + 0x28) & 1) == 0) {
          pcVar6 = (char *)(lVar5 + 0x29);
        }
        else {
          pcVar6 = *(char **)(lVar5 + 0x38);
        }
        _strcpy((char *)(param_1 + uVar3),pcVar6);
        bVar1 = *(byte *)(lVar5 + 0x28);
        if ((bVar1 & 1) == 0) {
          uVar3 = (ulong)(iVar2 + 1 + (uint)(bVar1 >> 1));
        }
        else {
          uVar3 = (ulong)(uint)(iVar2 + 1 + (int)*(undefined8 *)(lVar5 + 0x30));
        }
      }
      if ((*(byte *)(lVar5 + 0x40) & 1) == 0) {
        uVar4 = (ulong)(*(byte *)(lVar5 + 0x40) >> 1);
      }
      else {
        uVar4 = *(ulong *)(lVar5 + 0x48);
      }
      if (uVar4 == 0) {
        *(undefined4 *)(puVar7 + -1) = 0;
      }
      else {
        iVar2 = (int)uVar3;
        *(int *)(puVar7 + -1) = iVar2;
        if ((*(byte *)(lVar5 + 0x40) & 1) == 0) {
          pcVar6 = (char *)(lVar5 + 0x41);
        }
        else {
          pcVar6 = *(char **)(lVar5 + 0x50);
        }
        _strcpy((char *)(param_1 + uVar3),pcVar6);
        bVar1 = *(byte *)(lVar5 + 0x40);
        if ((bVar1 & 1) == 0) {
          uVar3 = (ulong)(iVar2 + 1 + (uint)(bVar1 >> 1));
        }
        else {
          uVar3 = (ulong)(uint)(iVar2 + 1 + (int)*(undefined8 *)(lVar5 + 0x48));
        }
      }
      *(undefined4 *)((long)puVar7 + -4) = *(undefined4 *)(lVar5 + 0x60);
      *puVar7 = *(undefined8 *)(lVar5 + 0x58);
      lVar5 = *(long *)(lVar5 + 8);
      puVar7 = puVar7 + 3;
    } while (lVar5 != param_2);
  }
  return;
}

