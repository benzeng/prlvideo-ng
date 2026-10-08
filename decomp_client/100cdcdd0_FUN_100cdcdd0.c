
undefined1
FUN_100cdcdd0(undefined8 param_1,double param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  
  cVar2 = (**(code **)(*param_3 + 0xa0))();
  if (cVar2 == '\0') {
    return 0;
  }
  iVar9 = 0;
  dVar14 = (double)_CGEventGetLocation(param_5);
  iVar4 = _CGEventGetIntegerValueField(param_5,4);
  iVar5 = _CGEventGetIntegerValueField(param_5,5);
  iVar6 = _CGEventGetIntegerValueField(param_5,0xb);
  iVar7 = _CGEventGetIntegerValueField(param_5,0xc);
  iVar8 = _CGEventGetIntegerValueField(param_5,0x58);
  iVar10 = 0;
  if (iVar8 != 0) {
    iVar9 = _CGEventGetIntegerValueField(param_5,0x60);
    iVar10 = _CGEventGetIntegerValueField(param_5,0x61);
  }
  uVar11 = _CGEventGetFlags(param_5);
  if ((char)param_3[0x7c] != '\0') {
    *(undefined1 *)(param_3 + 0x7c) = 0;
    *(undefined4 *)(param_3 + 0x7d) = 0;
    *(undefined4 *)((long)param_3 + 0x3e4) = 0;
    param_3[0x91] = (long)dVar14;
    param_3[0x92] = (long)param_2;
    return 1;
  }
  if (((iVar7 == 0 && (iVar6 == 0 && (iVar5 == 0 && iVar4 == 0))) && iVar9 == 0) && iVar10 == 0) {
    if ((uVar11 & 0x80000000) == 0) {
      return 1;
    }
    iVar4 = (int)(dVar14 - (double)param_3[0x91]);
    iVar5 = (int)(param_2 - (double)param_3[0x92]);
    param_3[0x91] = (long)dVar14;
    param_3[0x92] = (long)param_2;
  }
  else {
    param_3[0x91] = (long)dVar14;
    param_3[0x92] = (long)param_2;
    if ((uVar11 & 0x80000000) == 0) {
      local_58 = (double)iVar4;
      dVar14 = dVar14 + local_58;
      local_50 = (double)iVar5;
      param_2 = param_2 + local_50;
      *(undefined8 *)((long)param_3 + 0x3e4) = 0;
      goto LAB_100cdd00c;
    }
    iVar12 = *(int *)((long)param_3 + 0x3e4) - iVar4;
    iVar8 = -iVar12;
    if (0 < iVar12) {
      iVar8 = iVar12;
    }
    iVar12 = iVar5;
    iVar1 = iVar4;
    if (iVar8 < 0x32) {
      iVar13 = (int)param_3[0x7d] - iVar5;
      iVar8 = -iVar13;
      if (0 < iVar13) {
        iVar8 = iVar13;
      }
      if (iVar8 < 0x32) {
        iVar12 = (int)param_3[0x7d];
        iVar1 = *(int *)((long)param_3 + 0x3e4);
      }
    }
    dVar14 = dVar14 - (double)iVar1;
    param_2 = param_2 - (double)iVar12;
  }
  *(int *)((long)param_3 + 0x3e4) = iVar4;
  *(int *)(param_3 + 0x7d) = iVar5;
  local_58 = (double)iVar4;
  local_50 = (double)iVar5;
LAB_100cdd00c:
  local_38 = 0;
  local_68 = dVar14;
  local_60 = param_2;
  local_48 = iVar6;
  local_44 = iVar7;
  local_40 = iVar9;
  local_3c = iVar10;
  uVar3 = (**(code **)(*param_3 + 0xd0))(param_3,&local_68,0);
  return uVar3;
}

