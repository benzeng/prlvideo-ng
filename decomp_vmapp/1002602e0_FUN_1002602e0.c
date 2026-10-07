
undefined8 FUN_1002602e0(long param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  
  if (param_3 != 0) {
    uVar7 = 0;
LAB_10026031a:
    do {
      lVar8 = *(long *)(param_1 + 0xa0);
      if (((*(int *)(lVar8 + 0x2c) != 0) && (*(char *)(DAT_1011c3698 + 0x1ab8) != '\0')) &&
         (*(int *)(lVar8 + 0x2c) != 0)) {
        if (*(uint *)(lVar8 + 0x1048) ==
            (*(int *)(lVar8 + 0x1054) - *(int *)(lVar8 + 0x1050) & *(uint *)(lVar8 + 0x105c))) {
          QThread::usleep(5);
          goto LAB_10026031a;
        }
        lVar8 = *(long *)(param_1 + 0xa0);
      }
      if ((*(int *)(lVar8 + 0x2c) != 0) &&
         (puVar1 = (uint *)(lVar8 + 0x1048), piVar2 = (int *)(lVar8 + 0x1054),
         piVar3 = (int *)(lVar8 + 0x1050), puVar4 = (uint *)(lVar8 + 0x105c),
         lVar8 = *(long *)(param_1 + 0xa0), *puVar1 == (*piVar2 - *piVar3 & *puVar4))) {
        *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) | 2;
        break;
      }
      FUN_1007d72c0(lVar8 + 0x1048,param_2 + uVar7,1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
  }
  FUN_10025b2f0(param_1 + 0x68,1);
  lVar8 = *(long *)(param_1 + 0xa0);
  uVar6 = *(uint *)(lVar8 + 0x18);
  do {
    puVar1 = (uint *)(lVar8 + 0x18);
    LOCK();
    uVar5 = *puVar1;
    bVar9 = uVar6 == uVar5;
    if (bVar9) {
      *puVar1 = uVar6 | 2;
      uVar5 = uVar6;
    }
    uVar6 = uVar5;
    UNLOCK();
  } while (!bVar9);
  FUN_1002effe0(*(undefined8 *)(param_1 + 0xb8));
  return 0;
}

