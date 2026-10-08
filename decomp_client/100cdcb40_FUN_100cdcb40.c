
undefined8
FUN_100cdcb40(undefined8 param_1,double param_2,long *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  double dVar10;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  
  cVar2 = (**(code **)(*param_3 + 0xa0))();
  if (cVar2 == '\0') {
    return 0;
  }
  iVar9 = 1;
  uVar7 = 0;
  uVar8 = 0;
  if (param_4 < 3) {
    uVar8 = uVar7;
    if (param_4 == 1) {
      uVar8 = 1;
    }
  }
  else if (param_4 < 0x19) {
    if (param_4 == 3) {
      uVar7 = 1;
    }
    else if (param_4 != 4) goto LAB_100cdcbd5;
    uVar8 = uVar7;
    iVar9 = 2;
  }
  else {
    if (param_4 == 0x19) {
      uVar7 = 1;
    }
    else if (param_4 != 0x1a) goto LAB_100cdcbd5;
    uVar8 = uVar7;
    uVar5 = _CGEventGetIntegerValueField(param_5,3);
    if (7 < uVar5) {
      return 0;
    }
    iVar9 = 1 << ((byte)uVar5 & 0x1f);
  }
LAB_100cdcbd5:
  dVar10 = (double)_CGEventGetLocation(param_5);
  uVar5 = _CGEventGetFlags(param_5);
  if ((uVar5 & 0x80000000) == 0) {
    iVar1 = *(int *)((long)param_3 + 0x3e4);
    iVar4 = (int)param_3[0x7d];
  }
  else {
    uVar3 = _CGEventGetIntegerValueField(param_5,4);
    *(undefined4 *)((long)param_3 + 0x3e4) = uVar3;
    iVar4 = _CGEventGetIntegerValueField(param_5,5);
    *(int *)(param_3 + 0x7d) = iVar4;
    iVar1 = *(int *)((long)param_3 + 0x3e4);
    dVar10 = dVar10 - (double)iVar1;
    param_2 = param_2 - (double)iVar4;
  }
  local_58 = (double)iVar1;
  local_50 = (double)iVar4;
  local_40 = 0;
  local_48 = 0;
  local_68 = dVar10;
  local_60 = param_2;
  local_38 = iVar9;
  uVar6 = (**(code **)(*param_3 + 0xd0))(param_3,&local_68,uVar8);
  return uVar6;
}

