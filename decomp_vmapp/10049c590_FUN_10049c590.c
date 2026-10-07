
long FUN_10049c590(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  string *this;
  string *this_00;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  
  iVar5 = (int)((ulong)(param_3 - param_2) >> 6);
  if (iVar5 != 0) {
    puVar12 = (uint *)*param_1;
    lVar7 = *(long *)(puVar12 + 4);
    uVar8 = param_2 - ((long)puVar12 + lVar7);
    if ((puVar12[2] & 0x7fffffff) == 0) {
      lVar9 = (long)(int)(uVar8 >> 6);
    }
    else {
      if (1 < *puVar12) {
        FUN_10049c090(param_1,puVar12[1],puVar12[2] & 0x7fffffff,0);
        puVar12 = (uint *)*param_1;
        lVar7 = *(long *)(puVar12 + 4);
      }
      lVar9 = (long)(int)(uVar8 >> 6);
      lVar10 = lVar9 * 0x40;
      lVar3 = lVar10 + lVar7;
      lVar4 = (long)iVar5 * 0x40 + lVar10;
      uVar2 = puVar12[1];
      lVar6 = (long)puVar12 + (lVar9 + iVar5) * 0x40 + lVar7;
      for (lVar11 = 0; uVar8 = (long)puVar12 + lVar11 + lVar3,
          lVar4 + (long)(int)uVar2 * -0x40 + lVar11 != 0; lVar11 = lVar11 + 0x40) {
        this = (string *)((long)puVar12 + lVar11 + lVar3 + 0x28);
        std::string::~string(this);
        this_00 = (string *)((long)puVar12 + lVar11 + lVar3 + 8);
        std::string::~string(this_00);
        *(undefined4 *)((long)puVar12 + lVar10 + lVar11 + lVar7) =
             *(undefined4 *)((long)puVar12 + lVar4 + lVar11 + lVar7);
        std::string::string(this_00,(string *)(lVar6 + 8));
        *(undefined1 *)((long)puVar12 + lVar10 + lVar11 + lVar7 + 0x20) =
             *(undefined1 *)(lVar6 + 0x20);
        std::string::string(this,(string *)(lVar6 + 0x28));
        lVar6 = lVar6 + 0x40;
      }
      puVar12 = (uint *)*param_1;
      lVar7 = *(long *)(puVar12 + 4);
      uVar2 = puVar12[1];
      if (uVar8 < (ulong)((long)puVar12 + (long)(int)uVar2 * 0x40 + lVar7)) {
        do {
          std::string::~string((string *)(uVar8 + 0x28));
          uVar1 = uVar8 + 0x40;
          std::string::~string((string *)(uVar8 + 8));
          uVar8 = uVar1;
        } while ((long)puVar12 + lVar7 + (long)(int)uVar2 * 0x40 != uVar1);
        puVar12 = (uint *)*param_1;
        lVar7 = *(long *)(puVar12 + 4);
      }
      puVar12[1] = puVar12[1] - iVar5;
    }
    param_2 = (long)puVar12 + lVar9 * 0x40 + lVar7;
  }
  return param_2;
}

