
bool FUN_10018dbd0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int local_1c;
  
  bVar3 = true;
  if (*(int *)(param_1 + 100) != 3) {
    if (*(long *)(param_1 + 0x70) == 0) {
      bVar3 = false;
    }
    else {
      iVar1 = _PrlAcl_IsAllowed(*(long *)(param_1 + 0x70),param_2,&local_1c);
      if (iVar1 < 0) {
        uVar2 = FUN_100dddcf0(iVar1);
        bVar3 = false;
        FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlAcl_IsAllowed failed. RC = %.8X, (%s)",
                      iVar1,uVar2);
      }
      else {
        bVar3 = local_1c != 0;
      }
    }
  }
  return bVar3;
}

