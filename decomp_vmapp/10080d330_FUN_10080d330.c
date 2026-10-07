
undefined8 FUN_10080d330(long param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_3 == 5) {
    if (CONCAT11(*param_2,param_2[1]) == 2) {
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      if (param_2[4] != '\0') {
        FUN_100887ce0(0x14,0x137,0x160,"d1_srtp.c",0x19e);
        *param_4 = 0x2f;
        return 1;
      }
      if ((param_1 == 0) ||
         ((lVar8 = *(long *)(param_1 + 0x288), lVar8 == 0 &&
          ((*(long *)(param_1 + 0x170) == 0 ||
           (lVar8 = *(long *)(*(long *)(param_1 + 0x170) + 0x2d8), lVar8 == 0)))))) {
        uVar6 = 0x167;
        uVar7 = 0x1a8;
      }
      else {
        iVar3 = FUN_100885600(lVar8);
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            lVar5 = FUN_100885620(lVar8,iVar3);
            if (*(ulong *)(lVar5 + 8) == (ulong)CONCAT11(uVar1,uVar2)) {
              *(long *)(param_1 + 0x290) = lVar5;
              *param_4 = 0;
              return 0;
            }
            iVar3 = iVar3 + 1;
            iVar4 = FUN_100885600(lVar8);
          } while (iVar3 < iVar4);
        }
        uVar6 = 0x161;
        uVar7 = 0x1bc;
      }
    }
    else {
      uVar6 = 0x161;
      uVar7 = 0x196;
    }
  }
  else {
    uVar6 = 0x161;
    uVar7 = 0x18e;
  }
  FUN_100887ce0(0x14,0x137,uVar6,"d1_srtp.c",uVar7);
  *param_4 = 0x32;
  return 1;
}

