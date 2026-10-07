
undefined8 FUN_100605380(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar3 = lVar1 * uVar2;
  if (0x207d000 < uVar3) {
    if (uVar3 < 0x10400001) {
      uVar5 = (uint)(uVar2 == 0x200);
    }
    else {
      if (uVar3 < 0x200000001) {
        uVar3 = 0x1000;
      }
      else if (uVar3 < 0x400000001) {
        uVar3 = 0x2000;
      }
      else if (uVar3 < 0x800000001) {
        uVar3 = 0x4000;
      }
      else {
        uVar3 = 0x8000;
      }
      param_3 = uVar3 % uVar2;
      uVar5 = (uint)(uVar3 / uVar2);
    }
    if ((char)uVar5 != '\0') {
      *(undefined1 *)(param_1 + 0x20) = 0xeb;
      *(undefined1 *)(param_1 + 0x21) = 0x58;
      *(undefined1 *)(param_1 + 0x22) = 0x90;
      *(undefined8 *)(param_1 + 0x23) = 0x342e342020445342;
      *(undefined2 *)(param_1 + 0x33) = 0;
      *(undefined1 *)(param_1 + 0x35) = 0xf0;
      *(undefined2 *)(param_1 + 0x38) = 0x20;
      *(undefined2 *)(param_1 + 0x3a) = 0x10;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined2 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x4b) = 0;
      *(undefined1 *)(param_1 + 0x4a) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 2;
      *(undefined2 *)(param_1 + 0x50) = 1;
      *(undefined2 *)(param_1 + 0x52) = 6;
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 0x61) = 0;
      *(undefined1 *)(param_1 + 0x62) = 0x29;
      *(undefined1 *)(param_1 + 99) = 0xed;
      *(undefined2 *)(param_1 + 100) = 0x6617;
      *(undefined1 *)(param_1 + 0x66) = 0x5f;
      *(undefined8 *)(param_1 + 0x67) = 0x2020202020494645;
      *(undefined1 *)(param_1 + 0x71) = 0x20;
      *(undefined2 *)(param_1 + 0x6f) = 0x2020;
      *(undefined8 *)(param_1 + 0x72) = 0x2020203233544146;
      ___bzero(param_1 + 0x7a,0x1a4,param_3);
      *(undefined2 *)(param_1 + 0x21e) = 0xaa55;
      *(undefined2 *)(param_1 + 0x2e) = 0x20;
      *(undefined1 *)(param_1 + 0x30) = 2;
      *(undefined2 *)(param_1 + 0x31) = 0;
      *(short *)(param_1 + 0x2b) = (short)uVar2;
      *(char *)(param_1 + 0x2d) = (char)uVar5;
      iVar7 = (int)lVar1;
      *(int *)(param_1 + 0x40) = iVar7;
      uVar6 = uVar2 & 0xffff;
      uVar3 = uVar2 >> 2 & 0xffffffff;
      uVar2 = (ulong)(((iVar7 - (int)((uVar6 - 1) / uVar6)) + -0x21 + (uVar5 & 0xff)) /
                      (uVar5 & 0xff) + 1 + (int)(uVar2 >> 2));
      iVar8 = (int)(uVar2 / uVar3);
      *(int *)(param_1 + 0x44) = iVar8;
      *(undefined2 *)(param_1 + 0x36) = 0;
      *(undefined4 *)(param_1 + 0x220) = 0x41615252;
      ___bzero(param_1 + 0x224,0x1e0,uVar2 % uVar3);
      *(undefined4 *)(param_1 + 0x404) = 0x61417272;
      *(undefined4 *)(param_1 + 0x418) = 0;
      *(undefined8 *)(param_1 + 0x410) = 0;
      *(undefined4 *)(param_1 + 0x41c) = 0xaa550000;
      *(undefined4 *)(param_1 + 0x40c) = 3;
      *(uint *)(param_1 + 0x408) = iVar7 - (iVar8 * 2 + 0x21U & 0xff);
      *(undefined8 *)(param_1 + 0x420) = 0x2020202020494645;
      *(undefined1 *)(param_1 + 0x42a) = 0x20;
      *(undefined2 *)(param_1 + 0x428) = 0x2020;
      *(undefined1 *)(param_1 + 0x42b) = 0x28;
      *(undefined8 *)(param_1 + 0x42c) = 0;
      *(undefined2 *)(param_1 + 0x436) = 0x822a;
      *(undefined2 *)(param_1 + 0x438) = 0x4102;
      *(undefined2 *)(param_1 + 0x434) = 0;
      *(undefined2 *)(param_1 + 0x43a) = 0;
      *(undefined4 *)(param_1 + 0x43c) = 0;
      puVar4 = _malloc(uVar6);
      *(uint **)(param_1 + 0x440) = puVar4;
      if (puVar4 != (uint *)0x0) {
        ___bzero(puVar4,uVar6);
        *puVar4 = *(byte *)(param_1 + 0x35) | 0xfffff00;
        puVar4[1] = 0xfffffff;
        puVar4[*(uint *)(param_1 + 0x4c)] = 0xfffffff;
        return 0;
      }
      FUN_1008e3970("","vdisk",0,"init(%llu, %llu): no memory for FAT buffer",
                    *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
      return 0x80010013;
    }
  }
  FUN_1008e3970("","vdisk",0,"init(%llu, %llu): unsupported volume size",uVar2,lVar1);
  return 0x80000018;
}

