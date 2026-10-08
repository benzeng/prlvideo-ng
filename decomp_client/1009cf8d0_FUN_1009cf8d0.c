
undefined8
FUN_1009cf8d0(ulong *param_1,ulong *param_2,undefined8 *param_3,short *param_4,int param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  short *psVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  
  puVar5 = (ulong *)*param_1;
  psVar3 = (short *)*param_3;
  uVar2 = 0;
  if (puVar5 < param_2) {
    uVar2 = 0;
    puVar4 = puVar5;
    do {
      if (param_4 <= psVar3) {
LAB_1009cf9ac:
        uVar2 = 2;
        puVar5 = puVar4;
        break;
      }
      puVar5 = puVar4 + 1;
      uVar1 = *puVar4;
      if (uVar1 < 0x10000) {
        if ((uVar1 & 0xfffffffffffff800) == 0xd800) {
          if (param_5 == 0) {
            uVar2 = 3;
            puVar5 = puVar4;
            break;
          }
LAB_1009cf92e:
          *psVar3 = -3;
          psVar3 = psVar3 + 1;
        }
        else {
          *psVar3 = (short)uVar1;
          psVar3 = psVar3 + 1;
        }
      }
      else if (uVar1 < 0x110000) {
        if (param_4 <= psVar3 + 1) goto LAB_1009cf9ac;
        uVar6 = (int)uVar1 - 0x10000;
        *psVar3 = (short)(uVar6 >> 10) + -0x2800;
        psVar3[1] = (ushort)uVar6 & 0x3ff | 0xdc00;
        psVar3 = psVar3 + 2;
      }
      else {
        if (param_5 != 0) goto LAB_1009cf92e;
        uVar2 = 3;
      }
      puVar4 = puVar5;
    } while (puVar5 < param_2);
  }
  *param_1 = (ulong)puVar5;
  *param_3 = psVar3;
  return uVar2;
}

