
void FUN_100ddbd60(undefined4 *param_1,void *param_2,uint param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  
  sVar7 = 0x4fe;
  if (param_3 < 0x4ff) {
    sVar7 = (size_t)param_3;
  }
  ___bzero(param_1 + 2,0x500);
  _memcpy((void *)((long)param_1 + 9),param_2,sVar7);
  uVar8 = 0;
  uVar6 = (int)sVar7 + 1;
  uVar9 = uVar8;
  if (uVar6 == 0) {
LAB_100ddbe54:
    *(undefined1 *)((long)param_1 + 0x507) = 0;
    *param_1 = 1;
    param_1[1] = uVar9;
    return;
  }
  bVar3 = 0;
  uVar5 = 0;
  do {
    uVar4 = (uint)uVar5;
    bVar2 = false;
    if ((bVar3 != 9) && (bVar3 != 0x20)) {
      if (bVar3 == 0x22) {
        uVar8 = (uint)(uVar8 == 0);
      }
      bVar2 = true;
    }
    puVar1 = (undefined1 *)((long)param_1 + uVar5 + 8);
    if ((char)bVar3 < '|') {
      if ((bVar3 < 0x3c) && ((0x800100000002401U >> ((ulong)bVar3 & 0x3f) & 1) != 0)) {
LAB_100ddbe15:
        if (uVar8 == 0) {
          *puVar1 = 10;
        }
      }
    }
    else if (bVar3 == 0x7c) goto LAB_100ddbe15;
    if (uVar8 == 0 && !bVar2) {
      _memmove(puVar1,(void *)((long)param_1 + (ulong)(uVar4 + 1) + 8),(ulong)(~uVar4 + uVar6));
      *(undefined1 *)((long)param_1 + (ulong)uVar6 + 8) = 0;
      uVar6 = uVar6 - 1;
      uVar4 = uVar4 - 1;
    }
    uVar5 = (ulong)(uVar4 + 1);
    uVar9 = uVar6;
    if (uVar6 <= uVar4 + 1) goto LAB_100ddbe54;
    bVar3 = *(byte *)((long)param_1 + uVar5 + 8);
  } while( true );
}

