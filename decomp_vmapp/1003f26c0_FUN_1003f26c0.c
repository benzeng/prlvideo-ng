
uint FUN_1003f26c0(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined1 local_350 [6];
  char acStack_34a [2];
  uint auStack_348 [198];
  undefined1 local_30 [20];
  int local_1c;
  
  local_1c = 1;
  ___bzero(local_350,0x31c);
  iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x68))
                    (*(long **)(param_1 + 8),0,0,0,local_350,0x31c,&local_1c,local_30);
  if ((iVar1 == 0 && local_1c == 0) &&
     (uVar2 = CONCAT11((char)local_350._0_2_,SUB21(local_350._0_2_,1)) - 2 >> 3, uVar2 != 0)) {
    lVar3 = 0;
    do {
      if (acStack_34a[lVar3 * 8] == -0x56) {
        uVar2 = auStack_348[lVar3 * 2];
        return uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < uVar2);
  }
  return 0;
}

