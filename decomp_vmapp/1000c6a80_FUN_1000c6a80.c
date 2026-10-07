
undefined8 FUN_1000c6a80(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  switch(*(undefined4 *)(*(long *)(param_1 + 0x48) + 0x14)) {
  case 0:
    if (*(int *)(param_1 + 0x204) != 0x5f) {
      FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),0x5f);
      *(undefined4 *)(param_1 + 0x204) = 0x5f;
    }
    cVar1 = FUN_1000cd880(param_1);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 500) = 0x80000054;
    }
    else {
      cVar1 = FUN_1000cd700(param_1);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 500) = 0x80000054;
      }
      else {
LAB_1000c6cf9:
        FUN_10008ec80(param_1,1);
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x1810);
        uVar5 = 0;
LAB_1000c6d16:
        FUN_10008fa70(uVar3,uVar5);
      }
    }
    goto LAB_1000c6e15;
  case 1:
    cVar1 = FUN_1000cd880(param_1);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 500) = 0x80000054;
    }
    else {
      cVar1 = FUN_1000cd700(param_1);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 500) = 0x80000054;
      }
      else {
        cVar1 = FUN_1000d5740(param_1 + 0x208,*(undefined4 *)(param_1 + 0x1f0),param_1 + 0x1d8,
                              *(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x324),
                              FUN_1000d3140,param_1);
        if (cVar1 == '\0') {
          FUN_1008e3970("","vm",0,"Failed to initialize snapshot");
          *(undefined4 *)(param_1 + 500) = 0x80000054;
        }
        else {
          cVar1 = FUN_1000d5b20(param_1 + 0x208);
          if (cVar1 != '\0') goto LAB_1000c6cf9;
          *(undefined4 *)(param_1 + 500) = 0x80000054;
        }
      }
    }
    goto LAB_1000c6e15;
  case 2:
  case 3:
  case 5:
    cVar1 = FUN_1000cdac0(param_1);
    if (cVar1 == '\0') {
      FUN_1008e3970("","vm",0,"WriteHdrOptions failed");
    }
    else {
      FUN_1008e3970("","vm",0,"Preparing for save...");
      (**(code **)(**(long **)(*(long *)(param_1 + 0x2b0) + 0x1a38) + 0x20))();
      FUN_1008e3970("","vm",0,"Preparing for save...OK");
      if (((*(byte *)(param_1 + 499) & 1) != 0) &&
         (cVar1 = FUN_1000a7e30(*(undefined8 *)(param_1 + 0x2b0)), cVar1 != '\0')) {
        iVar2 = FUN_1000ce3c0(param_1);
        *(int *)(param_1 + 500) = iVar2;
        if (iVar2 < 0) goto LAB_1000c6e15;
      }
      if (*(int *)(param_1 + 0x204) != 2) {
        FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),2);
        *(undefined4 *)(param_1 + 0x204) = 2;
      }
      cVar1 = FUN_1000cd700(param_1);
      if (cVar1 != '\0') {
        FUN_10008ec80(param_1,1);
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x1810);
        uVar5 = 2;
        goto LAB_1000c6d16;
      }
    }
    uVar4 = 0x80000053;
    if ((*(uint *)(param_1 + 0x1f0) & 0x1000000) != 0) {
      uVar4 = 0x80020005;
    }
    *(undefined4 *)(param_1 + 500) = uVar4;
LAB_1000c6e15:
    iVar2 = *(int *)(param_1 + 500);
    if (iVar2 < 0) break;
    FUN_10008f440(param_1);
    goto LAB_1000c6e39;
  case 4:
    FUN_1000cecb0(param_1);
    iVar2 = *(int *)(param_1 + 500);
    break;
  case 6:
  case 7:
    FUN_1008e3970("","vm",0,"Waiting for disk...");
    FUN_1005a7950(param_1 + 0x370);
    if (*(int *)(param_1 + 500) == 0) {
      FUN_1008e3970("","vm",0,"Waiting for disk...Completed.");
      FUN_1000cefb0(param_1);
      iVar2 = *(int *)(param_1 + 500);
    }
    else {
LAB_1000c6d66:
      FUN_1008e3970("","vm",0,"Waiting for disk...Failed.");
      iVar2 = *(int *)(param_1 + 500);
    }
    break;
  default:
    goto switchD_1000c6aae_caseD_8;
  case 9:
    FUN_1008e3970("","vm",0,"Waiting for disk...");
    FUN_1005a7950(param_1 + 0x370);
    if (*(int *)(param_1 + 500) != 0) goto LAB_1000c6d66;
    FUN_1008e3970("","vm",0,"Waiting for disk...Completed.");
    FUN_1000cf210(param_1);
    iVar2 = *(int *)(param_1 + 500);
  }
  FUN_10008f910(param_1,iVar2);
  FUN_1000cee20(param_1);
LAB_1000c6e39:
  uVar3 = 1;
switchD_1000c6aae_caseD_8:
  return uVar3;
}

