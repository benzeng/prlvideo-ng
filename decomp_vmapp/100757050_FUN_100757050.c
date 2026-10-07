
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_100757050(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined4 *param_5,
             ulong param_6,char param_7)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  
  lVar7 = DAT_1011bf938 - DAT_1011bf930 >> 6;
  puVar1 = param_5 + lVar7 * 0xe + 0xe;
  lVar8 = (long)puVar1 - (long)param_5;
  _DAT_1011bf958 = (lVar8 >> 3) * 0x6db6db6db6db6db7;
  lVar12 = 0x3f8;
  if (DAT_1011bf918 == '\0') {
    lVar12 = 0x4b8;
  }
  DAT_1011bf960 = DAT_1011bf950 + lVar8;
  DAT_1011bf968 = (long)param_5 + ((lVar12 * param_3 + lVar7 * 0x38 + 200) - (long)puVar1);
  DAT_1011bf970 = lVar8 + 0xfff + DAT_1011bf968 & 0xfffffffffffff000;
  if (param_6 < DAT_1011bf970) {
    uVar6 = 0;
    FUN_1008e3970("","dbgdump",0,"ELF pheaders size > buffer size");
  }
  else {
    ___bzero(param_5);
    lVar5 = DAT_1011bf968;
    lVar8 = DAT_1011bf960;
    uVar6 = 1;
    if (param_7 == '\0') {
      *param_5 = 4;
      *(long *)(param_5 + 10) = lVar5;
      *(long *)(param_5 + 8) = lVar5;
      *(long *)(param_5 + 2) = lVar8;
      lVar8 = DAT_1011bf938 - DAT_1011bf930;
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)(DAT_1011bf930 + 0x20);
        puVar10 = (undefined8 *)(param_5 + 0x1a);
        uVar11 = 0;
        do {
          uVar2 = puVar9[-3];
          uVar3 = puVar9[-2];
          uVar4 = *puVar9;
          *(undefined4 *)(puVar10 + -6) = 1;
          *(undefined4 *)((long)puVar10 + -0x2c) = 7;
          puVar10[-1] = uVar2;
          puVar10[-2] = uVar2;
          puVar10[-3] = uVar3;
          puVar10[-4] = uVar3;
          puVar10[-5] = uVar4;
          *puVar10 = 0x1000;
          uVar11 = uVar11 + 1;
          puVar9 = puVar9 + 8;
          puVar10 = puVar10 + 7;
        } while (uVar11 < (ulong)(lVar8 >> 6));
      }
      ___bzero(puVar1,0x90);
      *puVar1 = 5;
      param_5[lVar7 * 0xe + 0xf] = 0x7c;
      param_5[lVar7 * 0xe + 0x10] = 3;
      *(undefined1 *)(puVar1 + 4) = 0;
      puVar1[3] = 0x45524f43;
      param_5[lVar7 * 0xe + 0x16] = 1;
      puVar1[9] = 0;
      param_5[lVar7 * 0xe + 0x18] = 1;
      puVar1[0xb] = 1;
      qstrncpy((char *)(param_5 + lVar7 * 0xe + 0x1a),"ELF DBGDUMP",0x10);
      if (param_3 != 0) {
        param_5 = param_5 + lVar7 * 0xe + 0x32;
        do {
          if (DAT_1011bf918 == '\0') {
            lVar7 = FUN_10075a040(param_1,param_4,param_5);
            *(undefined8 *)(lVar7 + 0xcc) = *(undefined8 *)(param_4 + 0x48);
            *(undefined8 *)(lVar7 + 0xc4) = *(undefined8 *)(param_4 + 0x50);
            *(undefined8 *)(lVar7 + 0xbc) = *(undefined8 *)(param_4 + 0x58);
            *(undefined8 *)(lVar7 + 0xb4) = *(undefined8 *)(param_4 + 0x60);
            *(undefined8 *)(lVar7 + 0x9c) = *(undefined8 *)(param_4 + 0x68);
            *(undefined8 *)(lVar7 + 0x94) = *(undefined8 *)(param_4 + 0x70);
            *(undefined8 *)(lVar7 + 0x8c) = *(undefined8 *)(param_4 + 0x78);
            *(undefined8 *)(lVar7 + 0x84) = *(undefined8 *)(param_4 + 0x80);
          }
          else {
            FUN_100759eb0(param_1,param_4,param_5);
          }
          param_4 = param_4 + 0x768;
          param_5 = (undefined4 *)((long)param_5 + lVar12);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      uVar6 = FUN_1007567e0();
    }
  }
  return uVar6;
}

