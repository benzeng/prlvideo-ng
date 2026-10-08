
undefined8 FUN_10014ac30(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  uVar2 = param_1[2];
  uVar8 = 8;
  if (((uVar2 == 0) || (uVar8 = 7, -1 < (int)uVar2)) || (0xfffffff8 < uVar2)) {
    return uVar8;
  }
  uVar3 = *param_1;
  uVar7 = 0x1f;
  do {
    uVar4 = uVar7;
    if ((uVar2 >> (uVar7 & 0x1f) & 1) == 0) break;
    uVar4 = uVar7 - 1;
    bVar5 = 1 < (int)uVar7;
    uVar7 = uVar4;
  } while (bVar5);
  if (0 < (int)uVar4) {
    do {
      if ((uVar2 >> (uVar4 & 0x1f) & 1) != 0) {
        return 7;
      }
      bVar5 = 1 < (int)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar5);
  }
  uVar8 = 4;
  if (uVar3 != 0) {
    uVar7 = ~uVar2;
    uVar8 = 3;
    if (((uVar3 & uVar7) != 0) && ((uVar3 & uVar7) != uVar7)) {
      uVar4 = param_1[1];
      uVar6 = 0x1f;
      do {
        uVar1 = uVar6;
        if ((uVar2 >> (uVar6 & 0x1f) & 1) == 0) break;
        uVar1 = uVar6 - 1;
        bVar5 = 1 < (int)uVar6;
        uVar6 = uVar1;
      } while (bVar5);
      if (0 < (int)uVar1) {
        do {
          if ((uVar2 >> (uVar1 & 0x1f) & 1) != 0) {
            return 5;
          }
          bVar5 = 1 < (int)uVar1;
          uVar1 = uVar1 - 1;
        } while (bVar5);
      }
      uVar8 = 6;
      if (uVar4 != 0) {
        uVar8 = 5;
        if ((((uVar4 & uVar7) != 0) && ((uVar4 & uVar7) != uVar7)) &&
           (uVar8 = 10, (uVar2 & (uVar4 ^ uVar3)) == 0)) {
          uVar8 = 9;
          if (-1 < (int)(uVar4 - uVar3)) {
            uVar8 = 0xb;
            if (0xe < (int)(uVar4 - uVar3)) {
              uVar8 = 0;
            }
            return uVar8;
          }
        }
      }
    }
  }
  return uVar8;
}

