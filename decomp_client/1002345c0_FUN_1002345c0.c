
void FUN_1002345c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  MacUtils::setMenuBarVisible(true);
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    uVar1 = FUN_100319d40();
    uVar2 = 0;
    FUN_10035b1b0(uVar1,0x19,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_100319c50(uVar2);
    FUN_100330d50(uVar2);
    return;
  }
  return;
}

