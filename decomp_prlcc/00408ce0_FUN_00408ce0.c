
bool FUN_00408ce0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)PTR_g_DynResUseRandr12IfAvailable_0061bd18 != 0) {
    lVar2 = FUN_004089a0(param_1,*(undefined4 *)(param_1 + 0xe0));
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x38);
      FUN_004088e0(lVar2);
      return 1 < iVar1;
    }
  }
  return false;
}

