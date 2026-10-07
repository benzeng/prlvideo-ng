
void FUN_100294120(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  cVar1 = *(char *)(param_2 + 0x39);
  if ((cVar1 == -0x7e) || (cVar1 == '\x02')) {
    lVar4 = (ulong)*(ushort *)(param_1 + 0xfee) * 0x300 + *(long *)(param_1 + 0x1000);
    lVar3 = (ulong)*(ushort *)(param_1 + 0xff0) * 0x80;
    uVar2 = *(uint *)(lVar3 + 0x46f4 + lVar4);
    uVar5 = uVar2 | 1;
    if (cVar1 != '\x02') {
      uVar5 = uVar2 & 0xfffffffe;
    }
    *(uint *)(lVar3 + 0x46f4 + lVar4) = uVar5;
  }
  *(undefined2 *)(param_2 + 0x38) = 0x40;
  return;
}

