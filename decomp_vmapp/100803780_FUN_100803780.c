
undefined8 FUN_100803780(uint *param_1,long param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((int)*param_1 < 0x303) {
    return 1;
  }
  if ((*param_1 & 0xffffff00) != 0x300) {
    return 1;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0xe8) = 0;
  if (0 < param_3) {
    lVar6 = 0;
    do {
      bVar1 = *(byte *)(param_2 + 1 + lVar6);
      if ((bVar1 - 1 < 3) &&
         (uVar2 = *(uint *)(&DAT_100b4dd5c + (ulong)bVar1 * 4),
         *(long *)(lVar3 + 0x70 + (ulong)uVar2 * 0x18) == 0)) {
        switch(*(undefined1 *)(param_2 + lVar6)) {
        case 2:
          lVar4 = FUN_100891760();
          break;
        case 3:
          lVar4 = FUN_100891770();
          break;
        case 4:
          lVar4 = FUN_100891780();
          break;
        case 5:
          lVar4 = FUN_100891790();
          break;
        case 6:
          lVar4 = FUN_1008917a0();
          break;
        default:
          goto switchD_10080384d_default;
        }
        if ((lVar4 != 0) && (*(long *)(lVar3 + 0x70 + (ulong)uVar2 * 0x18) = lVar4, bVar1 == 1)) {
          *(long *)(lVar3 + 0x70) = lVar4;
        }
      }
switchD_10080384d_default:
      lVar6 = lVar6 + 2;
    } while (lVar6 < param_3);
    if (*(long *)(lVar3 + 0xa0) != 0) goto LAB_1008038c9;
  }
  uVar5 = FUN_100891760();
  *(undefined8 *)(lVar3 + 0xa0) = uVar5;
LAB_1008038c9:
  if (*(long *)(lVar3 + 0x88) == 0) {
    uVar5 = FUN_100891760();
    *(undefined8 *)(lVar3 + 0x88) = uVar5;
    uVar5 = FUN_100891760();
    *(undefined8 *)(lVar3 + 0x70) = uVar5;
  }
  if (*(long *)(lVar3 + 0xe8) == 0) {
    uVar5 = FUN_100891760();
    *(undefined8 *)(lVar3 + 0xe8) = uVar5;
  }
  return 1;
}

