
undefined8 FUN_100a9fe40(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  bool bVar4;
  undefined8 uVar3;
  
  bVar4 = false;
  uVar1 = _fcntl(param_1,1,0);
  uVar3 = CONCAT44(extraout_var,uVar1);
  if ((-1 < (int)uVar1) && (bVar4 = true, (uVar1 & 1) == 0)) {
    iVar2 = _fcntl(param_1,2,(ulong)(uVar1 | 1));
    uVar3 = CONCAT44(extraout_var_00,iVar2);
    bVar4 = -1 < iVar2;
  }
  return CONCAT71((int7)((ulong)uVar3 >> 8),bVar4);
}

