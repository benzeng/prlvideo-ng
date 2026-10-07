
undefined8
FUN_10042d3d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  bool bVar2;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8;
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  mach_port_t local_8b0 [4];
  undefined4 local_8a0;
  undefined4 local_89c;
  undefined4 local_898;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_880 [2];
  undefined1 local_878 [1056];
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_10042d190(local_880);
  FUN_10042cf00(local_458,1);
  local_890 = *(undefined4 *)PTR__mach_task_self__100ba25d0;
  local_88c = 0;
  local_888 = 0x130000;
  FUN_10042cfb0(local_458,&local_890);
  local_89c = 0;
  local_898 = 0x130000;
  local_8a0 = param_5;
  FUN_10042cfb0(local_458,&local_8a0);
  local_8b0[0] = _mach_thread_self();
  local_8b0[1] = 0;
  local_8b0[2] = 0x130000;
  FUN_10042cfb0(local_458,local_8b0);
  local_8c0 = local_880[0];
  local_8bc = 0;
  local_8b8 = 0x130000;
  FUN_10042cfb0(local_458,&local_8c0);
  local_8d0 = param_2;
  local_8cc = param_3;
  local_8c8 = param_4;
  FUN_10042ce80(local_458,&local_8d0,0xc);
  iVar1 = FUN_10042d370(param_1,local_458,2000);
  if (iVar1 == 0) {
    ___bzero(local_878,0x41c);
    iVar1 = FUN_10042d240(local_880,local_878,5000);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  FUN_10042d220(local_880);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),bVar2);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

