
void FUN_1002cc170(long param_1,uint param_2)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_2;
  lVar2 = *(long *)(param_1 + 0x60 + uVar4 * 8);
  if ((lVar2 != 0) && ((*(byte *)(*(long *)(param_1 + 0x40) + 0x2000) & 2) == 0)) {
    FUN_1002d60c0(lVar2,1);
  }
  if (param_2 < 2) {
    lVar2 = *(long *)(param_1 + 0x40);
    if ((*(byte *)(lVar2 + 0x2000) & 4) == 0) {
      uVar1 = *(ushort *)(lVar2 + 0x2010 + uVar4 * 2);
      uVar3 = uVar1 & 0xfe7f | 0x80;
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar1 & 0xfe7c | 0x82;
      }
      *(ushort *)(lVar2 + 0x2010 + uVar4 * 2) = uVar3;
      if ((uVar3 & 4) != 0) {
        *(ushort *)(lVar2 + 0x2010 + uVar4 * 2) = uVar3 & 0xfff3 | 8;
      }
    }
    else {
      *(undefined2 *)(lVar2 + 0x2010 + uVar4 * 2) = 0x80;
    }
  }
  return;
}

