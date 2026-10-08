
undefined4 FUN_100ac5820(long param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int local_20;
  undefined4 local_1c;
  
  iVar2 = FUN_100ac8be0(*param_2,param_2[1],0);
  if (iVar2 != 0) {
    local_1c = 0;
    cVar1 = FUN_100108f20(iVar2,&cf_chr_gid,&local_1c);
    if (cVar1 != '\0') {
      local_20 = 0;
      cVar1 = FUN_100108f20(iVar2,&cf_chr_vmid,&local_20);
      if ((cVar1 != '\0') &&
         (lVar3 = FUN_1000a9690(param_1 + 0x988), *(int *)(lVar3 + 0x38) == local_20)) {
        return local_1c;
      }
    }
  }
  return 0;
}

