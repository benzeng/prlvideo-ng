
undefined8 FUN_1000e0210(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1 + 2);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_10018f860(lVar5);
    if (iVar2 == 8) {
      lVar6 = (**(code **)(*param_1 + 0x68))(param_1);
      if (*(char *)(lVar6 + 0xc) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar3 = FUN_10018a9d0(lVar5);
        cVar1 = FUN_1000bd130(param_1,uVar3);
        if (cVar1 == '\0') {
          local_28 = 0;
          uStack_30 = 0;
          local_38 = 0x20000008f;
          uVar4 = (**(code **)(*param_1 + 0x68))(param_1);
          uVar4 = FUN_1000e85b0(uVar4,&local_38);
        }
        else {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

