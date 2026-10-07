
undefined8
FUN_1003c8640(long param_1,int param_2,int *param_3,long param_4,int param_5,int *param_6,
             int param_7,short param_8)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar7 = param_3[1];
  uVar10 = *param_3 * param_7 + uVar7 * param_2;
  uVar12 = *param_6 * param_7 + param_6[1] * param_5;
  uVar4 = (param_3[2] - *param_3) * param_7;
  uVar11 = (param_6[2] - *param_6) * param_7;
  if (uVar4 < uVar11) {
    uVar11 = uVar4;
  }
  if (param_7 == 4) {
    uVar4 = param_3[3];
    uVar3 = 1;
    if (uVar7 < uVar4) {
      do {
        if (uVar11 != 0) {
          uVar4 = 0;
          do {
            uVar2 = *(uint *)(param_1 + (ulong)uVar4 + (ulong)uVar10);
            lVar8 = (ulong)uVar4 + (ulong)uVar12;
            uVar5 = *(uint *)(param_4 + lVar8);
            if (param_8 == 4) {
              uVar5 = uVar5 | uVar2;
            }
            else if (param_8 == 3) {
              uVar5 = uVar5 & uVar2;
            }
            else {
              if (param_8 != 2) {
                return 0;
              }
              uVar5 = uVar5 ^ uVar2;
            }
            *(uint *)(param_4 + lVar8) = uVar5;
            uVar4 = uVar4 + 4;
          } while (uVar4 < uVar11);
          uVar4 = param_3[3];
        }
        uVar12 = uVar12 + param_5;
        uVar10 = uVar10 + param_2;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
  }
  else {
    uVar3 = 0;
    if (param_7 == 1) {
      uVar4 = param_3[3];
      if (uVar7 < uVar4) {
        do {
          if (uVar11 != 0) {
            uVar9 = 0;
            do {
              bVar1 = *(byte *)((ulong)uVar10 + param_1 + uVar9);
              bVar6 = *(byte *)((ulong)uVar12 + param_4 + uVar9);
              if (param_8 == 4) {
                bVar6 = bVar6 | bVar1;
              }
              else if (param_8 == 3) {
                bVar6 = bVar6 & bVar1;
              }
              else {
                if (param_8 != 2) {
                  return 0;
                }
                bVar6 = bVar6 ^ bVar1;
              }
              *(byte *)((ulong)uVar12 + param_4 + uVar9) = bVar6;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar11);
            uVar4 = param_3[3];
          }
          uVar12 = uVar12 + param_5;
          uVar10 = uVar10 + param_2;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

