
void FUN_1004911b0(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_100458c00();
  if (lVar3 != 0) {
    uVar4 = FUN_10044e660(param_1);
    lVar3 = FUN_100458c00(param_1);
    uVar2 = FUN_1003bfc70(uVar4,*(undefined4 *)(lVar3 + 0x68));
    plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x18);
    (**(code **)(*plVar1 + 0x68))(plVar1,uVar2);
    plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x10);
    (**(code **)(*plVar1 + 0x68))(plVar1,uVar2);
  }
  FUN_100459290(param_1);
  return;
}

