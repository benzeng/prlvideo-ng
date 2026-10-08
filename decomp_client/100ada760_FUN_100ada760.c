
undefined8 FUN_100ada760(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int extraout_var;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0;
    dVar5 = *(double *)(*(long *)(param_1 + 0x30) + 0xac0);
    iVar1 = *param_2;
    iVar2 = FUN_100ad4770();
    dVar4 = (double)(iVar1 - iVar2) * dVar5;
    if (0.0 <= dVar4) {
      iVar1 = (int)(dVar4 + DAT_100e110f0);
    }
    else {
      iVar1 = (int)((dVar4 - (double)(int)(DAT_100e110e0 + dVar4)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar4);
    }
    iVar2 = param_2[1];
    FUN_100ad4770(*(undefined8 *)(param_1 + 0x30));
    dVar5 = dVar5 * (double)(iVar2 - extraout_var);
    if (0.0 <= dVar5) {
      iVar2 = (int)(dVar5 + DAT_100e110f0);
    }
    else {
      iVar2 = (int)((dVar5 - (double)(int)(DAT_100e110e0 + dVar5)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar5);
    }
    local_60 = (double)iVar1;
    local_58 = (double)iVar2;
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_30 = 1;
    (**(code **)(**(long **)(param_1 + 0x18) + 0xd0))(*(long **)(param_1 + 0x18),&local_60,0);
    uVar3 = 1;
  }
  return uVar3;
}

