
undefined4 * FUN_10023627d(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *local_48;
  undefined4 *local_18;
  long local_10;
  
  local_18 = (undefined4 *)0x0;
  if ((((param_2 == 0) || (*(long *)(param_2 + 0x48) == 0)) ||
      (iVar1 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"except"), iVar1 == 0)) ||
     (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(param_2 + 0x48) + 0x10),
                           PTR_s_http___relaxng_org_ns_structure__1011151b0), iVar1 == 0)) {
    FUN_10022d5a6(param_1,param_2,0x404,"Expecting an except node\n",0,0);
    local_48 = (undefined4 *)0x0;
  }
  else {
    if (*(long *)(param_2 + 0x30) != 0) {
      FUN_10022d5a6(param_1,param_2,0x405,"exceptNameClass allows only a single except node\n",0,0);
    }
    if (*(long *)(param_2 + 0x18) == 0) {
      FUN_10022d5a6(param_1,param_2,0x403,"except has no content\n",0,0);
      local_48 = (undefined4 *)0x0;
    }
    else {
      local_48 = (undefined4 *)FUN_10022dc25(param_1,param_2);
      if (local_48 == (undefined4 *)0x0) {
        local_48 = (undefined4 *)0x0;
      }
      else {
        *local_48 = 2;
        local_10 = *(long *)(param_2 + 0x18);
        while ((local_10 != 0 &&
               (puVar2 = (undefined4 *)FUN_10022dc25(param_1,local_10), puVar2 != (undefined4 *)0x0)
               )) {
          if (param_3 == 0) {
            *puVar2 = 4;
          }
          else {
            *puVar2 = 9;
          }
          lVar3 = FUN_100236458(param_1,local_10,puVar2);
          if (lVar3 != 0) {
            if (local_18 == (undefined4 *)0x0) {
              *(undefined4 **)(local_48 + 0xc) = puVar2;
              local_18 = puVar2;
            }
            else {
              *(undefined4 **)(local_18 + 0x10) = puVar2;
              local_18 = puVar2;
            }
          }
          local_10 = *(long *)(local_10 + 0x30);
        }
      }
    }
  }
  return local_48;
}

