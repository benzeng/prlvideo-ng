
undefined8 FUN_1003f2470(long *param_1)

{
  byte bVar1;
  int iVar2;
  ulong in_RAX;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_18;
  
  bVar1 = *(byte *)(param_1[0xb] + 4) & 3;
  if (bVar1 == 3) {
    uStack_18 = in_RAX & 0xffffffffffffff;
    iVar2 = (**(code **)(*(long *)param_1[1] + 0x58))((long *)param_1[1],(long)&uStack_18 + 7);
    if ((iVar2 == 0) && (uStack_18._7_1_ == '\x01')) {
      iVar2 = (**(code **)(*(long *)param_1[1] + 0x60))((long *)param_1[1],0);
    }
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x268))(param_1,0x45300,param_1[0xc]);
      return uVar3;
    }
    *(undefined4 *)((long)param_1 + 0x7c) = 1;
    *(undefined4 *)(param_1 + 0x15) = 0;
    lVar4 = *param_1;
    lVar5 = param_1[0xc];
    uVar3 = 0x62800;
LAB_1003f2549:
    (**(code **)(lVar4 + 0x268))(param_1,uVar3,lVar5);
    uVar3 = 0xffffffff;
  }
  else {
    if (bVar1 == 2) {
      if ((*(int *)((long)param_1 + 0xdc) == 0x802) && ((char)param_1[0x1b] != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001003f24af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*param_1 + 0x260))(param_1);
        return uVar3;
      }
      if (*(int *)((long)param_1 + 0x8c) != 0) {
        lVar4 = *param_1;
        lVar5 = param_1[0xc];
        uVar3 = 0x25302;
        uStack_18 = in_RAX;
        goto LAB_1003f2549;
      }
      iVar2 = FUN_100785e50(param_1 + 0x24);
      if (iVar2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003f25d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*param_1 + 0x268))(param_1,0x45300,param_1[0xc]);
        return uVar3;
      }
      (**(code **)(*param_1 + 0xa0))(param_1);
      *(undefined4 *)((long)param_1 + 0x7c) = 2;
      *(undefined4 *)((long)param_1 + 0x84) = 1;
      *(undefined4 *)(param_1 + 0x11) = 0;
      *(undefined4 *)(param_1 + 0x12) = 0;
      *(undefined4 *)(param_1 + 0x15) = 0;
    }
    else if ((*(byte *)(param_1[0xb] + 4) & 3) == 0) {
      *(undefined4 *)(param_1 + 0x12) = 0;
    }
    (**(code **)(*param_1 + 0x260))(param_1);
    uVar3 = 0;
  }
  return uVar3;
}

