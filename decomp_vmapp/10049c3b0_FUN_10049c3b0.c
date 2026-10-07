
long FUN_10049c3b0(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  string *this;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  
  iVar2 = (int)(param_3 - param_2 >> 3);
  iVar11 = iVar2 * -0x33333333;
  if (iVar11 != 0) {
    puVar9 = (uint *)*param_1;
    lVar4 = *(long *)(puVar9 + 4);
    iVar5 = (int)(param_2 - ((long)puVar9 + lVar4) >> 3) * -0x33333333;
    if ((puVar9[2] & 0x7fffffff) != 0) {
      if (1 < *puVar9) {
        FUN_10049bdd0(param_1,puVar9[1],puVar9[2] & 0x7fffffff,0);
        puVar9 = (uint *)*param_1;
        lVar4 = *(long *)(puVar9 + 4);
      }
      lVar10 = (long)puVar9 + lVar4;
      uVar3 = puVar9[1];
      lVar7 = (long)(int)uVar3;
      if ((long)iVar11 + (long)iVar5 == lVar7) {
        uVar6 = lVar10 + (long)iVar5 * 0x28;
      }
      else {
        lVar8 = (long)iVar5;
        uVar6 = (long)puVar9 +
                lVar4 + 0x28 +
                ((ulong)((lVar8 + iVar11) * -0x28 + -0x28 + lVar7 * 0x28) / 0x28 + lVar8) * 0x28;
        lVar8 = lVar8 * 0x28;
        lVar7 = lVar7 * 0x28;
        lVar4 = lVar8 + (long)iVar11 * 0x28;
        do {
          this = (string *)(lVar10 + 0x10 + lVar8);
          std::string::~string(this);
          *(undefined1 *)(lVar10 + 0xc + lVar8) = *(undefined1 *)(lVar10 + 0xc + lVar4);
          *(undefined4 *)(lVar10 + 8 + lVar8) = *(undefined4 *)(lVar10 + 8 + lVar4);
          *(undefined8 *)(lVar10 + lVar8) = *(undefined8 *)(lVar10 + lVar4);
          std::string::string(this,(string *)(lVar10 + 0x10 + lVar4));
          lVar7 = lVar7 + -0x28;
          lVar10 = lVar10 + 0x28;
        } while (lVar4 != lVar7);
        puVar9 = (uint *)*param_1;
        lVar4 = *(long *)(puVar9 + 4);
        uVar3 = puVar9[1];
      }
      if (uVar6 < (ulong)((long)puVar9 + (long)(int)uVar3 * 0x28 + lVar4)) {
        do {
          uVar1 = uVar6 + 0x28;
          std::string::~string((string *)(uVar6 + 0x10));
          uVar6 = uVar1;
        } while ((long)puVar9 + lVar4 + (long)(int)uVar3 * 0x28 != uVar1);
        puVar9 = (uint *)*param_1;
        lVar4 = *(long *)(puVar9 + 4);
      }
      puVar9[1] = puVar9[1] + iVar2 * 0x33333333;
    }
    param_2 = (long)puVar9 + (long)iVar5 * 0x28 + lVar4;
  }
  return param_2;
}

