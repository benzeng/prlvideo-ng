
void FUN_100466100(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_2c;
  
  local_2c = *param_2;
  QMutex::lock();
  iVar1 = FUN_100466c80(param_1 + 8,&local_2c);
  QMutex::unlock();
  if (iVar1 == 1) {
    param_2[8] = 0;
    return;
  }
  param_2[8] = 0xfffffffe;
  puVar2 = (undefined4 *)___cxa_allocate_exception(4);
  *puVar2 = 0xfffffffe;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,&PTR_vtable_10111c540,0);
}

