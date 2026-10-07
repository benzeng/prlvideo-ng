
void FUN_1003304e0(long param_1,short *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe;
  lVar1 = DAT_1011c8478;
  if ((*param_2 == 0x32) || (*param_2 == 0x35)) {
    uVar2 = FUN_1002adb60(*(undefined8 *)(param_1 + 0x10));
    if ((uVar2 & 0x7ff00) != 0) {
      FUN_10038faa0(lVar1,param_2[1]);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + 8);
      uVar5 = (ulong)((uVar2 & 0x7ff00) == 0x31000);
      uVar3 = *(ulong *)(param_2 + 4);
      *(ulong *)(param_2 + 4) = uVar3 & 0xfffffffffffffffe | uVar5;
      uVar4 = (ulong)*(byte *)(lVar1 + 0x3b) << 2;
      *(ulong *)(param_2 + 4) = uVar3 & 0xfffffffffffffffa | uVar5 | uVar4;
      uVar3 = uVar3 & 0xfffffffffffffff8 | uVar5 | uVar4 | (ulong)*(byte *)(lVar1 + 0x43) * 2;
      *(ulong *)(param_2 + 4) = uVar3;
      uVar3 = uVar3 & 0xffffffffffffff7f | (ulong)*(byte *)(lVar1 + 0x44) << 7;
      *(ulong *)(param_2 + 4) = uVar3;
      uVar5 = (ulong)*(byte *)(lVar1 + 0x45) << 10;
      *(ulong *)(param_2 + 4) = uVar3 & 0xfffffffffffffbff | uVar5;
      uVar3 = uVar3 & 0xfffffffffffffaff | uVar5 | (ulong)*(byte *)(lVar1 + 0x46) << 8;
      *(ulong *)(param_2 + 4) = uVar3;
      uVar3 = uVar3 & 0xfffffffffffffdff | (ulong)*(byte *)(lVar1 + 0x6b) << 9;
      *(ulong *)(param_2 + 4) = uVar3;
      uVar5 = ((ulong)*(uint *)(lVar1 + 0x50) & 3) << 0xb;
      *(ulong *)(param_2 + 4) = uVar3 & 0xffffffffffffe7ff | uVar5;
      uVar4 = 0x1ffe000;
      if ((ulong)*(uint *)(lVar1 + 0x58) < 0x1000) {
        uVar4 = ((ulong)*(uint *)(lVar1 + 0x58) & 0xfff) << 0xd;
      }
      uVar6 = 0xfff00000000;
      *(ulong *)(param_2 + 4) = uVar3 & 0xfffffffffe0007ff | uVar5 | uVar4;
      if (*(uint *)(lVar1 + 0x5c) < 0x1000) {
        uVar6 = (ulong)(*(uint *)(lVar1 + 0x5c) & 0xfff) << 0x20;
      }
      uVar7 = 0xfff00000000000;
      *(ulong *)(param_2 + 4) = uVar3 & 0xfffff000fe0007ff | uVar5 | uVar4 | uVar6;
      if ((ulong)*(uint *)(lVar1 + 0x60) < 0x1000) {
        uVar7 = ((ulong)*(uint *)(lVar1 + 0x60) & 0xfff) << 0x2c;
      }
      uVar7 = uVar3 & 0xff000000fe0007e7 | uVar5 | uVar4 | uVar6 | uVar7;
      *(ulong *)(param_2 + 4) = uVar7;
      uVar3 = uVar7;
      if (3 < *(uint *)(lVar1 + 0x18)) {
        *(ulong *)(param_2 + 4) = uVar7 | 8;
        uVar3 = uVar7 | 8;
        if (7 < *(uint *)(lVar1 + 0x18)) {
          uVar3 = uVar7 | 0x18;
          *(ulong *)(param_2 + 4) = uVar3;
        }
      }
      *(ulong *)(param_2 + 4) = uVar3 & 0xffffffffffffff9f;
      if ((0xfff < *(uint *)(lVar1 + 0x14)) &&
         (*(ulong *)(param_2 + 4) = uVar3 & 0xffffffffffffff9f | 0x20,
         0x1fff < *(uint *)(lVar1 + 0x14))) {
        *(ulong *)(param_2 + 4) = uVar3 | 0x60;
      }
    }
  }
  return;
}

