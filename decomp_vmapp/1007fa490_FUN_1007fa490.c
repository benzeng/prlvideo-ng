
void FUN_1007fa490(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (*(long *)(lVar1 + 0x1b8) != 0) {
    FUN_10087d4e0();
    lVar1 = *(long *)(param_1 + 0x80);
  }
  if (*(long *)(lVar1 + 0x1c0) != 0) {
    FUN_1007fa500(param_1);
  }
  uVar2 = FUN_10087e660();
  uVar2 = FUN_10087d330(uVar2);
  *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x1b8) = uVar2;
  FUN_10087db60(uVar2,9,1,0);
  return;
}

