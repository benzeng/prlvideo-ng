
undefined8 FUN_100bd9a00(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined4 local_1c;
  
  local_1c = 0x70;
  lVar3 = *(long *)(param_1 + 0x170);
  if (((lVar3 != 0) && (pcVar2 = *(code **)(lVar3 + 0x1a0), pcVar2 != (code *)0x0)) ||
     ((lVar3 = *(long *)(param_1 + 0x270), lVar3 != 0 &&
      (pcVar2 = *(code **)(lVar3 + 0x1a0), pcVar2 != (code *)0x0)))) {
    iVar1 = (*pcVar2)(param_1,&local_1c,*(undefined8 *)(lVar3 + 0x1a8));
    if (iVar1 == 1) {
      FUN_100bd2dc0(param_1,1,local_1c);
      return 1;
    }
    if (iVar1 != 3) {
      if (iVar1 != 2) {
        return 1;
      }
      FUN_100bd2dc0(param_1,2,local_1c);
      return 0xffffffff;
    }
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  return 1;
}

