
/* WARNING: Removing unreachable block (ram,0x0001001f163f) */
/* WARNING: Removing unreachable block (ram,0x0001001f164c) */
/* WARNING: Removing unreachable block (ram,0x0001001f1664) */
/* WARNING: Removing unreachable block (ram,0x0001001f1680) */

long FUN_1001f1547(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_48;
  long local_10;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_48 = 0;
  }
  else {
    lVar2 = FUN_1001ecf8b(param_1,param_3,"name");
    if (lVar2 == 0) {
      FUN_1001e81bc(param_1,param_3,0,0x6bb,"Notation has no name\n",0,0);
      local_48 = 0;
    }
    else {
      local_48 = FUN_1001ed83f(param_1,param_2,lVar2);
      if (local_48 == 0) {
        local_48 = 0;
      }
      else {
        *(undefined8 *)(local_48 + 0x20) = *(undefined8 *)(param_1 + 0xd0);
        FUN_1001ef36d(param_1,0,local_48,param_3,"id");
        local_10 = *(long *)(param_3 + 0x18);
        if (((local_10 != 0) && (*(long *)(local_10 + 0x48) != 0)) &&
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"annotation"),
            iVar1 != 0 &&
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_10 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0))))
        {
          uVar3 = FUN_1001f020a(param_1,param_2,local_10);
          *(undefined8 *)(local_48 + 0x10) = uVar3;
          local_10 = *(long *)(local_10 + 0x30);
        }
        if (local_10 != 0) {
          FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_10,0,"(annotation?)");
        }
      }
    }
  }
  return local_48;
}

