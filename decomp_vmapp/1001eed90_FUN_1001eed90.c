
long * FUN_1001eed90(long param_1,long param_2)

{
  int iVar1;
  xmlHashTablePtr pxVar2;
  long lVar3;
  long *local_40;
  
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x28) == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    pxVar2 = _xmlHashCreateDict(10,*(xmlDictPtr *)(param_1 + 0x98));
    *(xmlHashTablePtr *)(lVar3 + 0x28) = pxVar2;
    if (*(long *)(*(long *)(param_1 + 0x30) + 0x28) == 0) {
      return (long *)0x0;
    }
  }
  local_40 = (long *)(*(code *)_xmlMalloc)(0x10);
  if (local_40 == (long *)0x0) {
    FUN_1001e8056(0,"allocating a substitution group container",0);
    local_40 = (long *)0x0;
  }
  else {
    *local_40 = 0;
    local_40[1] = 0;
    *local_40 = param_2;
    lVar3 = FUN_1001eaf05();
    local_40[1] = lVar3;
    if (local_40[1] == 0) {
      FUN_1001eed51(local_40);
      local_40 = (long *)0x0;
    }
    else {
      iVar1 = _xmlHashAddEntry2(*(xmlHashTablePtr *)(*(long *)(param_1 + 0x30) + 0x28),
                                *(xmlChar **)(param_2 + 0x10),*(xmlChar **)(param_2 + 0x60),local_40
                               );
      if (iVar1 != 0) {
        FUN_1001e8d2a(param_1,"xmlSchemaSubstGroupAdd","failed to add a new substitution container")
        ;
        FUN_1001eed51(local_40);
        local_40 = (long *)0x0;
      }
    }
  }
  return local_40;
}

