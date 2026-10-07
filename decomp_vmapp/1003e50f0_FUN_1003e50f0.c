
undefined8 FUN_1003e50f0(long *param_1)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uStack_38;
  
  uVar2 = *(uint *)(param_1[0xb] + 10);
  uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar3 = (uint)*(undefined8 *)(param_1[0xb] + 2);
  uVar4 = (uint)((ulong)*(undefined8 *)(param_1[0xb] + 2) >> 0x20);
  uStack_38 = (ulong)in_EAX;
  if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e516d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (**(code **)(*param_1 + 0x260))(param_1);
    return uVar10;
  }
  uVar9 = CONCAT44(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18,
                   uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18);
  if (uVar9 <= (ulong)param_1[0x14]) {
    if (((*(uint *)((long)param_1 + 0x6c) & 2) != 0) || (iVar11 = (int)param_1[0x19], iVar11 == -1))
    {
      iVar11 = uVar2 * (int)param_1[0x1a];
      iVar5 = FUN_1003e1900(*(uint *)((long)param_1 + 0x6c),iVar11,*(undefined1 *)param_1[0xb]);
      if (iVar5 == -1) {
        lVar8 = param_1[0xc];
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
        uVar10 = 0x52400;
        goto LAB_1003e52a7;
      }
    }
    lVar8 = param_1[0x1a];
    uVar10 = FUN_1007dc310();
    (**(code **)(*(long *)param_1[6] + 0x60))((long *)param_1[6],uVar9 * lVar8,0);
    cVar1 = (**(code **)(*(long *)param_1[6] + 0x30))
                      ((long *)param_1[6],param_1[9],iVar11,(long)&uStack_38 + 4);
    uVar10 = FUN_1007dc320(uVar10,0);
    uVar9 = FUN_1007dc350(uVar10);
    if (3 < uVar9) {
      FUN_1008e3970("","DVDImage",0,"[DVDRom] Too long operation (0x%X, %llu) ",
                    *(undefined1 *)param_1[0xb],uVar9);
    }
    if (cVar1 == '\0') {
      uVar6 = (**(code **)(*(long *)param_1[6] + 0xb0))();
      *(undefined4 *)((long)param_1 + 0xc4) = uVar6;
      uStack_38 = uStack_38 & 0xffffffff;
      iVar5 = 0;
    }
    else {
      iVar5 = uStack_38._4_4_;
    }
    iVar7 = iVar11;
    if (iVar5 != iVar11) {
      if ((*(byte *)(param_1 + 5) & 0x20) == 0) {
        (**(code **)(*param_1 + 0x288))(param_1,iVar11);
      }
      if (*(int *)((long)param_1 + 0x7c) == 0) {
        iVar5 = (**(code **)(*param_1 + 0x268))(param_1,0x31100,param_1[0xc]);
        iVar7 = FUN_1008e38f0(&DAT_101119894);
        if (iVar7 != 0) {
          FUN_1008e3970("","DVDImage",0,
                        "[DVDRom] Error response with sense UNRECOVERED_READ_ERROR (%d)",
                        *(undefined4 *)((long)param_1 + 0xc4));
        }
      }
      else {
        iVar5 = (**(code **)(*param_1 + 0x268))(param_1,0x23a00);
      }
      if (iVar5 == -1) {
        return 0xffffffff;
      }
      iVar7 = uStack_38._4_4_;
    }
    uVar10 = (**(code **)(*param_1 + 0x278))(param_1,iVar7,iVar11);
    return uVar10;
  }
  lVar8 = param_1[0xc];
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
  uVar10 = 0x52100;
LAB_1003e52a7:
                    /* WARNING: Could not recover jumptable at 0x0001003e52b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar10,lVar8);
  return uVar10;
}

