
void FUN_100bdd0d0(undefined4 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  
  lVar2 = *(long *)(param_1 + 0x22);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x248);
    uVar6 = *(undefined4 *)(lVar2 + 600);
    uVar7 = *(undefined4 *)(lVar2 + 0x25c);
    uVar8 = *(undefined4 *)(lVar2 + 0x260);
    uVar9 = *(undefined4 *)(lVar2 + 0x264);
    uVar4 = *(undefined8 *)(lVar2 + 0x268);
    uVar5 = *(undefined8 *)(lVar2 + 0x278);
    uVar11 = *(undefined4 *)(lVar2 + 0x288);
    uVar1 = *(undefined4 *)(lVar2 + 0x284);
    FUN_100bdcf70(param_1);
    ___bzero(*(undefined8 *)(param_1 + 0x22),0x380);
    if (param_1[0xe] != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x22) + 0x204) = 0x100;
    }
    uVar10 = FUN_100be4680(param_1,0x20,0,0);
    lVar2 = *(long *)(param_1 + 0x22);
    if ((uVar10 & 0x1000) != 0) {
      *(undefined4 *)(lVar2 + 0x288) = uVar11;
      *(undefined4 *)(lVar2 + 0x284) = uVar1;
    }
    *(undefined8 *)(lVar2 + 0x248) = uVar3;
    *(undefined4 *)(lVar2 + 600) = uVar6;
    *(undefined4 *)(lVar2 + 0x25c) = uVar7;
    *(undefined4 *)(lVar2 + 0x260) = uVar8;
    *(undefined4 *)(lVar2 + 0x264) = uVar9;
    *(undefined8 *)(lVar2 + 0x268) = uVar4;
    *(undefined8 *)(lVar2 + 0x278) = uVar5;
  }
  FUN_100bcd360(param_1);
  uVar11 = 0x100;
  if ((*(ulong *)(param_1 + 0x6a) & 0x8000) == 0) {
    uVar11 = 0xfeff;
  }
  *param_1 = uVar11;
  return;
}

