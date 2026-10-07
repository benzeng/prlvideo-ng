
void FUN_1004bc9c0(long param_1,long param_2,int *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar13;
  undefined8 in_stack_fffffffffffffe70;
  undefined8 local_f0 [9];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  long local_38;
  
  uVar5 = (uint)((ulong)in_stack_fffffffffffffe70 >> 0x20);
  uVar13 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar1 = param_3[2];
  uVar6 = _CGColorSpaceCreateDeviceRGB();
  uVar7 = _CGDataProviderCreateWithData(0,param_3 + 8,*param_3 * param_3[1] * 4,0);
  uVar8 = _CGImageCreate(*param_3,param_3[1],8,0x20,*param_3 * 4,uVar6,
                         CONCAT44(uVar13,iVar1) & 0xffffffff00000004 ^ 0x2006,uVar7,0,
                         (ulong)uVar5 << 0x20,0);
  iVar1 = param_3[4];
  uVar12 = (ulong)(uint)param_3[5];
  if (((iVar1 != 0 || param_3[5] != 0) || (uVar12 = 0, param_3[6] != *param_3)) ||
     (uVar12 = 0, uVar9 = uVar8, param_3[7] != param_3[1])) {
    iVar11 = (int)uVar12;
    iVar2 = param_3[6];
    iVar3 = param_3[7];
    if (((iVar2 - iVar1 == 0) || (iVar3 == iVar11)) && (0 < DAT_1011b55f8)) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Creating empty image [CWDrawer::DrawBitmap]...");
    }
    local_88 = (double)iVar1;
    local_80 = (double)iVar11;
    local_78 = (double)(iVar2 - iVar1);
    local_70 = (double)(iVar3 - iVar11);
    uVar9 = _CGImageCreateWithImageInRect(uVar8);
    uVar12 = uVar9;
  }
  local_a8 = (double)*(int *)(param_2 + 0x58);
  local_a0 = (double)*(int *)(param_2 + 0x5c);
  local_98 = (double)(*(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x58));
  local_90 = (double)(*(int *)(param_2 + 100) - *(int *)(param_2 + 0x5c));
  cVar4 = FUN_1004bac80(*(undefined1 *)(param_1 + 0x249),*(undefined4 *)(param_2 + 8),local_f0);
  if (cVar4 != '\0') {
    *(undefined1 *)(param_2 + 0x26) = 1;
    if (param_4 != 0) {
      FUN_1004bb910(*(undefined8 *)(param_1 + 0x240));
    }
    uVar5 = param_3[2];
    uVar10 = 0;
    if ((uVar5 & 1) != 0) {
      local_68 = (double)*(byte *)(param_3 + 3);
      local_58 = (double)*(byte *)((long)param_3 + 0xd);
      local_48 = (double)*(byte *)((long)param_3 + 0xe);
      local_60 = local_68;
      local_50 = local_58;
      local_40 = local_48;
      uVar9 = _CGImageCreateWithMaskingColors(uVar9,&local_68);
      uVar5 = param_3[2];
      uVar10 = uVar9;
    }
    if ((uVar5 & 2) != 0) {
      _CGContextSetAlpha((double)((float)*(byte *)((long)param_3 + 0xf) / DAT_100b44ca0),local_f0[0]
                        );
    }
    _CGContextDrawImage(local_f0[0],uVar9);
    if (uVar12 != 0) {
      _CGImageRelease(uVar12);
    }
    if (uVar10 != 0) {
      _CGImageRelease(uVar10);
    }
    _CGImageRelease(uVar8);
    _CGDataProviderRelease(uVar7);
    _CGColorSpaceRelease(uVar6);
    FUN_1004baec0(local_f0);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

