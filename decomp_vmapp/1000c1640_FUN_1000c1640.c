
undefined8 FUN_1000c1640(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_1[9] == 0) {
    lVar6 = DAT_1011c3698[0x2139];
    uVar5 = *(undefined4 *)(lVar6 + 0x360);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",3,"Executing SaRe stage %u...",uVar5);
      lVar6 = DAT_1011c3698[0x2139];
    }
    plVar1 = (long *)param_1[0x21];
    lVar2 = *plVar1;
    if ((*(byte *)(lVar6 + 499) & 5) == 0) {
      pcVar8 = *(code **)(lVar2 + 0xa0);
    }
    else {
      pcVar8 = *(code **)(lVar2 + 0x98);
    }
    uVar3 = (**(code **)(*DAT_1011c3698 + 0xa0))();
    iVar4 = (*pcVar8)(plVar1,param_1,uVar5,uVar3);
    if (iVar4 < 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_100408ff0(DAT_1011c3698 + 0x216,iVar4,&local_48);
      FUN_10002d9d0(&local_48);
      FUN_1000a7d10(DAT_1011c3698,3);
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0xf8))(param_1);
      FUN_10008ec80(param_1,uVar5);
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

