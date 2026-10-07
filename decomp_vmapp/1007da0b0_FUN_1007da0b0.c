
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007da0b0(void *param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  size_t sVar6;
  bool bVar7;
  
  sVar6 = 0x4fe;
  if (param_2 < 0x4ff) {
    sVar6 = (size_t)param_2;
  }
  ___bzero(&DAT_1011bffd0,0x500);
  _memcpy(&DAT_1011bffd1,param_1,sVar6);
  bVar7 = false;
  uVar5 = (int)sVar6 + 1;
  if (uVar5 == 0) {
    DAT_1011c04cf = 0;
    DAT_1011bffc8 = 1;
    _DAT_1011bffcc = 0;
    return;
  }
  bVar2 = 0;
  uVar4 = 0;
  do {
    uVar3 = (uint)uVar4;
    bVar1 = false;
    if ((bVar2 != 9) && (bVar2 != 0x20)) {
      if (bVar2 == 0x22) {
        bVar7 = !bVar7;
      }
      bVar1 = true;
    }
    if ((char)bVar2 < '|') {
      if ((bVar2 < 0x3c) && ((0x800100000002401U >> ((ulong)bVar2 & 0x3f) & 1) != 0)) {
LAB_1007da175:
        if (!bVar7) {
          (&DAT_1011bffd0)[uVar4] = 10;
        }
      }
    }
    else if (bVar2 == 0x7c) goto LAB_1007da175;
    if (!bVar7 && !bVar1) {
      _memmove(&DAT_1011bffd0 + uVar4,&DAT_1011bffd0 + (uVar3 + 1),(ulong)(~uVar3 + uVar5));
      (&DAT_1011bffd0)[uVar5] = 0;
      uVar5 = uVar5 - 1;
      uVar3 = uVar3 - 1;
    }
    uVar4 = (ulong)(uVar3 + 1);
    if (uVar5 <= uVar3 + 1) {
      DAT_1011bffc8 = 1;
      _DAT_1011bffcc = uVar5;
      DAT_1011c04cf = 0;
      return;
    }
    bVar2 = (&DAT_1011bffd0)[uVar4];
  } while( true );
}

