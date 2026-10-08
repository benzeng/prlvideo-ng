
void FUN_1002f9900(QObject *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long local_40;
  long local_38;
  
  FUN_1001c0220(&local_38,3,0);
  iVar1 = *(int *)(local_38 + 8);
  iVar2 = *(int *)(local_38 + 0xc);
  FUN_1001e5810(&local_38);
  FUN_1001c0220(&local_40,5,0);
  iVar3 = *(int *)(local_40 + 8);
  iVar4 = *(int *)(local_40 + 0xc);
  FUN_1001e5810(&local_40);
  if ((iVar4 == iVar3) && (iVar2 == iVar1)) {
    uVar6 = FUN_1001d50a0();
    uVar6 = FUN_1001d50d0(uVar6);
    FUN_1001e1c00(uVar6);
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
  }
  else if ((iVar2 == iVar1 || iVar4 != iVar3) && (uVar5 = *(uint *)(param_1 + 0x5c), uVar5 < 0xf)) {
    if (uVar5 == 0) {
      uVar6 = FUN_1001d50a0();
      uVar6 = FUN_1001d50d0(uVar6);
      FUN_1001e18f0(uVar6);
      uVar5 = *(uint *)(param_1 + 0x5c);
    }
    *(uint *)(param_1 + 0x5c) = uVar5 + 1;
    QTimer::singleShot(1000,param_1,"1waitConflictingApps()");
  }
  else {
    uVar6 = FUN_1001d50a0();
    uVar6 = FUN_1001d50d0(uVar6);
    FUN_1001e1c00(uVar6);
    if (iVar2 == iVar1) {
      (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
    }
    else {
      FUN_1002f9a40(param_1);
    }
  }
  return;
}

