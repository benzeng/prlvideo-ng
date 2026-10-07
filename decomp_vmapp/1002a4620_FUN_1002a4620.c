
void FUN_1002a4620(long *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    lVar2 = *(long *)(DAT_1011c3698 + 0x1938);
    bVar1 = *(byte *)(lVar2 + 0xc0d8);
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    iVar4 = (**(code **)(*param_1 + 8))(param_1);
    if (iVar4 == 0) {
      bVar5 = iVar3 != 0 | 0x40;
    }
    else {
      bVar5 = iVar3 != 0 | 0x42;
    }
    *(byte *)(lVar2 + 0xc0d8) = (bVar1 ^ bVar5) * '\x02' & 4 | bVar5;
  }
  return;
}

