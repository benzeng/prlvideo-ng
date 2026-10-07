
undefined8 FUN_100742310(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 in_RAX;
  int *piVar3;
  undefined8 local_28;
  
  local_28._2_6_ = (undefined6)((ulong)in_RAX >> 0x10);
  local_28 = CONCAT62(local_28._2_6_,(short)param_1) & 0xffffffffffff007f;
  uVar1 = local_28;
  local_28._6_2_ = SUB82(uVar1,6);
  local_28._0_6_ = (sembuf)CONCAT24(0x1000,CONCAT22(1,(ushort)local_28));
  while( true ) {
    while( true ) {
      iVar2 = _semop((int)(param_1 >> 7),(sembuf *)&local_28,1);
      piVar3 = ___error();
      if (iVar2 == -1) break;
      *piVar3 = 0;
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (*piVar3 != 4) break;
    piVar3 = ___error();
    *piVar3 = 0;
  }
  return 0xffffffff;
}

