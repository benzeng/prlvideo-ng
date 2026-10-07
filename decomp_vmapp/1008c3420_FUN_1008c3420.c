
ulong FUN_1008c3420(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 local_38;
  
  lVar4 = FUN_1008c2b60(param_2);
  if (lVar4 == 0) {
    param_3 = param_3 & 0xf0000;
    if (param_3 < 0x20000) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_3 == 0x10000) {
        pcVar8 = "%*s<Not Supported>";
LAB_1008c3582:
        FUN_100880ec0(param_1,pcVar8,param_4,"");
        return 1;
      }
    }
    else {
      if (param_3 == 0x20000) {
        uVar9 = FUN_1008af540(param_1,*(undefined8 *)(*(int **)(param_2 + 0x10) + 2),
                              (long)**(int **)(param_2 + 0x10),param_4,0xffffffff);
        return uVar9;
      }
      if (param_3 == 0x30000) {
        uVar9 = FUN_100882ec0(param_1,*(undefined8 *)(*(undefined4 **)(param_2 + 0x10) + 2),
                              **(undefined4 **)(param_2 + 0x10),param_4);
        return uVar9;
      }
    }
    return 1;
  }
  piVar1 = *(int **)(param_2 + 0x10);
  local_38 = *(undefined8 *)(piVar1 + 2);
  if (*(long *)(lVar4 + 8) == 0) {
    lVar5 = (**(code **)(lVar4 + 0x20))(0,&local_38,(long)*piVar1);
  }
  else {
    lVar5 = FUN_1008a5f10(0,&local_38,(long)*piVar1);
  }
  if (lVar5 == 0) {
    param_3 = param_3 & 0xf0000;
    if (param_3 < 0x20000) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_3 == 0x10000) {
        pcVar8 = "%*s<Parse Error>";
        goto LAB_1008c3582;
      }
    }
    else {
      if (param_3 == 0x20000) {
        uVar2 = FUN_1008af540(param_1,*(undefined8 *)(*(int **)(param_2 + 0x10) + 2),
                              (long)**(int **)(param_2 + 0x10),param_4,0xffffffff);
        return (ulong)uVar2;
      }
      if (param_3 == 0x30000) {
        uVar2 = FUN_100882ec0(param_1,*(undefined8 *)(*(undefined4 **)(param_2 + 0x10) + 2),
                              **(undefined4 **)(param_2 + 0x10),param_4);
        return (ulong)uVar2;
      }
    }
    return 1;
  }
  if (*(code **)(lVar4 + 0x30) == (code *)0x0) {
    if (*(code **)(lVar4 + 0x40) == (code *)0x0) {
      lVar7 = 0;
      uVar9 = 0;
      if (*(code **)(lVar4 + 0x50) != (code *)0x0) {
        iVar3 = (**(code **)(lVar4 + 0x50))(lVar4,lVar5,param_1,param_4);
        uVar9 = (ulong)(iVar3 != 0);
        lVar7 = 0;
      }
    }
    else {
      lVar6 = (**(code **)(lVar4 + 0x40))(lVar4,lVar5,0);
      uVar9 = 0;
      lVar7 = 0;
      if (lVar6 != 0) {
        FUN_1008c3270(param_1,lVar6,param_4,*(uint *)(lVar4 + 4) & 4);
        uVar9 = 1;
        lVar7 = lVar6;
      }
    }
  }
  else {
    lVar6 = (**(code **)(lVar4 + 0x30))(lVar4,lVar5);
    uVar9 = 0;
    lVar7 = 0;
    if (lVar6 != 0) {
      FUN_100880ec0(param_1,"%*s%s",param_4,"",lVar6);
      FUN_100885590(0,FUN_1008c3b40);
      FUN_10081e1a0(lVar6);
      uVar9 = 1;
      goto LAB_1008c36e7;
    }
  }
  FUN_100885590(lVar7,FUN_1008c3b40);
LAB_1008c36e7:
  if (*(long *)(lVar4 + 8) == 0) {
    (**(code **)(lVar4 + 0x18))(lVar5);
  }
  else {
    FUN_1008a4c40();
  }
  return uVar9;
}

