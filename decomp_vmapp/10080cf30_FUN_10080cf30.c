
undefined8 FUN_10080cf30(long param_1,undefined1 *param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  
  if ((param_1 == 0) ||
     ((lVar9 = *(long *)(param_1 + 0x288), lVar9 == 0 &&
      ((*(long *)(param_1 + 0x170) == 0 ||
       (lVar9 = *(long *)(*(long *)(param_1 + 0x170) + 0x2d8), lVar9 == 0)))))) {
    lVar9 = 0;
  }
  uVar1 = FUN_100885600(lVar9);
  if (param_2 == (undefined1 *)0x0) {
    iVar2 = uVar1 * 2 + 3;
LAB_10080d04b:
    *param_3 = iVar2;
    uVar5 = 0;
  }
  else {
    if (uVar1 == 0) {
      uVar5 = 0x162;
      uVar7 = 0xff;
    }
    else {
      iVar2 = uVar1 * 2 + 3;
      if (iVar2 <= param_4) {
        *param_2 = (char)(uVar1 >> 7);
        param_2[1] = (char)uVar1 * '\x02';
        puVar4 = param_2 + 2;
        if (0 < (int)uVar1) {
          uVar6 = 0;
          do {
            puVar8 = puVar4;
            lVar3 = FUN_100885620(lVar9,uVar6);
            *puVar8 = *(undefined1 *)(lVar3 + 9);
            param_2[3] = *(undefined1 *)(lVar3 + 8);
            uVar6 = uVar6 + 1;
            puVar4 = param_2 + 4;
            param_2 = puVar8;
          } while (uVar1 != uVar6);
        }
        *puVar4 = 0;
        goto LAB_10080d04b;
      }
      uVar5 = 0x16b;
      uVar7 = 0x105;
    }
    FUN_100887ce0(0x14,0x133,uVar5,"d1_srtp.c",uVar7);
    uVar5 = 1;
  }
  return uVar5;
}

