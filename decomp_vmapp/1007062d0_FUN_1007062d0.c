
/* WARNING: Enum "enum_4036": Some values do not have unique names */

bool FUN_1007062d0(long param_1)

{
  int iVar1;
  acl_permset_t in_RAX;
  int *piVar2;
  bool bVar3;
  acl_permset_t local_18;
  
  local_18 = in_RAX;
  iVar1 = _acl_get_permset(*(acl_entry_t *)(param_1 + 0x20),&local_18);
  if (iVar1 == 0) {
    iVar1 = _acl_get_perm_np(local_18,ACL_EXECUTE);
    bVar3 = iVar1 != 0;
  }
  else {
    piVar2 = ___error();
    bVar3 = false;
    FUN_1008e3970("","CAuth",0,"Failed to extract permissions set from ACL entry. Error code: %d",
                  *piVar2);
  }
  return bVar3;
}

