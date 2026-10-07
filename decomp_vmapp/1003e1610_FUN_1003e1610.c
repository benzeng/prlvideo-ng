
undefined8 FUN_1003e1610(long *param_1,ulong param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  long *plVar13;
  uint local_2c;
  
  pcVar1 = (char *)param_1[0xb];
  if (*pcVar1 == -0x58) {
    uVar3 = *(uint *)(pcVar1 + 6);
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    lVar8 = param_1[0xb];
    if (((*(byte *)(lVar8 + 1) & 8) == 0) || (-1 < *(char *)(lVar8 + 10))) goto LAB_1003e165f;
  }
  else {
    uVar3 = (uint)CONCAT11((char)*(undefined2 *)(pcVar1 + 7),
                           (char)((ushort)*(undefined2 *)(pcVar1 + 7) >> 8));
    lVar8 = param_1[0xb];
LAB_1003e165f:
    uVar4 = *(uint *)(lVar8 + 2);
    local_2c = 0;
    if (uVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003e16a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(*param_1 + 0x260))(param_1);
      return uVar12;
    }
    uVar9 = (ulong)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
    ;
    if ((ulong)param_1[0x14] < uVar9) {
      lVar8 = param_1[0xc];
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
      uVar12 = 0x52100;
      goto LAB_1003e171e;
    }
    uVar4 = *(uint *)((long)param_1 + 0x6c) & 2;
    if ((((uVar4 == 0) && (uVar11 = *(uint *)(param_1 + 0x19), uVar11 != 0xffffffff)) ||
        (uVar11 = uVar3 * (int)param_1[0x1a], uVar4 == 0)) || (uVar11 < 0x100001)) {
      plVar13 = param_1;
      if (((char)param_1[8] != '\0') &&
         (plVar13 = (long *)(ulong)*(uint *)((long)param_1 + 0x44), plVar13 != (long *)0x0)) {
        uVar10 = (ulong)uVar11;
        param_2 = param_1[0x1a];
        param_3 = uVar10 % param_2;
        if ((long *)(uVar10 / param_2 + uVar9) <= plVar13) {
          _memcpy((void *)param_1[9],(void *)(param_2 * uVar9 + param_1[7]),uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001003e188d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar12 = (**(code **)(*param_1 + 0x278))(param_1,uVar11,uVar11);
          return uVar12;
        }
      }
      lVar8 = param_1[0x1a];
      uVar12 = FUN_1007dc310(plVar13,param_2,param_3);
      (**(code **)(*(long *)param_1[6] + 0x60))((long *)param_1[6],uVar9 * lVar8,0);
      cVar2 = (**(code **)(*(long *)param_1[6] + 0x30))
                        ((long *)param_1[6],param_1[9],uVar11,&local_2c);
      uVar12 = FUN_1007dc320(uVar12,0);
      uVar9 = FUN_1007dc350(uVar12);
      if (3 < uVar9) {
        FUN_1008e3970("","DVDImage",0,"[DVDRom] Too long operation (0x%X, %llu) ",
                      *(undefined1 *)param_1[0xb],uVar9);
      }
      if (cVar2 == '\0') {
        uVar5 = (**(code **)(*(long *)param_1[6] + 0xb0))();
        *(undefined4 *)((long)param_1 + 0xc4) = uVar5;
        local_2c = 0;
      }
      uVar3 = uVar11;
      if (local_2c != uVar11) {
        if ((*(byte *)(param_1 + 5) & 0x20) == 0) {
          (**(code **)(*param_1 + 0x288))(param_1,uVar11);
        }
        if (*(int *)((long)param_1 + 0x7c) == 0) {
          iVar6 = (**(code **)(*param_1 + 0x268))(param_1,0x31100,param_1[0xc]);
          iVar7 = FUN_1008e38f0(&DAT_101119874);
          if (iVar7 != 0) {
            FUN_1008e3970("","DVDImage",0,
                          "[DVDRom] Error response with sense UNRECOVERED_READ_ERROR (%d)",
                          *(undefined4 *)((long)param_1 + 0xc4));
          }
        }
        else {
          iVar6 = (**(code **)(*param_1 + 0x268))(param_1,0x23a00);
        }
        uVar3 = local_2c;
        if (iVar6 == -1) {
          return 0xffffffff;
        }
      }
      uVar12 = (**(code **)(*param_1 + 0x278))(param_1,uVar3,uVar11);
      return uVar12;
    }
    FUN_1008e3970("","DVDImage",0,"DVD data transfer error. Size is too large (%u, 0x%X)",uVar11,
                  *(undefined1 *)param_1[0xb]);
  }
  lVar8 = param_1[0xc];
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x268);
  uVar12 = 0x52400;
LAB_1003e171e:
                    /* WARNING: Could not recover jumptable at 0x0001003e172d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar12 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar12,lVar8);
  return uVar12;
}

