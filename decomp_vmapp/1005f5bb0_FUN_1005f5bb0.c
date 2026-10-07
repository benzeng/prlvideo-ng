
undefined1 FUN_1005f5bb0(long *param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 uVar10;
  
  if ((param_2 != -0x7ffdefe9) && (param_2 != 0)) {
    *(int *)(param_3 + 0x30) = param_2;
    FUN_1008e3970("CountReclaimed","vdisk",0,"Callback invoked with with error = 0x%X",param_2);
    if (*(code **)(param_3 + 0x10) == (code *)0x0) {
      return 0;
    }
    (**(code **)(param_3 + 0x10))(0x3ed,1000,*(undefined8 *)(param_3 + 0x18));
    return 0;
  }
  if (2 < DAT_1011b55f8) {
    uVar1 = (**(code **)(*param_1 + 8))(param_1);
    uVar2 = (**(code **)*param_1)(param_1);
    FUN_1008e3970("CountReclaimed","vdisk",3,"Invoked for chunk with start idx %u, entry count = %u"
                  ,uVar1,uVar2);
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1);
  iVar4 = (**(code **)*param_1)(param_1);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar9 = 0;
    uVar5 = 0;
    do {
      iVar4 = FUN_1006a91d0(param_3 + 0x58,uVar3 + uVar9 & 0xffffffff);
      if ((iVar4 != 0) &&
         (iVar4 = (**(code **)(*param_1 + 0x10))(param_1,uVar9 & 0xffffffff), iVar4 != 0)) {
        if (2 < DAT_1011b55f8) {
          FUN_1008e3970("CountReclaimed","vdisk",3,"bat[%llu] = %u",uVar3 + uVar9,iVar4);
        }
        uVar5 = uVar5 + 1;
      }
      uVar6 = (**(code **)*param_1)(param_1);
      uVar9 = uVar9 + 1;
    } while ((uint)uVar9 < uVar6);
  }
  lVar7 = (ulong)uVar5 + *(long *)(param_3 + 0x40);
  *(long *)(param_3 + 0x40) = lVar7;
  if (param_2 == -0x7ffdefe9) {
    if (*(long *)(param_3 + 0x10) != 0) {
      uVar5 = (**(code **)*param_1)(param_1);
      lVar7 = (ulong)uVar5 + *(long *)(param_3 + 0x50);
      *(long *)(param_3 + 0x50) = lVar7;
      iVar4 = (**(code **)(param_3 + 0x10))
                        ((ulong)(lVar7 * 1000) / *(ulong *)(param_3 + 0x48) & 0xffffffff,1000,
                         *(undefined8 *)(param_3 + 0x18));
      if (iVar4 == 0) {
        if (DAT_1011b55f8 < 3) {
          return 0;
        }
        pcVar8 = "Terminated by caller";
        uVar10 = 0;
        goto LAB_1005f5e4c;
      }
    }
    uVar10 = 1;
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("CountReclaimed","vdisk",3,"Scanning continued");
      uVar10 = 1;
    }
  }
  else {
    *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + (*(long *)(param_3 + 0x38) - lVar7);
    if (*(code **)(param_3 + 0x10) != (code *)0x0) {
      (**(code **)(param_3 + 0x10))(0x3ed,1000,*(undefined8 *)(param_3 + 0x18));
    }
    uVar10 = 1;
    if (DAT_1011b55f8 < 3) {
      return 1;
    }
    pcVar8 = "Scanning done";
LAB_1005f5e4c:
    FUN_1008e3970("CountReclaimed","vdisk",3,pcVar8);
  }
  return uVar10;
}

