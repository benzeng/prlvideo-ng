
void FUN_1003ba860(long *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  uVar3 = *(uint *)(param_1 + 2);
  iVar10 = 0;
  bVar11 = (uVar3 & uVar3 - 1) != 0;
  if (bVar11) {
    uVar4 = FUN_1003a78b0(param_2,uVar3 & 0xff);
    FUN_10038e8e0(param_1 + 0x14,"%s(",uVar4);
    uVar3 = *(uint *)(param_1 + 2);
  }
  uVar9 = (uint)bVar11;
  uVar6 = 0;
  if ((char)uVar3 != '\0') {
    iVar10 = 0;
    uVar6 = 0;
    do {
      uVar3 = uVar3 & 0xff;
      uVar5 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (uVar3 == 0) {
        uVar5 = 0xffffffff;
      }
      uVar7 = 1 << ((byte)uVar5 & 0x1f);
      iVar1 = *(int *)(*param_1 + 0x28 + (ulong)uVar5 * 4);
      iVar2 = iVar1;
      if ((uVar6 != 0) && (iVar2 = iVar10, iVar10 != iVar1)) break;
      iVar10 = iVar2;
      uVar3 = uVar3 & ~uVar7;
      uVar6 = uVar6 | uVar7;
    } while (uVar3 != 0);
  }
  uVar3 = *(uint *)(param_1 + 2);
  if (uVar6 == uVar3) {
    FUN_1003ba770(param_1,iVar10,param_2);
  }
  else if ((char)uVar3 != '\0') {
    pcVar8 = "";
    do {
      uVar3 = uVar3 & 0xff;
      uVar6 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (uVar3 == 0) {
        uVar6 = 0xffffffff;
      }
      FUN_10038e8e0(param_1 + 0x14,pcVar8);
      FUN_1003ba770(param_1,*(undefined4 *)(*param_1 + 0x28 + (ulong)uVar6 * 4),param_2);
      uVar3 = ~(1 << ((byte)uVar6 & 0x1f)) & uVar3;
      pcVar8 = ", ";
    } while (uVar3 != 0);
  }
  if (uVar9 != 0) {
    do {
      FUN_10038e8e0(param_1 + 0x14,")");
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}

