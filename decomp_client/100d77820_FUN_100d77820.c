
void FUN_100d77820(void)

{
  int iVar1;
  
  iVar1 = _pthread_mutex_lock((pthread_mutex_t *)&DAT_10230fb78);
  if (iVar1 == 0) {
    return;
  }
  FUN_100df99c0("","MacResFile",0,"Failed to lock access to Resource Manager, err %i");
                    /* WARNING: Subroutine does not return */
  __exit(0xffffffff);
}

