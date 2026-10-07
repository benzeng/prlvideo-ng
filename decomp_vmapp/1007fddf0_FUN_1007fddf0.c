
long FUN_1007fddf0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 local_130 [160];
  undefined8 local_90;
  long local_38;
  
  local_38 = 7;
  bVar9 = true;
  if ((*(byte *)(param_1 + 0x1b0) & 8) == 0) {
    bVar9 = *(long *)(*(long *)(param_1 + 0x170) + 0xf8) != 0;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  iVar5 = FUN_10087ce60(lVar2,10);
  if (iVar5 == 0) {
    uVar7 = 7;
    uVar8 = 0x16b;
LAB_1007fde96:
    FUN_100887ce0(0x14,0x93,uVar7,"s3_both.c",uVar8);
    local_38 = 0;
  }
  else {
    if (param_2 != 0) {
      if (bVar9) {
        iVar5 = FUN_1007fe020(lVar2,&local_38,param_2);
        if (iVar5 != 0) {
          return 0;
        }
      }
      else {
        iVar6 = 0;
        iVar5 = FUN_1008b9a40(local_130,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x18),param_2,0
                             );
        if (iVar5 == 0) {
          uVar7 = 0xb;
          uVar8 = 0x176;
          goto LAB_1007fde96;
        }
        FUN_1008b7ff0(local_130);
        FUN_100888070();
        iVar5 = FUN_100885600(local_90);
        if (0 < iVar5) {
          do {
            uVar7 = FUN_100885620(local_90,iVar6);
            iVar5 = FUN_1007fe020(lVar2,&local_38,uVar7);
            if (iVar5 != 0) {
              FUN_1008b9980(local_130);
              return 0;
            }
            iVar6 = iVar6 + 1;
            iVar5 = FUN_100885600(local_90);
          } while (iVar6 < iVar5);
        }
        FUN_1008b9980(local_130);
      }
    }
    iVar5 = FUN_100885600(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0xf8));
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        uVar7 = FUN_100885620(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0xf8),iVar5);
        iVar6 = FUN_1007fe020(lVar2,&local_38,uVar7);
        if (iVar6 != 0) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_100885600(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0xf8));
      } while (iVar5 < iVar6);
    }
    lVar1 = local_38 + -7;
    lVar3 = *(long *)(lVar2 + 8);
    *(char *)(lVar3 + 4) = (char)((ulong)lVar1 >> 0x10);
    *(char *)(lVar3 + 5) = (char)((ulong)lVar1 >> 8);
    *(char *)(lVar3 + 6) = (char)lVar1;
    lVar1 = local_38 + -4;
    puVar4 = *(undefined1 **)(lVar2 + 8);
    *puVar4 = 0xb;
    puVar4[1] = (char)((ulong)lVar1 >> 0x10);
    puVar4[2] = (char)((ulong)lVar1 >> 8);
    puVar4[3] = (char)lVar1;
  }
  return local_38;
}

