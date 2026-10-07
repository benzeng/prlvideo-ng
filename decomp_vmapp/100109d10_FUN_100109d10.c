
void FUN_100109d10(ulong *param_1,int param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  *param_1 = param_3;
  iVar1 = _ftruncate(param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = _fchmod(param_2,0x1b6);
    if (iVar1 == 0) {
      uVar2 = _mmap(0,*param_1,3,0x401,param_2,0);
      param_1[1] = uVar2;
      if (uVar2 != 0xffffffffffffffff) {
        return;
      }
      piVar3 = ___error();
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("CVSRC","vm",1,"Map file err %i, size=%u",*piVar3,param_3 & 0xffffffff);
      }
      puVar4 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar4 = 2;
    }
    else {
      piVar3 = ___error();
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("CVSRC","vm",1,"Chmod file err %i",*piVar3);
      }
      puVar4 = (undefined4 *)___cxa_allocate_exception(4);
      *puVar4 = 0;
    }
  }
  else {
    piVar3 = ___error();
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("CVSRC","vm",1,"Truncate file err %i, size=%u",*piVar3,param_3 & 0xffffffff);
    }
    puVar4 = (undefined4 *)___cxa_allocate_exception(4);
    *puVar4 = 1;
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar4,&PTR_vtable_10110d0f0,0);
}

