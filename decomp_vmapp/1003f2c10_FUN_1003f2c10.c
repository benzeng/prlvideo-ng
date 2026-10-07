
ulong FUN_1003f2c10(long *param_1)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  int local_34;
  
  if (*(int *)((long)param_1 + 0x74) != 0) {
    uVar9 = FUN_1003e1610(param_1);
    return uVar9;
  }
  uVar8 = *(uint *)(param_1[0xb] + 2);
  uVar2 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8;
  pcVar1 = (char *)param_1[0xb];
  if (*pcVar1 == -0x58) {
    uVar4 = *(uint *)(pcVar1 + 6);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    if (((*(byte *)(param_1[0xb] + 1) & 8) != 0) && (*(char *)(param_1[0xb] + 10) < '\0'))
    goto LAB_1003f2e15;
  }
  else {
    uVar4 = (uint)CONCAT11((char)*(undefined2 *)(pcVar1 + 7),
                           (char)((ushort)*(undefined2 *)(pcVar1 + 7) >> 8));
  }
  if (((*(uint *)((long)param_1 + 0x6c) & 2) == 0) &&
     ((*(uint *)(param_1 + 0x19) != 0xffffffff &&
      (uVar5 = *(uint *)(param_1 + 0x19) >> 0xb, uVar5 < uVar4)))) {
    uVar4 = uVar5;
  }
  local_34 = 0;
  if (uVar4 == 0) {
    iVar6 = (**(code **)(*param_1 + 0x260))(param_1);
  }
  else {
    if ((ulong)(uVar2 | uVar8 << 0x18) <= (ulong)param_1[0x14]) {
      uVar8 = *(uint *)(param_1 + 0x19);
      uVar9 = (ulong)uVar8;
      iVar6 = FUN_1003e1900(*(uint *)((long)param_1 + 0x6c),uVar9,*(undefined1 *)param_1[0xb]);
      if (iVar6 == -1) {
LAB_1003f2e15:
                    /* WARNING: Could not recover jumptable at 0x0001003f2e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (**(code **)(*param_1 + 0x268))(param_1,0x52400,param_1[0xc]);
        return uVar9;
      }
      if ((((char)param_1[8] != '\0') && (*(uint *)((long)param_1 + 0x44) != 0)) &&
         (uVar8 + uVar2 * 0x800 <= *(uint *)((long)param_1 + 0x44))) {
        _memcpy((void *)param_1[9],(void *)((ulong)(uVar2 * 0x800) + param_1[7]),uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001003f2e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (**(code **)(*param_1 + 0x278))(param_1,uVar8,uVar9);
        return uVar9;
      }
      uVar8 = 0;
      uVar12 = 0;
      iVar10 = 0;
      do {
        (**(code **)(*(long *)param_1[6] + 0x60))((long *)param_1[6],uVar2 * 0x800 + uVar8,0);
        cVar3 = (**(code **)(*(long *)param_1[6] + 0x30))
                          ((long *)param_1[6],(ulong)uVar8 + param_1[9],0x800,&local_34);
        iVar6 = local_34;
        if (cVar3 == '\0') {
          local_34 = 0;
          uVar7 = (**(code **)(*(long *)param_1[6] + 0xb0))();
          *(undefined4 *)((long)param_1 + 0xc4) = uVar7;
        }
        iVar10 = iVar10 + iVar6;
        if (local_34 != 0x800) {
          if (local_34 == 0) {
            if (*(int *)((long)param_1 + 0x7c) == 0) {
              uVar11 = 0x31100;
            }
            else {
              uVar11 = 0x23a00;
            }
            iVar6 = (**(code **)(*param_1 + 0x268))(param_1,uVar11,param_1[0xc]);
          }
          else {
            iVar6 = (**(code **)(*param_1 + 0x268))(param_1,0x31108,param_1[0xc]);
          }
          goto LAB_1003f2cee;
        }
        uVar12 = uVar12 + 1;
        uVar8 = uVar8 + 0x800;
      } while (uVar12 < uVar4);
      goto LAB_1003f2df0;
    }
    iVar6 = (**(code **)(*param_1 + 0x268))(param_1,0x52100,param_1[0xc]);
  }
  iVar10 = 0;
  uVar9 = 0;
LAB_1003f2cee:
  if (iVar6 == -1) {
    return 0xffffffff;
  }
LAB_1003f2df0:
  uVar8 = (**(code **)(*param_1 + 0x278))(param_1,iVar10,uVar9);
  return (ulong)uVar8;
}

