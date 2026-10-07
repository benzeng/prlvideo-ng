
undefined8 FUN_1000c1400(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_1[9] == 0) {
    iVar1 = (**(code **)(*(long *)param_1[0x21] + 0xc0))((long *)param_1[0x21],param_1);
    if (iVar1 < 0) {
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      FUN_100408ff0(DAT_1011c3698 + 0x10b0,iVar1,&local_28);
      FUN_10002d9d0(&local_28);
      FUN_10008fdb0(DAT_1011c3698,0x4e4f,0x80000009);
      FUN_1000a7d10(DAT_1011c3698,3);
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
      FUN_10008ec80(param_1,uVar2);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

