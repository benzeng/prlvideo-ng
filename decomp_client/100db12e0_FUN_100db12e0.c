
bool FUN_100db12e0(long param_1)

{
  uint in_EAX;
  int iVar1;
  int *piVar2;
  bool bVar3;
  undefined8 uStack_18;
  
  uStack_18 = (ulong)in_EAX;
  iVar1 = _acl_get_tag_type(*(acl_entry_t *)(param_1 + 0x20),(acl_tag_t *)((long)&uStack_18 + 4));
  if (iVar1 == 0) {
    bVar3 = uStack_18._4_4_ == 1;
  }
  else {
    piVar2 = ___error();
    bVar3 = false;
    FUN_100df99c0("","CAuth",0,"Failed to extract tag type info. Error code: %d",*piVar2);
  }
  return bVar3;
}

