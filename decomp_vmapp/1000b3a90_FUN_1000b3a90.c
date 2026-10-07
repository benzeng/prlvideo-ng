
undefined8 FUN_1000b3a90(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  long *local_28;
  uint local_1c;
  
  cVar1 = FUN_1000a0730();
  if (cVar1 != '\0') {
    local_1c = 0;
    iVar2 = FUN_1000a1ce0(param_1,&local_1c);
    if ((iVar2 == 1) && ((local_1c & 4) != 0)) {
      FUN_1008e3970("","vm",0);
      plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_28 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        plVar5[2] = 0;
        *plVar5 = (long)&PTR_FUN_100bef0d0;
        local_28 = plVar5;
      }
      FUN_1000a05b0(param_1,3,&local_28);
      if (local_28 != (long *)0x0) {
        LOCK();
        plVar5 = local_28 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
      return 0;
    }
    FUN_1008e3970("","vm",0,"Graceful shutdown tool is off or required function is unavailable");
    puVar3 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar3 = 0x80036018;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,PTR_typeinfo_100ba22d8,0);
  }
  lVar4 = FUN_1000a1c30(param_1);
  if (lVar4 == 0) {
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pToolsHostAgent","VirtualPC.cpp",
                  0xfd4,"sleepGuest");
  }
  else {
    iVar2 = FUN_100026c90(lVar4);
    if (iVar2 == 3) {
      puVar3 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar3 = 0x80036017;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar3,PTR_typeinfo_100ba22d8,0);
    }
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar3 = 0x80036016;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar3,PTR_typeinfo_100ba22d8,0);
    }
  }
  puVar3 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar3 = 0x80036018;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar3,PTR_typeinfo_100ba22d8,0);
}

