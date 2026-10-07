
undefined8 FUN_100533aa0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_28;
  long local_20;
  byte local_18;
  
  iVar1 = (**(code **)(**(long **)(*param_1 + 0x1950) + 0x58))
                    (*(long **)(*param_1 + 0x1950),&local_28);
  if (iVar1 < 0) {
    uVar3 = 0;
  }
  else {
    param_1[3] = local_20 << 0xc;
    param_1[4] = local_28 << 0xc;
    *(byte *)(param_1 + 2) = local_18 & 1;
    uVar2 = CONCAT71((int7)((ulong)(local_28 << 0xc) >> 8),local_18 >> 1) & 0xffffffffffffff01;
    *(char *)((long)param_1 + 0x12) = (char)uVar2;
    *(undefined1 *)((long)param_1 + 0x11) = 1;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  return uVar3;
}

